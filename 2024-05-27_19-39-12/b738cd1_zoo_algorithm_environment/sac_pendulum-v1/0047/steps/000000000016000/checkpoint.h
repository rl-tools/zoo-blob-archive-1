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
                alignas(float) const unsigned char memory[] = {172, 245, 18, 63, 117, 169, 102, 191, 209, 150, 4, 191, 86, 62, 179, 61, 83, 136, 32, 191, 166, 173, 3, 62, 143, 128, 5, 63, 71, 4, 98, 62, 1, 60, 28, 63, 221, 156, 179, 62, 211, 21, 91, 190, 154, 156, 191, 61, 227, 144, 15, 63, 241, 112, 189, 190, 114, 73, 153, 190, 250, 231, 220, 62, 145, 142, 238, 190, 219, 132, 200, 62, 125, 226, 219, 190, 23, 16, 89, 191, 3, 14, 205, 60, 152, 74, 128, 188, 58, 171, 22, 63, 158, 37, 32, 60, 219, 251, 62, 191, 143, 253, 52, 61, 137, 42, 166, 62, 14, 161, 19, 191, 17, 225, 201, 190, 158, 7, 71, 190, 143, 227, 49, 191, 172, 117, 2, 191, 36, 126, 162, 190, 62, 224, 1, 187, 248, 126, 57, 190, 250, 32, 23, 188, 40, 136, 64, 63, 211, 108, 175, 63, 232, 162, 5, 63, 133, 243, 201, 190, 191, 120, 153, 63, 151, 197, 137, 62, 184, 123, 33, 191, 252, 79, 224, 63, 234, 57, 191, 62, 204, 46, 28, 191, 67, 55, 14, 63, 16, 170, 193, 190, 153, 249, 242, 62, 58, 252, 132, 63, 130, 25, 58, 190, 211, 2, 11, 62, 12, 162, 61, 191, 246, 30, 55, 62, 21, 8, 202, 62, 212, 115, 96, 191, 128, 209, 197, 190, 187, 104, 61, 62, 218, 120, 4, 63, 46, 79, 19, 63, 170, 253, 48, 191, 6, 178, 149, 191, 169, 187, 243, 190, 136, 210, 190, 190, 163, 22, 45, 63, 130, 176, 187, 62, 89, 15, 208, 62, 77, 160, 160, 190, 111, 227, 5, 62, 163, 77, 0, 190, 172, 85, 83, 189, 121, 246, 172, 60, 204, 185, 129, 190, 113, 130, 218, 63, 144, 208, 206, 62, 45, 43, 102, 190, 3, 250, 27, 63, 155, 154, 33, 62, 31, 255, 241, 190, 33, 131, 41, 63, 57, 235, 55, 62, 43, 64, 243, 62, 186, 29, 134, 63, 198, 186, 12, 63, 54, 120, 154, 62, 245, 32, 130, 63, 228, 51, 38, 190, 94, 41, 175, 190, 113, 91, 161, 191, 51, 57, 147, 190, 183, 30, 128, 190, 98, 246, 135, 188, 148, 50, 23, 63, 149, 130, 101, 191, 219, 145, 90, 62, 188, 138, 154, 62};
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
                alignas(float) const unsigned char memory[] = {77, 116, 73, 191, 154, 221, 22, 62, 18, 17, 230, 60, 89, 73, 133, 62, 158, 209, 111, 191, 243, 213, 162, 190, 58, 255, 152, 62, 28, 23, 29, 63, 56, 29, 130, 190, 174, 246, 158, 190, 246, 193, 64, 62, 139, 193, 147, 190, 141, 207, 229, 190, 132, 7, 134, 190, 102, 20, 146, 190, 30, 3, 124, 190, 192, 231, 158, 190, 9, 231, 72, 62, 171, 94, 106, 61, 192, 15, 64, 191, 202, 150, 197, 61, 48, 223, 66, 190, 143, 9, 238, 62, 156, 144, 182, 62, 245, 220, 175, 62, 111, 0, 211, 62, 105, 143, 183, 190, 51, 199, 142, 189, 220, 9, 85, 62, 199, 122, 190, 189, 177, 198, 230, 190, 69, 208, 247, 190};
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
                alignas(float) const unsigned char memory[] = {38, 191, 167, 190, 34, 203, 72, 190, 232, 180, 128, 61, 126, 251, 189, 59, 25, 165, 132, 191, 15, 89, 20, 62, 61, 131, 194, 188, 28, 15, 214, 62, 168, 40, 106, 62, 232, 244, 245, 62, 204, 196, 182, 61, 39, 68, 58, 189, 184, 240, 99, 62, 41, 17, 133, 191, 67, 215, 116, 191, 67, 123, 238, 188, 2, 41, 54, 62, 168, 65, 115, 189, 31, 4, 168, 190, 171, 87, 60, 189, 168, 153, 213, 187, 4, 169, 29, 191, 27, 222, 146, 190, 147, 171, 128, 60, 27, 208, 48, 190, 199, 228, 81, 62, 194, 58, 162, 191, 90, 149, 4, 61, 108, 23, 185, 60, 17, 160, 78, 62, 125, 162, 89, 190, 153, 92, 86, 62, 49, 9, 7, 187, 182, 243, 194, 190, 71, 120, 139, 190, 200, 42, 225, 189, 14, 102, 122, 191, 142, 176, 176, 190, 248, 34, 21, 62, 181, 207, 20, 62, 200, 64, 148, 62, 89, 161, 14, 61, 19, 122, 92, 60, 89, 122, 208, 61, 218, 142, 173, 189, 217, 14, 217, 190, 160, 243, 250, 190, 27, 31, 44, 190, 145, 102, 203, 61, 249, 4, 130, 190, 180, 123, 121, 189, 139, 19, 125, 189, 97, 235, 14, 62, 81, 35, 232, 190, 255, 158, 86, 190, 76, 7, 65, 61, 138, 192, 117, 189, 239, 159, 126, 62, 203, 61, 45, 191, 164, 55, 133, 189, 209, 159, 244, 60, 243, 115, 36, 61, 224, 204, 131, 60, 250, 109, 107, 189, 91, 225, 248, 189, 199, 103, 98, 189, 229, 31, 39, 62, 54, 176, 42, 189, 243, 43, 188, 190, 95, 58, 99, 62, 213, 69, 231, 188, 65, 136, 67, 190, 252, 55, 181, 58, 231, 147, 15, 63, 164, 97, 187, 62, 89, 57, 214, 61, 46, 18, 36, 63, 208, 77, 30, 190, 37, 99, 205, 190, 95, 26, 232, 61, 133, 30, 237, 190, 217, 169, 200, 190, 236, 75, 92, 190, 136, 53, 163, 62, 63, 83, 140, 62, 121, 74, 24, 190, 223, 68, 184, 60, 209, 206, 12, 60, 36, 27, 42, 61, 131, 6, 44, 189, 170, 20, 251, 190, 242, 153, 130, 62, 142, 254, 200, 189, 186, 118, 195, 62, 2, 104, 8, 190, 56, 34, 224, 190, 99, 105, 193, 190, 148, 138, 172, 62, 72, 137, 144, 61, 172, 170, 167, 61, 22, 188, 165, 191, 216, 83, 166, 62, 65, 229, 12, 191, 221, 44, 81, 62, 205, 203, 44, 191, 253, 231, 207, 62, 147, 177, 229, 59, 20, 118, 147, 61, 186, 48, 78, 190, 93, 120, 181, 60, 85, 243, 172, 190, 10, 194, 63, 62, 55, 81, 22, 61, 181, 123, 71, 190, 93, 226, 145, 60, 88, 147, 211, 190, 60, 74, 123, 190, 157, 89, 152, 61, 166, 247, 50, 190, 212, 159, 189, 59, 4, 45, 136, 62, 133, 174, 6, 63, 73, 122, 103, 61, 117, 75, 141, 189, 218, 106, 94, 62, 161, 69, 34, 190, 29, 46, 23, 190, 173, 30, 48, 191, 251, 230, 120, 188, 233, 155, 128, 61, 116, 163, 135, 62, 245, 2, 229, 61, 139, 149, 158, 191, 43, 187, 34, 62, 247, 141, 71, 190, 157, 97, 57, 62, 201, 33, 234, 61, 59, 234, 57, 62, 187, 30, 33, 62, 176, 49, 135, 61, 255, 66, 218, 62, 139, 60, 175, 190, 224, 212, 176, 190, 25, 142, 131, 189, 2, 182, 23, 60, 215, 241, 34, 190, 25, 208, 47, 190, 161, 191, 11, 62, 111, 171, 65, 62, 22, 234, 21, 190, 149, 195, 23, 190, 31, 10, 252, 61, 232, 224, 58, 190, 150, 4, 247, 60, 241, 213, 195, 190, 134, 26, 161, 62, 167, 62, 226, 187, 163, 236, 169, 62, 86, 78, 161, 188, 246, 114, 92, 190, 251, 85, 18, 190, 11, 14, 20, 62, 234, 25, 130, 62, 92, 118, 50, 62, 253, 60, 224, 61, 144, 98, 140, 58, 215, 2, 230, 61, 219, 184, 166, 188, 85, 21, 247, 190, 91, 183, 51, 191, 77, 83, 219, 188, 45, 196, 154, 61, 77, 31, 8, 62, 87, 26, 32, 62, 187, 117, 138, 62, 255, 58, 246, 190, 46, 178, 82, 62, 57, 98, 239, 61, 63, 138, 220, 61, 183, 67, 140, 188, 19, 6, 19, 62, 149, 37, 141, 188, 144, 208, 171, 62, 143, 47, 173, 62, 183, 194, 79, 190, 21, 229, 28, 190, 169, 101, 66, 190, 187, 146, 172, 62, 65, 11, 38, 189, 123, 245, 191, 188, 217, 127, 238, 189, 166, 29, 180, 189, 168, 229, 254, 189, 134, 184, 122, 62, 144, 94, 103, 62, 54, 17, 2, 62, 76, 5, 219, 190, 251, 241, 175, 62, 224, 15, 131, 190, 130, 2, 39, 62, 176, 111, 139, 189, 41, 236, 193, 189, 248, 164, 48, 191, 27, 75, 179, 61, 45, 134, 251, 190, 148, 230, 84, 190, 181, 0, 32, 191, 201, 1, 84, 190, 56, 141, 130, 62, 160, 139, 81, 62, 223, 109, 243, 61, 46, 66, 46, 190, 254, 49, 131, 191, 124, 182, 168, 190, 171, 175, 35, 60, 212, 78, 117, 62, 5, 205, 21, 191, 242, 214, 52, 190, 60, 13, 198, 190, 102, 27, 8, 189, 80, 117, 31, 189, 142, 175, 252, 191, 3, 235, 12, 61, 136, 4, 207, 190, 10, 6, 174, 62, 110, 112, 158, 62, 79, 255, 83, 190, 62, 157, 106, 62, 110, 157, 107, 62, 210, 135, 185, 190, 85, 142, 5, 189, 105, 159, 228, 61, 183, 193, 181, 62, 83, 33, 56, 191, 234, 178, 38, 190, 44, 85, 248, 61, 59, 49, 211, 190, 114, 168, 234, 61, 154, 135, 7, 63, 69, 208, 131, 61, 239, 31, 255, 62, 120, 143, 136, 62, 8, 219, 203, 62, 236, 233, 159, 190, 240, 72, 208, 189, 52, 173, 115, 60, 155, 124, 104, 62, 51, 187, 37, 61, 23, 24, 12, 61, 193, 242, 69, 190, 167, 241, 6, 62, 226, 251, 218, 189, 212, 11, 206, 61, 169, 178, 252, 190, 250, 136, 96, 62, 110, 45, 111, 62, 40, 170, 179, 190, 204, 221, 67, 189, 140, 113, 84, 62, 253, 231, 101, 189, 188, 138, 141, 191, 17, 193, 127, 62, 220, 144, 136, 191, 61, 236, 253, 61, 64, 97, 122, 190, 134, 123, 222, 188, 159, 234, 164, 190, 190, 160, 255, 61, 159, 182, 181, 189, 206, 252, 25, 189, 227, 226, 114, 62, 158, 127, 37, 62, 56, 97, 160, 62, 126, 145, 96, 190, 176, 215, 17, 62, 145, 57, 47, 190, 105, 253, 255, 190, 199, 122, 108, 61, 3, 229, 119, 61, 45, 136, 65, 61, 41, 26, 172, 61, 149, 112, 103, 62, 199, 133, 71, 188, 72, 235, 83, 61, 38, 80, 151, 62, 65, 78, 109, 191, 97, 25, 72, 61, 157, 166, 157, 190, 26, 152, 102, 189, 76, 252, 240, 61, 208, 54, 145, 190, 185, 227, 187, 62, 130, 218, 108, 190, 130, 165, 227, 187, 215, 28, 187, 61, 194, 78, 5, 190, 182, 140, 148, 61, 90, 235, 71, 191, 126, 2, 24, 191, 11, 245, 129, 188, 114, 195, 9, 191, 247, 13, 87, 188, 144, 165, 139, 60, 173, 76, 16, 191, 253, 121, 160, 62, 210, 175, 131, 62, 18, 199, 198, 62, 135, 156, 142, 190, 152, 157, 148, 190, 26, 189, 131, 61, 191, 37, 141, 62, 71, 47, 56, 62, 59, 139, 85, 191, 21, 50, 30, 191, 129, 253, 151, 61, 188, 198, 160, 190, 81, 27, 134, 189, 95, 33, 63, 190, 74, 254, 77, 61, 84, 250, 163, 62, 7, 211, 51, 190, 15, 184, 175, 190, 167, 37, 60, 190, 161, 9, 17, 62, 234, 236, 255, 190, 8, 103, 139, 190, 71, 234, 147, 62, 46, 61, 164, 62, 132, 244, 163, 62, 185, 8, 85, 191, 43, 12, 124, 190, 62, 95, 124, 188, 108, 133, 132, 190, 36, 13, 22, 189, 25, 223, 31, 62, 141, 193, 113, 191, 183, 162, 221, 62, 136, 116, 141, 189, 154, 55, 171, 62, 146, 55, 128, 190, 138, 127, 189, 190, 173, 181, 65, 62, 12, 74, 81, 61, 253, 66, 112, 61, 18, 22, 137, 62, 114, 33, 205, 62, 226, 6, 209, 61, 141, 195, 152, 61, 113, 52, 134, 190, 209, 6, 66, 191, 181, 103, 77, 62, 210, 226, 139, 62, 147, 127, 43, 190, 112, 111, 172, 61, 35, 231, 224, 189, 156, 230, 89, 62, 47, 186, 129, 187, 95, 71, 31, 61, 216, 217, 130, 189, 104, 202, 34, 61, 108, 58, 182, 189, 131, 98, 236, 190, 208, 144, 109, 61, 253, 22, 229, 189, 138, 167, 213, 190, 25, 216, 182, 189, 178, 242, 45, 60, 161, 252, 133, 190, 110, 70, 246, 60, 192, 75, 58, 62, 165, 80, 131, 62, 231, 190, 199, 61, 168, 5, 6, 190, 110, 17, 93, 190, 94, 33, 77, 62, 30, 44, 59, 62, 206, 235, 57, 190, 25, 226, 164, 61, 253, 192, 44, 190, 154, 22, 204, 189, 24, 249, 41, 190, 130, 42, 203, 60, 157, 206, 36, 59, 220, 19, 147, 190, 32, 224, 99, 189, 73, 95, 208, 61, 149, 60, 182, 60, 40, 31, 5, 189, 88, 71, 57, 191, 184, 49, 135, 61, 51, 50, 22, 191, 199, 2, 128, 62, 201, 248, 207, 190, 191, 95, 159, 189, 228, 57, 9, 190, 174, 237, 54, 189, 214, 255, 219, 190, 244, 142, 137, 190, 74, 49, 3, 191, 210, 76, 6, 62, 238, 83, 249, 59, 57, 124, 47, 190, 50, 4, 234, 59, 124, 139, 62, 190, 84, 232, 141, 189, 203, 48, 128, 190, 114, 243, 70, 61, 26, 10, 38, 62, 117, 15, 52, 191, 170, 218, 141, 189, 35, 242, 208, 189, 171, 224, 226, 189, 40, 5, 139, 62, 95, 8, 247, 190, 206, 15, 69, 190, 165, 250, 162, 188, 54, 15, 194, 190, 71, 14, 128, 190, 159, 103, 87, 62, 110, 147, 110, 188, 8, 138, 118, 191, 22, 243, 168, 62, 67, 6, 153, 189, 23, 176, 35, 62, 81, 53, 164, 62, 246, 51, 170, 62, 115, 111, 200, 59, 31, 195, 130, 188, 12, 255, 62, 59, 20, 240, 126, 191, 75, 146, 43, 191, 250, 120, 31, 62, 253, 34, 66, 62, 225, 196, 219, 190, 81, 17, 212, 190, 36, 72, 34, 190, 87, 7, 243, 61, 205, 218, 76, 191, 73, 103, 159, 189, 101, 254, 96, 62, 104, 219, 163, 190, 61, 21, 209, 62, 31, 25, 141, 191, 204, 10, 127, 61, 188, 108, 139, 60, 92, 186, 204, 61, 211, 133, 223, 190, 230, 83, 239, 189, 247, 207, 25, 191, 101, 245, 217, 61, 115, 213, 149, 189, 238, 86, 21, 62, 2, 136, 0, 191, 103, 52, 219, 61, 28, 172, 246, 62, 51, 222, 179, 189, 130, 15, 148, 190, 189, 87, 217, 61, 167, 184, 144, 62, 38, 108, 107, 189, 192, 43, 169, 190, 105, 77, 204, 60, 184, 132, 50, 62, 151, 141, 11, 61, 17, 58, 75, 190, 48, 138, 245, 62, 136, 84, 76, 189, 102, 198, 39, 190, 47, 219, 217, 61, 192, 68, 113, 190, 3, 103, 28, 62, 175, 111, 238, 60, 8, 22, 6, 191, 15, 117, 121, 190, 55, 163, 164, 190, 98, 12, 142, 189, 46, 30, 183, 190, 108, 251, 226, 188, 61, 183, 83, 61, 56, 121, 110, 190, 168, 182, 188, 190, 239, 118, 12, 62, 187, 6, 169, 189, 226, 155, 120, 190, 9, 20, 34, 188, 142, 60, 4, 63, 211, 60, 64, 191, 141, 58, 159, 189, 22, 239, 94, 190, 162, 31, 150, 189, 217, 135, 1, 190, 176, 217, 255, 188, 30, 213, 199, 62, 103, 61, 94, 189, 238, 174, 227, 187, 215, 189, 26, 62, 163, 4, 230, 62, 61, 215, 45, 190, 30, 16, 217, 191, 213, 169, 20, 62, 238, 21, 166, 189, 62, 88, 165, 190, 142, 169, 172, 60, 186, 171, 129, 190, 31, 243, 117, 188, 75, 245, 102, 190, 80, 144, 209, 190, 96, 144, 194, 61, 90, 183, 201, 62, 222, 38, 212, 188, 108, 217, 187, 189, 210, 68, 110, 190, 205, 123, 46, 190, 76, 191, 196, 62, 148, 23, 10, 190, 138, 225, 140, 62, 188, 86, 244, 60, 31, 221, 232, 189, 114, 241, 49, 62, 243, 210, 149, 188, 46, 218, 36, 190, 133, 47, 197, 190, 43, 243, 54, 62, 58, 215, 230, 189, 94, 141, 176, 190, 23, 234, 50, 190, 203, 207, 91, 189, 25, 114, 86, 187, 68, 170, 243, 60, 158, 207, 132, 188, 28, 15, 219, 60, 32, 61, 152, 190, 146, 124, 6, 62, 89, 174, 122, 190, 25, 185, 152, 62, 224, 51, 87, 61, 13, 50, 142, 190, 11, 238, 156, 188, 240, 72, 21, 61, 247, 224, 125, 190, 70, 228, 32, 62, 226, 32, 134, 190, 128, 174, 155, 62, 192, 188, 102, 62, 196, 17, 7, 190, 29, 111, 121, 191, 67, 46, 55, 190, 108, 24, 164, 189, 94, 29, 102, 191, 29, 179, 22, 190, 33, 220, 78, 191, 232, 173, 211, 61, 56, 229, 6, 190, 7, 43, 158, 62, 114, 161, 90, 60, 16, 115, 30, 190, 37, 104, 25, 189, 39, 85, 21, 60, 205, 254, 69, 61, 134, 18, 182, 61, 12, 97, 137, 61, 0, 229, 96, 191, 157, 27, 235, 190, 7, 36, 34, 190, 205, 35, 150, 190, 148, 88, 30, 190, 141, 37, 70, 190, 204, 67, 29, 62, 235, 240, 215, 62, 123, 101, 182, 62, 129, 233, 104, 187, 73, 39, 243, 189, 163, 87, 1, 63, 10, 156, 76, 191, 196, 138, 54, 189, 245, 210, 241, 190, 101, 116, 179, 189, 93, 52, 93, 61, 49, 225, 92, 62, 177, 183, 90, 62, 31, 102, 190, 188, 193, 243, 166, 61, 6, 134, 11, 190, 134, 139, 48, 62, 74, 14, 65, 191, 147, 106, 149, 190, 255, 68, 168, 61, 157, 218, 188, 61, 48, 205, 181, 60, 19, 218, 242, 188, 123, 148, 13, 62, 44, 122, 147, 62, 102, 20, 143, 62, 120, 198, 175, 62, 22, 57, 148, 188, 178, 183, 140, 62, 237, 107, 205, 61, 26, 22, 17, 191, 243, 65, 206, 61, 163, 20, 133, 62, 99, 243, 159, 190, 250, 32, 141, 190, 36, 119, 63, 191, 16, 226, 130, 61, 123, 254, 183, 62, 243, 10, 12, 190, 138, 42, 67, 190, 165, 187, 202, 190, 222, 131, 190, 189, 180, 72, 18, 62, 52, 143, 58, 62, 46, 36, 54, 61, 248, 40, 38, 191, 159, 225, 211, 189, 220, 183, 4, 62, 6, 188, 22, 62, 75, 139, 238, 60, 221, 125, 52, 189, 207, 212, 36, 61, 167, 206, 39, 189, 6, 199, 253, 189, 166, 156, 1, 62, 191, 207, 12, 189, 62, 30, 1, 62, 56, 135, 152, 189, 195, 193, 221, 61, 115, 138, 45, 190, 13, 78, 107, 62, 251, 33, 162, 61, 182, 225, 193, 61, 42, 128, 6, 189, 37, 30, 138, 61, 139, 231, 233, 60, 166, 177, 22, 62, 222, 107, 241, 61, 145, 14, 154, 189, 109, 25, 115, 61, 159, 21, 27, 189, 98, 98, 230, 187, 110, 107, 192, 189, 48, 48, 240, 189, 248, 180, 65, 190, 38, 3, 133, 188, 74, 52, 17, 190, 119, 67, 130, 190, 161, 198, 246, 190, 4, 211, 60, 190, 198, 197, 184, 62, 209, 140, 88, 62, 43, 133, 80, 62, 38, 199, 107, 62, 161, 171, 164, 60, 65, 130, 21, 191, 176, 199, 155, 190, 131, 21, 13, 190, 51, 10, 174, 62, 59, 90, 24, 62, 57, 55, 146, 190, 23, 29, 97, 62, 112, 206, 213, 190, 160, 62, 28, 188, 180, 80, 198, 190, 84, 64, 15, 62, 251, 231, 0, 62, 132, 66, 128, 190, 159, 81, 103, 61, 225, 235, 35, 191, 57, 228, 28, 190, 100, 183, 35, 62, 41, 152, 170, 190, 249, 50, 78, 61, 93, 88, 141, 60, 106, 225, 255, 190, 127, 217, 163, 189, 170, 167, 98, 62, 216, 48, 15, 190, 23, 40, 36, 191, 201, 232, 168, 62, 45, 189, 76, 191, 5, 223, 17, 190, 4, 250, 89, 190, 216, 242, 188, 60, 75, 205, 173, 61, 123, 4, 41, 190, 89, 255, 93, 62, 205, 140, 47, 190, 26, 84, 74, 190, 10, 210, 151, 189, 203, 42, 94, 62, 103, 157, 139, 190, 211, 28, 60, 190, 62, 251, 53, 62, 137, 104, 7, 61, 227, 228, 11, 62, 55, 29, 67, 190, 191, 50, 85, 188, 198, 118, 70, 62, 79, 184, 28, 62, 171, 165, 71, 190, 160, 164, 128, 62, 230, 118, 145, 62, 0, 201, 165, 189, 211, 225, 175, 189, 24, 250, 136, 189, 89, 186, 70, 62, 101, 220, 1, 63, 244, 255, 145, 190, 74, 27, 233, 61, 2, 247, 22, 63, 213, 229, 5, 190, 244, 205, 143, 62, 170, 36, 169, 189, 64, 22, 203, 60, 89, 82, 32, 191, 69, 171, 139, 189, 166, 108, 136, 61, 177, 178, 11, 191, 89, 188, 148, 62, 40, 83, 255, 62, 29, 110, 156, 191, 58, 191, 50, 190, 105, 193, 138, 61, 136, 54, 190, 62, 61, 159, 117, 190, 138, 112, 47, 190, 57, 171, 157, 188, 211, 37, 20, 62, 107, 168, 149, 62, 158, 212, 143, 62, 202, 14, 43, 190, 19, 121, 171, 62, 10, 201, 196, 190, 188, 148, 73, 191, 35, 247, 198, 190, 18, 87, 170, 62, 91, 59, 18, 62, 212, 137, 105, 61, 244, 156, 176, 189, 82, 195, 21, 190, 138, 156, 207, 61, 11, 127, 42, 189, 151, 98, 42, 190, 249, 119, 154, 60, 91, 36, 144, 190, 58, 217, 36, 62, 55, 140, 208, 189, 93, 66, 83, 190, 34, 190, 221, 189, 161, 55, 145, 61, 59, 198, 39, 190, 201, 252, 161, 189, 107, 58, 210, 61, 207, 229, 236, 61, 25, 33, 61, 190, 133, 20, 118, 190, 181, 206, 14, 190, 111, 73, 183, 61, 125, 161, 240, 61, 147, 203, 191, 189, 248, 60, 80, 190, 224, 126, 128, 189, 114, 248, 15, 189, 155, 43, 68, 60, 29, 51, 145, 61, 224, 112, 185, 61, 247, 108, 114, 190, 95, 110, 42, 62, 101, 125, 254, 188, 118, 14, 0, 62, 141, 188, 3, 190, 132, 11, 129, 187, 33, 120, 195, 189, 210, 168, 10, 62, 152, 224, 231, 60, 190, 63, 11, 190, 170, 38, 8, 62, 251, 157, 216, 61, 20, 69, 32, 62, 228, 108, 139, 189, 48, 205, 94, 61, 234, 3, 18, 188, 228, 253, 88, 189, 79, 92, 49, 190, 0, 53, 214, 189, 147, 182, 240, 61, 120, 229, 44, 189, 143, 85, 34, 189, 155, 103, 101, 61, 101, 186, 28, 190, 236, 253, 5, 62, 0, 154, 116, 189, 68, 250, 135, 189, 20, 229, 62, 190, 46, 7, 85, 61, 216, 62, 251, 189, 137, 22, 232, 61, 136, 198, 237, 189, 193, 178, 72, 61, 219, 7, 226, 189, 254, 45, 19, 190, 43, 246, 241, 188, 38, 51, 220, 188, 206, 84, 89, 189, 35, 86, 161, 60, 51, 132, 1, 62, 10, 255, 228, 187, 241, 125, 196, 189, 173, 156, 52, 190, 22, 105, 29, 62, 248, 62, 52, 190, 18, 254, 247, 61, 143, 83, 7, 61, 249, 55, 3, 190, 82, 179, 19, 62, 206, 254, 194, 189, 150, 248, 156, 189, 175, 65, 15, 189, 61, 82, 29, 190, 212, 131, 122, 189, 174, 62, 145, 60, 111, 224, 157, 189, 152, 193, 231, 189, 153, 120, 25, 190, 221, 143, 146, 61, 57, 235, 33, 190, 42, 251, 243, 61, 243, 218, 200, 61, 185, 121, 129, 61, 161, 110, 244, 61, 36, 176, 80, 188, 171, 9, 160, 61, 14, 163, 217, 189, 190, 139, 250, 62, 153, 176, 3, 62, 5, 59, 170, 190, 238, 91, 81, 62, 72, 117, 23, 190, 144, 140, 0, 191, 114, 249, 217, 62, 246, 64, 8, 61, 109, 17, 159, 60, 237, 88, 142, 191, 224, 99, 31, 62, 38, 226, 230, 61, 92, 243, 245, 190, 132, 201, 163, 190, 176, 147, 41, 62, 220, 26, 252, 190, 228, 95, 105, 62, 154, 196, 190, 189, 32, 8, 136, 62, 23, 66, 200, 189, 70, 54, 250, 189, 69, 157, 77, 58, 29, 113, 209, 61, 87, 151, 34, 189, 247, 1, 99, 62, 86, 29, 29, 62, 140, 142, 62, 190, 197, 219, 58, 191, 214, 218, 146, 190, 62, 135, 207, 190, 38, 143, 182, 189, 92, 93, 156, 190, 58, 168, 229, 188, 36, 118, 113, 190, 47, 86, 117, 62, 21, 54, 17, 190, 143, 114, 184, 189, 204, 9, 94, 62, 44, 150, 58, 61, 154, 218, 46, 62, 156, 120, 238, 62, 16, 52, 185, 62, 221, 187, 35, 190, 161, 27, 228, 59, 210, 175, 84, 62, 19, 195, 161, 191, 147, 187, 122, 191, 239, 218, 30, 190, 58, 254, 190, 188, 211, 106, 122, 190, 49, 47, 7, 190, 134, 201, 153, 62, 112, 36, 17, 62, 252, 201, 140, 187, 102, 134, 176, 190, 148, 113, 33, 62, 139, 205, 69, 190, 162, 247, 63, 189, 101, 121, 134, 191, 156, 68, 130, 62, 27, 136, 230, 188, 166, 0, 150, 62, 31, 156, 83, 190, 148, 161, 110, 186, 0, 55, 85, 60, 31, 45, 37, 61, 207, 223, 123, 61, 169, 212, 28, 62, 157, 16, 99, 190, 97, 135, 106, 189, 62, 151, 121, 62, 224, 29, 111, 62, 58, 233, 95, 189, 68, 107, 50, 191, 134, 20, 207, 188, 24, 140, 208, 187, 132, 222, 252, 190, 251, 140, 181, 189, 213, 122, 82, 61, 149, 176, 36, 190, 107, 86, 42, 61, 57, 188, 223, 61, 113, 110, 1, 62, 58, 102, 134, 59, 35, 115, 111, 62, 196, 39, 130, 189, 161, 103, 172, 62, 196, 39, 166, 62, 192, 59, 207, 190, 93, 8, 19, 62, 224, 160, 164, 61, 87, 188, 59, 190, 110, 208, 23, 190, 31, 229, 61, 190, 69, 152, 164, 61, 117, 194, 202, 60, 196, 59, 146, 62, 237, 151, 196, 61, 140, 217, 222, 60, 144, 88, 34, 59, 158, 232, 253, 61, 200, 5, 107, 190, 124, 87, 70, 62, 136, 204, 253, 189, 41, 145, 0, 188, 250, 205, 3, 191, 170, 193, 35, 62, 230, 100, 62, 189, 195, 100, 232, 60, 231, 235, 95, 61, 19, 44, 13, 188, 93, 24, 54, 191, 107, 34, 22, 61, 114, 98, 164, 58, 142, 113, 30, 62, 235, 173, 71, 190, 139, 201, 2, 62, 255, 233, 7, 189, 132, 163, 253, 61, 105, 191, 26, 190, 240, 241, 21, 62, 119, 244, 19, 62, 12, 233, 251, 189, 200, 53, 76, 190, 12, 23, 211, 190, 150, 197, 81, 62, 126, 232, 255, 188, 9, 41, 175, 58, 18, 3, 77, 190, 178, 215, 174, 61, 58, 67, 57, 60, 172, 38, 247, 60, 30, 201, 100, 191, 164, 155, 145, 62, 103, 51, 148, 191, 233, 52, 97, 62, 73, 109, 105, 61, 64, 77, 21, 189, 39, 79, 84, 190, 87, 117, 106, 61, 134, 120, 173, 189, 111, 150, 94, 190, 37, 204, 160, 190, 105, 73, 112, 189, 89, 164, 134, 62, 230, 52, 240, 59, 57, 212, 255, 60, 21, 197, 162, 62, 136, 245, 194, 190, 228, 232, 45, 62, 177, 242, 143, 61, 7, 106, 224, 61, 239, 86, 42, 190, 127, 42, 220, 189, 118, 140, 12, 189, 210, 22, 145, 62, 12, 94, 96, 62, 69, 229, 136, 191, 30, 146, 116, 62, 98, 225, 178, 190, 46, 149, 223, 190, 46, 15, 37, 189, 171, 88, 48, 62, 10, 131, 65, 60, 74, 51, 109, 191, 33, 9, 232, 62, 58, 57, 107, 190, 210, 64, 17, 61, 97, 176, 175, 189, 90, 110, 233, 62, 89, 217, 243, 61, 60, 175, 194, 189, 191, 186, 238, 62, 209, 208, 141, 189, 216, 118, 93, 190, 243, 129, 9, 62, 87, 147, 138, 189, 230, 137, 107, 190, 48, 209, 191, 190, 78, 156, 160, 62, 42, 40, 22, 61, 139, 221, 134, 189, 22, 251, 234, 189, 93, 241, 27, 61, 127, 112, 132, 190, 169, 40, 253, 189, 5, 97, 183, 190, 120, 72, 155, 61, 3, 119, 91, 62, 214, 132, 237, 61, 193, 255, 81, 189, 118, 102, 201, 190};
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
                alignas(float) const unsigned char memory[] = {206, 30, 148, 62, 220, 1, 142, 62, 159, 47, 26, 190, 99, 8, 69, 62, 201, 242, 149, 189, 39, 240, 42, 62, 26, 121, 104, 62, 129, 254, 6, 189, 167, 70, 61, 62, 196, 122, 48, 189, 140, 186, 82, 61, 139, 252, 140, 62, 52, 120, 244, 188, 250, 32, 186, 62, 77, 111, 91, 189, 71, 148, 183, 190, 29, 101, 158, 62, 61, 155, 107, 62, 239, 114, 65, 62, 34, 182, 27, 62, 44, 248, 53, 62, 239, 62, 130, 190, 198, 132, 36, 62, 78, 40, 37, 190, 11, 120, 171, 189, 201, 50, 155, 189, 32, 236, 160, 60, 122, 132, 65, 62, 15, 49, 221, 61, 41, 94, 109, 61, 66, 0, 36, 190, 2, 234, 56, 62};
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
                alignas(float) const unsigned char memory[] = {185, 45, 78, 191, 230, 67, 224, 190, 127, 116, 24, 191, 120, 91, 7, 191, 233, 103, 205, 190, 248, 106, 28, 62, 163, 203, 228, 62, 121, 81, 14, 63, 39, 55, 186, 190, 40, 173, 132, 191, 237, 99, 153, 62, 97, 140, 34, 62, 88, 149, 90, 189, 116, 223, 83, 191, 100, 218, 7, 63, 16, 197, 172, 63, 45, 219, 129, 62, 246, 244, 115, 191, 39, 18, 168, 62, 142, 208, 242, 188, 153, 184, 137, 62, 48, 132, 154, 189, 113, 145, 146, 63, 75, 155, 23, 189, 134, 37, 29, 62, 164, 224, 230, 61, 163, 109, 28, 63, 14, 28, 166, 190, 15, 40, 1, 62, 85, 31, 165, 189, 78, 177, 129, 190, 104, 164, 202, 190, 24, 123, 93, 62, 68, 226, 251, 189, 179, 38, 13, 62, 236, 3, 225, 189, 60, 11, 21, 190, 44, 33, 143, 190, 182, 171, 215, 190, 94, 83, 106, 62, 203, 46, 190, 190, 223, 232, 189, 62, 103, 72, 121, 190, 28, 183, 48, 190, 183, 124, 53, 191, 169, 198, 151, 189, 219, 180, 135, 62, 141, 197, 145, 62, 165, 147, 13, 190, 227, 88, 135, 62, 59, 65, 52, 190, 163, 166, 42, 190, 20, 200, 119, 190, 29, 112, 16, 63, 209, 143, 174, 62, 56, 105, 210, 61, 89, 45, 251, 189, 23, 234, 179, 61, 207, 141, 7, 62, 204, 45, 28, 188, 105, 22, 213, 190, 25, 82, 146, 190, 56, 231, 136, 190, 193, 224, 95, 61};
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
                alignas(float) const unsigned char memory[] = {157, 228, 217, 61, 79, 145, 164, 190};
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
    alignas(float) const unsigned char memory[] = {126, 81, 244, 62, 157, 9, 32, 191, 73, 96, 244, 62};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {245, 39, 8, 64, 127, 188, 60, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0047/steps/000000000016000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}