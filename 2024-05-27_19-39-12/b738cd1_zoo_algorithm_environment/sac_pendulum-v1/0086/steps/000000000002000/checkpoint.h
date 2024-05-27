// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
#include <rl_tools/nn/parameters/parameters.h>
// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
#include <rl_tools/nn/parameters/parameters.h>
#include <rl_tools/nn/layers/dense/layer.h>
#include <rl_tools/nn_models/sequential/model.h>
// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
#include <rl_tools/nn/parameters/parameters.h>
// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
#include <rl_tools/nn/parameters/parameters.h>
#include <rl_tools/nn/layers/dense/layer.h>
#include <rl_tools/nn_models/sequential/model.h>
// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
#include <rl_tools/nn/parameters/parameters.h>
// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
#include <rl_tools/nn/parameters/parameters.h>
#include <rl_tools/nn/layers/dense/layer.h>
#include <rl_tools/nn_models/sequential/model.h>
namespace rl_tools::checkpoint::actor {
    namespace layer_0 {
        namespace weights {
            namespace parameters_memory {
                static_assert(sizeof(unsigned char) == 1);
                alignas(float) const unsigned char memory[] = {21, 212, 70, 61, 175, 37, 236, 62, 163, 77, 243, 62, 130, 23, 244, 190, 140, 132, 38, 191, 0, 36, 216, 190, 43, 4, 32, 189, 153, 77, 185, 189, 107, 167, 198, 190, 85, 120, 29, 191, 63, 123, 19, 63, 193, 45, 10, 191, 141, 67, 52, 190, 97, 140, 15, 191, 239, 233, 176, 62, 230, 213, 50, 61, 216, 32, 179, 190, 122, 147, 239, 62, 45, 122, 172, 61, 144, 21, 82, 191, 47, 201, 228, 62, 37, 230, 58, 191, 222, 195, 112, 190, 41, 162, 169, 189, 171, 84, 192, 190, 95, 195, 45, 191, 81, 59, 191, 61, 115, 114, 61, 62, 0, 85, 207, 190, 51, 255, 175, 62, 215, 133, 117, 189, 185, 132, 46, 63, 72, 64, 118, 189, 253, 77, 191, 190, 32, 3, 57, 63, 140, 16, 230, 62, 232, 176, 252, 62, 118, 30, 220, 62, 242, 87, 169, 61, 139, 77, 237, 62, 37, 55, 221, 190, 16, 41, 175, 189, 51, 54, 177, 190, 194, 86, 243, 190, 190, 196, 132, 190, 242, 172, 253, 62, 62, 222, 51, 63, 56, 68, 133, 62, 249, 219, 16, 63, 226, 170, 172, 190, 132, 39, 195, 62, 26, 70, 55, 190, 8, 218, 176, 62, 216, 222, 240, 189, 220, 194, 121, 61, 160, 1, 202, 190, 171, 208, 89, 190, 14, 5, 203, 189, 106, 203, 37, 190, 16, 133, 1, 191, 8, 54, 219, 62, 70, 120, 110, 190, 144, 219, 227, 62, 139, 160, 212, 62, 239, 195, 71, 191, 70, 69, 11, 191, 136, 134, 105, 190, 219, 106, 219, 190, 98, 230, 61, 62, 233, 180, 221, 60, 143, 4, 225, 190, 199, 190, 215, 61, 6, 243, 135, 190, 218, 69, 4, 61, 191, 53, 189, 190, 112, 178, 176, 62, 120, 196, 76, 63, 41, 206, 160, 61, 192, 201, 167, 62, 228, 229, 12, 63, 133, 153, 187, 62, 98, 250, 50, 62, 64, 220, 20, 191, 102, 183, 234, 190, 183, 26, 224, 61, 169, 49, 70, 190, 242, 248, 159, 190, 32, 103, 177, 61, 69, 26, 204, 189, 166, 214, 167, 190, 255, 251, 25, 63, 103, 167, 190, 190, 245, 231, 0, 191, 162, 20, 31, 63, 13, 77, 90, 62, 11, 223, 165, 62};
                using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 32, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
                using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
                const CONTAINER_TYPE container = {(float*)memory}; 
            }
            using PARAMETER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::Plain::spec<parameters_memory::CONTAINER_TYPE, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::groups::Input, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::categories::Weights>;
            const RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::Plain::instance<PARAMETER_SPEC> parameters = {parameters_memory::container};
        }
        namespace biases {
            namespace parameters_memory {
                static_assert(sizeof(unsigned char) == 1);
                alignas(float) const unsigned char memory[] = {248, 66, 34, 191, 86, 45, 93, 190, 254, 22, 24, 191, 253, 36, 103, 190, 15, 247, 165, 61, 153, 5, 42, 189, 144, 30, 126, 62, 142, 96, 146, 190, 206, 212, 170, 62, 41, 19, 10, 191, 43, 58, 232, 61, 9, 70, 213, 62, 218, 136, 208, 62, 243, 197, 174, 62, 233, 139, 138, 190, 89, 223, 155, 62, 160, 55, 163, 62, 8, 106, 242, 60, 90, 50, 1, 191, 255, 176, 209, 62, 9, 228, 24, 191, 135, 60, 67, 60, 176, 93, 10, 63, 236, 250, 92, 62, 59, 251, 186, 62, 104, 189, 204, 62, 111, 196, 239, 189, 177, 147, 78, 190, 223, 233, 198, 190, 37, 124, 175, 62, 31, 251, 228, 62, 240, 156, 168, 190};
                using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 32, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
                using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
                const CONTAINER_TYPE container = {(float*)memory}; 
            }
            using PARAMETER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::Plain::spec<parameters_memory::CONTAINER_TYPE, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::groups::Input, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::categories::Biases>;
            const RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::Plain::instance<PARAMETER_SPEC> parameters = {parameters_memory::container};
        }
    }
    namespace layer_0 {
        using SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layers::dense::Specification<float, unsigned long, 3, 32, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::activation_functions::ActivationFunction::RELU, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::groups::Input, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamicTag, true, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>; 
        template <typename CAPABILITY>
        using TEMPLATE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layers::dense::Layer<CAPABILITY, SPEC>;
        using CAPABILITY = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layer_capability::Forward;
        using TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layers::dense::Layer<CAPABILITY, SPEC>;
        const TYPE layer = {weights::parameters, biases::parameters};
    }
    namespace layer_1 {
        namespace weights {
            namespace parameters_memory {
                static_assert(sizeof(unsigned char) == 1);
                alignas(float) const unsigned char memory[] = {77, 14, 116, 61, 175, 13, 159, 189, 196, 88, 173, 189, 52, 67, 127, 188, 249, 252, 255, 189, 100, 199, 23, 59, 24, 201, 89, 61, 19, 115, 54, 189, 195, 110, 175, 61, 94, 33, 79, 190, 52, 5, 118, 62, 87, 139, 54, 188, 156, 175, 212, 60, 3, 55, 130, 189, 202, 218, 38, 62, 12, 146, 236, 61, 81, 23, 250, 60, 240, 236, 151, 61, 52, 178, 128, 190, 92, 126, 82, 62, 20, 14, 214, 188, 159, 15, 135, 190, 125, 251, 82, 61, 50, 181, 161, 61, 139, 184, 243, 60, 39, 157, 165, 62, 100, 133, 242, 61, 134, 212, 160, 190, 120, 203, 11, 190, 43, 168, 205, 189, 185, 249, 3, 62, 78, 121, 22, 61, 37, 19, 6, 62, 162, 88, 132, 61, 236, 166, 53, 188, 80, 147, 157, 188, 222, 231, 14, 190, 223, 199, 80, 189, 254, 212, 198, 188, 16, 208, 142, 61, 94, 208, 250, 188, 85, 104, 34, 190, 48, 26, 46, 190, 220, 187, 12, 190, 106, 223, 229, 189, 44, 255, 205, 61, 232, 58, 47, 190, 224, 73, 184, 61, 100, 99, 4, 190, 199, 206, 33, 61, 72, 92, 4, 189, 155, 14, 89, 189, 97, 106, 48, 189, 22, 221, 32, 190, 139, 229, 139, 61, 46, 21, 164, 61, 184, 238, 7, 190, 55, 110, 25, 190, 91, 238, 188, 61, 88, 239, 14, 62, 129, 244, 52, 62, 190, 113, 46, 190, 117, 107, 192, 189, 169, 187, 6, 190, 46, 73, 107, 190, 119, 161, 47, 188, 137, 233, 133, 190, 105, 145, 239, 190, 218, 26, 15, 62, 199, 221, 22, 62, 52, 202, 172, 188, 111, 80, 23, 62, 240, 12, 156, 61, 121, 244, 103, 190, 167, 55, 161, 190, 30, 38, 76, 62, 48, 77, 149, 61, 163, 211, 168, 62, 0, 76, 105, 190, 143, 78, 100, 190, 48, 50, 147, 188, 229, 240, 10, 190, 127, 26, 0, 189, 251, 161, 79, 60, 135, 190, 75, 190, 73, 3, 48, 62, 63, 14, 87, 62, 231, 36, 81, 62, 181, 105, 137, 60, 201, 179, 144, 190, 239, 205, 171, 189, 71, 215, 33, 189, 104, 58, 131, 59, 192, 125, 233, 189, 50, 234, 192, 59, 17, 227, 161, 190, 253, 253, 108, 189, 119, 244, 178, 61, 69, 151, 115, 189, 231, 8, 198, 188, 45, 46, 140, 189, 74, 154, 21, 190, 87, 186, 246, 189, 173, 8, 26, 190, 87, 198, 180, 61, 177, 16, 213, 61, 240, 197, 86, 188, 124, 206, 182, 61, 197, 39, 134, 61, 255, 160, 175, 189, 142, 207, 125, 61, 210, 121, 248, 189, 66, 97, 178, 61, 245, 179, 13, 189, 63, 50, 25, 62, 13, 139, 69, 189, 4, 157, 242, 61, 100, 95, 49, 61, 77, 183, 37, 190, 32, 122, 26, 190, 191, 30, 158, 189, 64, 132, 166, 189, 41, 75, 177, 61, 146, 220, 100, 189, 40, 32, 50, 189, 199, 200, 210, 189, 15, 136, 1, 62, 22, 115, 180, 61, 102, 7, 29, 190, 214, 189, 210, 189, 214, 238, 30, 190, 69, 57, 95, 61, 15, 52, 186, 61, 69, 224, 67, 61, 147, 120, 104, 61, 17, 41, 93, 190, 111, 49, 218, 61, 132, 50, 204, 61, 57, 16, 4, 62, 36, 224, 45, 62, 22, 111, 21, 62, 129, 201, 98, 189, 8, 19, 81, 61, 156, 31, 179, 61, 55, 122, 137, 189, 162, 211, 34, 62, 17, 235, 40, 190, 232, 201, 40, 62, 217, 99, 23, 62, 194, 60, 188, 60, 164, 52, 22, 61, 225, 34, 2, 190, 210, 54, 159, 188, 70, 91, 156, 62, 222, 222, 77, 61, 225, 245, 218, 189, 57, 187, 156, 189, 103, 163, 220, 189, 74, 29, 215, 61, 253, 249, 12, 62, 85, 17, 128, 189, 46, 246, 247, 61, 164, 229, 20, 190, 238, 252, 218, 189, 220, 114, 152, 60, 131, 136, 0, 190, 166, 202, 211, 60, 249, 193, 6, 59, 214, 64, 182, 189, 15, 198, 13, 190, 201, 191, 239, 61, 208, 52, 57, 190, 186, 37, 104, 61, 236, 105, 147, 61, 203, 153, 11, 62, 103, 193, 3, 190, 68, 162, 129, 189, 95, 20, 176, 61, 144, 65, 224, 189, 199, 68, 18, 190, 92, 10, 131, 61, 102, 119, 0, 190, 75, 168, 232, 188, 253, 151, 29, 190, 19, 51, 244, 189, 64, 175, 188, 61, 207, 50, 166, 61, 45, 244, 162, 188, 254, 24, 150, 189, 127, 203, 175, 188, 14, 247, 151, 61, 112, 41, 45, 62, 28, 148, 241, 189, 3, 215, 37, 190, 91, 90, 38, 188, 96, 101, 31, 188, 55, 84, 212, 189, 214, 254, 222, 189, 172, 130, 2, 62, 192, 203, 21, 189, 149, 43, 162, 61, 178, 231, 145, 189, 102, 216, 206, 61, 174, 235, 242, 189, 45, 24, 32, 190, 3, 160, 0, 189, 156, 199, 232, 61, 237, 83, 140, 61, 149, 148, 61, 189, 163, 227, 139, 61, 74, 54, 222, 189, 40, 20, 60, 190, 115, 4, 213, 61, 128, 78, 21, 62, 130, 61, 39, 190, 209, 223, 44, 62, 177, 84, 116, 188, 190, 87, 19, 62, 100, 12, 138, 61, 119, 137, 201, 61, 184, 71, 27, 190, 214, 56, 183, 189, 66, 234, 213, 61, 241, 100, 6, 190, 44, 76, 14, 190, 142, 39, 212, 189, 195, 193, 201, 59, 38, 213, 78, 62, 201, 160, 219, 189, 56, 52, 111, 61, 6, 156, 54, 190, 97, 234, 241, 189, 222, 113, 175, 189, 252, 17, 97, 190, 38, 70, 88, 62, 127, 174, 248, 61, 3, 121, 133, 61, 249, 124, 225, 61, 248, 78, 227, 61, 247, 99, 244, 61, 156, 158, 161, 60, 191, 132, 134, 62, 28, 85, 188, 189, 94, 202, 165, 188, 246, 230, 92, 190, 74, 33, 249, 189, 20, 189, 158, 189, 82, 56, 182, 189, 133, 23, 40, 62, 185, 64, 68, 62, 148, 7, 245, 189, 54, 229, 32, 61, 112, 146, 95, 190, 103, 255, 32, 61, 95, 93, 15, 190, 135, 249, 4, 62, 218, 65, 171, 61, 18, 12, 27, 62, 140, 144, 110, 190, 86, 78, 41, 62, 145, 63, 13, 190, 151, 33, 185, 61, 132, 72, 148, 187, 102, 65, 108, 61, 51, 153, 202, 189, 20, 179, 170, 189, 241, 122, 72, 62, 56, 190, 235, 61, 249, 38, 9, 189, 166, 105, 7, 60, 126, 168, 245, 188, 237, 67, 5, 62, 20, 40, 0, 62, 177, 59, 95, 62, 96, 143, 12, 190, 109, 147, 95, 189, 33, 81, 250, 60, 62, 34, 129, 190, 134, 58, 191, 60, 31, 128, 115, 190, 198, 52, 39, 62, 108, 54, 132, 62, 24, 148, 62, 62, 208, 213, 8, 190, 119, 23, 75, 189, 139, 211, 128, 61, 120, 147, 16, 190, 145, 243, 88, 62, 9, 23, 217, 61, 208, 16, 31, 61, 98, 233, 37, 189, 86, 188, 95, 61, 66, 96, 172, 190, 121, 52, 132, 61, 35, 223, 223, 190, 225, 250, 40, 62, 86, 116, 31, 190, 170, 208, 0, 190, 152, 117, 196, 61, 165, 193, 72, 60, 239, 238, 39, 62, 166, 237, 42, 190, 211, 147, 45, 190, 102, 243, 193, 189, 166, 138, 98, 190, 48, 221, 74, 62, 57, 233, 160, 190, 167, 14, 36, 62, 63, 189, 131, 61, 171, 100, 151, 189, 196, 95, 187, 61, 252, 92, 72, 190, 13, 151, 126, 62, 231, 130, 82, 62, 140, 8, 183, 190, 63, 180, 90, 190, 60, 34, 115, 190, 147, 39, 106, 62, 0, 11, 16, 62, 225, 48, 76, 189, 14, 112, 41, 62, 98, 222, 181, 61, 77, 66, 17, 190, 169, 16, 171, 189, 78, 227, 48, 190, 80, 174, 123, 189, 175, 197, 23, 190, 22, 67, 63, 62, 85, 63, 73, 61, 104, 152, 232, 189, 89, 47, 1, 190, 48, 121, 214, 61, 170, 93, 41, 189, 93, 27, 34, 189, 235, 229, 96, 189, 75, 159, 233, 189, 56, 158, 97, 188, 191, 168, 226, 189, 149, 184, 121, 62, 199, 225, 226, 60, 142, 250, 11, 62, 130, 11, 94, 61, 4, 164, 187, 188, 180, 139, 7, 189, 136, 26, 18, 62, 192, 114, 5, 62, 224, 123, 60, 62, 249, 49, 227, 189, 243, 12, 209, 61, 39, 159, 251, 189, 226, 214, 213, 61, 44, 104, 142, 61, 37, 170, 131, 188, 60, 64, 141, 189, 85, 119, 245, 61, 81, 124, 243, 189, 214, 98, 31, 190, 186, 162, 155, 189, 45, 155, 33, 62, 250, 94, 201, 61, 187, 112, 66, 61, 51, 33, 132, 189, 154, 213, 40, 59, 96, 226, 168, 189, 131, 32, 194, 61, 146, 200, 188, 188, 202, 167, 171, 61, 219, 15, 240, 61, 207, 95, 1, 190, 241, 219, 234, 60, 135, 7, 6, 62, 75, 89, 190, 60, 44, 60, 8, 190, 141, 206, 41, 190, 120, 182, 214, 187, 48, 45, 177, 60, 68, 235, 23, 61, 26, 153, 166, 61, 44, 144, 239, 189, 45, 59, 120, 61, 102, 206, 225, 188, 100, 153, 245, 189, 110, 114, 253, 189, 85, 243, 133, 61, 235, 136, 138, 190, 24, 255, 125, 60, 159, 140, 8, 189, 177, 58, 11, 62, 141, 195, 133, 188, 103, 104, 168, 61, 236, 228, 226, 61, 98, 17, 177, 189, 6, 57, 33, 61, 120, 42, 208, 61, 93, 160, 182, 61, 121, 97, 17, 190, 94, 207, 160, 62, 54, 207, 169, 60, 153, 60, 183, 61, 112, 243, 219, 189, 194, 190, 10, 190, 195, 136, 56, 189, 242, 21, 191, 190, 194, 234, 247, 61, 180, 106, 104, 189, 0, 27, 143, 190, 255, 100, 8, 190, 80, 191, 67, 60, 210, 248, 49, 62, 63, 220, 141, 62, 95, 75, 141, 61, 227, 97, 141, 60, 123, 148, 16, 190, 245, 160, 84, 61, 108, 86, 49, 189, 235, 186, 219, 61, 64, 197, 250, 61, 15, 63, 25, 62, 69, 6, 194, 189, 102, 42, 128, 60, 25, 222, 51, 188, 196, 173, 106, 189, 236, 254, 190, 188, 63, 88, 227, 61, 109, 85, 84, 62, 215, 117, 186, 61, 16, 32, 50, 190, 168, 125, 167, 189, 83, 221, 245, 189, 223, 186, 163, 62, 218, 5, 48, 62, 103, 70, 67, 190, 153, 180, 224, 189, 114, 7, 11, 62, 105, 164, 42, 190, 101, 247, 187, 189, 254, 160, 138, 60, 212, 248, 163, 59, 209, 226, 111, 59, 250, 29, 168, 62, 42, 89, 58, 62, 116, 42, 3, 190, 208, 78, 194, 60, 222, 83, 248, 61, 165, 57, 196, 189, 23, 214, 138, 188, 95, 195, 48, 62, 128, 47, 187, 188, 153, 197, 237, 189, 147, 91, 246, 188, 78, 198, 156, 189, 114, 202, 11, 62, 157, 186, 67, 190, 178, 19, 101, 190, 247, 81, 162, 189, 183, 33, 236, 61, 91, 51, 223, 61, 15, 57, 23, 62, 88, 190, 190, 61, 182, 153, 65, 189, 2, 103, 234, 188, 193, 252, 28, 190, 142, 126, 11, 190, 203, 113, 62, 62, 97, 76, 36, 190, 187, 234, 29, 62, 15, 15, 62, 62, 31, 53, 225, 61, 81, 206, 193, 188, 179, 249, 109, 190, 6, 32, 64, 61, 245, 244, 79, 189, 71, 15, 2, 62, 223, 138, 59, 188, 29, 232, 216, 189, 155, 53, 199, 61, 203, 183, 231, 61, 204, 169, 200, 61, 210, 67, 85, 190, 133, 131, 29, 61, 196, 37, 118, 61, 25, 202, 38, 61, 33, 28, 208, 189, 211, 191, 107, 61, 55, 43, 129, 187, 60, 40, 103, 61, 241, 201, 18, 190, 78, 217, 10, 189, 144, 199, 251, 189, 205, 215, 85, 190, 131, 31, 205, 62, 99, 213, 11, 189, 143, 168, 190, 62, 124, 230, 186, 189, 222, 72, 105, 190, 3, 41, 150, 62, 158, 98, 248, 61, 212, 61, 43, 62, 122, 11, 142, 189, 193, 100, 32, 190, 161, 51, 51, 190, 42, 12, 155, 188, 160, 112, 25, 190, 54, 61, 24, 61, 216, 147, 19, 62, 103, 122, 53, 62, 115, 26, 67, 61, 135, 9, 15, 190, 38, 69, 166, 189, 157, 216, 180, 61, 108, 69, 157, 188, 34, 154, 199, 188, 207, 139, 84, 62, 224, 85, 71, 62, 95, 7, 198, 190, 126, 206, 175, 62, 163, 94, 97, 189, 231, 61, 92, 190, 243, 20, 45, 189, 204, 35, 133, 62, 158, 207, 187, 188, 152, 94, 201, 189, 167, 25, 39, 62, 192, 251, 162, 61, 33, 95, 241, 60, 130, 5, 138, 190, 187, 63, 4, 61, 120, 16, 139, 189, 33, 233, 205, 61, 12, 165, 176, 62, 152, 203, 120, 190, 162, 147, 139, 188, 112, 49, 128, 189, 62, 55, 3, 191, 153, 39, 1, 60, 177, 162, 115, 190, 162, 219, 253, 61, 228, 156, 214, 62, 207, 45, 254, 60, 95, 180, 182, 190, 235, 189, 232, 190, 149, 193, 91, 62, 130, 111, 112, 189, 130, 86, 105, 62, 222, 152, 145, 61, 75, 70, 37, 190, 207, 204, 24, 62, 189, 235, 41, 62, 230, 143, 197, 61, 98, 122, 192, 189, 134, 205, 198, 61, 186, 247, 40, 190, 227, 93, 7, 188, 213, 209, 173, 61, 43, 113, 4, 190, 136, 28, 12, 190, 249, 137, 25, 190, 232, 220, 164, 61, 3, 36, 193, 189, 136, 36, 25, 189, 88, 45, 249, 189, 192, 75, 143, 61, 214, 78, 58, 61, 154, 0, 184, 61, 225, 141, 88, 187, 72, 23, 233, 188, 225, 82, 15, 62, 112, 218, 34, 190, 234, 249, 121, 189, 171, 218, 125, 189, 223, 151, 131, 189, 249, 179, 49, 190, 22, 62, 36, 62, 193, 100, 241, 189, 240, 198, 64, 189, 179, 97, 241, 189, 40, 94, 176, 189, 213, 163, 159, 61, 143, 234, 226, 61, 226, 140, 0, 58, 53, 167, 129, 187, 246, 104, 5, 62, 137, 39, 54, 62, 234, 166, 83, 60, 68, 62, 46, 189, 151, 226, 219, 61, 163, 192, 230, 189, 50, 233, 249, 189, 85, 244, 141, 190, 28, 253, 80, 62, 24, 189, 113, 61, 212, 115, 197, 61, 102, 110, 81, 62, 10, 8, 51, 190, 64, 151, 138, 189, 51, 108, 190, 188, 234, 104, 220, 188, 32, 247, 148, 62, 254, 147, 214, 189, 244, 214, 192, 61, 159, 25, 99, 189, 184, 194, 142, 188, 172, 203, 127, 60, 215, 247, 187, 61, 124, 45, 31, 61, 162, 198, 134, 62, 93, 98, 38, 62, 224, 160, 24, 190, 203, 168, 109, 190, 84, 102, 78, 61, 218, 196, 206, 189, 44, 100, 64, 190, 165, 72, 106, 62, 39, 99, 58, 188, 165, 165, 28, 62, 172, 176, 12, 61, 165, 39, 156, 61, 134, 81, 51, 62, 36, 20, 225, 187, 175, 177, 240, 61, 44, 35, 69, 189, 130, 54, 141, 62, 138, 49, 222, 61, 31, 106, 213, 60, 130, 249, 125, 189, 224, 166, 82, 189, 196, 42, 245, 60, 93, 49, 197, 61, 154, 233, 22, 190, 201, 156, 33, 62, 191, 0, 130, 62, 211, 3, 8, 189, 68, 58, 15, 190, 127, 211, 132, 60, 48, 4, 134, 190, 40, 30, 89, 62, 108, 181, 125, 61, 108, 20, 171, 189, 246, 83, 40, 62, 179, 135, 0, 61, 195, 250, 234, 61, 66, 186, 210, 61, 106, 28, 241, 189, 169, 81, 31, 62, 176, 85, 104, 190, 185, 40, 245, 61, 40, 118, 3, 190, 65, 99, 43, 62, 146, 50, 130, 60, 95, 176, 59, 61, 199, 215, 95, 62, 244, 198, 22, 62, 41, 109, 52, 186, 77, 26, 40, 188, 212, 221, 32, 190, 197, 142, 244, 61, 200, 210, 76, 190, 126, 117, 80, 62, 158, 165, 247, 61, 122, 24, 133, 61, 168, 34, 172, 61, 187, 124, 118, 189, 81, 131, 216, 189, 149, 24, 136, 190, 251, 104, 234, 60, 196, 27, 169, 61, 194, 64, 81, 61, 125, 10, 104, 188, 224, 63, 173, 58, 98, 98, 101, 189, 13, 178, 197, 189, 96, 149, 29, 62, 111, 240, 68, 189, 37, 253, 33, 62, 221, 252, 163, 190, 35, 108, 77, 61, 219, 33, 155, 189, 107, 77, 112, 61, 88, 4, 9, 62, 235, 146, 136, 61, 107, 19, 128, 189, 40, 236, 227, 61, 113, 127, 9, 62, 139, 98, 111, 62, 185, 1, 0, 62, 181, 102, 198, 189, 17, 138, 33, 62, 66, 248, 107, 62, 131, 109, 118, 189, 25, 134, 130, 62, 214, 2, 239, 189, 115, 204, 245, 61, 39, 56, 175, 188, 78, 46, 56, 190, 213, 185, 138, 61, 125, 180, 222, 187, 179, 51, 194, 189, 232, 116, 187, 62, 179, 207, 245, 61, 32, 218, 83, 190, 196, 103, 165, 190, 76, 38, 114, 61, 181, 20, 177, 61, 93, 113, 225, 189, 188, 236, 97, 189, 100, 77, 52, 189, 174, 236, 17, 190, 248, 158, 206, 189, 138, 78, 218, 188, 199, 181, 10, 189, 80, 3, 11, 190, 111, 58, 17, 190, 214, 124, 91, 61, 228, 100, 207, 60, 131, 88, 27, 62, 86, 184, 56, 60, 202, 145, 141, 187, 231, 2, 175, 61, 189, 87, 197, 61, 43, 164, 146, 188, 209, 57, 230, 189, 206, 196, 184, 189, 131, 130, 24, 190, 70, 126, 47, 188, 30, 149, 23, 190, 192, 104, 142, 189, 126, 24, 11, 62, 98, 172, 44, 61, 168, 4, 60, 190, 86, 72, 211, 189, 129, 142, 250, 189, 130, 194, 68, 189, 162, 237, 32, 62, 113, 99, 173, 189, 82, 154, 16, 61, 81, 215, 132, 61, 255, 85, 246, 61, 199, 224, 80, 189, 81, 201, 20, 190, 143, 153, 180, 61, 95, 183, 141, 61, 245, 110, 87, 61, 172, 100, 154, 187, 31, 237, 236, 189, 192, 89, 115, 190, 188, 115, 68, 189, 151, 59, 74, 62, 189, 93, 10, 190, 50, 41, 118, 62, 64, 10, 7, 190, 221, 76, 117, 189, 249, 126, 171, 61, 205, 104, 130, 189, 102, 58, 231, 189, 149, 239, 124, 189, 255, 76, 240, 59, 167, 232, 129, 188, 102, 157, 79, 188, 26, 149, 69, 189, 252, 83, 99, 190, 56, 38, 6, 189, 27, 219, 127, 62, 238, 69, 59, 62, 123, 57, 61, 62, 184, 100, 101, 189, 222, 184, 103, 61, 139, 111, 26, 62, 172, 23, 175, 189, 102, 160, 220, 61, 135, 52, 175, 61, 119, 135, 174, 60, 103, 16, 126, 61, 23, 168, 18, 62, 248, 225, 60, 190, 246, 185, 5, 190, 218, 78, 214, 61, 163, 49, 35, 190, 60, 184, 250, 189, 0, 169, 185, 61, 157, 12, 94, 61, 148, 84, 110, 188, 120, 91, 175, 189, 142, 220, 240, 189, 161, 73, 104, 189, 162, 140, 184, 188, 77, 110, 179, 189, 27, 73, 217, 188, 28, 62, 67, 60, 48, 200, 182, 189, 88, 74, 103, 189, 140, 0, 106, 61, 196, 217, 46, 190, 238, 203, 21, 189, 250, 176, 58, 61, 80, 89, 41, 190, 31, 245, 184, 189, 23, 228, 159, 189, 5, 43, 35, 190, 57, 50, 185, 189, 134, 132, 222, 60, 184, 30, 158, 189, 215, 37, 165, 188, 10, 59, 221, 61, 237, 185, 132, 61, 37, 209, 70, 61, 237, 12, 183, 189, 220, 24, 215, 61, 162, 239, 241, 189, 46, 230, 133, 62, 62, 214, 162, 188, 134, 42, 2, 190, 153, 138, 29, 189, 25, 214, 184, 189, 39, 72, 148, 62, 0, 19, 163, 189, 101, 58, 99, 61, 31, 125, 168, 188, 129, 156, 66, 189, 53, 73, 129, 189, 22, 165, 88, 61, 247, 217, 33, 190, 249, 216, 113, 62, 82, 126, 47, 62, 253, 5, 160, 62, 88, 46, 82, 60, 209, 39, 51, 61, 85, 206, 79, 189, 71, 109, 214, 61, 219, 5, 12, 62, 53, 193, 170, 189, 173, 136, 173, 61, 252, 146, 81, 190, 116, 239, 114, 190, 140, 58, 212, 61, 25, 24, 11, 190, 159, 233, 33, 190, 202, 128, 32, 62, 13, 153, 250, 61, 201, 58, 135, 62, 218, 213, 185, 61, 101, 15, 52, 62, 62, 110, 209, 189, 167, 226, 165, 188, 209, 90, 22, 61, 149, 126, 38, 190, 154, 242, 169, 62, 17, 109, 32, 62, 213, 47, 143, 61, 75, 212, 20, 61, 230, 123, 95, 190, 4, 198, 148, 190, 118, 14, 195, 189, 118, 69, 23, 61, 234, 207, 196, 60, 19, 221, 227, 58, 32, 49, 152, 62, 179, 128, 3, 188, 241, 17, 142, 190, 146, 3, 135, 60, 133, 160, 220, 189, 96, 160, 67, 190, 63, 116, 245, 189, 239, 154, 24, 62, 198, 68, 28, 189, 86, 40, 110, 62, 38, 101, 234, 61, 4, 212, 146, 61, 206, 252, 91, 189, 130, 224, 176, 189, 238, 23, 76, 60, 233, 11, 34, 190, 8, 171, 177, 189, 51, 42, 51, 189, 154, 67, 242, 188, 80, 235, 134, 188, 143, 175, 147, 189, 106, 189, 62, 62, 214, 172, 46, 190, 222, 67, 98, 189, 191, 230, 250, 61, 84, 123, 1, 62, 124, 102, 95, 190, 128, 52, 224, 61, 105, 231, 178, 188, 137, 109, 102, 62, 18, 33, 8, 62, 197, 56, 10, 61, 22, 156, 118, 61, 110, 80, 203, 61, 79, 209, 143, 61, 104, 78, 19, 61, 24, 76, 155, 189, 94, 96, 79, 62, 218, 197, 97, 189, 254, 17, 45, 190, 133, 66, 24, 62, 104, 27, 31, 62, 157, 21, 13, 61, 3, 195, 25, 190, 54, 250, 46, 189, 255, 68, 47, 59, 186, 251, 229, 61, 209, 101, 3, 62, 160, 115, 18, 62, 197, 41, 198, 189, 63, 122, 221, 61, 248, 197, 187, 61, 182, 195, 29, 190, 49, 153, 103, 61, 190, 236, 81, 60, 131, 13, 129, 189, 220, 139, 45, 59, 142, 210, 1, 190, 164, 193, 232, 189, 52, 199, 88, 61, 56, 250, 44, 190, 217, 100, 131, 189, 58, 31, 61, 190, 33, 80, 146, 61, 37, 88, 202, 189, 98, 77, 98, 189, 50, 124, 1, 189, 62, 15, 238, 61, 179, 15, 44, 62, 108, 125, 228, 189, 73, 71, 231, 189, 215, 158, 42, 190, 28, 16, 222, 61, 248, 130, 23, 62, 211, 31, 217, 188, 232, 1, 60, 189, 94, 188, 164, 61, 64, 195, 43, 189, 197, 115, 167, 61, 222, 141, 79, 60, 1, 83, 254, 189, 76, 0, 243, 189, 142, 165, 25, 190, 13, 68, 205, 61, 7, 174, 191, 61, 111, 156, 137, 57, 61, 222, 59, 62, 25, 176, 203, 188, 208, 241, 61, 62, 102, 183, 42, 62, 113, 239, 96, 61, 82, 239, 202, 190, 188, 79, 197, 61, 69, 152, 103, 189, 116, 146, 0, 190, 192, 236, 28, 62, 61, 30, 241, 189, 62, 174, 94, 61, 227, 170, 184, 61, 235, 202, 38, 62, 54, 186, 21, 190, 190, 243, 92, 189, 100, 231, 214, 61, 46, 85, 245, 61, 221, 114, 188, 61, 248, 240, 48, 190, 4, 126, 30, 62, 29, 230, 75, 61, 175, 241, 111, 190, 219, 63, 103, 61, 16, 199, 249, 60, 36, 166, 177, 189, 83, 84, 167, 189, 116, 160, 131, 62, 101, 48, 197, 189, 127, 97, 13, 60, 179, 83, 197, 189, 103, 228, 101, 190, 200, 8, 132, 62, 8, 152, 122, 189, 171, 6, 4, 62, 236, 74, 11, 62, 52, 72, 15, 62, 128, 160, 224, 189, 79, 147, 41, 190, 109, 236, 134, 61, 7, 66, 0, 62, 248, 166, 146, 62, 132, 17, 188, 189, 195, 217, 162, 189, 161, 194, 111, 61, 137, 22, 139, 61, 146, 163, 72, 60, 136, 244, 228, 189, 70, 0, 27, 60, 68, 46, 243, 189, 123, 31, 188, 189, 122, 111, 24, 190, 63, 25, 232, 189, 57, 112, 213, 61, 199, 213, 234, 61, 157, 113, 136, 61, 48, 33, 150, 61, 235, 86, 160, 189, 196, 132, 29, 61, 183, 139, 203, 61, 41, 120, 80, 60, 14, 213, 234, 61, 137, 51, 52, 190, 22, 107, 61, 62, 33, 116, 163, 62, 0, 24, 194, 60, 8, 211, 247, 189, 129, 50, 34, 61, 33, 196, 202, 61, 41, 77, 47, 190, 172, 79, 194, 61, 106, 246, 39, 61, 78, 107, 54, 61, 111, 252, 103, 62, 42, 175, 33, 61, 238, 17, 105, 189, 148, 205, 168, 189, 55, 173, 127, 61, 242, 229, 49, 62, 108, 78, 24, 189, 205, 68, 158, 61, 89, 97, 234, 61, 138, 248, 140, 61};
                using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 32, 32, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
                using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
                const CONTAINER_TYPE container = {(float*)memory}; 
            }
            using PARAMETER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::Plain::spec<parameters_memory::CONTAINER_TYPE, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::groups::Normal, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::categories::Weights>;
            const RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::Plain::instance<PARAMETER_SPEC> parameters = {parameters_memory::container};
        }
        namespace biases {
            namespace parameters_memory {
                static_assert(sizeof(unsigned char) == 1);
                alignas(float) const unsigned char memory[] = {123, 15, 43, 62, 232, 17, 146, 188, 25, 93, 140, 62, 108, 54, 117, 189, 49, 129, 11, 62, 245, 244, 147, 189, 131, 187, 70, 190, 87, 38, 140, 61, 213, 209, 230, 61, 150, 48, 172, 188, 141, 246, 89, 61, 11, 209, 9, 190, 24, 231, 109, 61, 182, 7, 207, 61, 211, 247, 135, 188, 46, 237, 121, 62, 201, 176, 203, 189, 115, 12, 230, 189, 235, 99, 141, 61, 31, 133, 57, 62, 182, 226, 170, 61, 242, 94, 153, 61, 141, 139, 188, 189, 177, 98, 27, 190, 24, 162, 12, 190, 101, 89, 155, 189, 160, 226, 69, 62, 72, 199, 212, 189, 20, 28, 22, 188, 197, 168, 170, 61, 125, 126, 28, 61, 59, 227, 68, 59};
                using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 32, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
                using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
                const CONTAINER_TYPE container = {(float*)memory}; 
            }
            using PARAMETER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::Plain::spec<parameters_memory::CONTAINER_TYPE, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::groups::Normal, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::categories::Biases>;
            const RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::Plain::instance<PARAMETER_SPEC> parameters = {parameters_memory::container};
        }
    }
    namespace layer_1 {
        using SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layers::dense::Specification<float, unsigned long, 32, 32, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::activation_functions::ActivationFunction::RELU, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::groups::Normal, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamicTag, true, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>; 
        template <typename CAPABILITY>
        using TEMPLATE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layers::dense::Layer<CAPABILITY, SPEC>;
        using CAPABILITY = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layer_capability::Forward;
        using TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layers::dense::Layer<CAPABILITY, SPEC>;
        const TYPE layer = {weights::parameters, biases::parameters};
    }
    namespace layer_2 {
        namespace weights {
            namespace parameters_memory {
                static_assert(sizeof(unsigned char) == 1);
                alignas(float) const unsigned char memory[] = {228, 254, 19, 190, 171, 4, 237, 189, 133, 35, 37, 63, 82, 153, 209, 61, 177, 165, 112, 189, 133, 32, 228, 189, 81, 218, 28, 188, 91, 202, 122, 190, 190, 208, 6, 190, 155, 40, 71, 190, 2, 29, 147, 188, 221, 79, 19, 189, 211, 6, 9, 190, 29, 205, 98, 62, 69, 148, 210, 189, 59, 196, 131, 190, 5, 89, 117, 190, 88, 249, 145, 61, 175, 231, 56, 62, 253, 222, 6, 62, 51, 50, 45, 190, 232, 63, 129, 190, 113, 122, 124, 61, 139, 143, 206, 61, 9, 223, 97, 61, 54, 81, 89, 62, 66, 31, 35, 62, 171, 245, 173, 189, 241, 197, 129, 61, 199, 4, 75, 189, 55, 139, 231, 61, 82, 29, 141, 61, 18, 181, 174, 189, 166, 124, 141, 189, 184, 19, 157, 61, 65, 176, 230, 61, 65, 161, 64, 190, 193, 252, 20, 62, 5, 31, 36, 61, 149, 71, 162, 189, 101, 149, 1, 62, 30, 133, 134, 190, 199, 153, 139, 61, 252, 75, 189, 61, 166, 15, 59, 190, 165, 41, 208, 189, 95, 225, 246, 61, 160, 241, 253, 189, 206, 206, 86, 62, 228, 154, 30, 190, 190, 109, 70, 188, 238, 91, 241, 189, 151, 136, 246, 61, 95, 245, 55, 190, 255, 150, 242, 61, 69, 92, 39, 62, 109, 5, 169, 61, 21, 158, 13, 61, 1, 200, 66, 190, 207, 100, 62, 62, 193, 63, 46, 62, 214, 77, 16, 190, 192, 60, 98, 190, 193, 203, 0, 190};
                using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 2, 32, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
                using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
                const CONTAINER_TYPE container = {(float*)memory}; 
            }
            using PARAMETER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::Plain::spec<parameters_memory::CONTAINER_TYPE, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::groups::Output, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::categories::Weights>;
            const RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::Plain::instance<PARAMETER_SPEC> parameters = {parameters_memory::container};
        }
        namespace biases {
            namespace parameters_memory {
                static_assert(sizeof(unsigned char) == 1);
                alignas(float) const unsigned char memory[] = {52, 59, 132, 61, 60, 87, 170, 59};
                using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
                using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
                const CONTAINER_TYPE container = {(float*)memory}; 
            }
            using PARAMETER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::Plain::spec<parameters_memory::CONTAINER_TYPE, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::groups::Output, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::categories::Biases>;
            const RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::Plain::instance<PARAMETER_SPEC> parameters = {parameters_memory::container};
        }
    }
    namespace layer_2 {
        using SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layers::dense::Specification<float, unsigned long, 32, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::activation_functions::ActivationFunction::IDENTITY, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::groups::Output, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamicTag, true, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>; 
        template <typename CAPABILITY>
        using TEMPLATE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layers::dense::Layer<CAPABILITY, SPEC>;
        using CAPABILITY = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layer_capability::Forward;
        using TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layers::dense::Layer<CAPABILITY, SPEC>;
        const TYPE layer = {weights::parameters, biases::parameters};
    }
    namespace model_definition {
        using CAPABILITY = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layer_capability::Forward; 
        using IF = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn_models::sequential::Interface<CAPABILITY>;
        using MODEL = IF::Module<layer_0::TEMPLATE, IF::Module<layer_1::TEMPLATE, IF::Module<layer_2::TEMPLATE>>>;
    }
    using MODEL = model_definition::MODEL;
    const MODEL model = {layer_0::layer, {layer_1::layer, {layer_2::layer, {}}}};
}
// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::input {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {10, 37, 229, 191, 179, 11, 42, 190, 58, 166, 4, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {124, 28, 196, 190, 120, 6, 147, 190};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0086/steps/000000000002000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}