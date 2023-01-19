#include <iostream>
#include <fstream>
#include <numeric>
#include <vector>
#include <string>

#include "json.hpp"
using Json = nlohmann::json;

const std::string m_config_path = "yolo.json";
typedef struct ModelConfig_T
{
	std::string                             model_type;
	std::string                             model_cfg_file;
	// 解密模型。默认为空，表示加载普通模型；如果非空则用该key解密模型并加载部署
	std::string                             model_key;
	std::string                             model_filename;
	std::string                             model_params_filename;
	bool                                    model_use_gpu;
	int                                     model_gpu_id;
	bool                                    model_use_trt;
	bool                                    model_is_input_shape;

	std::map<std::string, std::vector<int>> model_input_shape_max;
	std::map<std::string, std::vector<int>> model_input_shape_min;
	std::map<std::string, std::vector<int>> model_input_shape_optim;
	std::string model_input_shape_path;
}ModelConfig;

typedef struct TaskConfig_T
{
	std::vector<int>                        filter_ROI;
	std::vector<std::string>                filter_ai_type;
	std::vector<int>                        filter_model_id;
	std::vector<std::vector<std::string>>   object_select_type;
	double                                  conf_thr;            // 本次操作全局有效
}TaskConfig;


int main() {
    ModelConfig m_model_config;
	TaskConfig  m_task_config;

    Json config_json;
    std::ifstream(m_config_path) >> config_json;

    m_model_config.model_type = config_json.at("model_config").at("model_type").get<std::string>();
    std::cout << m_model_config.model_type << std::endl;
    m_model_config.model_cfg_file = config_json.at("model_config").at("model_cfg_file").get<std::string>();
	m_model_config.model_key = config_json.at("model_config").at("model_key").get<std::string>();
	m_model_config.model_filename = config_json.at("model_config").at("model_filename").get<std::string>();
	m_model_config.model_params_filename = config_json.at("model_config").at("model_params_filename").get<std::string>();
	m_model_config.model_use_gpu = config_json.at("model_config").at("model_use_gpu").get<bool>();
	m_model_config.model_gpu_id = config_json.at("model_config").at("model_gpu_id").get<int>();
	m_model_config.model_use_trt = config_json.at("model_config").at("model_use_trt").get<bool>();
	m_model_config.model_is_input_shape = config_json.at("model_config").at("is_input_shape").get<bool>();
	
	//std::cout << config_json.at("model_config").at("model_input_shape_max") << std::endl;

	for (auto item : config_json.at("model_config").at("model_input_shape_max").items())
	{
		std::vector<int> tmp;
		for (int i = 0; i < item.value().size(); i++)
		{
			tmp.push_back((int)item.value()[i]);
		}
		m_model_config.model_input_shape_max.insert(std::pair<std::string, std::vector<int>>(item.key(), item.value()));
		//m_model_input_shape_max[item.key()] = { item.value()[0],item.value()[0],item.value()[0],item.value()[0]};
	}

	for (auto item : config_json.at("model_config").at("model_input_shape_min").items())
	{
		std::vector<int> tmp;
		for (int i = 0; i < item.value().size(); i++)
		{
			tmp.push_back((int)item.value()[i]);
		}
		m_model_config.model_input_shape_min.insert(std::pair<std::string, std::vector<int>>(item.key(), item.value()));
		//m_model_input_shape_max[item.key()] = { item.value()[0],item.value()[0],item.value()[0],item.value()[0]};
	}

	for (auto item : config_json.at("model_config").at("model_input_shape_optim").items())
	{
		std::vector<int> tmp;
		for (int i = 0; i < item.value().size(); i++)
		{
			tmp.push_back((int)item.value()[i]);
		}
		m_model_config.model_input_shape_optim.insert(std::pair<std::string, std::vector<int>>(item.key(), item.value()));
		//m_model_input_shape_max[item.key()] = { item.value()[0],item.value()[0],item.value()[0],item.value()[0]};
	}

	m_model_config.model_input_shape_path = config_json.at("model_config").at("input_shape_path").get<std::string>();

    m_task_config.filter_ROI = config_json.at("task_config").at("filter_ROI").get<std::vector<int>>();
	m_task_config.filter_ai_type = config_json.at("task_config").at("filter_ai_type").get<std::vector<std::string>>();
	m_task_config.filter_model_id = config_json.at("task_config").at("filter_model_id").get<std::vector<int>>();
	m_task_config.object_select_type = config_json.at("task_config").at("object_select_type").get<std::vector<std::vector<std::string>>>();
	m_task_config.conf_thr = config_json.at("task_config").at("conf_thr").get<double>();
    std::cout << "json file read succeeded !!!" << std::endl;
    return 0;
}