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
                alignas(float) const unsigned char memory[] = {7, 2, 218, 62, 250, 43, 137, 191, 165, 55, 172, 190, 56, 237, 54, 190, 105, 178, 68, 63, 227, 66, 175, 61, 246, 49, 244, 60, 64, 51, 241, 62, 0, 118, 157, 190, 19, 207, 151, 62, 35, 21, 1, 191, 191, 208, 239, 62, 148, 81, 33, 191, 10, 194, 19, 189, 67, 89, 213, 190, 250, 53, 58, 63, 82, 64, 132, 63, 112, 198, 134, 62, 180, 12, 178, 189, 159, 250, 185, 62, 167, 122, 17, 191, 250, 157, 144, 191, 18, 68, 129, 190, 58, 46, 249, 189, 37, 28, 94, 63, 211, 14, 142, 62, 242, 6, 46, 189, 171, 42, 134, 190, 246, 188, 169, 191, 224, 20, 134, 190, 182, 134, 128, 62, 50, 222, 131, 191, 64, 132, 35, 191, 24, 178, 89, 62, 95, 205, 141, 62, 84, 213, 210, 62, 67, 75, 13, 62, 186, 198, 26, 190, 105, 126, 226, 62, 69, 163, 9, 191, 136, 57, 66, 191, 40, 156, 52, 190, 246, 213, 47, 63, 89, 118, 123, 191, 255, 107, 189, 189, 160, 89, 90, 191, 48, 156, 86, 191, 37, 209, 178, 190, 73, 74, 52, 63, 4, 102, 84, 62, 177, 154, 208, 62, 1, 73, 197, 189, 173, 93, 85, 191, 255, 163, 113, 62, 15, 220, 14, 191, 1, 37, 248, 191, 203, 30, 201, 190, 253, 204, 90, 191, 135, 16, 228, 186, 102, 47, 38, 190, 221, 190, 48, 62, 87, 82, 118, 63, 118, 179, 11, 63, 234, 88, 243, 58, 187, 196, 103, 63, 145, 173, 143, 188, 184, 148, 166, 62, 214, 216, 254, 61, 226, 252, 17, 191, 51, 244, 42, 63, 127, 164, 131, 63, 17, 209, 232, 62, 10, 148, 32, 63, 60, 168, 69, 191, 51, 215, 125, 190, 156, 199, 95, 190, 229, 213, 108, 63, 15, 15, 75, 190, 211, 213, 244, 189, 57, 242, 165, 62, 174, 231, 53, 63, 78, 241, 139, 62, 204, 185, 41, 191, 97, 176, 38, 63, 254, 190, 156, 62, 176, 97, 41, 190, 36, 205, 45, 63, 156, 80, 208, 61, 44, 205, 153, 63, 44, 160, 11, 63, 246, 48, 253, 62, 170, 210, 94, 191, 226, 216, 29, 190, 240, 195, 140, 191, 212, 167, 57, 63, 75, 66, 155, 187};
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
                alignas(float) const unsigned char memory[] = {168, 101, 43, 191, 56, 105, 244, 62, 234, 127, 203, 61, 26, 95, 137, 61, 79, 250, 179, 190, 128, 103, 175, 190, 66, 186, 2, 63, 234, 6, 154, 61, 233, 36, 89, 62, 133, 229, 159, 190, 101, 167, 201, 62, 30, 107, 8, 191, 178, 173, 175, 188, 26, 212, 205, 62, 29, 88, 219, 61, 95, 11, 51, 190, 207, 212, 123, 62, 82, 217, 226, 62, 155, 71, 134, 190, 54, 7, 40, 63, 117, 127, 140, 61, 56, 96, 154, 59, 7, 185, 237, 62, 30, 53, 34, 191, 150, 216, 9, 191, 85, 255, 113, 62, 231, 246, 234, 190, 246, 8, 117, 62, 58, 33, 46, 190, 108, 149, 146, 190, 226, 172, 28, 189, 74, 220, 176, 62};
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
                alignas(float) const unsigned char memory[] = {150, 233, 142, 190, 42, 139, 146, 62, 207, 168, 156, 190, 156, 29, 155, 191, 0, 219, 19, 62, 79, 233, 152, 191, 51, 45, 51, 62, 185, 44, 158, 62, 195, 1, 214, 60, 125, 210, 27, 62, 34, 2, 53, 62, 101, 104, 227, 61, 255, 49, 242, 190, 71, 114, 13, 190, 145, 164, 220, 189, 19, 108, 190, 190, 174, 145, 140, 191, 135, 98, 231, 190, 190, 147, 25, 189, 95, 146, 80, 60, 186, 5, 163, 190, 127, 223, 153, 62, 91, 8, 46, 190, 151, 182, 89, 190, 14, 2, 116, 63, 184, 128, 59, 61, 110, 251, 78, 191, 81, 204, 30, 191, 59, 184, 85, 190, 68, 241, 223, 190, 95, 119, 195, 190, 46, 243, 244, 62, 181, 191, 131, 61, 197, 129, 69, 190, 142, 43, 235, 188, 177, 221, 40, 190, 174, 126, 54, 189, 68, 131, 241, 61, 123, 113, 212, 61, 172, 106, 13, 190, 171, 86, 48, 61, 42, 114, 209, 60, 32, 145, 151, 61, 128, 98, 185, 189, 207, 5, 228, 188, 222, 33, 203, 189, 57, 175, 64, 190, 106, 241, 25, 61, 21, 36, 108, 61, 136, 154, 17, 190, 22, 113, 7, 62, 163, 87, 72, 190, 217, 129, 232, 189, 8, 165, 26, 60, 193, 16, 93, 190, 239, 55, 141, 189, 251, 63, 60, 61, 106, 61, 40, 190, 37, 28, 52, 190, 125, 197, 204, 189, 82, 130, 216, 188, 234, 228, 9, 190, 139, 219, 86, 190, 52, 94, 122, 189, 98, 182, 184, 189, 49, 30, 43, 190, 255, 34, 96, 61, 117, 134, 207, 61, 208, 59, 12, 187, 26, 119, 202, 61, 159, 10, 37, 190, 183, 226, 175, 61, 81, 13, 21, 190, 114, 211, 43, 190, 31, 82, 207, 61, 167, 241, 179, 61, 156, 0, 153, 189, 177, 39, 28, 190, 112, 226, 158, 189, 124, 224, 70, 60, 105, 100, 53, 60, 119, 200, 217, 61, 235, 129, 9, 61, 207, 35, 38, 189, 115, 131, 135, 189, 185, 205, 47, 190, 140, 178, 5, 190, 115, 18, 242, 61, 47, 26, 43, 189, 102, 191, 159, 61, 187, 195, 186, 184, 216, 26, 169, 189, 4, 2, 142, 189, 167, 169, 167, 189, 36, 235, 201, 61, 115, 9, 84, 189, 156, 51, 123, 191, 246, 242, 233, 190, 242, 242, 232, 190, 58, 250, 40, 62, 34, 39, 34, 190, 76, 114, 176, 190, 81, 149, 165, 190, 50, 119, 76, 62, 230, 81, 20, 190, 36, 78, 17, 62, 11, 167, 32, 190, 5, 246, 212, 189, 141, 107, 157, 61, 171, 13, 135, 62, 125, 107, 40, 191, 114, 43, 206, 62, 12, 124, 61, 189, 169, 132, 1, 61, 215, 112, 92, 62, 203, 197, 36, 190, 76, 63, 30, 190, 165, 192, 157, 190, 247, 31, 51, 191, 0, 84, 167, 190, 207, 253, 60, 191, 53, 4, 89, 190, 136, 159, 16, 190, 21, 61, 181, 60, 37, 116, 232, 61, 72, 71, 155, 190, 112, 254, 41, 191, 196, 201, 10, 190, 244, 183, 68, 189, 31, 240, 196, 62, 24, 201, 4, 62, 122, 93, 14, 62, 144, 178, 183, 189, 62, 154, 41, 60, 103, 42, 103, 189, 1, 200, 34, 190, 212, 152, 182, 62, 44, 225, 153, 190, 123, 170, 247, 61, 150, 52, 163, 188, 234, 193, 121, 62, 122, 175, 86, 62, 31, 28, 142, 62, 39, 102, 110, 62, 175, 57, 127, 62, 169, 126, 244, 61, 166, 32, 204, 189, 237, 250, 200, 61, 59, 191, 181, 61, 215, 104, 72, 62, 192, 163, 12, 62, 208, 183, 45, 62, 84, 221, 14, 191, 62, 129, 111, 62, 127, 247, 159, 62, 157, 78, 47, 190, 115, 83, 225, 189, 244, 244, 7, 62, 45, 250, 198, 61, 173, 234, 136, 61, 45, 8, 1, 60, 186, 240, 54, 190, 3, 237, 184, 189, 150, 189, 81, 61, 186, 80, 236, 61, 19, 38, 15, 62, 22, 101, 220, 61, 136, 151, 51, 190, 44, 90, 134, 189, 72, 198, 154, 60, 1, 8, 55, 190, 60, 27, 40, 62, 6, 209, 32, 60, 224, 33, 163, 189, 69, 52, 249, 61, 189, 215, 149, 189, 121, 254, 192, 189, 59, 171, 143, 188, 200, 159, 73, 190, 229, 177, 143, 61, 92, 76, 4, 61, 142, 69, 31, 190, 56, 180, 164, 61, 86, 200, 192, 189, 12, 227, 162, 60, 44, 34, 250, 189, 114, 87, 171, 189, 20, 66, 8, 190, 76, 177, 202, 61, 71, 58, 130, 189, 125, 234, 239, 60, 69, 141, 208, 60, 214, 52, 68, 61, 137, 118, 7, 61, 196, 29, 92, 62, 16, 211, 164, 61, 11, 171, 167, 188, 9, 198, 74, 189, 242, 226, 178, 62, 180, 155, 62, 189, 206, 45, 174, 62, 150, 157, 136, 189, 224, 66, 233, 61, 28, 191, 18, 190, 251, 188, 207, 60, 215, 155, 78, 62, 236, 195, 87, 62, 233, 92, 23, 62, 83, 81, 15, 62, 167, 71, 5, 62, 232, 6, 142, 61, 217, 14, 174, 188, 230, 215, 81, 61, 236, 158, 252, 57, 55, 145, 55, 61, 230, 146, 253, 190, 54, 218, 31, 191, 158, 102, 99, 189, 183, 24, 53, 190, 228, 11, 166, 62, 158, 41, 225, 188, 73, 31, 195, 190, 237, 214, 167, 62, 142, 120, 14, 190, 48, 196, 114, 62, 76, 218, 205, 62, 17, 187, 29, 62, 182, 10, 9, 190, 62, 42, 170, 62, 25, 59, 85, 63, 230, 6, 9, 62, 82, 226, 12, 190, 114, 72, 190, 62, 48, 228, 124, 62, 74, 255, 44, 62, 45, 48, 81, 188, 204, 18, 46, 190, 247, 17, 129, 190, 174, 252, 112, 190, 49, 4, 115, 61, 179, 223, 3, 189, 185, 137, 160, 190, 190, 130, 18, 62, 67, 113, 252, 189, 136, 36, 129, 62, 142, 189, 174, 62, 17, 121, 13, 62, 244, 50, 139, 62, 72, 46, 160, 191, 32, 223, 153, 60, 15, 201, 189, 187, 223, 53, 128, 61, 139, 250, 200, 61, 59, 142, 151, 190, 42, 207, 126, 190, 128, 113, 167, 62, 56, 129, 167, 190, 119, 241, 76, 62, 158, 77, 147, 190, 226, 23, 18, 191, 24, 4, 139, 62, 56, 217, 165, 62, 15, 190, 16, 62, 177, 251, 141, 62, 238, 227, 244, 61, 244, 170, 37, 62, 198, 230, 163, 61, 133, 212, 121, 62, 247, 33, 10, 191, 240, 166, 143, 61, 221, 55, 83, 190, 205, 244, 90, 62, 221, 103, 157, 61, 164, 36, 157, 190, 82, 19, 11, 62, 214, 157, 6, 62, 104, 252, 94, 191, 76, 200, 228, 62, 217, 230, 107, 190, 69, 178, 75, 63, 1, 245, 134, 191, 157, 230, 248, 60, 188, 8, 70, 191, 78, 127, 228, 62, 80, 160, 1, 61, 89, 161, 230, 191, 49, 217, 122, 190, 7, 243, 230, 61, 112, 118, 158, 61, 79, 193, 242, 60, 81, 83, 249, 61, 140, 205, 160, 60, 190, 138, 50, 61, 188, 12, 67, 60, 230, 136, 21, 190, 132, 21, 172, 61, 166, 214, 186, 61, 179, 4, 41, 190, 19, 46, 8, 190, 226, 75, 252, 60, 57, 188, 147, 60, 233, 45, 212, 61, 227, 227, 7, 60, 220, 36, 202, 61, 192, 78, 147, 186, 5, 41, 163, 61, 136, 83, 153, 61, 127, 120, 166, 188, 42, 181, 49, 189, 229, 201, 146, 61, 149, 66, 69, 190, 222, 33, 214, 189, 22, 208, 251, 189, 187, 31, 206, 188, 49, 179, 32, 190, 88, 70, 24, 190, 170, 67, 7, 190, 143, 99, 121, 61, 196, 60, 173, 187, 18, 5, 5, 190, 137, 225, 153, 187, 240, 231, 246, 189, 179, 234, 37, 62, 8, 66, 254, 61, 88, 152, 209, 189, 46, 13, 6, 62, 44, 176, 39, 190, 176, 109, 163, 189, 79, 134, 137, 189, 91, 58, 173, 189, 203, 143, 223, 189, 177, 157, 223, 189, 180, 60, 32, 62, 109, 222, 0, 190, 163, 161, 233, 59, 87, 97, 48, 62, 183, 43, 147, 60, 220, 249, 220, 60, 239, 199, 179, 61, 170, 223, 196, 188, 97, 185, 79, 61, 112, 23, 30, 188, 163, 152, 63, 188, 103, 127, 189, 186, 179, 10, 27, 61, 108, 30, 205, 61, 70, 132, 112, 189, 240, 84, 19, 61, 12, 155, 85, 190, 87, 70, 9, 190, 114, 43, 244, 188, 213, 85, 19, 62, 8, 205, 56, 192, 125, 181, 129, 61, 54, 109, 130, 61, 135, 10, 29, 62, 162, 105, 193, 190, 228, 165, 24, 62, 230, 195, 191, 190, 218, 252, 7, 191, 6, 195, 155, 62, 153, 55, 0, 191, 54, 92, 207, 190, 148, 163, 147, 189, 245, 12, 78, 189, 207, 169, 170, 191, 79, 4, 113, 62, 105, 249, 132, 190, 116, 185, 152, 62, 187, 251, 200, 189, 98, 159, 157, 191, 224, 81, 66, 191, 44, 76, 138, 61, 104, 151, 42, 62, 23, 12, 239, 189, 11, 93, 39, 190, 37, 163, 148, 191, 234, 166, 81, 62, 195, 209, 6, 62, 113, 151, 3, 190, 252, 128, 11, 61, 180, 57, 5, 190, 176, 97, 136, 189, 98, 173, 9, 191, 96, 141, 135, 62, 216, 45, 11, 62, 204, 234, 148, 190, 209, 41, 124, 62, 17, 137, 108, 191, 80, 33, 57, 191, 212, 187, 130, 191, 202, 225, 29, 190, 107, 85, 88, 191, 123, 150, 105, 191, 99, 36, 157, 191, 32, 172, 64, 190, 200, 224, 251, 61, 62, 11, 237, 189, 219, 137, 164, 59, 230, 42, 4, 63, 27, 215, 120, 189, 145, 143, 32, 62, 138, 170, 2, 192, 81, 147, 68, 190, 37, 224, 20, 62, 187, 16, 62, 191, 0, 128, 94, 191, 215, 185, 23, 190, 100, 73, 150, 62, 205, 196, 31, 191, 212, 183, 183, 62, 145, 220, 36, 190, 180, 100, 85, 190, 32, 83, 210, 61, 222, 173, 25, 188, 75, 87, 154, 62, 214, 237, 184, 191, 68, 27, 190, 62, 217, 34, 208, 62, 149, 46, 83, 189, 136, 56, 67, 191, 9, 67, 187, 62, 59, 173, 153, 190, 157, 203, 196, 190, 27, 201, 250, 61, 171, 9, 43, 190, 42, 123, 57, 190, 19, 96, 27, 189, 97, 203, 8, 62, 145, 253, 71, 62, 89, 78, 98, 190, 255, 80, 162, 63, 184, 49, 112, 61, 99, 45, 15, 190, 116, 128, 100, 61, 69, 194, 55, 62, 17, 176, 74, 62, 110, 107, 217, 62, 178, 16, 21, 190, 188, 235, 22, 61, 235, 162, 106, 191, 190, 103, 124, 62, 100, 164, 131, 189, 105, 180, 129, 61, 122, 65, 41, 62, 37, 200, 68, 62, 199, 159, 130, 190, 41, 64, 25, 189, 164, 40, 53, 61, 225, 110, 140, 62, 202, 129, 157, 190, 90, 62, 29, 191, 66, 213, 131, 186, 179, 12, 128, 190, 138, 48, 147, 59, 63, 51, 42, 60, 184, 23, 67, 61, 191, 179, 164, 62, 223, 164, 58, 62, 246, 96, 129, 190, 251, 144, 210, 189, 29, 234, 44, 62, 169, 33, 140, 190, 134, 224, 180, 190, 51, 210, 230, 190, 40, 238, 86, 189, 118, 149, 158, 62, 73, 247, 221, 62, 94, 2, 158, 190, 231, 132, 25, 63, 86, 123, 119, 190, 142, 221, 191, 61, 225, 140, 72, 63, 179, 189, 204, 189, 217, 146, 97, 190, 252, 71, 33, 63, 146, 10, 11, 189, 255, 187, 80, 191, 194, 199, 65, 190, 131, 4, 3, 63, 98, 112, 70, 190, 200, 71, 117, 62, 55, 69, 154, 189, 64, 10, 159, 62, 179, 230, 65, 190, 29, 30, 63, 188, 65, 109, 7, 61, 137, 182, 48, 190, 182, 156, 29, 62, 76, 212, 16, 191, 64, 250, 194, 188, 39, 190, 122, 190, 55, 77, 206, 60, 33, 146, 18, 190, 10, 74, 163, 61, 8, 130, 161, 62, 223, 159, 147, 62, 234, 128, 44, 62, 159, 245, 235, 190, 156, 80, 201, 189, 53, 99, 140, 62, 110, 96, 82, 189, 47, 228, 34, 62, 119, 44, 240, 188, 104, 89, 66, 191, 186, 243, 112, 62, 197, 246, 3, 62, 128, 48, 117, 190, 5, 65, 199, 189, 96, 199, 133, 62, 40, 65, 180, 61, 153, 89, 194, 61, 82, 217, 33, 189, 221, 26, 133, 189, 80, 64, 190, 189, 78, 153, 79, 62, 200, 211, 171, 189, 10, 194, 183, 190, 54, 205, 63, 62, 153, 7, 236, 189, 141, 119, 191, 61, 239, 43, 50, 190, 27, 173, 222, 61, 131, 161, 145, 190, 204, 183, 198, 62, 157, 250, 136, 61, 218, 14, 68, 62, 40, 252, 142, 62, 37, 8, 50, 62, 4, 82, 226, 61, 187, 121, 39, 190, 108, 151, 185, 61, 111, 55, 155, 60, 164, 47, 52, 191, 224, 128, 182, 61, 166, 28, 154, 189, 238, 199, 255, 190, 211, 35, 23, 189, 214, 250, 111, 62, 211, 182, 105, 190, 87, 21, 95, 190, 65, 248, 26, 61, 93, 183, 112, 61, 178, 50, 11, 190, 242, 64, 134, 62, 164, 227, 208, 191, 189, 64, 212, 188, 22, 12, 177, 62, 135, 213, 182, 190, 185, 148, 27, 191, 1, 25, 164, 189, 61, 216, 194, 190, 185, 210, 34, 191, 70, 16, 76, 62, 121, 11, 230, 189, 241, 60, 118, 60, 8, 25, 53, 189, 218, 40, 219, 61, 7, 9, 132, 62, 178, 139, 10, 191, 69, 222, 9, 190, 221, 16, 134, 62, 139, 18, 39, 62, 200, 26, 20, 189, 5, 157, 29, 191, 13, 26, 1, 191, 96, 64, 67, 190, 31, 229, 167, 190, 178, 66, 84, 63, 80, 90, 37, 191, 8, 93, 30, 62, 150, 151, 44, 60, 220, 69, 122, 189, 118, 220, 11, 191, 137, 74, 149, 62, 255, 62, 232, 190, 238, 44, 136, 61, 40, 24, 52, 190, 29, 83, 24, 62, 27, 180, 7, 190, 119, 41, 155, 61, 187, 134, 10, 61, 186, 64, 249, 189, 12, 179, 72, 61, 13, 206, 62, 60, 40, 208, 24, 190, 141, 104, 72, 60, 49, 159, 28, 190, 130, 2, 29, 61, 157, 31, 152, 61, 73, 65, 84, 61, 220, 228, 182, 189, 201, 95, 34, 62, 61, 45, 39, 61, 187, 253, 67, 189, 134, 143, 234, 60, 189, 110, 221, 188, 156, 198, 139, 60, 58, 36, 115, 60, 167, 73, 7, 62, 19, 62, 44, 62, 207, 44, 44, 190, 243, 12, 42, 190, 66, 31, 18, 190, 141, 94, 158, 61, 180, 155, 35, 59, 11, 125, 9, 190, 29, 145, 227, 60, 52, 165, 44, 62, 52, 79, 72, 190, 176, 117, 138, 189, 136, 192, 194, 190, 3, 169, 3, 62, 43, 153, 24, 191, 42, 141, 142, 60, 122, 67, 80, 62, 126, 252, 98, 62, 46, 30, 86, 61, 86, 116, 121, 62, 6, 143, 251, 189, 22, 133, 140, 189, 47, 240, 202, 61, 170, 99, 161, 189, 109, 151, 165, 61, 56, 103, 136, 190, 50, 189, 197, 60, 244, 243, 31, 190, 149, 40, 109, 189, 69, 153, 210, 190, 88, 254, 208, 61, 15, 160, 131, 188, 50, 115, 17, 190, 134, 182, 34, 62, 49, 84, 66, 190, 43, 121, 147, 190, 140, 25, 166, 61, 87, 56, 64, 190, 114, 172, 154, 190, 247, 229, 181, 61, 122, 176, 47, 190, 116, 219, 50, 62, 104, 23, 138, 189, 101, 93, 210, 61, 115, 173, 228, 61, 241, 162, 148, 62, 224, 139, 68, 191, 245, 218, 62, 61, 251, 49, 92, 190, 85, 87, 2, 189, 189, 104, 180, 190, 159, 8, 175, 59, 130, 80, 176, 190, 131, 67, 38, 62, 34, 27, 10, 190, 146, 135, 151, 62, 61, 42, 110, 62, 90, 105, 201, 61, 120, 166, 194, 61, 104, 89, 19, 191, 31, 157, 97, 190, 244, 59, 244, 61, 209, 154, 153, 190, 142, 149, 116, 62, 208, 67, 138, 190, 50, 61, 175, 190, 136, 124, 102, 62, 29, 129, 133, 62, 150, 146, 249, 188, 116, 238, 128, 190, 64, 188, 135, 61, 196, 40, 135, 62, 39, 226, 146, 190, 241, 69, 156, 191, 223, 161, 243, 189, 113, 196, 139, 189, 161, 67, 142, 189, 16, 184, 114, 190, 77, 120, 220, 62, 217, 174, 176, 187, 211, 222, 254, 190, 30, 191, 2, 63, 177, 67, 60, 189, 7, 133, 199, 61, 236, 139, 179, 62, 234, 206, 39, 189, 21, 250, 199, 191, 34, 13, 243, 189, 121, 100, 200, 189, 29, 221, 54, 62, 153, 248, 250, 60, 93, 23, 147, 190, 6, 229, 162, 191, 60, 27, 131, 61, 209, 76, 151, 61, 191, 151, 150, 60, 0, 177, 134, 62, 118, 150, 122, 191, 216, 45, 60, 190, 86, 172, 237, 189, 27, 73, 127, 62, 39, 42, 188, 61, 217, 212, 124, 190, 44, 30, 132, 190, 10, 52, 15, 191, 0, 26, 198, 189, 245, 81, 75, 190, 171, 94, 105, 189, 162, 10, 103, 190, 184, 232, 154, 62, 201, 112, 254, 62, 143, 134, 52, 61, 62, 158, 25, 191, 154, 81, 175, 62, 69, 192, 113, 62, 79, 219, 219, 60, 137, 64, 165, 62, 237, 100, 39, 190, 121, 92, 211, 190, 72, 74, 92, 190, 211, 50, 7, 191, 105, 53, 46, 62, 6, 153, 240, 188, 150, 228, 249, 62, 171, 200, 19, 191, 167, 73, 183, 189, 103, 240, 55, 62, 19, 221, 213, 60, 0, 50, 150, 62, 132, 226, 44, 63, 27, 92, 98, 190, 71, 30, 149, 190, 45, 182, 145, 62, 239, 201, 17, 63, 28, 21, 57, 190, 21, 115, 164, 60, 252, 61, 173, 190, 70, 17, 87, 62, 81, 226, 223, 189, 55, 216, 124, 62, 45, 242, 81, 61, 30, 237, 118, 191, 132, 44, 220, 190, 15, 221, 151, 62, 183, 220, 222, 61, 71, 134, 143, 62, 176, 230, 174, 191, 228, 132, 113, 62, 20, 89, 230, 189, 125, 3, 234, 61, 188, 185, 197, 62, 245, 236, 203, 62, 158, 201, 188, 189, 191, 48, 185, 61, 75, 85, 119, 60, 130, 211, 198, 191, 188, 197, 238, 189, 67, 88, 254, 61, 126, 44, 23, 191, 165, 217, 42, 61, 13, 167, 56, 190, 130, 101, 197, 62, 240, 80, 152, 190, 38, 73, 15, 62, 52, 27, 194, 59, 53, 166, 31, 62, 249, 82, 77, 61, 117, 215, 141, 62, 176, 16, 221, 188, 35, 91, 38, 191, 4, 39, 4, 188, 158, 67, 166, 190, 50, 56, 87, 191, 233, 23, 143, 61, 174, 215, 131, 62, 176, 93, 85, 62, 109, 115, 215, 189, 244, 250, 164, 62, 22, 152, 109, 62, 151, 123, 162, 61, 1, 226, 238, 61, 98, 31, 227, 190, 13, 247, 31, 62, 149, 102, 178, 190, 42, 221, 248, 190, 170, 179, 243, 189, 30, 187, 127, 190, 184, 67, 145, 62, 151, 254, 154, 189, 134, 158, 133, 191, 92, 147, 184, 62, 211, 201, 138, 189, 79, 116, 210, 62, 215, 198, 49, 63, 7, 124, 151, 61, 97, 148, 142, 191, 71, 90, 195, 62, 24, 213, 7, 63, 140, 160, 1, 192, 133, 249, 180, 190, 51, 236, 86, 189, 166, 241, 134, 191, 230, 67, 118, 190, 58, 39, 147, 62, 180, 185, 71, 62, 131, 124, 112, 62, 40, 169, 155, 190, 68, 128, 76, 61, 239, 75, 244, 190, 245, 61, 128, 62, 3, 79, 194, 190, 255, 20, 9, 190, 151, 53, 169, 190, 168, 114, 10, 62, 215, 219, 153, 190, 128, 20, 17, 61, 74, 236, 139, 61, 30, 94, 26, 61, 136, 153, 228, 188, 225, 239, 12, 191, 170, 212, 43, 190, 228, 233, 147, 61, 22, 133, 95, 188, 218, 212, 243, 61, 68, 225, 168, 190, 32, 138, 80, 191, 29, 1, 117, 62, 8, 198, 52, 188, 33, 26, 234, 61, 113, 1, 196, 189, 61, 12, 207, 190, 237, 170, 24, 190, 84, 228, 43, 189, 211, 175, 149, 62, 116, 188, 98, 191, 29, 150, 137, 190, 253, 101, 138, 61, 155, 134, 217, 189, 125, 103, 169, 191, 14, 163, 149, 189, 107, 248, 95, 189, 74, 68, 66, 62, 132, 57, 4, 191, 99, 194, 145, 189, 136, 67, 76, 189, 95, 43, 55, 62, 255, 98, 151, 62, 211, 117, 97, 62, 93, 225, 83, 62, 76, 107, 163, 61, 189, 177, 139, 62, 136, 75, 143, 190, 168, 239, 199, 190, 225, 139, 84, 189, 111, 103, 109, 190, 60, 199, 28, 190, 194, 89, 156, 190, 78, 127, 166, 190, 66, 87, 129, 190, 162, 220, 135, 60, 151, 135, 53, 61, 95, 11, 49, 190, 64, 25, 149, 190, 234, 21, 33, 62, 202, 118, 135, 191, 158, 152, 111, 190, 86, 115, 4, 191, 119, 27, 166, 191, 94, 210, 152, 188, 50, 109, 213, 190, 194, 166, 172, 61, 37, 108, 41, 191, 194, 106, 11, 62, 59, 89, 129, 187, 44, 8, 123, 189, 173, 118, 104, 62, 7, 214, 237, 189, 134, 200, 152, 62, 92, 181, 143, 62, 112, 128, 90, 62, 2, 77, 204, 190, 107, 39, 241, 61, 208, 15, 139, 62, 199, 105, 143, 62, 16, 163, 41, 61, 80, 117, 54, 62, 110, 93, 113, 191, 156, 243, 186, 189, 215, 149, 134, 190, 131, 57, 48, 62, 75, 98, 166, 190, 215, 194, 154, 62, 126, 122, 37, 62, 87, 171, 62, 190, 227, 178, 171, 61, 111, 255, 161, 61, 100, 101, 134, 190, 182, 213, 91, 189, 245, 68, 27, 190, 244, 39, 86, 61, 140, 101, 62, 190, 222, 217, 216, 189, 16, 31, 237, 61, 228, 92, 216, 188, 154, 208, 112, 61, 28, 49, 234, 60, 23, 161, 83, 187, 151, 228, 48, 190, 75, 24, 11, 190, 12, 20, 31, 190, 131, 220, 148, 188, 58, 60, 63, 189, 126, 227, 30, 190, 70, 86, 123, 189, 163, 76, 244, 187, 55, 105, 166, 61, 22, 10, 189, 61, 19, 119, 185, 60, 246, 87, 2, 62, 86, 59, 52, 188, 21, 137, 191, 60, 55, 21, 39, 62, 39, 222, 70, 190, 191, 222, 21, 62, 232, 158, 221, 188, 185, 58, 15, 190, 185, 56, 147, 61, 153, 54, 203, 189, 168, 39, 172, 59, 54, 181, 24, 62, 111, 30, 38, 191, 138, 113, 138, 190, 130, 133, 55, 188, 135, 68, 19, 190, 9, 72, 225, 191, 40, 187, 46, 61, 228, 41, 110, 190, 113, 199, 23, 189, 39, 133, 147, 190, 158, 200, 22, 62, 81, 97, 36, 62, 129, 136, 96, 61, 89, 147, 186, 62, 170, 64, 149, 62, 6, 146, 16, 63, 5, 163, 64, 62, 120, 53, 160, 62, 93, 210, 192, 190, 203, 60, 135, 190, 240, 151, 139, 188, 108, 202, 194, 190, 177, 121, 84, 62, 110, 190, 12, 191, 25, 4, 155, 62, 116, 70, 94, 191, 142, 41, 2, 62, 198, 158, 143, 61, 249, 6, 68, 190, 118, 123, 13, 62, 175, 194, 203, 62, 109, 246, 178, 191, 150, 83, 115, 191, 218, 215, 243, 189, 172, 67, 2, 61, 242, 120, 89, 190, 107, 160, 40, 63, 184, 27, 189, 62, 82, 36, 174, 62, 176, 51, 171, 190, 214, 240, 10, 63, 107, 81, 76, 63, 159, 38, 180, 61, 73, 19, 187, 62, 39, 241, 144, 190, 230, 206, 139, 191, 24, 115, 61, 190, 234, 42, 175, 190, 65, 19, 58, 62, 35, 78, 67, 62, 137, 5, 52, 63, 229, 156, 94, 190, 66, 228, 98, 190, 219, 122, 179, 61, 163, 11, 24, 189, 107, 246, 217, 62, 233, 40, 40, 191, 102, 38, 156, 189, 146, 132, 63, 190, 23, 35, 124, 62, 216, 39, 193, 62, 139, 23, 18, 190, 103, 205, 159, 190, 35, 222, 164, 190, 55, 114, 149, 62, 126, 105, 118, 190, 66, 96, 43, 62, 14, 3, 187, 62, 26, 41, 91, 61, 51, 62, 185, 191, 178, 160, 225, 61, 234, 233, 37, 190, 51, 204, 85, 190, 233, 204, 24, 190, 144, 10, 12, 62, 110, 242, 129, 190, 237, 176, 197, 62, 69, 90, 37, 62, 46, 254, 197, 61, 209, 118, 9, 63, 235, 62, 235, 61, 105, 223, 143, 61, 149, 134, 181, 190, 142, 57, 158, 61, 251, 14, 172, 187, 206, 72, 140, 190, 104, 180, 181, 189, 40, 25, 155, 190, 129, 201, 109, 190, 125, 64, 37, 190, 176, 59, 235, 61, 71, 58, 30, 190, 20, 149, 144, 190, 0, 112, 96, 62, 45, 145, 96, 62, 36, 199, 12, 189};
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
                alignas(float) const unsigned char memory[] = {237, 178, 80, 62, 232, 106, 40, 189, 40, 181, 10, 190, 165, 179, 21, 61, 51, 6, 139, 61, 73, 16, 45, 190, 247, 255, 230, 60, 138, 11, 166, 61, 216, 87, 231, 62, 208, 72, 83, 190, 61, 5, 74, 190, 188, 159, 125, 62, 249, 232, 27, 62, 9, 93, 159, 189, 223, 81, 247, 61, 146, 168, 44, 62, 90, 235, 79, 61, 254, 13, 17, 190, 137, 66, 206, 189, 203, 181, 140, 190, 91, 56, 15, 190, 145, 232, 164, 60, 15, 52, 53, 190, 64, 68, 85, 190, 70, 52, 143, 62, 36, 52, 33, 62, 205, 227, 129, 190, 16, 117, 7, 190, 172, 23, 28, 190, 250, 182, 195, 189, 173, 52, 13, 190, 25, 74, 152, 189};
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
                alignas(float) const unsigned char memory[] = {51, 51, 76, 191, 0, 170, 30, 188, 52, 244, 232, 189, 9, 182, 48, 63, 31, 132, 206, 61, 80, 47, 10, 62, 47, 117, 28, 62, 247, 164, 3, 63, 30, 193, 105, 191, 49, 17, 33, 190, 145, 93, 41, 188, 161, 63, 73, 190, 188, 249, 132, 63, 167, 77, 141, 62, 13, 113, 73, 191, 175, 49, 186, 61, 229, 214, 138, 61, 242, 203, 160, 191, 188, 122, 131, 60, 141, 25, 96, 62, 188, 181, 170, 62, 146, 68, 24, 191, 95, 116, 0, 191, 30, 252, 10, 63, 75, 90, 226, 190, 148, 64, 81, 189, 92, 146, 30, 63, 160, 196, 138, 190, 83, 188, 27, 58, 182, 52, 164, 63, 151, 190, 28, 191, 139, 157, 4, 63, 83, 11, 5, 62, 175, 177, 130, 61, 98, 129, 142, 188, 153, 219, 184, 61, 218, 14, 133, 190, 240, 27, 28, 62, 200, 218, 129, 190, 1, 204, 35, 62, 121, 195, 69, 61, 57, 81, 167, 189, 114, 199, 96, 188, 52, 212, 70, 191, 108, 229, 237, 62, 146, 217, 188, 189, 26, 18, 233, 189, 178, 164, 45, 190, 155, 36, 33, 190, 103, 73, 249, 190, 100, 151, 223, 189, 186, 100, 2, 62, 232, 132, 92, 62, 13, 107, 148, 190, 218, 33, 27, 62, 51, 92, 58, 61, 120, 230, 62, 190, 105, 13, 243, 190, 246, 58, 86, 61, 16, 145, 49, 60, 64, 209, 98, 61, 57, 128, 119, 62, 103, 242, 81, 189, 240, 185, 228, 61};
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
                alignas(float) const unsigned char memory[] = {73, 161, 69, 190, 42, 90, 179, 190};
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
    alignas(float) const unsigned char memory[] = {64, 85, 141, 63, 43, 18, 160, 62, 91, 115, 162, 63};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {152, 55, 180, 191, 170, 20, 21, 192};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0019/steps/000000000020000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}