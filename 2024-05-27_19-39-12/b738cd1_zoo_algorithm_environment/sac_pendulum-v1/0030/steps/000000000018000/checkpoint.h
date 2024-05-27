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
                alignas(float) const unsigned char memory[] = {102, 174, 37, 191, 139, 208, 125, 191, 198, 173, 14, 191, 202, 216, 55, 62, 175, 112, 21, 62, 109, 238, 2, 191, 186, 140, 106, 62, 65, 204, 103, 63, 71, 6, 216, 190, 136, 11, 227, 190, 239, 254, 54, 63, 244, 85, 179, 187, 246, 208, 82, 190, 66, 111, 6, 63, 32, 218, 4, 191, 81, 234, 94, 62, 147, 44, 160, 63, 196, 255, 145, 62, 176, 189, 141, 190, 156, 204, 237, 61, 237, 9, 16, 191, 137, 165, 50, 63, 171, 240, 81, 191, 5, 166, 80, 62, 107, 225, 227, 190, 59, 99, 70, 63, 144, 162, 170, 190, 224, 30, 43, 62, 122, 13, 30, 63, 5, 129, 52, 190, 177, 184, 173, 190, 136, 42, 82, 191, 68, 179, 16, 190, 203, 174, 168, 190, 11, 150, 160, 191, 55, 54, 101, 190, 21, 125, 40, 63, 233, 134, 140, 63, 22, 4, 148, 62, 42, 197, 13, 63, 67, 224, 173, 191, 65, 128, 144, 190, 29, 5, 74, 63, 243, 114, 210, 189, 124, 33, 174, 62, 127, 242, 235, 62, 49, 93, 110, 191, 210, 77, 167, 62, 31, 123, 41, 62, 81, 52, 3, 191, 1, 100, 195, 62, 7, 173, 132, 190, 229, 58, 229, 63, 63, 232, 207, 62, 26, 96, 136, 191, 103, 37, 133, 62, 172, 118, 62, 61, 160, 230, 239, 62, 143, 251, 60, 63, 61, 131, 153, 62, 55, 206, 49, 63, 181, 132, 224, 190, 94, 243, 29, 190, 190, 18, 31, 187, 57, 155, 90, 63, 17, 5, 188, 188, 63, 195, 221, 188, 73, 232, 118, 191, 152, 145, 13, 190, 239, 8, 42, 63, 59, 129, 106, 191, 134, 174, 62, 190, 7, 156, 247, 190, 106, 195, 123, 62, 235, 28, 228, 62, 100, 35, 142, 62, 201, 81, 129, 63, 203, 200, 13, 62, 86, 174, 176, 62, 82, 158, 12, 63, 143, 208, 94, 190, 49, 228, 142, 190, 248, 62, 161, 191, 151, 236, 170, 190, 138, 1, 15, 63, 152, 94, 136, 191, 24, 212, 243, 190, 42, 231, 26, 62, 130, 66, 212, 191, 250, 36, 201, 190, 135, 149, 152, 62, 88, 88, 222, 63, 208, 71, 153, 62, 16, 185, 16, 191, 139, 198, 67, 191, 135, 96, 120, 190};
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
                alignas(float) const unsigned char memory[] = {133, 221, 254, 190, 29, 186, 21, 61, 31, 145, 119, 190, 100, 47, 192, 62, 179, 134, 251, 189, 94, 70, 93, 62, 94, 254, 4, 191, 125, 135, 103, 61, 37, 77, 206, 189, 116, 211, 173, 61, 36, 60, 181, 62, 57, 93, 202, 60, 113, 38, 141, 190, 70, 228, 167, 189, 110, 216, 7, 191, 230, 123, 79, 191, 90, 15, 251, 190, 215, 224, 200, 190, 176, 35, 183, 62, 144, 176, 63, 191, 132, 202, 226, 189, 84, 70, 239, 62, 129, 22, 3, 63, 251, 178, 43, 62, 126, 82, 116, 62, 212, 217, 131, 61, 84, 8, 53, 62, 131, 148, 46, 190, 209, 181, 2, 191, 87, 10, 183, 62, 93, 230, 64, 62, 34, 161, 25, 63};
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
                alignas(float) const unsigned char memory[] = {255, 94, 108, 62, 164, 6, 128, 60, 209, 3, 36, 61, 137, 12, 17, 62, 101, 193, 86, 60, 186, 190, 74, 62, 70, 244, 166, 189, 165, 11, 213, 60, 80, 12, 191, 60, 119, 99, 30, 62, 76, 151, 218, 190, 154, 232, 19, 189, 14, 140, 97, 62, 191, 229, 14, 191, 204, 132, 67, 61, 110, 50, 146, 188, 131, 123, 5, 189, 172, 171, 25, 190, 55, 131, 198, 189, 135, 151, 24, 62, 113, 45, 243, 189, 51, 39, 36, 62, 193, 88, 171, 61, 131, 18, 236, 61, 182, 155, 60, 190, 224, 191, 172, 62, 152, 81, 75, 62, 29, 43, 38, 61, 21, 30, 5, 191, 198, 76, 143, 190, 60, 20, 78, 62, 79, 60, 135, 189, 153, 31, 46, 189, 80, 124, 27, 190, 214, 1, 228, 61, 78, 178, 114, 62, 250, 230, 39, 188, 90, 189, 81, 188, 227, 89, 128, 61, 223, 32, 215, 61, 210, 235, 11, 190, 231, 237, 164, 61, 105, 52, 236, 188, 31, 217, 93, 190, 80, 228, 131, 62, 233, 87, 195, 190, 158, 228, 235, 62, 138, 7, 129, 188, 216, 3, 163, 190, 104, 227, 140, 191, 84, 116, 120, 62, 225, 195, 21, 191, 237, 35, 133, 190, 46, 136, 166, 62, 218, 27, 177, 189, 59, 64, 254, 188, 244, 50, 69, 191, 51, 48, 73, 62, 30, 13, 18, 62, 254, 2, 190, 189, 59, 152, 251, 190, 225, 75, 147, 60, 34, 151, 136, 61, 41, 220, 195, 189, 231, 48, 78, 189, 27, 184, 49, 190, 68, 58, 154, 188, 247, 51, 108, 62, 230, 32, 32, 62, 180, 244, 4, 190, 198, 194, 128, 60, 136, 106, 169, 189, 88, 54, 10, 190, 202, 22, 101, 62, 180, 100, 185, 61, 228, 25, 48, 61, 43, 200, 205, 62, 167, 131, 80, 191, 95, 189, 65, 62, 247, 0, 17, 190, 47, 16, 173, 190, 141, 164, 145, 190, 200, 44, 158, 60, 203, 157, 187, 62, 132, 210, 171, 190, 107, 242, 193, 62, 91, 202, 6, 189, 168, 176, 247, 59, 49, 201, 127, 190, 111, 79, 198, 62, 120, 133, 134, 60, 39, 201, 93, 190, 230, 60, 36, 191, 172, 133, 218, 190, 252, 109, 92, 190, 45, 28, 255, 60, 236, 94, 75, 190, 142, 255, 2, 189, 4, 208, 10, 62, 100, 66, 41, 62, 177, 152, 62, 62, 16, 18, 116, 190, 206, 110, 84, 62, 22, 227, 30, 190, 21, 60, 179, 187, 203, 185, 166, 62, 169, 232, 138, 60, 33, 66, 48, 61, 143, 92, 227, 61, 180, 1, 10, 189, 232, 199, 40, 190, 9, 225, 137, 190, 9, 76, 56, 191, 205, 150, 182, 61, 86, 64, 40, 62, 176, 68, 47, 63, 221, 156, 18, 62, 97, 141, 1, 62, 44, 115, 127, 190, 253, 58, 93, 189, 83, 133, 229, 189, 214, 60, 145, 62, 171, 245, 118, 62, 134, 78, 165, 61, 24, 92, 21, 189, 203, 106, 59, 190, 174, 59, 157, 189, 39, 126, 133, 189, 113, 11, 191, 60, 86, 126, 87, 62, 139, 206, 56, 61, 116, 169, 18, 61, 64, 57, 9, 189, 98, 197, 66, 62, 146, 95, 174, 188, 16, 224, 47, 62, 191, 96, 175, 190, 120, 44, 3, 62, 184, 41, 47, 189, 229, 189, 197, 189, 255, 79, 126, 59, 52, 178, 82, 190, 243, 88, 61, 61, 124, 229, 21, 60, 243, 91, 107, 61, 8, 143, 212, 189, 168, 114, 219, 58, 224, 147, 43, 190, 145, 97, 132, 61, 148, 104, 224, 62, 113, 249, 62, 62, 43, 85, 249, 61, 3, 208, 23, 62, 23, 107, 154, 61, 6, 78, 52, 61, 182, 52, 242, 188, 218, 171, 158, 189, 218, 129, 145, 61, 57, 137, 152, 62, 240, 154, 183, 188, 52, 164, 38, 190, 253, 31, 162, 190, 118, 199, 86, 188, 213, 135, 61, 189, 22, 99, 19, 190, 48, 170, 61, 189, 40, 218, 1, 190, 55, 173, 9, 61, 97, 46, 139, 59, 213, 51, 21, 190, 169, 163, 143, 61, 110, 21, 127, 59, 158, 3, 52, 190, 227, 27, 110, 62, 23, 169, 29, 62, 178, 10, 34, 62, 134, 125, 236, 61, 178, 12, 105, 190, 54, 16, 175, 190, 172, 89, 188, 188, 45, 74, 4, 189, 253, 13, 25, 189, 61, 175, 10, 188, 211, 86, 156, 189, 121, 175, 73, 190, 242, 115, 180, 189, 229, 5, 95, 190, 84, 177, 175, 189, 13, 185, 199, 61, 29, 4, 28, 62, 70, 136, 84, 190, 225, 235, 183, 189, 158, 121, 1, 61, 6, 154, 144, 190, 129, 57, 210, 189, 192, 72, 120, 61, 135, 216, 23, 62, 88, 35, 62, 190, 17, 12, 86, 61, 120, 110, 128, 62, 150, 61, 200, 190, 177, 169, 191, 62, 70, 88, 161, 189, 241, 214, 168, 189, 94, 185, 220, 62, 104, 217, 51, 191, 254, 120, 194, 62, 250, 29, 45, 62, 121, 11, 80, 189, 242, 104, 40, 191, 160, 169, 47, 189, 168, 195, 38, 62, 228, 145, 29, 191, 236, 134, 239, 62, 35, 212, 110, 190, 181, 31, 10, 191, 28, 207, 140, 190, 205, 173, 234, 62, 4, 1, 135, 62, 241, 5, 150, 189, 98, 234, 229, 190, 33, 163, 79, 190, 16, 202, 205, 189, 86, 88, 0, 62, 19, 115, 149, 61, 60, 158, 83, 188, 190, 253, 57, 57, 166, 22, 21, 62, 246, 194, 27, 62, 99, 232, 14, 189, 24, 38, 170, 189, 70, 162, 62, 190, 103, 97, 87, 61, 198, 215, 243, 189, 70, 238, 180, 58, 32, 95, 8, 190, 174, 142, 161, 189, 44, 169, 133, 61, 254, 16, 16, 62, 169, 134, 233, 61, 24, 118, 255, 61, 199, 26, 194, 186, 194, 246, 33, 190, 32, 203, 178, 189, 91, 252, 171, 61, 42, 64, 10, 60, 124, 187, 10, 61, 147, 0, 78, 189, 8, 20, 199, 189, 30, 153, 15, 190, 139, 112, 65, 189, 8, 199, 2, 188, 237, 235, 32, 190, 122, 103, 55, 190, 39, 124, 197, 189, 122, 120, 16, 190, 107, 11, 17, 61, 190, 128, 111, 190, 215, 191, 109, 190, 250, 39, 20, 189, 127, 145, 149, 62, 21, 43, 209, 190, 94, 123, 20, 62, 181, 154, 245, 190, 146, 102, 23, 190, 121, 206, 134, 61, 163, 54, 179, 62, 120, 166, 147, 62, 197, 131, 32, 191, 189, 190, 203, 190, 106, 201, 19, 191, 181, 242, 14, 189, 22, 107, 252, 189, 235, 232, 245, 191, 115, 214, 112, 62, 15, 207, 126, 190, 153, 97, 103, 191, 87, 209, 27, 62, 174, 55, 59, 62, 167, 30, 3, 191, 132, 194, 21, 62, 15, 212, 10, 62, 132, 254, 77, 188, 171, 69, 21, 62, 102, 48, 54, 190, 143, 140, 194, 59, 16, 227, 221, 191, 207, 123, 188, 62, 120, 196, 222, 61, 186, 62, 135, 188, 148, 46, 37, 60, 39, 64, 117, 62, 49, 169, 36, 188, 73, 12, 19, 190, 140, 170, 221, 61, 27, 126, 38, 62, 235, 187, 48, 187, 79, 255, 103, 188, 79, 247, 47, 62, 169, 109, 87, 62, 101, 153, 218, 61, 200, 148, 71, 191, 105, 160, 83, 61, 94, 43, 128, 62, 239, 201, 149, 61, 212, 230, 58, 191, 154, 7, 140, 62, 228, 244, 237, 189, 129, 16, 119, 191, 14, 0, 66, 62, 21, 185, 243, 61, 102, 111, 59, 191, 83, 161, 171, 61, 108, 50, 215, 62, 184, 171, 180, 189, 158, 23, 151, 61, 248, 64, 40, 191, 248, 153, 24, 62, 63, 36, 207, 190, 171, 196, 69, 189, 223, 167, 54, 62, 78, 221, 99, 188, 247, 59, 124, 62, 37, 38, 181, 190, 253, 138, 206, 61, 230, 224, 5, 190, 56, 222, 92, 189, 234, 181, 44, 189, 26, 113, 248, 61, 92, 100, 35, 62, 188, 14, 3, 61, 50, 122, 132, 62, 150, 216, 105, 62, 54, 199, 158, 62, 183, 190, 176, 62, 160, 102, 110, 62, 0, 8, 221, 188, 38, 12, 234, 185, 47, 213, 109, 191, 23, 196, 131, 62, 43, 140, 192, 189, 136, 0, 139, 189, 139, 114, 51, 191, 76, 124, 238, 189, 27, 102, 221, 189, 128, 48, 46, 190, 217, 221, 141, 62, 184, 166, 216, 62, 128, 100, 184, 62, 3, 88, 71, 190, 244, 40, 212, 60, 227, 151, 184, 190, 173, 79, 19, 63, 248, 9, 148, 190, 185, 114, 60, 190, 127, 11, 62, 60, 197, 56, 184, 61, 26, 248, 214, 61, 34, 161, 31, 61, 77, 57, 79, 189, 73, 238, 138, 190, 72, 83, 128, 62, 78, 159, 164, 189, 138, 145, 175, 62, 134, 61, 96, 62, 48, 127, 87, 190, 36, 199, 162, 61, 141, 170, 63, 62, 72, 187, 116, 190, 61, 99, 95, 190, 2, 132, 137, 189, 171, 154, 0, 62, 51, 132, 200, 189, 246, 115, 46, 62, 46, 183, 235, 189, 84, 170, 226, 61, 119, 134, 151, 190, 0, 68, 149, 62, 82, 238, 4, 62, 165, 144, 162, 62, 3, 57, 148, 190, 72, 142, 5, 190, 111, 64, 232, 61, 210, 162, 150, 190, 26, 105, 34, 62, 241, 63, 53, 190, 235, 51, 196, 190, 16, 55, 57, 190, 220, 26, 80, 189, 22, 208, 218, 190, 95, 23, 230, 60, 205, 148, 63, 191, 231, 190, 239, 190, 117, 56, 58, 62, 229, 220, 115, 62, 137, 26, 43, 62, 15, 171, 31, 190, 71, 188, 126, 189, 204, 191, 118, 189, 165, 86, 52, 62, 225, 178, 150, 190, 58, 51, 251, 191, 18, 135, 135, 188, 34, 4, 99, 189, 105, 89, 255, 190, 81, 217, 14, 191, 209, 234, 87, 62, 203, 214, 197, 190, 50, 70, 43, 61, 61, 104, 136, 60, 81, 180, 216, 61, 165, 182, 114, 189, 106, 136, 18, 62, 227, 35, 76, 62, 74, 129, 231, 191, 162, 152, 92, 62, 70, 212, 144, 190, 32, 0, 110, 61, 2, 107, 227, 61, 147, 235, 20, 190, 141, 93, 4, 62, 247, 96, 26, 62, 134, 54, 209, 189, 160, 214, 66, 62, 231, 97, 95, 62, 18, 122, 50, 61, 252, 48, 245, 190, 89, 208, 119, 189, 175, 56, 67, 62, 29, 231, 109, 191, 13, 227, 48, 62, 141, 61, 159, 62, 47, 94, 212, 61, 87, 61, 109, 190, 43, 244, 221, 190, 86, 101, 108, 62, 95, 59, 184, 189, 242, 0, 102, 189, 195, 39, 144, 190, 189, 146, 13, 61, 13, 89, 24, 190, 85, 168, 68, 62, 156, 144, 109, 62, 41, 212, 22, 191, 50, 143, 15, 190, 174, 146, 28, 191, 61, 38, 119, 189, 193, 247, 192, 190, 21, 224, 196, 189, 19, 143, 174, 189, 16, 152, 142, 61, 200, 180, 161, 189, 2, 246, 180, 61, 168, 189, 21, 190, 108, 21, 68, 190, 80, 162, 150, 62, 117, 134, 132, 189, 145, 134, 195, 188, 132, 48, 228, 188, 249, 219, 138, 190, 164, 180, 12, 191, 153, 156, 136, 62, 203, 197, 139, 190, 63, 245, 51, 62, 156, 191, 92, 62, 154, 104, 103, 190, 1, 2, 192, 189, 42, 207, 97, 190, 7, 176, 127, 62, 112, 222, 68, 189, 140, 203, 100, 61, 93, 162, 214, 188, 183, 180, 189, 61, 157, 190, 30, 191, 163, 3, 194, 189, 166, 173, 108, 190, 33, 165, 243, 61, 234, 92, 54, 62, 183, 7, 139, 190, 93, 122, 231, 61, 207, 23, 202, 190, 37, 199, 211, 62, 62, 77, 42, 62, 59, 184, 53, 190, 49, 0, 220, 189, 166, 181, 39, 190, 96, 40, 23, 191, 24, 177, 105, 62, 123, 178, 171, 190, 13, 190, 166, 60, 218, 45, 12, 62, 57, 62, 187, 190, 79, 214, 163, 190, 24, 168, 176, 62, 52, 98, 129, 189, 212, 38, 68, 60, 176, 20, 40, 62, 66, 64, 220, 61, 3, 195, 180, 190, 46, 126, 139, 60, 20, 119, 155, 60, 28, 202, 86, 189, 106, 206, 80, 62, 85, 192, 45, 62, 211, 151, 179, 61, 212, 59, 157, 190, 134, 140, 3, 189, 31, 152, 69, 190, 50, 71, 47, 62, 71, 210, 36, 62, 4, 76, 220, 189, 132, 106, 61, 62, 109, 204, 11, 190, 61, 116, 204, 60, 181, 48, 64, 62, 5, 163, 218, 190, 242, 4, 3, 62, 108, 52, 56, 62, 23, 175, 123, 61, 5, 248, 144, 62, 48, 139, 135, 62, 120, 134, 66, 62, 6, 92, 121, 191, 86, 125, 139, 190, 242, 167, 207, 61, 164, 44, 0, 191, 8, 135, 95, 62, 19, 142, 53, 62, 228, 159, 245, 188, 123, 154, 158, 190, 42, 220, 247, 190, 6, 4, 98, 189, 134, 9, 89, 62, 134, 60, 11, 61, 247, 171, 245, 60, 66, 129, 187, 61, 247, 121, 15, 59, 167, 190, 166, 62, 200, 253, 146, 186, 234, 165, 175, 190, 142, 105, 8, 191, 239, 163, 102, 190, 128, 168, 8, 62, 159, 190, 29, 191, 34, 126, 10, 189, 143, 73, 163, 190, 210, 77, 2, 191, 52, 6, 61, 190, 121, 76, 21, 191, 199, 186, 125, 189, 31, 39, 0, 191, 30, 62, 130, 62, 128, 152, 74, 190, 182, 29, 88, 191, 185, 197, 211, 62, 151, 226, 126, 190, 66, 220, 85, 190, 51, 149, 8, 63, 54, 218, 28, 61, 214, 4, 1, 62, 159, 37, 188, 61, 217, 205, 240, 188, 192, 105, 138, 190, 87, 131, 30, 62, 61, 223, 32, 62, 42, 25, 112, 190, 118, 96, 185, 62, 25, 228, 5, 61, 14, 112, 49, 189, 55, 63, 58, 190, 231, 43, 217, 190, 126, 243, 158, 190, 26, 196, 172, 60, 111, 35, 12, 63, 78, 153, 176, 61, 109, 200, 153, 62, 132, 52, 175, 61, 83, 109, 167, 61, 119, 181, 185, 62, 251, 26, 118, 190, 233, 123, 254, 187, 198, 15, 52, 62, 189, 175, 151, 189, 54, 71, 125, 62, 230, 132, 194, 61, 201, 138, 185, 62, 132, 230, 205, 191, 247, 197, 50, 60, 230, 184, 81, 62, 234, 106, 62, 191, 159, 50, 96, 62, 159, 87, 181, 62, 59, 254, 176, 61, 6, 216, 121, 190, 30, 203, 99, 191, 161, 23, 23, 60, 119, 209, 60, 62, 239, 46, 27, 62, 17, 80, 42, 190, 53, 85, 92, 62, 149, 5, 71, 61, 80, 173, 156, 62, 55, 94, 5, 62, 125, 141, 1, 191, 84, 77, 82, 191, 240, 21, 60, 190, 86, 56, 251, 61, 131, 36, 95, 191, 243, 197, 6, 190, 133, 161, 119, 61, 204, 94, 174, 188, 108, 68, 165, 190, 210, 65, 81, 190, 121, 131, 1, 191, 130, 226, 131, 188, 148, 42, 71, 61, 86, 3, 151, 61, 105, 188, 67, 190, 111, 184, 131, 190, 243, 241, 252, 190, 137, 63, 67, 191, 17, 154, 118, 62, 99, 254, 16, 62, 160, 143, 151, 62, 147, 188, 227, 61, 169, 234, 132, 189, 86, 14, 75, 190, 102, 224, 41, 190, 255, 255, 237, 62, 51, 44, 140, 190, 221, 104, 122, 188, 32, 11, 245, 62, 42, 105, 136, 62, 208, 9, 239, 190, 157, 80, 141, 188, 28, 110, 109, 190, 20, 2, 181, 62, 76, 207, 97, 62, 43, 196, 0, 191, 148, 41, 81, 190, 30, 132, 25, 190, 169, 199, 51, 189, 242, 180, 109, 61, 13, 217, 7, 190, 182, 154, 133, 61, 112, 178, 91, 189, 226, 43, 221, 61, 202, 170, 239, 61, 180, 152, 5, 190, 195, 123, 51, 61, 91, 230, 173, 61, 255, 100, 161, 61, 214, 136, 76, 190, 207, 242, 34, 190, 103, 110, 75, 61, 225, 1, 57, 62, 133, 219, 191, 189, 197, 183, 158, 190, 49, 95, 137, 190, 80, 236, 93, 189, 158, 240, 133, 190, 203, 210, 97, 190, 80, 28, 193, 61, 173, 77, 80, 190, 55, 224, 143, 189, 105, 201, 8, 190, 64, 134, 155, 61, 11, 174, 109, 190, 32, 137, 251, 189, 93, 84, 146, 190, 166, 255, 49, 190, 171, 113, 164, 190, 134, 66, 240, 189, 156, 34, 155, 60, 157, 50, 211, 61, 126, 16, 157, 61, 21, 125, 55, 62, 252, 27, 74, 62, 149, 63, 226, 187, 119, 35, 170, 61, 189, 133, 18, 190, 30, 47, 12, 62, 226, 55, 4, 191, 10, 73, 190, 62, 67, 118, 107, 62, 211, 251, 244, 190, 194, 126, 184, 62, 211, 204, 137, 62, 111, 32, 217, 61, 118, 101, 164, 190, 46, 55, 74, 190, 29, 151, 46, 62, 207, 153, 164, 61, 220, 83, 138, 62, 120, 142, 38, 62, 171, 194, 23, 61, 190, 49, 179, 190, 194, 142, 65, 62, 49, 162, 52, 61, 174, 176, 193, 190, 245, 117, 54, 191, 153, 194, 114, 190, 220, 161, 22, 62, 121, 102, 136, 190, 201, 173, 5, 191, 213, 83, 82, 61, 177, 90, 146, 61, 125, 63, 17, 62, 7, 128, 28, 62, 46, 9, 81, 62, 250, 55, 248, 189, 49, 116, 207, 187, 81, 131, 111, 62, 51, 141, 217, 61, 167, 92, 18, 191, 150, 50, 55, 190, 240, 31, 115, 62, 241, 34, 29, 191, 154, 76, 177, 62, 77, 107, 153, 62, 181, 126, 19, 190, 103, 191, 29, 190, 220, 142, 45, 191, 7, 110, 248, 61, 23, 216, 221, 190, 161, 221, 46, 62, 70, 118, 134, 191, 167, 114, 241, 190, 220, 18, 1, 190, 31, 3, 146, 62, 175, 246, 2, 62, 86, 254, 69, 190, 8, 29, 216, 190, 196, 215, 82, 191, 218, 96, 80, 62, 28, 167, 253, 190, 60, 38, 15, 190, 208, 221, 8, 62, 83, 215, 74, 62, 115, 166, 107, 61, 18, 238, 124, 189, 89, 33, 244, 60, 32, 221, 202, 61, 244, 3, 201, 60, 23, 4, 133, 61, 29, 94, 131, 62, 105, 214, 210, 61, 242, 248, 25, 191, 137, 74, 215, 190, 60, 236, 2, 190, 67, 124, 154, 187, 67, 43, 85, 62, 206, 98, 221, 188, 227, 59, 184, 189, 199, 138, 254, 189, 222, 182, 146, 190, 75, 9, 23, 62, 221, 246, 165, 62, 212, 115, 77, 61, 216, 3, 73, 62, 218, 195, 158, 62, 46, 59, 175, 190, 119, 92, 63, 62, 197, 142, 250, 190, 218, 158, 81, 60, 137, 66, 41, 62, 190, 49, 9, 188, 110, 13, 134, 189, 116, 6, 229, 190, 238, 59, 34, 62, 230, 175, 125, 62, 159, 137, 69, 61, 19, 34, 203, 61, 54, 81, 171, 190, 45, 40, 1, 189, 69, 28, 213, 189, 3, 148, 130, 62, 98, 231, 80, 62, 147, 191, 19, 62, 0, 64, 164, 188, 155, 169, 190, 190, 205, 199, 129, 191, 21, 55, 109, 190, 208, 141, 245, 188, 104, 183, 26, 189, 84, 4, 6, 190, 242, 177, 27, 62, 246, 41, 166, 190, 194, 65, 111, 190, 255, 88, 116, 62, 75, 29, 65, 190, 212, 143, 173, 190, 89, 154, 38, 191, 28, 105, 54, 62, 74, 126, 174, 189, 120, 47, 225, 189, 230, 59, 227, 190, 98, 14, 148, 190, 167, 98, 123, 190, 79, 160, 169, 189, 13, 222, 130, 191, 189, 135, 134, 62, 59, 131, 77, 62, 82, 190, 12, 61, 243, 123, 156, 190, 73, 189, 117, 61, 194, 104, 143, 191, 52, 199, 50, 59, 239, 12, 169, 62, 186, 217, 192, 190, 95, 45, 172, 62, 240, 210, 47, 192, 254, 13, 2, 191, 58, 57, 185, 62, 205, 5, 59, 190, 139, 82, 130, 190, 100, 178, 99, 62, 228, 52, 197, 189, 235, 161, 4, 189, 196, 195, 201, 190, 201, 17, 7, 61, 234, 12, 15, 62, 87, 195, 159, 62, 135, 10, 18, 62, 180, 89, 133, 61, 250, 15, 240, 190, 95, 200, 65, 190, 67, 29, 194, 191, 4, 60, 65, 63, 82, 3, 167, 189, 31, 118, 66, 61, 174, 93, 131, 62, 48, 172, 52, 191, 190, 215, 224, 62, 198, 108, 217, 62, 36, 181, 94, 62, 86, 65, 77, 62, 99, 51, 177, 61, 14, 194, 71, 191, 75, 60, 221, 188, 1, 50, 182, 62, 168, 178, 33, 190, 192, 199, 172, 62, 243, 122, 3, 192, 133, 144, 101, 190, 200, 92, 156, 62, 213, 42, 237, 189, 139, 136, 241, 61, 222, 199, 61, 61, 108, 30, 15, 62, 122, 211, 133, 190, 106, 164, 177, 190, 86, 171, 86, 62, 226, 73, 26, 62, 248, 207, 179, 59, 147, 13, 142, 62, 93, 103, 18, 62, 92, 21, 179, 190, 150, 161, 98, 190, 160, 125, 32, 191, 158, 129, 47, 63, 255, 156, 29, 189, 141, 40, 175, 61, 213, 133, 37, 61, 244, 67, 106, 61, 253, 115, 161, 190, 101, 109, 203, 61, 35, 212, 1, 191, 19, 51, 173, 190, 225, 196, 240, 61, 131, 121, 150, 190, 4, 148, 144, 62, 254, 97, 22, 191, 145, 98, 10, 62, 73, 186, 212, 191, 37, 195, 62, 60, 158, 15, 169, 62, 18, 230, 219, 190, 247, 146, 33, 62, 241, 185, 183, 61, 3, 119, 120, 189, 183, 83, 167, 189, 172, 118, 250, 190, 7, 170, 201, 61, 193, 197, 144, 62, 149, 246, 253, 61, 243, 164, 70, 189, 126, 88, 213, 61, 148, 167, 69, 62, 112, 209, 48, 62, 192, 40, 55, 189, 215, 234, 107, 191, 164, 85, 240, 191, 63, 87, 63, 190, 235, 199, 154, 62, 119, 62, 32, 191, 225, 177, 233, 61, 120, 250, 184, 189, 14, 208, 74, 189, 44, 84, 68, 189, 170, 232, 200, 61, 253, 156, 94, 62, 136, 25, 234, 61, 227, 68, 176, 188, 115, 92, 149, 190, 56, 41, 21, 62, 3, 33, 160, 60, 43, 147, 182, 61, 2, 210, 22, 62, 27, 17, 174, 190, 160, 252, 170, 188, 162, 113, 174, 62, 211, 237, 111, 62, 193, 207, 47, 60, 190, 62, 15, 62, 179, 29, 196, 189, 134, 77, 21, 62, 99, 110, 21, 62, 205, 96, 128, 62, 77, 175, 157, 61, 69, 253, 18, 61, 234, 122, 103, 61, 212, 61, 32, 60, 96, 170, 181, 61, 174, 52, 24, 190, 50, 111, 136, 61, 116, 65, 232, 187, 113, 69, 26, 190, 36, 196, 54, 190, 122, 145, 170, 189, 15, 110, 48, 62, 145, 233, 171, 61, 111, 242, 50, 190, 20, 116, 88, 190, 123, 178, 133, 58, 234, 30, 183, 62, 102, 250, 8, 60, 52, 244, 42, 61, 22, 207, 20, 62, 192, 67, 215, 190, 186, 186, 71, 191, 149, 195, 190, 62, 243, 217, 4, 62, 104, 9, 41, 62, 12, 112, 7, 62, 181, 122, 158, 189, 244, 151, 177, 190, 246, 38, 162, 190, 221, 86, 102, 62, 243, 5, 17, 190, 106, 250, 158, 62, 102, 62, 7, 62, 33, 68, 43, 62, 41, 167, 36, 191, 144, 99, 185, 189, 250, 228, 130, 189, 71, 188, 138, 62, 132, 207, 12, 62, 100, 225, 177, 190, 28, 206, 229, 61, 179, 41, 136, 191, 85, 112, 227, 60, 234, 106, 16, 188, 60, 159, 17, 63, 74, 93, 69, 189, 136, 244, 147, 62, 198, 70, 249, 190, 254, 154, 136, 190, 91, 166, 240, 62, 167, 126, 238, 189, 177, 144, 222, 190, 83, 128, 145, 191, 52, 182, 80, 190, 195, 49, 111, 190, 244, 10, 12, 191, 182, 80, 236, 190, 226, 51, 147, 59, 227, 172, 144, 62, 29, 10, 13, 62, 111, 42, 142, 190, 16, 118, 89, 191, 88, 245, 231, 62, 145, 57, 90, 190, 77, 221, 40, 191, 220, 245, 145, 62, 223, 216, 48, 61, 136, 224, 159, 190, 128, 159, 178, 191, 39, 25, 114, 190, 93, 82, 130, 191, 78, 139, 30, 61, 246, 236, 189, 189, 132, 184, 181, 190, 67, 214, 146, 61, 232, 100, 127, 62, 30, 74, 215, 189, 208, 229, 24, 190, 62, 104, 147, 60, 132, 232, 205, 190, 125, 118, 89, 62, 173, 109, 173, 190, 87, 140, 175, 189, 133, 68, 128, 60, 147, 190, 15, 191, 202, 41, 247, 190, 204, 104, 80, 62, 203, 213, 99, 60, 90, 84, 64, 62, 211, 79, 51, 62, 229, 241, 195, 189, 113, 167, 45, 190, 220, 162, 217, 190, 100, 11, 116, 62, 189, 76, 121, 190, 40, 12, 98, 62, 166, 74, 164, 62, 7, 115, 88, 58, 183, 130, 231, 190, 205, 124, 28, 62, 106, 3, 221, 189, 176, 252, 121, 62, 187, 26, 238, 60, 95, 62, 149, 190, 117, 16, 72, 62};
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
                alignas(float) const unsigned char memory[] = {193, 39, 46, 62, 72, 208, 125, 62, 225, 86, 141, 61, 28, 80, 129, 189, 240, 128, 215, 62, 108, 189, 3, 62, 86, 241, 96, 62, 127, 19, 6, 190, 146, 121, 35, 62, 19, 68, 27, 62, 244, 234, 178, 190, 32, 112, 216, 59, 198, 93, 181, 61, 172, 106, 78, 190, 6, 255, 128, 62, 19, 241, 25, 190, 177, 224, 233, 188, 223, 125, 0, 190, 56, 113, 83, 62, 208, 249, 8, 190, 162, 115, 177, 59, 75, 198, 27, 188, 131, 94, 106, 190, 167, 164, 19, 62, 176, 216, 34, 62, 146, 31, 9, 188, 197, 167, 175, 187, 40, 116, 139, 189, 219, 247, 67, 62, 230, 14, 187, 188, 4, 203, 37, 188, 215, 92, 169, 61};
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
                alignas(float) const unsigned char memory[] = {11, 106, 13, 190, 154, 14, 188, 190, 117, 228, 23, 191, 177, 127, 63, 62, 249, 130, 211, 187, 165, 241, 15, 190, 202, 197, 47, 191, 22, 161, 101, 189, 99, 151, 128, 191, 253, 122, 50, 191, 2, 93, 29, 63, 38, 69, 101, 190, 53, 158, 141, 191, 19, 127, 1, 191, 159, 86, 93, 62, 116, 87, 54, 62, 1, 132, 140, 190, 81, 55, 8, 63, 106, 227, 47, 191, 78, 91, 247, 62, 195, 118, 160, 189, 70, 203, 148, 190, 138, 220, 62, 63, 170, 75, 133, 61, 17, 210, 54, 191, 249, 203, 66, 63, 78, 188, 205, 62, 126, 65, 207, 190, 124, 30, 12, 188, 22, 247, 4, 63, 52, 185, 136, 63, 42, 205, 153, 62, 129, 251, 81, 190, 31, 171, 232, 187, 4, 211, 147, 62, 16, 167, 120, 190, 213, 202, 219, 190, 118, 85, 109, 62, 227, 86, 197, 62, 101, 232, 220, 61, 163, 104, 233, 61, 143, 8, 75, 62, 140, 60, 218, 61, 176, 31, 238, 61, 103, 42, 149, 188, 122, 120, 211, 62, 91, 170, 148, 190, 130, 32, 33, 190, 39, 247, 135, 189, 60, 22, 122, 189, 166, 219, 127, 190, 133, 30, 225, 62, 87, 226, 80, 189, 173, 181, 50, 189, 4, 55, 26, 63, 157, 45, 221, 190, 106, 139, 0, 63, 229, 97, 140, 190, 28, 6, 85, 190, 11, 179, 211, 188, 168, 212, 142, 190, 78, 149, 201, 189, 118, 56, 30, 62, 11, 151, 40, 190};
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
                alignas(float) const unsigned char memory[] = {189, 9, 160, 189, 62, 71, 226, 190};
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
    alignas(float) const unsigned char memory[] = {183, 183, 41, 191, 92, 174, 8, 192, 12, 58, 131, 63};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {41, 243, 14, 64, 55, 233, 4, 192};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0030/steps/000000000018000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}