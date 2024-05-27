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
                alignas(float) const unsigned char memory[] = {233, 146, 204, 190, 50, 198, 125, 62, 48, 79, 218, 190, 113, 198, 182, 61, 162, 26, 52, 63, 186, 35, 18, 191, 113, 27, 23, 63, 222, 125, 19, 63, 227, 80, 0, 191, 65, 171, 30, 191, 106, 85, 68, 63, 98, 169, 113, 62, 76, 68, 231, 62, 11, 110, 15, 61, 13, 46, 190, 190, 10, 205, 88, 190, 138, 128, 82, 63, 28, 225, 83, 61, 102, 169, 170, 62, 219, 164, 72, 63, 1, 242, 15, 62, 161, 166, 49, 188, 51, 156, 56, 191, 177, 178, 210, 189, 154, 55, 183, 62, 238, 91, 146, 62, 49, 17, 224, 190, 241, 231, 99, 63, 143, 105, 18, 191, 68, 129, 84, 61, 77, 89, 34, 63, 240, 116, 102, 63, 118, 46, 169, 62, 96, 210, 183, 189, 86, 164, 55, 190, 21, 104, 216, 62, 26, 185, 157, 190, 118, 32, 16, 62, 9, 3, 151, 61, 239, 183, 12, 191, 186, 63, 97, 191, 38, 101, 99, 189, 81, 134, 37, 63, 99, 250, 152, 62, 123, 76, 99, 62, 75, 239, 49, 191, 226, 242, 85, 191, 4, 240, 136, 62, 159, 197, 246, 62, 4, 1, 179, 62, 177, 129, 56, 62, 8, 19, 48, 62, 141, 38, 81, 191, 183, 158, 232, 62, 7, 62, 174, 62, 49, 203, 141, 63, 71, 14, 180, 62, 66, 190, 141, 190, 71, 173, 200, 189, 226, 68, 27, 63, 82, 124, 156, 62, 11, 29, 134, 63, 163, 249, 191, 62, 211, 108, 249, 189, 103, 230, 169, 63, 72, 86, 7, 63, 94, 69, 40, 189, 149, 117, 30, 63, 19, 133, 0, 63, 82, 61, 183, 62, 125, 37, 176, 62, 1, 93, 174, 189, 245, 10, 70, 190, 112, 51, 144, 63, 175, 104, 136, 62, 74, 5, 25, 191, 110, 173, 121, 61, 216, 87, 83, 191, 136, 80, 136, 61, 108, 246, 157, 191, 121, 254, 192, 190, 193, 123, 42, 63, 14, 63, 148, 191, 162, 245, 166, 190, 108, 226, 41, 190, 207, 156, 142, 62, 102, 192, 50, 191, 20, 228, 217, 190, 254, 90, 151, 191, 208, 71, 135, 190, 19, 194, 44, 191, 162, 131, 132, 190, 57, 107, 35, 62, 13, 122, 150, 190, 75, 247, 65, 61, 248, 153, 19, 63};
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
                alignas(float) const unsigned char memory[] = {51, 251, 53, 191, 51, 246, 96, 191, 196, 170, 172, 189, 137, 83, 113, 61, 209, 37, 174, 190, 69, 28, 251, 62, 42, 32, 136, 188, 107, 246, 216, 62, 193, 148, 135, 190, 22, 40, 130, 61, 149, 189, 133, 61, 12, 1, 36, 189, 10, 0, 37, 63, 121, 228, 189, 62, 36, 47, 33, 191, 9, 135, 31, 190, 53, 106, 8, 191, 198, 198, 2, 62, 58, 172, 171, 190, 185, 213, 184, 190, 30, 44, 95, 189, 42, 250, 136, 62, 5, 29, 7, 63, 205, 158, 253, 62, 239, 100, 184, 189, 244, 56, 51, 190, 16, 184, 95, 62, 231, 45, 54, 190, 189, 180, 73, 190, 184, 1, 47, 63, 85, 201, 40, 190, 199, 143, 102, 190};
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
                alignas(float) const unsigned char memory[] = {79, 158, 165, 60, 243, 49, 224, 62, 247, 7, 137, 62, 0, 120, 46, 62, 85, 222, 215, 60, 88, 44, 4, 63, 136, 145, 239, 190, 208, 36, 125, 186, 165, 114, 37, 62, 54, 254, 169, 62, 97, 99, 75, 190, 175, 129, 153, 186, 13, 48, 24, 189, 103, 25, 146, 190, 249, 117, 104, 191, 13, 136, 160, 59, 107, 98, 88, 191, 12, 221, 60, 62, 36, 225, 212, 190, 36, 165, 47, 62, 13, 46, 172, 190, 230, 74, 71, 62, 235, 15, 0, 62, 124, 253, 236, 62, 120, 88, 68, 62, 136, 183, 122, 58, 18, 135, 199, 190, 249, 229, 10, 62, 80, 205, 179, 189, 251, 189, 130, 190, 102, 192, 75, 62, 135, 236, 101, 61, 247, 123, 31, 190, 119, 160, 86, 62, 222, 130, 168, 62, 139, 30, 121, 188, 125, 253, 111, 189, 231, 220, 112, 62, 170, 167, 128, 62, 210, 14, 180, 189, 31, 158, 151, 60, 236, 50, 26, 190, 129, 190, 110, 62, 242, 228, 19, 190, 241, 226, 33, 61, 40, 119, 35, 190, 92, 176, 95, 190, 70, 231, 73, 190, 4, 246, 1, 191, 44, 103, 135, 189, 51, 111, 5, 191, 71, 172, 144, 190, 168, 164, 26, 190, 115, 151, 186, 189, 109, 166, 199, 189, 207, 130, 162, 61, 155, 6, 21, 191, 199, 104, 68, 189, 220, 99, 193, 189, 211, 78, 60, 191, 150, 193, 243, 189, 12, 36, 167, 190, 166, 156, 80, 190, 149, 195, 47, 190, 172, 81, 43, 61, 211, 110, 242, 62, 49, 172, 22, 62, 236, 175, 204, 189, 121, 182, 244, 189, 21, 26, 138, 62, 55, 73, 197, 62, 139, 176, 189, 190, 48, 70, 146, 61, 66, 35, 252, 188, 203, 126, 195, 62, 112, 171, 244, 188, 177, 18, 121, 62, 90, 87, 237, 190, 16, 56, 245, 62, 98, 152, 63, 187, 81, 14, 122, 62, 212, 188, 240, 59, 65, 219, 25, 189, 184, 166, 199, 61, 111, 24, 246, 61, 124, 249, 8, 62, 76, 175, 72, 62, 99, 133, 169, 62, 61, 145, 221, 189, 52, 74, 217, 60, 142, 146, 71, 190, 184, 8, 28, 191, 24, 183, 165, 190, 121, 132, 112, 191, 209, 237, 66, 190, 150, 217, 68, 189, 173, 253, 84, 189, 243, 117, 199, 61, 147, 50, 72, 61, 32, 124, 237, 189, 54, 125, 124, 61, 124, 184, 68, 61, 248, 209, 24, 62, 217, 182, 135, 189, 105, 180, 134, 189, 65, 242, 83, 61, 128, 247, 193, 60, 7, 204, 15, 62, 133, 169, 95, 61, 99, 217, 184, 189, 108, 1, 46, 62, 82, 167, 48, 190, 60, 134, 66, 61, 16, 123, 15, 190, 16, 134, 27, 62, 136, 86, 108, 59, 82, 195, 26, 190, 218, 146, 225, 189, 209, 205, 47, 190, 130, 205, 38, 190, 155, 107, 29, 62, 216, 85, 42, 190, 212, 92, 162, 61, 91, 38, 245, 61, 157, 62, 168, 189, 247, 52, 254, 189, 18, 208, 163, 61, 23, 92, 248, 61, 109, 122, 37, 61, 96, 124, 102, 61, 67, 27, 52, 190, 104, 153, 57, 60, 90, 25, 243, 189, 12, 142, 194, 61, 96, 211, 185, 61, 115, 228, 114, 61, 4, 212, 27, 190, 14, 245, 151, 61, 200, 173, 143, 62, 124, 21, 182, 189, 210, 201, 77, 62, 135, 129, 146, 62, 197, 41, 184, 189, 72, 199, 33, 190, 10, 49, 36, 190, 69, 90, 182, 189, 168, 147, 167, 189, 78, 207, 55, 190, 252, 168, 222, 61, 20, 203, 171, 61, 237, 108, 56, 62, 140, 71, 67, 62, 194, 4, 6, 61, 165, 190, 175, 61, 217, 223, 35, 62, 153, 218, 10, 190, 94, 129, 115, 62, 178, 227, 13, 61, 96, 109, 58, 62, 96, 125, 154, 189, 61, 170, 45, 188, 101, 191, 161, 189, 238, 45, 186, 60, 78, 220, 182, 189, 209, 161, 16, 190, 46, 177, 229, 189, 152, 217, 1, 190, 156, 156, 167, 60, 200, 218, 170, 188, 35, 220, 182, 189, 35, 156, 7, 188, 115, 107, 30, 190, 159, 20, 81, 190, 49, 33, 64, 61, 4, 81, 54, 189, 195, 108, 159, 189, 20, 190, 159, 189, 95, 239, 2, 188, 251, 67, 116, 189, 230, 187, 70, 189, 36, 167, 217, 188, 66, 92, 18, 188, 30, 201, 177, 61, 76, 217, 74, 190, 190, 151, 47, 190, 191, 109, 152, 189, 158, 96, 55, 189, 88, 20, 245, 188, 84, 191, 201, 61, 113, 192, 25, 188, 229, 123, 190, 189, 204, 207, 55, 61, 59, 140, 48, 62, 216, 72, 198, 190, 188, 150, 24, 189, 21, 187, 205, 190, 35, 47, 214, 61, 195, 123, 196, 189, 249, 121, 217, 62, 235, 116, 219, 61, 60, 24, 168, 190, 38, 20, 32, 190, 187, 232, 128, 62, 200, 225, 80, 62, 93, 70, 158, 61, 180, 21, 16, 62, 222, 10, 234, 62, 21, 113, 90, 62, 31, 40, 94, 61, 58, 187, 178, 60, 214, 59, 7, 60, 13, 109, 97, 189, 17, 201, 48, 60, 129, 80, 137, 188, 165, 5, 158, 189, 232, 24, 205, 61, 237, 36, 31, 191, 204, 169, 160, 62, 130, 79, 120, 61, 103, 175, 58, 191, 208, 1, 205, 61, 123, 253, 231, 60, 111, 225, 181, 189, 153, 75, 94, 187, 192, 184, 51, 190, 138, 96, 111, 61, 239, 190, 103, 190, 88, 197, 158, 62, 251, 32, 233, 61, 2, 110, 132, 62, 57, 184, 2, 60, 5, 101, 128, 189, 93, 175, 30, 190, 201, 241, 73, 189, 129, 130, 66, 190, 79, 41, 86, 190, 131, 236, 31, 62, 228, 84, 97, 188, 158, 42, 126, 61, 181, 101, 77, 61, 241, 4, 55, 188, 49, 73, 127, 190, 41, 95, 19, 190, 10, 104, 3, 190, 203, 13, 64, 188, 116, 54, 76, 189, 68, 8, 58, 188, 182, 167, 11, 62, 125, 177, 27, 62, 197, 210, 51, 190, 113, 128, 11, 62, 87, 39, 57, 62, 66, 243, 152, 190, 83, 247, 209, 189, 41, 207, 194, 60, 237, 198, 22, 190, 170, 20, 120, 189, 183, 165, 211, 189, 103, 229, 17, 190, 134, 206, 21, 190, 45, 0, 133, 61, 213, 206, 30, 190, 46, 221, 175, 189, 68, 78, 8, 62, 124, 241, 237, 61, 76, 18, 189, 61, 191, 59, 20, 62, 165, 112, 242, 188, 246, 162, 80, 189, 141, 117, 213, 60, 59, 236, 97, 190, 34, 206, 222, 60, 207, 37, 34, 190, 8, 201, 25, 61, 211, 177, 129, 189, 172, 42, 147, 189, 52, 108, 38, 190, 80, 205, 119, 61, 131, 10, 215, 188, 96, 213, 219, 189, 138, 110, 0, 62, 62, 238, 233, 61, 83, 75, 63, 189, 89, 126, 22, 190, 41, 214, 213, 60, 142, 115, 119, 189, 204, 241, 225, 189, 95, 253, 130, 61, 176, 1, 203, 61, 212, 12, 142, 60, 79, 46, 62, 190, 84, 245, 142, 61, 41, 25, 16, 190, 71, 194, 90, 189, 21, 145, 7, 189, 168, 47, 221, 189, 180, 138, 181, 187, 148, 158, 22, 190, 141, 171, 62, 190, 73, 190, 234, 61, 73, 145, 173, 189, 202, 55, 138, 189, 1, 67, 92, 61, 235, 130, 3, 62, 103, 18, 33, 190, 210, 188, 187, 189, 32, 44, 19, 190, 101, 156, 179, 60, 128, 43, 189, 189, 59, 46, 185, 60, 255, 191, 132, 61, 255, 119, 73, 190, 155, 39, 62, 187, 31, 251, 10, 62, 225, 193, 189, 189, 202, 252, 42, 190, 94, 148, 181, 189, 109, 88, 40, 62, 238, 75, 149, 189, 82, 66, 58, 190, 103, 101, 90, 60, 62, 149, 0, 189, 81, 201, 66, 62, 183, 29, 40, 190, 101, 213, 26, 190, 172, 75, 27, 189, 238, 141, 169, 61, 127, 120, 118, 189, 211, 213, 41, 60, 217, 78, 149, 62, 88, 188, 209, 62, 200, 71, 46, 189, 123, 59, 62, 62, 13, 196, 198, 190, 67, 66, 127, 62, 181, 108, 203, 189, 26, 160, 128, 61, 15, 37, 67, 61, 27, 89, 189, 188, 29, 209, 16, 189, 14, 230, 102, 62, 238, 243, 106, 61, 141, 105, 149, 60, 92, 149, 220, 62, 253, 206, 83, 188, 2, 120, 107, 59, 141, 84, 224, 189, 213, 52, 138, 190, 58, 80, 119, 189, 67, 217, 19, 191, 77, 253, 90, 189, 17, 67, 111, 62, 218, 142, 101, 62, 10, 173, 229, 190, 240, 146, 152, 189, 197, 31, 153, 190, 90, 246, 34, 190, 87, 223, 1, 62, 95, 206, 17, 63, 235, 178, 24, 62, 143, 157, 190, 190, 169, 121, 3, 190, 37, 151, 218, 62, 114, 217, 97, 61, 78, 166, 90, 61, 83, 156, 122, 61, 124, 206, 177, 62, 38, 237, 133, 62, 235, 148, 234, 62, 91, 22, 89, 190, 129, 139, 136, 62, 56, 169, 253, 188, 118, 64, 184, 61, 177, 243, 247, 189, 57, 188, 2, 188, 242, 28, 42, 62, 189, 75, 84, 190, 252, 19, 173, 62, 123, 170, 18, 62, 69, 207, 79, 191, 123, 92, 51, 62, 77, 255, 6, 189, 34, 19, 9, 61, 36, 170, 85, 190, 158, 138, 60, 62, 153, 45, 206, 189, 10, 205, 73, 190, 237, 177, 144, 190, 71, 19, 139, 190, 106, 220, 19, 62, 249, 121, 157, 62, 205, 31, 220, 60, 233, 122, 170, 190, 44, 199, 78, 62, 95, 255, 151, 62, 157, 169, 240, 189, 174, 145, 93, 62, 21, 235, 103, 62, 122, 199, 207, 62, 3, 157, 204, 62, 20, 229, 78, 61, 33, 115, 229, 190, 103, 176, 202, 62, 170, 153, 27, 191, 246, 10, 132, 61, 246, 200, 55, 191, 218, 180, 119, 190, 140, 157, 188, 61, 110, 112, 99, 191, 12, 97, 105, 62, 231, 209, 205, 189, 43, 37, 69, 191, 95, 133, 134, 62, 36, 98, 26, 62, 53, 32, 68, 62, 169, 151, 32, 190, 80, 95, 97, 62, 34, 70, 22, 62, 144, 108, 68, 190, 34, 236, 61, 191, 96, 42, 185, 189, 200, 115, 98, 61, 128, 56, 71, 188, 150, 233, 155, 61, 27, 81, 109, 61, 42, 229, 44, 191, 190, 251, 89, 62, 186, 146, 39, 62, 223, 26, 7, 190, 101, 202, 163, 61, 176, 107, 93, 189, 248, 179, 35, 63, 59, 238, 44, 190, 97, 1, 53, 62, 119, 74, 180, 188, 71, 41, 0, 190, 160, 29, 20, 59, 45, 194, 145, 191, 230, 194, 221, 190, 110, 76, 111, 190, 180, 144, 24, 191, 161, 157, 152, 61, 252, 56, 6, 62, 250, 155, 148, 188, 250, 37, 251, 188, 54, 213, 76, 62, 31, 178, 12, 63, 8, 46, 137, 190, 145, 155, 121, 190, 158, 4, 137, 59, 185, 234, 100, 62, 213, 247, 12, 189, 46, 144, 201, 61, 115, 194, 131, 60, 93, 50, 196, 190, 143, 40, 248, 61, 122, 253, 34, 61, 207, 102, 19, 63, 104, 251, 17, 190, 42, 71, 174, 189, 39, 195, 183, 61, 65, 254, 164, 61, 156, 40, 53, 191, 190, 234, 196, 189, 189, 150, 53, 191, 68, 153, 42, 62, 242, 96, 221, 190, 191, 193, 55, 61, 143, 157, 121, 190, 135, 224, 36, 61, 66, 162, 144, 189, 187, 207, 194, 61, 181, 19, 12, 188, 82, 56, 23, 190, 102, 239, 180, 189, 135, 164, 43, 189, 68, 51, 134, 190, 19, 183, 67, 189, 27, 159, 241, 61, 42, 122, 173, 61, 103, 247, 181, 61, 69, 17, 200, 60, 85, 147, 169, 189, 219, 95, 171, 188, 54, 104, 158, 190, 7, 91, 18, 190, 138, 164, 215, 61, 194, 18, 56, 60, 208, 41, 215, 189, 168, 108, 89, 191, 126, 118, 125, 189, 9, 51, 33, 61, 96, 239, 43, 62, 34, 44, 128, 62, 247, 58, 58, 189, 0, 142, 211, 187, 138, 107, 52, 62, 71, 14, 100, 190, 10, 173, 29, 190, 107, 49, 65, 190, 120, 130, 132, 61, 222, 50, 141, 190, 134, 72, 211, 189, 192, 198, 232, 189, 22, 45, 137, 190, 87, 212, 250, 61, 235, 101, 171, 61, 222, 138, 85, 190, 62, 22, 132, 61, 139, 73, 231, 61, 135, 180, 20, 62, 238, 240, 88, 61, 132, 44, 188, 190, 245, 91, 146, 62, 87, 92, 130, 61, 243, 167, 207, 60, 236, 174, 122, 62, 52, 225, 17, 62, 149, 189, 205, 190, 231, 227, 152, 189, 118, 229, 202, 62, 236, 30, 176, 62, 241, 184, 101, 190, 0, 72, 148, 189, 236, 54, 105, 188, 222, 212, 129, 190, 250, 113, 248, 190, 77, 84, 12, 62, 69, 55, 25, 191, 154, 76, 129, 62, 25, 222, 91, 189, 17, 61, 137, 62, 240, 229, 145, 190, 103, 230, 135, 189, 61, 255, 16, 62, 248, 11, 243, 61, 104, 77, 122, 61, 31, 183, 45, 190, 133, 24, 122, 61, 34, 217, 220, 62, 176, 239, 77, 190, 229, 118, 217, 61, 30, 226, 1, 61, 125, 105, 100, 62, 98, 115, 38, 62, 189, 51, 137, 189, 41, 117, 177, 61, 233, 145, 42, 62, 178, 33, 140, 190, 143, 101, 150, 62, 2, 190, 3, 191, 51, 212, 16, 190, 109, 27, 205, 189, 146, 202, 139, 62, 228, 46, 167, 188, 215, 199, 96, 189, 191, 248, 6, 62, 121, 48, 45, 189, 113, 33, 213, 190, 229, 52, 54, 190, 85, 149, 212, 190, 189, 242, 22, 190, 234, 148, 50, 190, 40, 15, 116, 62, 217, 31, 143, 190, 154, 114, 51, 61, 69, 47, 50, 62, 246, 3, 45, 190, 194, 157, 170, 61, 54, 103, 133, 61, 146, 241, 216, 191, 195, 140, 77, 191, 42, 46, 200, 61, 201, 87, 28, 62, 96, 229, 61, 62, 52, 167, 57, 62, 108, 217, 164, 61, 77, 163, 113, 190, 254, 226, 53, 190, 138, 132, 18, 190, 116, 98, 151, 189, 31, 169, 41, 62, 117, 70, 2, 62, 4, 109, 50, 188, 252, 167, 126, 190, 76, 129, 232, 188, 202, 193, 41, 62, 203, 7, 188, 60, 237, 124, 105, 62, 246, 147, 0, 60, 200, 166, 95, 62, 148, 143, 216, 59, 220, 163, 16, 190, 203, 23, 114, 189, 152, 173, 51, 190, 83, 193, 96, 190, 105, 235, 157, 62, 94, 234, 169, 188, 58, 132, 198, 189, 50, 1, 184, 62, 39, 52, 35, 190, 193, 67, 148, 62, 168, 28, 89, 61, 64, 210, 23, 191, 93, 236, 103, 61, 163, 253, 246, 189, 196, 104, 59, 190, 248, 180, 208, 189, 195, 208, 139, 189, 38, 1, 102, 60, 78, 211, 145, 61, 180, 10, 145, 188, 1, 146, 78, 190, 72, 19, 179, 60, 255, 192, 197, 188, 108, 58, 255, 189, 249, 252, 172, 189, 72, 157, 120, 189, 64, 248, 61, 189, 187, 158, 16, 62, 110, 148, 9, 62, 196, 25, 81, 188, 150, 200, 15, 189, 74, 114, 180, 188, 10, 56, 29, 190, 183, 139, 84, 187, 152, 143, 36, 190, 143, 175, 105, 189, 129, 247, 165, 60, 252, 151, 236, 188, 254, 181, 145, 61, 105, 14, 187, 61, 161, 23, 66, 190, 106, 131, 212, 61, 7, 90, 59, 189, 241, 138, 211, 189, 191, 206, 71, 190, 96, 100, 112, 60, 157, 162, 136, 61, 205, 37, 198, 189, 151, 160, 214, 61, 110, 99, 159, 190, 15, 55, 146, 189, 230, 212, 31, 189, 52, 253, 17, 188, 41, 110, 149, 189, 81, 100, 239, 62, 160, 210, 225, 61, 96, 112, 29, 190, 230, 206, 13, 58, 37, 56, 188, 62, 252, 147, 160, 61, 219, 201, 140, 61, 77, 105, 107, 189, 2, 64, 160, 60, 33, 130, 77, 61, 94, 95, 139, 189, 112, 239, 18, 190, 71, 249, 192, 189, 113, 178, 93, 59, 255, 223, 108, 61, 254, 225, 103, 190, 75, 95, 46, 62, 160, 167, 35, 62, 47, 203, 54, 190, 58, 189, 123, 62, 130, 213, 94, 61, 77, 231, 38, 191, 27, 237, 181, 61, 25, 140, 199, 189, 45, 10, 68, 189, 0, 4, 8, 190, 203, 92, 236, 189, 205, 206, 71, 60, 1, 74, 220, 61, 4, 64, 161, 187, 214, 16, 114, 62, 157, 112, 206, 190, 180, 130, 119, 189, 201, 158, 54, 188, 179, 254, 92, 188, 18, 94, 101, 62, 63, 144, 65, 190, 141, 7, 20, 60, 177, 22, 171, 190, 56, 69, 121, 190, 31, 197, 130, 189, 200, 80, 154, 189, 225, 44, 136, 62, 27, 100, 41, 61, 153, 152, 209, 61, 109, 177, 30, 188, 77, 28, 5, 62, 159, 91, 164, 188, 203, 146, 4, 61, 195, 44, 169, 189, 171, 102, 9, 190, 202, 181, 18, 189, 228, 117, 131, 62, 55, 98, 200, 62, 209, 54, 208, 189, 229, 167, 56, 61, 49, 204, 126, 190, 187, 201, 64, 190, 39, 58, 96, 62, 242, 178, 30, 189, 115, 214, 158, 190, 165, 4, 105, 190, 68, 44, 49, 61, 46, 176, 198, 61, 75, 9, 249, 62, 104, 10, 79, 61, 222, 61, 177, 190, 6, 162, 119, 189, 132, 124, 207, 62, 187, 210, 220, 61, 241, 94, 152, 60, 209, 168, 148, 62, 236, 239, 104, 62, 58, 58, 18, 63, 64, 62, 176, 189, 248, 26, 3, 191, 83, 122, 22, 62, 15, 180, 211, 190, 93, 5, 173, 62, 46, 12, 249, 190, 161, 123, 173, 190, 50, 49, 7, 62, 47, 214, 202, 190, 0, 138, 145, 62, 16, 16, 250, 189, 48, 29, 33, 191, 73, 134, 208, 61, 204, 134, 204, 61, 172, 230, 69, 62, 212, 79, 6, 190, 40, 241, 189, 190, 53, 9, 152, 189, 232, 145, 191, 190, 122, 207, 21, 60, 76, 102, 38, 190, 90, 40, 27, 62, 134, 190, 33, 60, 148, 154, 61, 190, 201, 188, 182, 189, 18, 50, 53, 191, 106, 84, 187, 189, 164, 57, 173, 190, 66, 110, 160, 188, 248, 89, 71, 62, 28, 106, 67, 190, 165, 14, 188, 62, 37, 254, 27, 190, 56, 130, 76, 190, 59, 170, 17, 62, 33, 148, 195, 190, 18, 173, 39, 188, 168, 51, 232, 190, 89, 191, 45, 190, 126, 190, 24, 191, 29, 30, 85, 190, 212, 147, 140, 190, 184, 143, 176, 190, 182, 81, 14, 191, 225, 86, 244, 190, 170, 107, 17, 62, 122, 197, 179, 62, 162, 68, 42, 190, 231, 196, 21, 61, 4, 153, 5, 188, 69, 106, 38, 62, 155, 82, 136, 62, 142, 166, 128, 189, 14, 195, 214, 62, 222, 135, 186, 60, 6, 116, 171, 190, 53, 75, 16, 62, 151, 57, 139, 190, 9, 138, 81, 185, 72, 55, 242, 189, 168, 177, 128, 62, 74, 19, 21, 190, 204, 133, 176, 190, 118, 30, 3, 190, 211, 2, 16, 191, 74, 114, 245, 190, 229, 41, 26, 190, 31, 225, 143, 190, 218, 100, 61, 190, 112, 115, 188, 61, 141, 70, 153, 189, 133, 48, 136, 61, 213, 15, 0, 61, 32, 15, 25, 190, 138, 160, 242, 190, 43, 11, 7, 191, 4, 246, 23, 62, 32, 167, 137, 190, 93, 46, 250, 60, 93, 8, 101, 59, 151, 146, 214, 190, 138, 116, 196, 61, 142, 101, 186, 62, 176, 116, 143, 62, 159, 230, 39, 62, 143, 182, 14, 62, 164, 107, 46, 191, 209, 134, 235, 60, 71, 124, 115, 62, 57, 2, 237, 62, 83, 74, 217, 190, 156, 73, 208, 61, 62, 70, 81, 61, 39, 236, 120, 190, 121, 48, 89, 191, 39, 218, 136, 190, 254, 119, 5, 191, 138, 59, 147, 61, 12, 118, 189, 190, 51, 10, 77, 62, 59, 52, 155, 190, 70, 105, 48, 62, 218, 185, 3, 62, 187, 52, 175, 62, 226, 250, 92, 61, 81, 176, 27, 188, 68, 120, 166, 61, 147, 146, 167, 62, 38, 176, 92, 190, 232, 37, 89, 190, 186, 31, 54, 62, 0, 30, 170, 61, 212, 109, 121, 61, 60, 9, 14, 61, 94, 16, 140, 188, 141, 13, 160, 188, 125, 26, 135, 59, 217, 168, 184, 61, 156, 219, 100, 62, 225, 207, 4, 191, 36, 100, 210, 188, 244, 103, 155, 189, 251, 164, 37, 62, 145, 86, 62, 190, 41, 231, 94, 190, 207, 199, 254, 189, 78, 211, 152, 62, 149, 247, 190, 61, 202, 39, 166, 61, 14, 21, 225, 60, 104, 31, 74, 61, 120, 25, 73, 190, 189, 152, 120, 62, 98, 231, 51, 189, 86, 189, 237, 60, 191, 57, 75, 62, 76, 103, 186, 61, 200, 224, 73, 189, 0, 0, 238, 190, 121, 35, 249, 190, 178, 156, 145, 190, 58, 207, 67, 191, 164, 20, 28, 62, 138, 77, 229, 61, 196, 184, 161, 190, 215, 98, 163, 61, 196, 134, 245, 62, 33, 204, 155, 189, 49, 196, 186, 62, 66, 178, 23, 190, 0, 24, 227, 190, 164, 162, 172, 61, 39, 130, 93, 62, 240, 79, 171, 62, 159, 116, 148, 190, 158, 255, 2, 62, 11, 115, 137, 188, 221, 7, 162, 189, 120, 168, 231, 190, 203, 123, 19, 62, 187, 230, 45, 191, 237, 6, 99, 62, 91, 230, 11, 191, 5, 167, 136, 189, 227, 227, 175, 190, 56, 47, 171, 61, 248, 139, 171, 61, 233, 172, 128, 62, 117, 108, 255, 61, 51, 200, 207, 189, 241, 82, 57, 61, 122, 119, 174, 62, 149, 101, 166, 190, 127, 218, 93, 189, 24, 235, 100, 62, 82, 247, 76, 61, 128, 82, 209, 189, 204, 214, 251, 189, 66, 126, 2, 60, 149, 136, 168, 61, 71, 70, 206, 61, 26, 110, 137, 61, 218, 77, 2, 61, 62, 179, 227, 60, 92, 131, 248, 189, 235, 243, 139, 191, 10, 22, 32, 190, 238, 173, 18, 190, 102, 196, 231, 60, 154, 132, 25, 62, 101, 202, 102, 189, 91, 69, 159, 62, 58, 190, 33, 188, 211, 99, 180, 190, 43, 138, 39, 62, 236, 115, 237, 190, 42, 99, 199, 189, 0, 212, 224, 190, 233, 177, 176, 60, 70, 224, 195, 190, 189, 79, 159, 190, 199, 46, 178, 60, 94, 96, 116, 186, 59, 113, 31, 189, 248, 133, 196, 60, 126, 217, 20, 62, 217, 13, 12, 62, 167, 128, 206, 189, 24, 151, 242, 190, 106, 58, 219, 188, 230, 57, 133, 62, 225, 105, 123, 61, 112, 123, 215, 188, 162, 228, 68, 189, 181, 105, 191, 190, 59, 10, 76, 62, 86, 92, 11, 61, 55, 166, 13, 63, 244, 216, 62, 190, 201, 37, 103, 190, 180, 244, 146, 189, 162, 241, 221, 61, 2, 63, 168, 190, 237, 226, 195, 190, 29, 135, 250, 190, 62, 149, 121, 62, 26, 212, 20, 191, 168, 130, 38, 62, 181, 233, 37, 191, 125, 102, 137, 188, 190, 0, 49, 62, 117, 103, 167, 189, 223, 14, 1, 61, 193, 44, 216, 190, 88, 177, 229, 189, 238, 80, 20, 63, 180, 98, 183, 190, 251, 64, 154, 62, 177, 235, 147, 189, 135, 138, 4, 62, 159, 90, 69, 62, 15, 222, 249, 189, 189, 200, 217, 190, 83, 115, 153, 62, 175, 54, 21, 191, 30, 11, 137, 62, 200, 181, 156, 61, 213, 152, 158, 61, 196, 118, 131, 190, 212, 7, 167, 188, 220, 171, 227, 189, 44, 31, 86, 61, 83, 127, 43, 61, 52, 15, 36, 61, 143, 83, 51, 188, 181, 168, 7, 191, 3, 188, 88, 60, 221, 8, 42, 190, 14, 64, 101, 188, 97, 26, 118, 188, 90, 216, 52, 190, 11, 53, 129, 62, 89, 173, 46, 62, 54, 96, 158, 61, 27, 242, 207, 62, 226, 231, 53, 62, 55, 233, 56, 190, 95, 138, 12, 191, 180, 61, 147, 62, 231, 121, 49, 62, 25, 141, 173, 187, 11, 234, 146, 189, 64, 237, 45, 62, 211, 123, 242, 189, 133, 0, 157, 189, 152, 40, 76, 190, 45, 231, 189, 189, 11, 170, 171, 62, 205, 104, 182, 61, 243, 55, 199, 190, 126, 228, 7, 190, 59, 176, 110, 190, 24, 3, 216, 61, 196, 39, 144, 189, 0, 243, 112, 62, 207, 170, 66, 190, 59, 224, 151, 62, 215, 191, 22, 189, 0, 20, 159, 61, 157, 87, 159, 61, 11, 191, 10, 62, 79, 23, 228, 190, 242, 98, 41, 62, 244, 247, 10, 190, 162, 227, 100, 186, 189, 40, 169, 62, 228, 107, 35, 62, 71, 128, 27, 62, 211, 240, 62, 190, 196, 160, 122, 191, 115, 14, 64, 62, 8, 141, 209, 190, 195, 84, 101, 190, 6, 0, 35, 190};
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
                alignas(float) const unsigned char memory[] = {48, 43, 158, 61, 125, 39, 132, 61, 155, 135, 59, 62, 51, 233, 165, 189, 218, 169, 234, 62, 184, 41, 203, 61, 170, 101, 102, 61, 21, 191, 65, 61, 29, 164, 51, 190, 220, 230, 228, 189, 106, 80, 89, 62, 48, 56, 58, 62, 159, 147, 133, 62, 186, 168, 202, 189, 149, 253, 163, 62, 34, 166, 20, 190, 137, 224, 189, 189, 230, 35, 235, 189, 219, 83, 153, 62, 149, 194, 80, 190, 46, 29, 97, 62, 84, 44, 122, 190, 150, 180, 152, 60, 90, 155, 63, 62, 177, 145, 14, 61, 113, 1, 159, 61, 190, 69, 133, 60, 169, 211, 214, 189, 230, 50, 173, 189, 73, 208, 251, 61, 236, 103, 20, 62, 160, 193, 28, 61};
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
                alignas(float) const unsigned char memory[] = {129, 98, 172, 62, 98, 141, 208, 190, 105, 168, 252, 190, 222, 205, 162, 61, 28, 44, 151, 60, 137, 62, 150, 189, 238, 14, 153, 190, 41, 102, 187, 190, 21, 88, 117, 61, 117, 109, 218, 189, 107, 110, 158, 189, 4, 224, 1, 191, 194, 105, 62, 191, 204, 9, 136, 62, 220, 253, 43, 62, 235, 197, 56, 190, 204, 212, 143, 62, 167, 250, 60, 63, 206, 44, 190, 190, 162, 80, 94, 61, 113, 134, 103, 190, 169, 101, 215, 190, 99, 220, 6, 191, 29, 195, 83, 191, 173, 119, 223, 190, 249, 126, 165, 62, 204, 58, 28, 62, 186, 254, 172, 62, 71, 91, 243, 190, 237, 183, 71, 63, 25, 64, 31, 63, 13, 111, 239, 190, 99, 199, 18, 190, 201, 1, 159, 190, 208, 168, 88, 189, 40, 251, 2, 190, 233, 174, 140, 190, 160, 62, 104, 61, 227, 77, 206, 61, 178, 34, 9, 61, 142, 242, 184, 188, 85, 157, 148, 61, 234, 17, 146, 190, 102, 234, 1, 62, 18, 190, 1, 190, 236, 132, 131, 189, 154, 190, 142, 190, 217, 51, 255, 61, 210, 175, 93, 60, 91, 187, 104, 62, 241, 13, 142, 190, 227, 0, 141, 60, 181, 140, 132, 190, 53, 164, 88, 62, 129, 196, 177, 62, 192, 187, 34, 62, 48, 178, 219, 61, 13, 43, 154, 189, 220, 192, 189, 62, 2, 164, 210, 61, 70, 23, 68, 60, 159, 35, 181, 61, 167, 196, 233, 61, 16, 140, 3, 63};
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
                alignas(float) const unsigned char memory[] = {90, 147, 28, 61, 209, 12, 132, 190};
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
    alignas(float) const unsigned char memory[] = {28, 117, 111, 191, 80, 233, 23, 63, 44, 4, 213, 190};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {204, 2, 130, 63, 67, 188, 212, 190};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0061/steps/000000000008000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}