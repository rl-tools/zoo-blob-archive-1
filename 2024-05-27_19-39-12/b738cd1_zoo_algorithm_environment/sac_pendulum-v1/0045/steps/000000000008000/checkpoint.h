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
                alignas(float) const unsigned char memory[] = {89, 108, 21, 191, 239, 230, 60, 62, 127, 132, 26, 191, 44, 57, 165, 190, 244, 153, 190, 191, 87, 227, 243, 189, 173, 151, 63, 63, 19, 38, 191, 62, 79, 88, 243, 62, 100, 141, 0, 63, 221, 92, 251, 189, 181, 61, 96, 190, 163, 127, 139, 190, 101, 42, 172, 190, 51, 95, 22, 191, 45, 38, 135, 188, 141, 100, 135, 191, 85, 57, 176, 62, 121, 192, 208, 189, 143, 124, 167, 191, 57, 189, 201, 190, 75, 204, 167, 190, 17, 130, 225, 62, 154, 64, 26, 191, 209, 78, 0, 191, 174, 93, 20, 62, 154, 159, 240, 190, 53, 120, 44, 63, 198, 169, 35, 63, 30, 234, 133, 61, 30, 31, 163, 190, 149, 171, 47, 63, 224, 51, 235, 62, 33, 210, 195, 60, 13, 86, 236, 190, 207, 80, 210, 62, 234, 133, 223, 190, 253, 124, 59, 63, 255, 237, 104, 63, 31, 5, 218, 61, 172, 105, 173, 61, 146, 235, 133, 60, 126, 71, 45, 62, 239, 139, 86, 63, 144, 231, 161, 62, 225, 240, 39, 191, 49, 110, 3, 63, 29, 8, 36, 61, 39, 70, 20, 63, 122, 203, 137, 191, 208, 221, 101, 190, 241, 81, 151, 62, 204, 149, 166, 191, 139, 11, 192, 62, 149, 189, 154, 191, 7, 32, 21, 191, 147, 51, 152, 60, 77, 156, 42, 190, 125, 126, 97, 62, 164, 186, 13, 63, 103, 251, 30, 63, 166, 4, 35, 63, 191, 134, 144, 62, 29, 112, 24, 63, 17, 18, 173, 62, 193, 201, 130, 190, 112, 11, 79, 63, 76, 148, 44, 191, 138, 44, 120, 190, 123, 154, 183, 190, 181, 158, 79, 190, 105, 176, 12, 63, 188, 251, 113, 62, 226, 99, 153, 190, 225, 240, 79, 190, 178, 203, 47, 60, 234, 137, 50, 191, 28, 109, 73, 190, 204, 216, 89, 190, 61, 149, 227, 62, 31, 14, 126, 58, 13, 95, 5, 63, 146, 5, 68, 63, 156, 121, 181, 189, 189, 138, 75, 63, 181, 6, 66, 63, 124, 149, 80, 62, 234, 242, 15, 63, 123, 31, 58, 63, 188, 71, 9, 63, 225, 186, 15, 63, 220, 80, 138, 191, 143, 35, 225, 190, 73, 232, 31, 62, 244, 135, 141, 191, 121, 92, 14, 191};
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
                alignas(float) const unsigned char memory[] = {117, 52, 51, 191, 147, 49, 209, 189, 228, 131, 164, 190, 0, 237, 31, 191, 57, 28, 75, 62, 206, 147, 87, 62, 150, 149, 169, 61, 10, 38, 241, 190, 191, 248, 21, 191, 241, 46, 15, 191, 31, 230, 33, 190, 160, 24, 232, 62, 9, 237, 125, 189, 160, 89, 26, 63, 100, 88, 136, 189, 150, 243, 202, 62, 13, 112, 173, 189, 230, 172, 167, 189, 38, 144, 139, 61, 95, 24, 169, 190, 116, 64, 242, 190, 39, 12, 56, 63, 76, 61, 45, 63, 56, 193, 146, 190, 56, 127, 51, 63, 183, 36, 174, 62, 223, 133, 6, 191, 221, 127, 26, 62, 223, 222, 79, 189, 87, 171, 116, 188, 230, 48, 224, 190, 54, 84, 23, 190};
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
                alignas(float) const unsigned char memory[] = {45, 213, 31, 189, 59, 87, 160, 189, 155, 98, 43, 62, 44, 25, 52, 62, 223, 240, 8, 190, 83, 63, 117, 61, 254, 216, 231, 60, 1, 4, 212, 61, 168, 74, 17, 61, 68, 194, 138, 190, 165, 245, 176, 61, 130, 209, 30, 190, 221, 76, 152, 61, 87, 29, 121, 189, 141, 38, 10, 61, 131, 12, 190, 190, 31, 254, 99, 61, 21, 225, 202, 60, 116, 138, 63, 190, 203, 141, 48, 58, 107, 17, 4, 61, 92, 231, 125, 190, 152, 15, 83, 188, 60, 163, 48, 61, 90, 113, 43, 190, 222, 178, 80, 189, 86, 20, 16, 62, 105, 153, 80, 190, 66, 236, 139, 62, 229, 171, 112, 188, 81, 97, 255, 61, 16, 59, 138, 189, 146, 213, 49, 62, 71, 42, 51, 189, 40, 54, 173, 188, 11, 105, 133, 190, 206, 7, 88, 189, 179, 162, 14, 60, 184, 30, 106, 189, 155, 54, 237, 61, 141, 47, 34, 190, 173, 249, 8, 190, 90, 151, 129, 190, 78, 218, 212, 61, 227, 230, 31, 190, 117, 16, 14, 62, 151, 108, 180, 190, 77, 125, 136, 190, 218, 171, 130, 190, 35, 67, 1, 62, 180, 151, 245, 189, 46, 88, 31, 186, 167, 135, 253, 190, 66, 186, 253, 61, 169, 74, 108, 62, 15, 67, 125, 62, 238, 103, 81, 189, 168, 38, 79, 62, 57, 48, 176, 60, 51, 89, 138, 189, 234, 18, 196, 61, 220, 114, 134, 189, 77, 45, 67, 190, 165, 189, 65, 190, 238, 48, 29, 189, 215, 199, 147, 61, 86, 87, 219, 189, 101, 10, 210, 190, 149, 89, 179, 61, 43, 247, 15, 189, 141, 120, 24, 190, 74, 89, 177, 188, 138, 1, 44, 62, 148, 156, 28, 190, 92, 114, 173, 189, 111, 223, 101, 61, 137, 88, 64, 61, 212, 33, 0, 62, 205, 139, 54, 190, 55, 48, 97, 188, 95, 244, 44, 190, 28, 140, 218, 190, 29, 13, 183, 188, 10, 247, 31, 61, 102, 19, 209, 61, 137, 240, 245, 61, 100, 18, 151, 60, 168, 71, 185, 189, 44, 134, 4, 62, 202, 172, 10, 62, 151, 210, 214, 189, 152, 207, 190, 189, 146, 149, 178, 62, 122, 101, 46, 62, 198, 225, 87, 190, 61, 15, 5, 190, 100, 242, 122, 190, 237, 70, 28, 189, 89, 104, 158, 61, 140, 2, 22, 62, 172, 58, 19, 191, 247, 197, 81, 62, 165, 6, 175, 190, 221, 153, 10, 190, 160, 60, 33, 62, 78, 23, 80, 190, 34, 82, 251, 60, 20, 98, 122, 62, 153, 191, 205, 61, 12, 132, 24, 62, 166, 35, 207, 189, 220, 37, 76, 190, 248, 236, 71, 191, 115, 191, 186, 62, 226, 18, 218, 61, 105, 165, 142, 190, 8, 182, 226, 190, 174, 89, 229, 189, 175, 50, 131, 190, 89, 162, 229, 189, 8, 25, 128, 190, 37, 5, 76, 191, 90, 236, 131, 61, 22, 244, 33, 189, 204, 20, 226, 189, 63, 196, 142, 189, 251, 12, 68, 189, 145, 110, 44, 189, 16, 221, 237, 189, 108, 27, 61, 190, 123, 125, 167, 60, 228, 17, 111, 189, 21, 49, 40, 62, 54, 2, 48, 189, 120, 122, 174, 61, 166, 180, 146, 61, 41, 19, 23, 62, 86, 211, 4, 190, 105, 161, 38, 61, 72, 83, 70, 62, 52, 92, 54, 188, 102, 59, 89, 62, 168, 30, 153, 190, 84, 237, 238, 61, 102, 100, 220, 189, 127, 31, 162, 61, 122, 53, 181, 62, 210, 222, 82, 62, 237, 37, 154, 190, 54, 204, 150, 62, 249, 117, 253, 60, 159, 18, 49, 190, 114, 209, 57, 62, 241, 126, 14, 61, 86, 88, 117, 189, 64, 1, 180, 61, 45, 235, 195, 190, 193, 89, 90, 190, 56, 28, 17, 190, 44, 145, 130, 189, 123, 120, 176, 61, 187, 227, 125, 61, 219, 209, 41, 190, 210, 100, 219, 189, 139, 41, 63, 190, 38, 53, 49, 60, 1, 239, 48, 190, 210, 194, 63, 61, 183, 105, 214, 61, 149, 35, 15, 190, 132, 245, 3, 61, 21, 171, 49, 188, 83, 214, 216, 188, 114, 20, 0, 61, 101, 86, 238, 189, 50, 29, 70, 189, 58, 98, 27, 190, 162, 0, 240, 189, 123, 145, 245, 187, 124, 211, 35, 190, 131, 132, 255, 189, 62, 52, 172, 189, 111, 113, 128, 59, 184, 196, 246, 188, 69, 210, 178, 189, 54, 41, 32, 60, 227, 2, 2, 189, 129, 210, 132, 60, 45, 236, 24, 62, 12, 221, 28, 188, 201, 234, 198, 189, 49, 62, 135, 189, 69, 67, 162, 190, 159, 32, 35, 62, 106, 18, 131, 62, 97, 36, 142, 62, 128, 32, 34, 190, 114, 80, 99, 60, 228, 46, 130, 60, 136, 8, 109, 61, 3, 11, 92, 189, 89, 104, 253, 61, 110, 98, 198, 188, 168, 227, 216, 189, 8, 107, 117, 61, 111, 51, 20, 62, 174, 194, 45, 190, 190, 51, 79, 190, 85, 48, 21, 62, 35, 212, 63, 61, 56, 40, 10, 191, 87, 241, 35, 190, 21, 8, 133, 61, 180, 233, 21, 62, 8, 83, 127, 185, 63, 62, 255, 61, 211, 96, 84, 189, 255, 202, 211, 189, 109, 138, 230, 61, 123, 224, 163, 189, 53, 159, 174, 62, 251, 204, 75, 62, 195, 158, 150, 62, 197, 50, 164, 62, 225, 135, 0, 190, 161, 237, 135, 61, 181, 228, 80, 60, 94, 25, 223, 60, 120, 191, 8, 190, 193, 6, 3, 190, 107, 186, 170, 189, 105, 141, 51, 61, 53, 159, 89, 189, 173, 212, 194, 61, 188, 230, 235, 61, 139, 6, 8, 62, 148, 125, 215, 57, 249, 86, 70, 190, 214, 1, 122, 189, 208, 94, 141, 188, 155, 206, 173, 60, 28, 0, 56, 190, 141, 32, 188, 61, 72, 188, 205, 188, 102, 117, 28, 187, 234, 76, 49, 190, 129, 113, 1, 62, 101, 139, 11, 61, 106, 124, 7, 62, 210, 89, 220, 189, 103, 37, 207, 61, 18, 152, 133, 61, 229, 173, 148, 188, 122, 196, 9, 188, 191, 162, 46, 190, 15, 56, 93, 189, 55, 198, 81, 190, 237, 173, 27, 190, 83, 76, 43, 62, 244, 220, 54, 188, 17, 86, 170, 190, 230, 72, 67, 62, 175, 167, 30, 189, 210, 185, 208, 189, 112, 231, 128, 187, 212, 143, 41, 190, 36, 91, 4, 62, 4, 63, 89, 62, 39, 15, 92, 62, 107, 21, 38, 62, 193, 25, 235, 189, 214, 85, 212, 189, 69, 200, 138, 62, 193, 167, 211, 61, 140, 205, 237, 190, 85, 145, 159, 62, 252, 225, 106, 61, 104, 212, 134, 189, 200, 231, 129, 62, 50, 230, 167, 189, 21, 121, 245, 189, 247, 49, 126, 190, 97, 138, 157, 61, 208, 188, 131, 190, 12, 118, 194, 62, 210, 47, 148, 189, 186, 161, 2, 63, 233, 87, 153, 62, 102, 144, 197, 189, 104, 155, 48, 62, 7, 20, 199, 62, 72, 135, 133, 190, 16, 1, 12, 189, 217, 7, 154, 62, 100, 175, 160, 61, 45, 121, 136, 60, 108, 162, 56, 62, 9, 12, 157, 61, 135, 166, 244, 190, 114, 131, 108, 189, 188, 240, 101, 190, 178, 196, 146, 189, 7, 167, 48, 61, 220, 253, 205, 61, 221, 230, 191, 190, 6, 246, 73, 190, 14, 15, 165, 61, 33, 85, 247, 190, 34, 106, 139, 62, 115, 200, 22, 186, 48, 9, 99, 190, 222, 54, 15, 62, 139, 221, 179, 61, 172, 211, 95, 60, 118, 43, 178, 188, 54, 78, 80, 62, 108, 31, 77, 62, 75, 58, 14, 62, 101, 244, 217, 189, 206, 113, 243, 188, 199, 208, 55, 189, 172, 63, 26, 190, 194, 209, 5, 190, 123, 184, 195, 189, 63, 212, 206, 61, 199, 245, 74, 188, 228, 170, 134, 60, 2, 193, 94, 190, 13, 241, 166, 188, 228, 29, 154, 190, 75, 189, 207, 61, 190, 40, 66, 60, 134, 11, 231, 188, 148, 217, 114, 185, 210, 4, 133, 190, 94, 52, 149, 187, 148, 74, 4, 62, 56, 11, 137, 62, 79, 154, 100, 62, 103, 100, 247, 188, 75, 216, 175, 190, 125, 246, 51, 62, 216, 172, 44, 62, 218, 221, 9, 190, 232, 128, 217, 61, 184, 205, 26, 62, 92, 63, 25, 189, 86, 64, 188, 61, 15, 13, 90, 190, 90, 25, 239, 188, 226, 254, 31, 190, 108, 35, 137, 61, 180, 233, 151, 62, 48, 55, 114, 62, 14, 24, 153, 62, 76, 163, 30, 191, 151, 244, 17, 62, 8, 26, 11, 62, 139, 50, 131, 62, 87, 167, 40, 189, 88, 99, 227, 61, 6, 130, 191, 61, 7, 158, 10, 191, 173, 155, 236, 61, 6, 176, 204, 190, 64, 162, 181, 61, 119, 130, 13, 190, 208, 243, 59, 190, 253, 202, 227, 190, 147, 195, 165, 190, 216, 21, 136, 62, 123, 145, 54, 191, 217, 242, 151, 60, 154, 133, 48, 62, 61, 171, 9, 190, 162, 41, 155, 62, 113, 160, 119, 189, 180, 237, 214, 189, 239, 130, 2, 62, 157, 187, 203, 61, 148, 51, 149, 62, 161, 229, 105, 62, 71, 107, 186, 190, 253, 183, 3, 191, 186, 192, 16, 191, 190, 244, 71, 190, 219, 232, 160, 190, 81, 130, 128, 189, 106, 82, 226, 189, 137, 92, 210, 190, 125, 141, 138, 60, 86, 152, 30, 191, 122, 104, 70, 191, 108, 109, 132, 190, 44, 50, 183, 62, 135, 218, 14, 62, 121, 242, 135, 62, 184, 34, 156, 60, 244, 217, 132, 190, 70, 123, 207, 62, 114, 98, 157, 62, 181, 203, 210, 62, 79, 152, 236, 62, 180, 163, 26, 62, 111, 51, 142, 190, 180, 134, 143, 62, 236, 71, 151, 62, 10, 235, 172, 190, 74, 182, 144, 62, 24, 208, 96, 61, 90, 46, 224, 189, 168, 205, 5, 191, 98, 233, 7, 191, 165, 128, 33, 190, 124, 251, 245, 61, 206, 183, 200, 62, 86, 54, 68, 189, 125, 67, 88, 189, 151, 92, 129, 62, 252, 179, 157, 190, 218, 115, 181, 59, 84, 7, 87, 187, 16, 152, 208, 61, 107, 231, 195, 61, 70, 142, 166, 61, 165, 32, 228, 189, 152, 89, 149, 190, 78, 178, 2, 62, 93, 37, 150, 190, 247, 244, 170, 61, 31, 226, 120, 190, 225, 71, 164, 189, 217, 136, 195, 61, 204, 143, 182, 190, 147, 82, 105, 60, 84, 197, 219, 190, 84, 254, 31, 189, 140, 136, 245, 189, 248, 179, 93, 189, 190, 158, 249, 61, 62, 79, 48, 61, 49, 231, 211, 61, 1, 122, 65, 189, 73, 42, 130, 190, 74, 70, 101, 62, 11, 150, 198, 61, 90, 178, 156, 61, 183, 210, 80, 60, 110, 50, 17, 190, 44, 123, 86, 191, 74, 235, 15, 189, 217, 174, 128, 62, 112, 220, 230, 189, 248, 154, 150, 190, 219, 10, 40, 191, 172, 215, 156, 189, 142, 221, 222, 190, 217, 128, 184, 189, 115, 21, 183, 61, 84, 126, 5, 190, 146, 14, 161, 189, 176, 168, 181, 62, 151, 37, 248, 61, 102, 33, 134, 62, 25, 231, 225, 189, 124, 182, 105, 189, 165, 142, 228, 189, 181, 251, 107, 190, 126, 235, 47, 188, 61, 207, 221, 62, 143, 143, 3, 61, 75, 210, 2, 190, 219, 59, 40, 62, 239, 112, 24, 189, 85, 100, 160, 61, 62, 151, 229, 61, 108, 234, 175, 61, 211, 210, 205, 187, 3, 238, 101, 62, 1, 95, 226, 61, 60, 207, 160, 189, 183, 239, 149, 62, 192, 103, 194, 62, 205, 117, 50, 191, 230, 34, 59, 62, 36, 242, 178, 61, 146, 17, 24, 62, 226, 94, 239, 61, 67, 52, 52, 62, 74, 247, 61, 62, 16, 73, 35, 191, 72, 63, 224, 61, 146, 109, 188, 190, 155, 149, 137, 62, 185, 238, 66, 62, 74, 16, 206, 62, 186, 18, 113, 190, 75, 166, 73, 191, 145, 223, 159, 62, 107, 115, 254, 190, 178, 3, 177, 62, 217, 132, 84, 61, 123, 24, 134, 61, 10, 208, 99, 62, 251, 110, 127, 189, 97, 43, 107, 59, 234, 89, 193, 61, 35, 249, 129, 189, 195, 48, 250, 62, 99, 160, 224, 62, 226, 33, 9, 191, 117, 6, 182, 190, 126, 126, 234, 190, 129, 121, 185, 190, 108, 71, 7, 190, 84, 55, 132, 190, 241, 58, 206, 190, 239, 123, 169, 189, 232, 166, 34, 191, 142, 195, 215, 190, 19, 157, 110, 190, 152, 116, 118, 190, 49, 72, 93, 62, 154, 35, 136, 60, 180, 123, 204, 61, 152, 113, 22, 62, 233, 103, 148, 190, 136, 147, 87, 62, 12, 40, 14, 62, 57, 63, 157, 62, 127, 18, 29, 61, 16, 74, 70, 62, 223, 101, 23, 191, 152, 148, 161, 62, 46, 186, 7, 62, 227, 84, 145, 190, 188, 138, 151, 61, 19, 177, 33, 61, 208, 152, 217, 61, 117, 19, 226, 190, 80, 0, 180, 190, 158, 250, 61, 190, 34, 121, 134, 189, 185, 179, 46, 190, 142, 22, 238, 189, 129, 105, 126, 190, 183, 182, 182, 61, 189, 82, 174, 61, 113, 125, 23, 189, 197, 243, 126, 190, 228, 129, 107, 190, 45, 101, 139, 189, 200, 136, 33, 190, 129, 153, 167, 190, 185, 171, 117, 61, 212, 66, 110, 62, 67, 40, 130, 62, 157, 229, 35, 190, 176, 146, 167, 190, 232, 163, 198, 189, 167, 227, 179, 62, 227, 52, 218, 61, 248, 93, 95, 62, 139, 129, 46, 62, 159, 64, 70, 190, 50, 224, 46, 190, 8, 64, 59, 62, 165, 129, 83, 189, 115, 167, 159, 189, 51, 107, 58, 62, 252, 162, 40, 61, 200, 14, 147, 190, 59, 74, 185, 190, 14, 101, 129, 190, 122, 187, 77, 189, 176, 106, 31, 62, 151, 52, 197, 189, 195, 62, 216, 61, 205, 164, 30, 190, 186, 20, 170, 61, 43, 220, 175, 189, 96, 148, 20, 190, 254, 212, 179, 60, 49, 84, 177, 188, 204, 187, 211, 60, 119, 111, 0, 62, 210, 174, 6, 62, 182, 225, 250, 189, 219, 115, 12, 189, 68, 5, 84, 190, 167, 224, 237, 61, 194, 120, 212, 190, 169, 252, 236, 187, 223, 40, 74, 190, 46, 178, 252, 189, 245, 151, 154, 189, 211, 130, 198, 61, 238, 24, 219, 189, 114, 216, 96, 60, 227, 135, 30, 61, 250, 8, 139, 189, 14, 52, 236, 59, 201, 9, 42, 62, 193, 71, 24, 190, 184, 48, 31, 190, 236, 189, 112, 61, 179, 20, 134, 187, 238, 236, 221, 61, 152, 163, 66, 190, 82, 245, 210, 190, 171, 44, 136, 189, 86, 58, 218, 190, 201, 52, 137, 190, 120, 238, 46, 62, 160, 238, 226, 190, 46, 112, 188, 188, 194, 183, 21, 190, 158, 165, 51, 60, 137, 50, 77, 61, 12, 237, 131, 62, 228, 81, 71, 61, 239, 62, 138, 61, 110, 76, 205, 189, 145, 12, 93, 190, 188, 179, 233, 185, 208, 175, 110, 189, 179, 231, 164, 190, 56, 142, 37, 190, 137, 58, 39, 189, 230, 109, 131, 62, 103, 227, 207, 62, 190, 68, 34, 190, 129, 50, 26, 187, 7, 139, 142, 190, 105, 5, 150, 61, 215, 77, 147, 62, 31, 144, 0, 62, 194, 6, 73, 61, 7, 146, 135, 190, 158, 250, 70, 190, 222, 165, 42, 62, 146, 216, 143, 190, 221, 180, 166, 61, 148, 216, 184, 61, 126, 86, 158, 189, 0, 155, 132, 190, 195, 97, 136, 189, 160, 129, 70, 189, 246, 231, 1, 62, 136, 187, 157, 190, 67, 48, 58, 190, 185, 75, 109, 62, 6, 136, 99, 190, 132, 188, 139, 62, 83, 130, 34, 190, 35, 105, 81, 62, 117, 141, 81, 62, 12, 140, 178, 62, 103, 211, 123, 189, 7, 231, 88, 190, 134, 231, 202, 190, 140, 159, 2, 62, 11, 133, 28, 62, 53, 202, 93, 190, 236, 3, 183, 61, 11, 3, 193, 61, 191, 160, 168, 61, 205, 30, 142, 189, 149, 191, 62, 190, 231, 239, 35, 189, 183, 154, 244, 189, 166, 39, 26, 60, 232, 209, 46, 190, 136, 122, 6, 190, 159, 72, 40, 62, 145, 55, 39, 190, 82, 224, 251, 189, 82, 109, 88, 62, 39, 42, 31, 60, 102, 197, 28, 190, 93, 110, 101, 190, 181, 232, 9, 190, 66, 106, 219, 190, 238, 35, 63, 190, 173, 30, 7, 191, 155, 232, 218, 61, 125, 65, 120, 191, 1, 40, 140, 190, 207, 16, 6, 62, 115, 140, 208, 60, 101, 95, 168, 190, 81, 230, 224, 190, 66, 70, 196, 190, 204, 194, 164, 62, 242, 96, 56, 62, 148, 97, 10, 191, 15, 135, 82, 62, 212, 251, 157, 61, 108, 31, 25, 62, 44, 179, 12, 61, 96, 50, 215, 62, 131, 139, 46, 62, 180, 70, 10, 60, 68, 250, 80, 188, 225, 13, 126, 190, 245, 213, 188, 189, 61, 48, 136, 190, 106, 67, 245, 62, 106, 0, 12, 62, 166, 108, 224, 190, 210, 36, 124, 61, 56, 75, 178, 189, 148, 234, 3, 190, 34, 49, 238, 190, 120, 138, 2, 62, 141, 108, 32, 62, 65, 99, 45, 62, 244, 10, 13, 62, 122, 37, 157, 190, 39, 16, 173, 189, 195, 197, 154, 61, 183, 178, 152, 62, 217, 240, 3, 189, 175, 92, 166, 61, 175, 76, 176, 190, 18, 11, 94, 189, 19, 242, 149, 62, 103, 200, 117, 189, 51, 211, 68, 62, 6, 98, 116, 61, 10, 16, 17, 61, 195, 19, 51, 190, 141, 109, 204, 190, 197, 242, 180, 189, 6, 119, 143, 62, 184, 166, 179, 61, 159, 52, 218, 189, 24, 80, 171, 189, 94, 41, 43, 190, 130, 171, 23, 190, 24, 190, 118, 190, 35, 201, 144, 190, 192, 140, 80, 190, 107, 86, 74, 62, 32, 178, 195, 61, 139, 68, 158, 190, 69, 203, 24, 61, 240, 101, 195, 189, 18, 37, 71, 62, 176, 121, 107, 61, 145, 55, 128, 62, 66, 129, 138, 62, 98, 237, 248, 189, 73, 9, 1, 190, 214, 71, 125, 190, 23, 150, 183, 187, 46, 18, 21, 190, 239, 216, 108, 62, 106, 132, 129, 189, 25, 91, 168, 189, 78, 220, 99, 60, 194, 97, 36, 190, 239, 223, 230, 61, 178, 158, 25, 61, 14, 50, 146, 189, 5, 158, 169, 189, 197, 194, 167, 188, 101, 171, 103, 190, 37, 231, 203, 190, 126, 199, 57, 62, 162, 166, 211, 189, 124, 162, 142, 61, 209, 38, 202, 188, 249, 2, 117, 62, 4, 244, 252, 61, 244, 215, 16, 190, 1, 30, 158, 190, 173, 158, 222, 190, 109, 30, 37, 191, 161, 104, 169, 62, 213, 218, 40, 191, 25, 1, 238, 61, 141, 174, 128, 190, 157, 115, 72, 189, 134, 52, 32, 189, 49, 72, 2, 190, 232, 205, 255, 61, 162, 138, 53, 191, 9, 6, 27, 191, 89, 208, 182, 189, 163, 80, 170, 58, 228, 69, 2, 190, 210, 39, 234, 61, 237, 199, 59, 62, 40, 224, 155, 188, 218, 113, 141, 189, 77, 204, 48, 190, 51, 72, 23, 62, 236, 19, 6, 60, 174, 46, 98, 61, 255, 221, 131, 61, 125, 97, 133, 62, 28, 52, 194, 190, 78, 147, 49, 191, 90, 56, 216, 61, 152, 12, 19, 63, 17, 206, 200, 187, 90, 10, 4, 62, 118, 171, 75, 61, 7, 180, 28, 190, 188, 211, 172, 191, 105, 139, 108, 190, 126, 10, 99, 191, 190, 79, 155, 61, 21, 198, 168, 190, 142, 94, 94, 62, 187, 65, 187, 190, 105, 156, 130, 191, 72, 169, 203, 62, 58, 167, 115, 191, 78, 143, 200, 190, 107, 219, 114, 61, 219, 184, 174, 189, 102, 165, 247, 62, 128, 156, 220, 61, 139, 10, 182, 61, 249, 155, 27, 190, 112, 176, 66, 62, 44, 155, 96, 62, 234, 189, 28, 190, 54, 103, 30, 190, 253, 215, 171, 190, 40, 62, 114, 189, 77, 184, 149, 188, 188, 209, 119, 190, 4, 208, 12, 190, 107, 177, 38, 189, 227, 252, 239, 190, 2, 48, 62, 190, 217, 39, 61, 190, 67, 25, 160, 189, 132, 223, 60, 62, 191, 113, 111, 62, 242, 138, 192, 190, 164, 251, 87, 188, 153, 147, 174, 61, 79, 108, 127, 62, 238, 129, 192, 62, 160, 100, 16, 190, 226, 92, 187, 190, 91, 230, 133, 190, 78, 35, 8, 189, 183, 219, 192, 61, 58, 89, 80, 62, 124, 20, 125, 187, 41, 102, 13, 189, 207, 95, 25, 62, 205, 251, 219, 190, 222, 101, 24, 190, 195, 160, 111, 62, 117, 81, 96, 61, 33, 37, 126, 190, 242, 196, 24, 190, 152, 86, 163, 61, 172, 85, 215, 189, 225, 241, 91, 190, 215, 221, 135, 190, 46, 151, 178, 61, 190, 182, 91, 190, 82, 36, 99, 190, 103, 74, 3, 190, 220, 206, 127, 61, 3, 164, 54, 190, 33, 163, 12, 190, 125, 176, 246, 61, 65, 182, 64, 61, 159, 215, 104, 61, 63, 100, 166, 189, 234, 66, 207, 189, 127, 62, 239, 189, 181, 52, 95, 62, 19, 229, 202, 62, 103, 31, 190, 61, 167, 200, 189, 60, 58, 30, 11, 191, 250, 252, 107, 62, 105, 116, 134, 62, 174, 246, 39, 190, 242, 148, 209, 188, 157, 130, 191, 61, 85, 178, 200, 60, 172, 204, 70, 190, 35, 80, 181, 190, 106, 54, 201, 188, 154, 211, 104, 62, 198, 74, 219, 60, 59, 101, 204, 190, 159, 183, 130, 190, 65, 231, 172, 188, 110, 135, 5, 61, 74, 31, 56, 190, 104, 9, 87, 190, 139, 199, 0, 190, 205, 218, 148, 190, 150, 28, 122, 189, 172, 104, 152, 190, 157, 228, 135, 61, 231, 187, 207, 61, 139, 145, 90, 61, 87, 110, 28, 190, 8, 81, 130, 190, 32, 90, 240, 61, 142, 147, 170, 62, 207, 136, 217, 62, 92, 131, 150, 62, 228, 249, 115, 59, 243, 22, 252, 190, 115, 203, 37, 190, 56, 226, 129, 62, 16, 180, 10, 190, 151, 99, 25, 62, 248, 137, 142, 188, 72, 175, 47, 190, 226, 30, 24, 191, 98, 134, 23, 191, 115, 57, 64, 190, 44, 166, 250, 61, 103, 231, 146, 62, 98, 180, 14, 60, 48, 126, 88, 190, 59, 137, 189, 190, 123, 14, 158, 62, 142, 43, 200, 188, 10, 50, 181, 188, 57, 72, 30, 190, 146, 228, 5, 62, 242, 150, 112, 60, 252, 217, 45, 190, 43, 143, 204, 61, 234, 31, 56, 62, 78, 125, 223, 189, 65, 253, 108, 189, 84, 206, 97, 190, 176, 118, 86, 62, 164, 19, 92, 60, 161, 93, 207, 62, 65, 78, 71, 59, 166, 33, 64, 62, 137, 243, 200, 190, 72, 63, 34, 61, 10, 231, 110, 62, 199, 127, 32, 190, 176, 195, 170, 60, 220, 10, 44, 189, 60, 250, 88, 60, 31, 138, 189, 61, 158, 230, 37, 191, 125, 145, 172, 189, 188, 164, 221, 61, 156, 175, 14, 62, 6, 98, 147, 189, 115, 59, 141, 190, 213, 118, 51, 189, 62, 19, 133, 62, 148, 45, 5, 62, 107, 189, 154, 187, 120, 83, 195, 188, 227, 189, 231, 60, 80, 79, 186, 61, 204, 71, 198, 190, 124, 51, 91, 61, 15, 199, 7, 62, 58, 147, 138, 61, 97, 72, 90, 62, 138, 215, 144, 190, 203, 121, 98, 188, 75, 248, 5, 61, 59, 93, 150, 61, 115, 27, 177, 62, 22, 226, 154, 61, 81, 220, 188, 190, 243, 200, 144, 61, 81, 51, 82, 187, 67, 103, 106, 61, 148, 109, 15, 62, 37, 124, 115, 62, 162, 132, 188, 189, 112, 41, 6, 62, 196, 112, 225, 190, 220, 240, 56, 190, 51, 85, 34, 190, 250, 62, 199, 60, 17, 121, 149, 189, 212, 241, 235, 61, 207, 28, 214, 61, 180, 241, 131, 189, 71, 222, 31, 60, 214, 126, 220, 189, 41, 201, 204, 60, 137, 120, 195, 189, 201, 73, 76, 61, 88, 79, 241, 61, 215, 36, 122, 61, 123, 13, 131, 189, 74, 148, 115, 60, 239, 138, 77, 190, 184, 138, 212, 189, 40, 8, 104, 190, 195, 96, 2, 62, 25, 192, 40, 190, 227, 193, 83, 61, 141, 66, 227, 189, 222, 77, 183, 189, 59, 0, 32, 61, 114, 41, 198, 187, 47, 14, 250, 189, 246, 169, 218, 189, 242, 42, 84, 189, 255, 213, 48, 62, 101, 179, 174, 61, 79, 139, 224, 189, 149, 142, 5, 190, 210, 239, 65, 190, 252, 84, 149, 61};
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
                alignas(float) const unsigned char memory[] = {13, 119, 129, 190, 32, 240, 123, 62, 45, 231, 10, 62, 249, 218, 121, 62, 39, 49, 69, 62, 147, 192, 182, 61, 122, 227, 53, 190, 121, 136, 62, 190, 41, 88, 21, 189, 199, 85, 106, 61, 158, 140, 251, 61, 165, 97, 172, 61, 1, 250, 19, 62, 188, 254, 26, 62, 70, 90, 194, 62, 241, 54, 91, 62, 103, 245, 167, 62, 214, 196, 206, 61, 16, 233, 21, 189, 17, 128, 153, 62, 88, 204, 191, 62, 140, 71, 131, 189, 189, 48, 188, 61, 3, 145, 216, 61, 61, 153, 25, 61, 201, 24, 248, 61, 222, 87, 112, 60, 96, 179, 112, 62, 14, 192, 16, 61, 162, 244, 184, 189, 119, 154, 146, 62, 144, 123, 43, 190};
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
                alignas(float) const unsigned char memory[] = {220, 188, 60, 187, 172, 155, 70, 61, 109, 226, 45, 189, 89, 1, 152, 190, 76, 235, 73, 62, 178, 59, 3, 190, 127, 128, 48, 190, 164, 245, 158, 61, 239, 131, 148, 190, 221, 219, 81, 190, 81, 138, 147, 61, 239, 100, 2, 191, 80, 160, 10, 63, 36, 234, 8, 190, 52, 82, 10, 63, 80, 138, 78, 191, 40, 233, 54, 63, 47, 131, 185, 62, 97, 193, 254, 188, 6, 82, 41, 190, 97, 211, 88, 62, 205, 233, 174, 190, 157, 187, 9, 62, 95, 57, 210, 190, 101, 125, 226, 190, 239, 79, 151, 191, 65, 31, 56, 190, 53, 245, 217, 62, 106, 196, 53, 63, 200, 6, 172, 62, 221, 2, 91, 62, 29, 142, 43, 60, 169, 205, 17, 62, 56, 69, 174, 190, 114, 29, 120, 190, 141, 71, 156, 190, 95, 246, 43, 190, 187, 14, 216, 60, 150, 126, 115, 62, 23, 121, 12, 62, 78, 68, 243, 189, 241, 245, 142, 62, 209, 27, 150, 189, 187, 147, 233, 61, 25, 211, 190, 61, 150, 108, 69, 190, 10, 127, 245, 189, 206, 102, 244, 60, 143, 218, 108, 190, 48, 109, 17, 187, 230, 41, 40, 62, 213, 220, 200, 190, 50, 26, 254, 189, 131, 16, 161, 190, 127, 208, 160, 61, 72, 94, 18, 61, 239, 77, 161, 189, 188, 117, 156, 60, 125, 171, 179, 62, 129, 111, 63, 190, 113, 161, 107, 62, 154, 15, 49, 62, 134, 24, 40, 190, 44, 122, 168, 61};
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
                alignas(float) const unsigned char memory[] = {248, 10, 70, 189, 33, 47, 143, 188};
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
    alignas(float) const unsigned char memory[] = {223, 225, 11, 191, 171, 172, 30, 63, 108, 222, 46, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {109, 72, 178, 190, 76, 16, 166, 190};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0045/steps/000000000008000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}