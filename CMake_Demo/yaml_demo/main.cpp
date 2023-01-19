/**
 * @file yaml-cpp.cpp
 * @author fwt (fangwentaowhu@outlook.com)
 * @brief 
 * @version 0.1
 * @date 2021-11-20
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "yaml-cpp/yaml.h"
#include <iostream>
#include <string>
#include <vector>

const std::string COCO_CONFIG="../config/coco.yaml";

int main(int argc, char const *argv[])
{
    double camera_rate_hz;
    int max_points;
    std::string data_name;
    std::vector<int> image_size;
    std::vector<double> extri_R;

    YAML::Node coco_config = YAML::LoadFile(argv[1]);

    auto class_num = coco_config["nc"].as<int>();

    std::cout << "coco data path: " << coco_config["path"].as<std::string>() << std::endl;
    std::cout << "coco class num: " << class_num << std::endl;

    std::cout << "main execute finished !!!" << std::endl;

    return 0;
}
