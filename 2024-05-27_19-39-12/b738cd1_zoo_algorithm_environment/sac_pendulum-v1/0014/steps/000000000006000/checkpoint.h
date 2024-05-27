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
                alignas(float) const unsigned char memory[] = {206, 129, 254, 62, 243, 182, 36, 190, 123, 72, 15, 63, 207, 42, 163, 190, 76, 175, 61, 190, 222, 209, 11, 190, 101, 255, 194, 190, 3, 79, 133, 63, 225, 83, 229, 62, 101, 43, 184, 62, 102, 166, 20, 63, 41, 26, 254, 62, 26, 131, 67, 191, 7, 98, 231, 190, 253, 184, 73, 191, 3, 101, 94, 62, 53, 106, 59, 63, 144, 75, 205, 62, 224, 210, 82, 63, 73, 194, 247, 61, 250, 189, 164, 62, 28, 125, 52, 190, 51, 220, 47, 62, 40, 145, 183, 190, 22, 4, 19, 63, 166, 213, 101, 190, 161, 119, 210, 62, 208, 10, 118, 190, 198, 52, 28, 62, 100, 88, 0, 191, 148, 16, 6, 62, 230, 141, 59, 189, 149, 142, 11, 191, 167, 184, 119, 190, 160, 72, 125, 191, 67, 180, 95, 61, 251, 229, 167, 62, 185, 183, 23, 191, 181, 24, 141, 190, 201, 57, 162, 190, 147, 179, 254, 190, 193, 50, 135, 62, 182, 87, 169, 189, 255, 50, 3, 63, 215, 122, 176, 62, 125, 138, 20, 63, 117, 187, 26, 63, 213, 155, 4, 62, 133, 179, 12, 189, 142, 162, 98, 63, 95, 229, 62, 190, 2, 60, 6, 191, 111, 221, 185, 62, 183, 116, 15, 63, 186, 214, 49, 63, 101, 112, 38, 63, 142, 114, 208, 62, 221, 93, 137, 62, 123, 131, 160, 189, 95, 169, 2, 61, 37, 217, 60, 63, 202, 168, 70, 191, 175, 233, 64, 190, 73, 229, 138, 190, 177, 89, 118, 191, 162, 12, 245, 62, 79, 228, 172, 190, 31, 183, 167, 60, 87, 108, 198, 61, 167, 13, 249, 62, 132, 97, 49, 63, 177, 148, 141, 62, 190, 62, 232, 62, 153, 176, 137, 191, 225, 203, 149, 190, 19, 153, 250, 190, 198, 223, 144, 189, 159, 118, 25, 63, 166, 130, 93, 62, 9, 118, 56, 191, 228, 65, 114, 62, 242, 119, 65, 61, 4, 251, 43, 191, 227, 125, 236, 190, 100, 238, 62, 190, 122, 104, 250, 190, 138, 6, 109, 62, 47, 40, 165, 190, 40, 103, 91, 63, 31, 171, 230, 62, 49, 25, 21, 191, 90, 136, 152, 191, 133, 43, 21, 190, 13, 202, 135, 62, 55, 97, 236, 190, 247, 69, 167, 62};
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
                alignas(float) const unsigned char memory[] = {145, 187, 147, 190, 205, 63, 130, 63, 207, 190, 134, 190, 106, 102, 144, 189, 55, 175, 208, 190, 174, 205, 251, 190, 124, 209, 213, 62, 86, 147, 1, 189, 105, 160, 114, 62, 221, 216, 123, 189, 178, 190, 154, 62, 189, 58, 191, 61, 26, 238, 56, 191, 178, 54, 51, 190, 93, 238, 157, 190, 180, 200, 212, 61, 3, 97, 186, 62, 99, 185, 213, 190, 3, 210, 52, 191, 79, 34, 244, 190, 152, 57, 21, 61, 177, 59, 152, 190, 186, 82, 70, 63, 38, 80, 33, 190, 101, 191, 174, 190, 41, 224, 44, 191, 42, 246, 140, 190, 136, 216, 205, 190, 102, 100, 48, 190, 87, 159, 123, 190, 237, 12, 129, 189, 11, 254, 245, 189};
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
                alignas(float) const unsigned char memory[] = {7, 180, 139, 61, 7, 91, 11, 190, 138, 174, 157, 61, 45, 63, 223, 189, 118, 12, 10, 190, 195, 200, 163, 61, 218, 169, 131, 61, 119, 251, 117, 188, 190, 180, 14, 190, 17, 189, 57, 61, 79, 220, 184, 60, 239, 145, 212, 61, 243, 130, 178, 60, 107, 43, 244, 189, 145, 246, 244, 189, 81, 109, 133, 61, 246, 21, 117, 190, 122, 27, 32, 190, 216, 107, 253, 188, 101, 196, 175, 61, 157, 36, 38, 189, 243, 254, 13, 62, 198, 148, 217, 189, 168, 7, 233, 61, 241, 190, 120, 62, 246, 34, 152, 61, 168, 194, 6, 190, 24, 122, 65, 62, 164, 147, 141, 61, 142, 242, 171, 189, 244, 218, 15, 190, 212, 218, 108, 188, 116, 108, 230, 189, 214, 237, 98, 189, 147, 240, 40, 190, 5, 82, 92, 190, 108, 207, 10, 191, 11, 37, 142, 190, 73, 248, 172, 190, 251, 19, 61, 190, 205, 145, 179, 61, 144, 106, 41, 190, 18, 103, 111, 190, 133, 35, 59, 62, 217, 147, 234, 189, 10, 199, 20, 62, 48, 196, 107, 189, 54, 122, 157, 190, 34, 18, 242, 190, 1, 114, 107, 61, 92, 146, 119, 190, 251, 111, 160, 61, 16, 0, 23, 61, 234, 187, 19, 62, 136, 126, 202, 61, 153, 172, 168, 190, 155, 116, 215, 61, 94, 46, 174, 61, 50, 60, 114, 62, 129, 103, 72, 62, 172, 97, 65, 190, 33, 44, 143, 189, 205, 100, 9, 62, 151, 252, 196, 187, 24, 84, 36, 62, 5, 114, 35, 190, 97, 47, 41, 59, 79, 113, 138, 60, 193, 151, 59, 189, 172, 103, 120, 189, 73, 164, 187, 187, 131, 108, 222, 61, 200, 67, 180, 189, 126, 11, 195, 61, 156, 140, 45, 189, 73, 180, 88, 190, 249, 198, 156, 61, 219, 191, 127, 56, 127, 124, 206, 189, 41, 239, 225, 60, 107, 169, 101, 190, 11, 47, 47, 61, 210, 130, 36, 62, 13, 80, 26, 190, 249, 240, 190, 61, 167, 200, 18, 190, 234, 246, 243, 188, 194, 54, 14, 190, 75, 172, 154, 189, 177, 59, 69, 189, 107, 171, 240, 61, 31, 220, 34, 62, 183, 59, 88, 62, 38, 108, 118, 61, 239, 195, 162, 189, 175, 120, 54, 190, 141, 1, 151, 62, 43, 95, 145, 62, 226, 139, 19, 190, 81, 124, 171, 189, 171, 118, 149, 189, 210, 193, 169, 190, 20, 172, 226, 62, 252, 233, 45, 62, 250, 21, 43, 62, 98, 222, 103, 62, 28, 161, 147, 62, 15, 85, 48, 61, 176, 92, 238, 189, 212, 200, 242, 190, 124, 109, 140, 190, 50, 192, 42, 190, 121, 55, 87, 62, 143, 78, 176, 190, 234, 39, 44, 61, 86, 69, 137, 189, 9, 45, 22, 62, 230, 245, 253, 188, 86, 155, 200, 61, 143, 163, 184, 190, 73, 46, 161, 60, 107, 13, 5, 188, 200, 38, 18, 62, 74, 198, 11, 190, 29, 39, 104, 189, 155, 234, 44, 190, 152, 199, 153, 190, 187, 47, 50, 62, 11, 3, 216, 189, 159, 118, 88, 61, 226, 75, 20, 188, 187, 175, 82, 60, 61, 200, 59, 190, 17, 82, 219, 189, 180, 242, 164, 189, 123, 85, 150, 61, 43, 77, 81, 62, 3, 168, 240, 189, 252, 20, 107, 61, 123, 244, 149, 188, 64, 119, 191, 189, 201, 229, 68, 189, 4, 141, 176, 189, 4, 69, 134, 60, 73, 71, 103, 62, 210, 188, 113, 61, 71, 144, 76, 190, 58, 200, 21, 62, 144, 104, 46, 62, 225, 62, 233, 61, 113, 59, 118, 62, 12, 154, 84, 189, 90, 65, 200, 188, 190, 19, 203, 189, 105, 57, 100, 62, 44, 153, 16, 190, 196, 27, 167, 61, 71, 2, 143, 61, 97, 254, 156, 190, 134, 234, 16, 62, 232, 51, 215, 189, 146, 152, 90, 61, 248, 2, 110, 60, 120, 203, 138, 189, 235, 214, 79, 190, 9, 35, 141, 61, 9, 11, 183, 189, 110, 69, 31, 62, 246, 39, 28, 190, 18, 53, 229, 190, 244, 74, 119, 187, 65, 152, 108, 62, 120, 37, 101, 62, 245, 116, 9, 62, 43, 73, 174, 189, 214, 2, 9, 189, 38, 49, 12, 190, 46, 222, 115, 62, 75, 52, 76, 190, 161, 54, 250, 61, 99, 241, 20, 63, 239, 246, 75, 190, 249, 37, 6, 190, 225, 135, 2, 190, 4, 72, 125, 62, 57, 192, 121, 62, 2, 127, 135, 61, 248, 16, 88, 62, 101, 245, 169, 190, 84, 195, 249, 61, 74, 45, 19, 190, 203, 185, 143, 62, 187, 140, 59, 62, 113, 103, 77, 61, 30, 136, 139, 189, 193, 62, 100, 62, 241, 77, 146, 61, 80, 153, 89, 62, 105, 104, 57, 62, 190, 199, 148, 190, 137, 89, 29, 62, 127, 54, 41, 61, 59, 119, 203, 59, 154, 210, 181, 189, 111, 189, 22, 188, 51, 200, 238, 189, 236, 68, 56, 189, 221, 16, 15, 62, 174, 2, 124, 62, 69, 11, 126, 61, 207, 20, 149, 189, 95, 183, 15, 62, 223, 149, 3, 190, 182, 50, 112, 62, 199, 166, 41, 62, 4, 134, 246, 61, 186, 124, 71, 188, 104, 63, 136, 190, 51, 81, 59, 190, 121, 14, 161, 188, 188, 138, 203, 60, 232, 17, 45, 190, 92, 231, 95, 190, 166, 245, 46, 190, 195, 242, 165, 61, 149, 178, 210, 190, 93, 235, 166, 190, 72, 34, 145, 61, 105, 107, 7, 190, 79, 153, 157, 61, 147, 214, 147, 62, 162, 21, 35, 61, 226, 235, 212, 61, 83, 24, 94, 189, 65, 28, 251, 59, 207, 19, 60, 190, 52, 98, 248, 189, 104, 103, 99, 190, 40, 184, 127, 189, 139, 174, 167, 61, 114, 185, 194, 190, 92, 113, 206, 189, 38, 106, 12, 62, 134, 40, 179, 189, 23, 236, 26, 62, 242, 113, 30, 189, 201, 35, 93, 190, 37, 209, 175, 188, 162, 199, 118, 62, 91, 32, 139, 190, 157, 191, 69, 189, 161, 238, 23, 190, 212, 116, 144, 189, 155, 194, 194, 189, 121, 155, 0, 61, 215, 82, 133, 189, 170, 108, 39, 190, 85, 168, 132, 62, 40, 55, 238, 61, 14, 252, 119, 190, 106, 78, 73, 190, 180, 62, 121, 57, 38, 67, 70, 189, 98, 219, 3, 62, 109, 116, 2, 62, 109, 201, 246, 189, 186, 4, 97, 61, 99, 227, 96, 189, 170, 107, 17, 190, 251, 121, 47, 189, 49, 153, 188, 189, 4, 203, 13, 190, 68, 169, 27, 61, 121, 91, 64, 189, 235, 19, 253, 189, 233, 124, 231, 61, 216, 175, 135, 62, 119, 41, 83, 190, 212, 144, 151, 62, 230, 132, 90, 190, 240, 179, 141, 61, 195, 111, 135, 62, 61, 107, 122, 62, 135, 204, 241, 61, 30, 107, 76, 190, 33, 111, 9, 62, 97, 39, 91, 62, 214, 33, 188, 62, 50, 17, 178, 189, 32, 117, 242, 58, 225, 141, 16, 189, 76, 31, 63, 61, 101, 147, 204, 189, 123, 198, 28, 62, 203, 243, 236, 61, 157, 146, 219, 61, 50, 108, 16, 190, 209, 204, 51, 190, 68, 71, 248, 61, 255, 208, 172, 188, 134, 107, 108, 61, 17, 188, 136, 189, 218, 65, 28, 61, 253, 3, 35, 190, 239, 121, 224, 189, 48, 153, 49, 190, 253, 51, 165, 185, 84, 205, 239, 61, 210, 76, 17, 61, 105, 117, 209, 61, 42, 177, 191, 189, 248, 172, 233, 189, 69, 175, 11, 190, 35, 85, 0, 62, 178, 41, 173, 189, 228, 67, 137, 189, 174, 238, 130, 189, 205, 246, 85, 60, 64, 199, 36, 61, 226, 158, 253, 61, 231, 88, 155, 189, 253, 146, 40, 190, 48, 167, 3, 189, 87, 251, 109, 60, 11, 104, 3, 189, 227, 23, 113, 189, 115, 88, 47, 61, 188, 121, 36, 62, 249, 109, 225, 61, 145, 56, 202, 60, 113, 28, 254, 189, 39, 132, 115, 188, 73, 224, 213, 189, 223, 195, 139, 190, 214, 212, 144, 60, 107, 41, 2, 62, 33, 99, 200, 189, 35, 164, 241, 189, 221, 230, 197, 189, 72, 213, 104, 61, 249, 36, 126, 189, 114, 217, 219, 61, 187, 97, 74, 189, 20, 0, 39, 189, 32, 112, 22, 190, 50, 149, 135, 189, 148, 67, 174, 189, 145, 9, 49, 190, 197, 157, 140, 61, 51, 138, 154, 189, 173, 191, 85, 61, 183, 0, 123, 189, 234, 251, 73, 190, 172, 114, 103, 190, 61, 134, 19, 189, 146, 70, 19, 189, 94, 211, 81, 190, 123, 19, 170, 189, 71, 125, 111, 189, 189, 75, 33, 62, 41, 16, 74, 59, 202, 25, 63, 189, 146, 73, 10, 190, 81, 49, 105, 60, 147, 61, 89, 62, 24, 26, 24, 62, 163, 188, 10, 190, 30, 27, 239, 189, 109, 126, 141, 190, 32, 34, 95, 62, 136, 180, 228, 61, 82, 146, 195, 189, 160, 71, 10, 188, 18, 68, 163, 61, 194, 233, 41, 61, 53, 4, 22, 190, 33, 103, 119, 62, 20, 106, 150, 62, 97, 251, 88, 62, 87, 127, 45, 62, 139, 142, 20, 62, 169, 214, 10, 62, 102, 27, 170, 60, 97, 28, 201, 62, 28, 159, 95, 61, 80, 234, 106, 190, 160, 202, 29, 62, 237, 40, 117, 61, 45, 84, 2, 190, 248, 232, 27, 190, 94, 239, 182, 187, 236, 208, 88, 60, 17, 112, 37, 190, 50, 104, 46, 189, 170, 19, 99, 61, 17, 193, 44, 190, 155, 191, 2, 62, 158, 7, 15, 62, 73, 45, 36, 189, 174, 168, 162, 61, 105, 97, 163, 188, 1, 13, 51, 61, 129, 56, 187, 186, 235, 30, 77, 189, 2, 37, 183, 61, 151, 33, 147, 61, 142, 154, 124, 60, 192, 232, 35, 190, 247, 221, 98, 189, 49, 211, 141, 60, 79, 53, 145, 186, 193, 21, 211, 61, 5, 168, 42, 190, 207, 36, 25, 190, 203, 27, 199, 188, 96, 129, 19, 190, 244, 24, 155, 190, 129, 130, 50, 189, 250, 138, 148, 61, 250, 55, 138, 189, 149, 13, 62, 191, 3, 137, 99, 189, 66, 29, 3, 189, 60, 64, 8, 190, 7, 47, 164, 189, 35, 227, 21, 191, 195, 71, 221, 190, 39, 39, 140, 189, 18, 48, 122, 189, 116, 3, 233, 60, 92, 206, 6, 62, 225, 113, 131, 61, 140, 137, 16, 190, 26, 117, 151, 62, 21, 17, 245, 189, 176, 139, 29, 62, 32, 118, 137, 189, 37, 98, 159, 190, 184, 227, 130, 62, 35, 11, 113, 61, 8, 45, 89, 190, 201, 57, 121, 62, 243, 36, 46, 62, 104, 44, 122, 190, 219, 14, 182, 61, 81, 67, 31, 188, 19, 135, 131, 190, 85, 114, 142, 61, 251, 90, 1, 190, 16, 166, 204, 61, 181, 224, 134, 61, 156, 202, 40, 190, 47, 46, 234, 190, 253, 101, 47, 189, 250, 58, 68, 62, 180, 227, 77, 62, 106, 138, 22, 61, 59, 219, 140, 190, 40, 244, 68, 189, 137, 186, 16, 190, 61, 217, 136, 62, 110, 126, 58, 62, 247, 190, 117, 189, 253, 116, 84, 60, 68, 251, 6, 60, 34, 189, 138, 189, 69, 41, 111, 190, 25, 180, 25, 59, 169, 66, 233, 62, 159, 224, 21, 190, 2, 198, 128, 62, 205, 205, 51, 190, 92, 115, 191, 62, 162, 62, 158, 189, 151, 250, 100, 62, 111, 161, 113, 62, 124, 37, 145, 190, 179, 219, 42, 62, 216, 178, 213, 189, 46, 75, 111, 62, 178, 119, 157, 62, 134, 234, 41, 62, 109, 233, 193, 190, 36, 16, 160, 62, 180, 18, 159, 60, 252, 36, 150, 62, 80, 132, 117, 62, 84, 79, 252, 190, 109, 49, 128, 189, 102, 138, 56, 62, 65, 41, 139, 62, 104, 172, 90, 62, 157, 50, 181, 190, 187, 184, 186, 61, 116, 164, 131, 62, 163, 225, 185, 61, 217, 239, 227, 62, 233, 246, 151, 190, 150, 6, 154, 189, 104, 212, 40, 62, 9, 116, 100, 190, 70, 95, 160, 62, 210, 107, 156, 61, 138, 111, 105, 62, 228, 154, 7, 191, 63, 205, 100, 191, 172, 197, 49, 191, 106, 75, 204, 190, 170, 186, 189, 62, 229, 31, 172, 190, 17, 189, 49, 62, 158, 255, 227, 190, 44, 183, 39, 187, 206, 39, 59, 191, 122, 107, 173, 60, 139, 90, 196, 61, 117, 179, 248, 189, 18, 243, 39, 190, 253, 68, 129, 61, 122, 209, 100, 189, 103, 58, 30, 62, 78, 109, 19, 190, 238, 192, 42, 190, 80, 99, 185, 188, 20, 207, 20, 190, 223, 8, 87, 61, 211, 50, 172, 189, 243, 22, 171, 61, 193, 224, 121, 189, 50, 255, 140, 189, 169, 178, 121, 60, 180, 131, 127, 189, 252, 245, 228, 190, 117, 5, 198, 61, 77, 197, 115, 190, 7, 153, 6, 62, 212, 202, 165, 61, 94, 43, 240, 61, 166, 190, 36, 61, 25, 69, 160, 60, 47, 223, 172, 188, 99, 90, 91, 61, 6, 234, 38, 191, 87, 227, 42, 62, 212, 127, 81, 188, 81, 229, 24, 191, 188, 221, 209, 188, 100, 158, 89, 61, 44, 3, 7, 190, 204, 21, 36, 62, 64, 39, 44, 61, 203, 130, 49, 190, 63, 62, 99, 60, 5, 249, 79, 189, 176, 4, 106, 190, 109, 81, 174, 190, 45, 209, 4, 189, 39, 63, 50, 61, 113, 26, 209, 61, 118, 46, 248, 60, 251, 110, 63, 190, 237, 10, 234, 188, 55, 17, 74, 62, 232, 234, 229, 188, 162, 69, 158, 190, 48, 199, 16, 62, 129, 241, 53, 61, 252, 236, 224, 187, 47, 134, 16, 61, 85, 138, 89, 60, 112, 112, 46, 62, 87, 86, 242, 189, 97, 44, 35, 62, 121, 186, 18, 190, 67, 56, 24, 191, 10, 207, 138, 61, 170, 105, 214, 189, 178, 224, 197, 61, 33, 204, 161, 62, 153, 2, 93, 190, 165, 152, 76, 191, 168, 108, 160, 190, 1, 210, 136, 189, 240, 5, 44, 63, 221, 230, 127, 61, 38, 117, 117, 190, 234, 90, 171, 190, 147, 95, 104, 190, 244, 0, 45, 61, 244, 99, 22, 188, 39, 236, 59, 190, 206, 241, 253, 190, 197, 176, 150, 62, 29, 120, 241, 62, 156, 110, 183, 190, 40, 7, 201, 189, 158, 183, 44, 189, 190, 44, 173, 189, 45, 29, 96, 62, 147, 138, 30, 191, 104, 197, 178, 190, 245, 1, 249, 62, 186, 235, 55, 62, 246, 69, 202, 190, 152, 248, 146, 190, 90, 135, 16, 62, 36, 9, 151, 190, 201, 190, 199, 59, 105, 134, 219, 188, 50, 197, 138, 62, 30, 187, 161, 59, 248, 200, 172, 189, 90, 248, 42, 191, 26, 196, 102, 189, 18, 178, 193, 189, 150, 4, 54, 60, 145, 126, 57, 61, 10, 27, 106, 191, 182, 46, 58, 190, 183, 91, 143, 189, 27, 106, 62, 190, 87, 76, 143, 62, 221, 123, 107, 61, 195, 23, 75, 190, 235, 35, 19, 190, 68, 179, 214, 188, 13, 67, 196, 189, 45, 107, 121, 61, 196, 46, 239, 62, 131, 131, 220, 189, 39, 56, 14, 62, 85, 16, 169, 190, 189, 3, 16, 62, 149, 122, 250, 61, 211, 42, 178, 62, 221, 133, 115, 60, 2, 86, 78, 190, 201, 209, 4, 62, 95, 137, 21, 190, 22, 228, 245, 61, 139, 22, 147, 60, 89, 37, 12, 62, 221, 144, 81, 62, 215, 227, 13, 190, 63, 3, 40, 61, 126, 15, 210, 56, 62, 246, 209, 189, 87, 110, 194, 189, 222, 213, 141, 59, 123, 218, 12, 62, 234, 174, 37, 189, 103, 208, 217, 188, 119, 232, 44, 190, 245, 209, 189, 190, 29, 204, 207, 190, 71, 38, 220, 188, 125, 12, 88, 62, 208, 42, 16, 189, 132, 123, 159, 189, 131, 103, 11, 62, 227, 55, 45, 191, 165, 64, 199, 190, 39, 157, 84, 62, 156, 29, 6, 190, 18, 210, 212, 190, 162, 216, 10, 190, 217, 191, 209, 189, 93, 78, 188, 190, 155, 127, 96, 190, 146, 33, 220, 189, 166, 85, 16, 190, 49, 237, 16, 190, 197, 75, 30, 189, 91, 167, 133, 189, 148, 235, 244, 188, 238, 240, 180, 189, 153, 34, 176, 188, 187, 110, 9, 190, 210, 43, 176, 188, 187, 85, 220, 189, 121, 222, 236, 189, 169, 214, 74, 60, 162, 144, 198, 59, 136, 169, 224, 188, 220, 117, 234, 189, 182, 48, 157, 189, 58, 246, 141, 61, 181, 74, 102, 61, 176, 81, 162, 61, 40, 182, 135, 189, 235, 29, 236, 61, 26, 190, 251, 189, 13, 24, 0, 190, 217, 216, 242, 189, 120, 2, 28, 61, 82, 240, 201, 60, 166, 160, 3, 62, 185, 139, 63, 61, 11, 239, 223, 188, 42, 110, 204, 189, 128, 199, 60, 61, 135, 91, 185, 188, 209, 161, 2, 62, 39, 203, 18, 62, 249, 52, 147, 190, 86, 147, 24, 189, 170, 236, 202, 61, 14, 85, 6, 61, 32, 23, 150, 190, 213, 251, 80, 190, 212, 239, 82, 61, 141, 2, 33, 62, 237, 235, 91, 189, 246, 215, 224, 190, 190, 104, 183, 190, 178, 144, 74, 61, 117, 130, 125, 189, 177, 173, 240, 61, 100, 20, 215, 189, 115, 147, 17, 190, 214, 79, 30, 189, 146, 244, 180, 62, 151, 231, 184, 188, 100, 173, 5, 190, 198, 213, 190, 62, 219, 16, 85, 190, 221, 45, 175, 61, 26, 139, 251, 189, 233, 126, 101, 62, 90, 7, 162, 62, 172, 164, 106, 61, 60, 82, 29, 62, 136, 102, 146, 190, 62, 46, 127, 189, 247, 170, 221, 61, 145, 221, 71, 62, 217, 206, 162, 61, 124, 35, 37, 190, 253, 24, 15, 62, 201, 71, 5, 61, 244, 174, 18, 190, 153, 85, 230, 189, 56, 47, 143, 60, 17, 225, 172, 60, 104, 218, 74, 61, 9, 115, 255, 61, 129, 124, 16, 59, 30, 52, 162, 189, 208, 197, 87, 62, 215, 146, 86, 190, 57, 1, 28, 189, 184, 58, 150, 190, 82, 189, 5, 190, 65, 224, 52, 190, 170, 9, 215, 61, 156, 165, 159, 61, 234, 141, 14, 190, 248, 6, 42, 190, 94, 245, 243, 190, 98, 190, 219, 61, 226, 146, 237, 61, 239, 138, 179, 61, 239, 32, 48, 190, 41, 26, 37, 62, 19, 95, 68, 189, 203, 46, 66, 187, 179, 205, 216, 61, 210, 220, 21, 189, 20, 141, 4, 63, 159, 243, 189, 61, 33, 197, 222, 190, 109, 233, 45, 62, 60, 171, 113, 62, 111, 189, 241, 61, 219, 25, 233, 62, 140, 195, 138, 190, 98, 142, 22, 190, 66, 45, 246, 61, 130, 179, 4, 62, 156, 41, 124, 62, 255, 165, 199, 189, 140, 73, 159, 62, 82, 124, 162, 62, 19, 224, 166, 62, 9, 39, 59, 62, 218, 45, 126, 190, 192, 32, 192, 61, 246, 33, 49, 190, 122, 59, 156, 190, 91, 41, 35, 62, 71, 253, 182, 61, 57, 14, 130, 62, 243, 78, 224, 190, 147, 197, 68, 191, 17, 134, 62, 191, 129, 31, 190, 190, 129, 162, 243, 61, 185, 170, 137, 190, 173, 145, 149, 62, 92, 216, 220, 190, 158, 140, 221, 189, 64, 34, 4, 191, 51, 137, 107, 189, 53, 157, 5, 62, 91, 206, 227, 189, 99, 136, 3, 62, 95, 106, 80, 62, 128, 124, 116, 59, 140, 180, 41, 62, 64, 11, 49, 189, 123, 88, 4, 60, 141, 241, 60, 189, 214, 173, 134, 61, 201, 176, 253, 189, 144, 177, 144, 61, 218, 164, 244, 61, 233, 149, 149, 190, 68, 165, 23, 61, 106, 171, 180, 189, 49, 118, 187, 61, 9, 173, 249, 189, 101, 236, 243, 60, 59, 121, 8, 190, 157, 128, 248, 61, 233, 140, 239, 61, 89, 179, 22, 60, 109, 128, 175, 188, 126, 52, 78, 190, 53, 220, 18, 62, 200, 239, 99, 61, 195, 187, 226, 190, 79, 138, 170, 61, 18, 239, 40, 190, 178, 145, 2, 190, 75, 155, 61, 61, 191, 99, 31, 190, 38, 227, 86, 189, 168, 57, 156, 189, 133, 228, 26, 62, 245, 114, 237, 61, 233, 225, 97, 190, 148, 210, 244, 189, 59, 221, 235, 61, 239, 15, 193, 61, 78, 88, 81, 60, 87, 94, 15, 190, 130, 231, 84, 61, 55, 47, 99, 62, 75, 184, 157, 61, 39, 230, 60, 190, 107, 42, 35, 62, 142, 30, 161, 188, 202, 207, 5, 190, 74, 191, 50, 190, 178, 121, 150, 189, 177, 227, 199, 60, 56, 242, 123, 190, 208, 74, 254, 61, 75, 11, 44, 190, 121, 191, 128, 190, 60, 202, 150, 61, 100, 203, 132, 190, 214, 17, 47, 190, 128, 145, 111, 189, 163, 71, 13, 189, 102, 74, 187, 61, 76, 82, 198, 188, 91, 54, 246, 61, 22, 195, 135, 189, 66, 156, 32, 62, 114, 217, 159, 61, 109, 156, 232, 61, 53, 116, 176, 189, 196, 104, 158, 190, 165, 167, 175, 61, 61, 179, 34, 61, 19, 106, 25, 190, 212, 131, 132, 189, 226, 226, 200, 61, 94, 17, 127, 62, 132, 56, 82, 61, 218, 128, 66, 59, 233, 253, 196, 189, 169, 139, 167, 60, 255, 111, 9, 62, 157, 76, 4, 190, 9, 204, 64, 61, 124, 239, 45, 190, 238, 224, 175, 189, 187, 132, 6, 190, 209, 26, 64, 188, 148, 119, 168, 57, 156, 248, 58, 190, 168, 16, 197, 189, 218, 190, 0, 62, 255, 215, 82, 187, 147, 120, 4, 190, 24, 175, 66, 60, 94, 153, 34, 190, 226, 193, 212, 188, 54, 179, 7, 61, 3, 160, 58, 189, 72, 195, 14, 189, 146, 215, 141, 190, 219, 88, 117, 61, 68, 19, 86, 190, 164, 48, 86, 190, 41, 160, 181, 62, 27, 33, 127, 190, 69, 82, 197, 187, 83, 1, 22, 189, 235, 52, 205, 187, 15, 228, 5, 191, 253, 96, 143, 190, 3, 176, 159, 61, 81, 134, 8, 62, 27, 97, 233, 59, 173, 241, 246, 60, 216, 199, 21, 62, 255, 96, 13, 62, 138, 81, 99, 61, 205, 127, 181, 190, 244, 161, 134, 187, 164, 4, 240, 189, 72, 94, 2, 189, 4, 211, 195, 189, 109, 239, 3, 63, 157, 76, 86, 188, 108, 79, 238, 61, 108, 245, 60, 62, 53, 134, 104, 191, 0, 51, 17, 190, 40, 177, 203, 61, 8, 64, 131, 189, 211, 96, 170, 189, 126, 47, 235, 190, 40, 84, 149, 190, 226, 43, 120, 62, 32, 202, 63, 62, 184, 246, 20, 62, 251, 83, 140, 190, 154, 152, 209, 62, 93, 57, 183, 188, 42, 34, 14, 61, 78, 96, 93, 62, 129, 111, 28, 191, 68, 120, 4, 61, 41, 120, 48, 60, 68, 83, 227, 190, 92, 72, 177, 62, 52, 239, 124, 62, 236, 91, 94, 190, 206, 240, 133, 190, 221, 225, 55, 191, 174, 154, 230, 190, 248, 199, 106, 190, 90, 243, 179, 62, 160, 209, 37, 191, 132, 21, 97, 62, 169, 176, 5, 190, 66, 175, 48, 62, 115, 228, 200, 189, 211, 86, 91, 61, 27, 71, 53, 62, 89, 212, 187, 61, 85, 181, 132, 189, 170, 89, 5, 62, 3, 83, 151, 190, 169, 164, 63, 62, 58, 176, 185, 62, 160, 191, 204, 61, 191, 74, 18, 61, 60, 105, 74, 190, 83, 151, 216, 61, 218, 190, 73, 62, 229, 28, 9, 62, 94, 40, 160, 62, 229, 9, 98, 189, 117, 178, 131, 189, 216, 2, 226, 189, 169, 46, 141, 189, 148, 158, 106, 61, 8, 115, 30, 62, 81, 41, 225, 189, 152, 46, 245, 189, 98, 74, 47, 190, 0, 190, 93, 61, 137, 104, 120, 190, 75, 205, 17, 62, 141, 162, 164, 61, 229, 9, 138, 61, 119, 45, 194, 61, 48, 24, 91, 190, 84, 100, 155, 62, 73, 63, 24, 189, 83, 31, 36, 190, 222, 225, 5, 190, 253, 50, 43, 190, 77, 6, 122, 189, 160, 68, 27, 61, 63, 173, 89, 62, 129, 175, 80, 190, 37, 183, 217, 188, 23, 194, 26, 189, 164, 192, 144, 189, 200, 174, 197, 60, 252, 24, 60, 190, 182, 251, 199, 189, 86, 20, 159, 189, 234, 106, 97, 62, 120, 1, 92, 190, 93, 23, 237, 189, 98, 40, 228, 61, 255, 158, 13, 190, 7, 111, 167, 62, 220, 86, 61, 190, 26, 72, 13, 62, 61, 122, 90, 62, 216, 130, 16, 62, 235, 163, 1, 62, 118, 52, 179, 189, 36, 33, 102, 62, 40, 129, 87, 62, 91, 100, 208, 62};
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
                alignas(float) const unsigned char memory[] = {128, 125, 85, 59, 154, 33, 16, 190, 158, 172, 28, 190, 93, 116, 98, 62, 176, 116, 119, 62, 37, 167, 1, 62, 201, 125, 9, 62, 202, 40, 69, 61, 116, 204, 103, 62, 54, 149, 202, 189, 200, 172, 93, 188, 169, 178, 43, 190, 167, 22, 165, 59, 146, 152, 56, 62, 71, 103, 146, 62, 159, 235, 140, 62, 210, 82, 8, 189, 118, 248, 201, 60, 188, 39, 77, 62, 96, 203, 132, 61, 158, 2, 47, 189, 168, 243, 248, 189, 144, 13, 138, 189, 215, 176, 164, 190, 190, 31, 58, 62, 127, 206, 143, 190, 25, 124, 91, 61, 249, 222, 143, 62, 4, 158, 231, 61, 217, 52, 93, 62, 74, 188, 254, 61, 107, 214, 103, 62};
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
                alignas(float) const unsigned char memory[] = {108, 243, 208, 189, 154, 155, 246, 190, 247, 160, 225, 61, 38, 59, 180, 62, 249, 17, 155, 61, 121, 145, 187, 62, 6, 142, 131, 189, 60, 112, 220, 190, 54, 132, 108, 62, 152, 32, 130, 189, 62, 12, 185, 61, 190, 205, 208, 190, 52, 11, 217, 189, 203, 173, 121, 62, 227, 204, 223, 62, 29, 227, 59, 191, 124, 168, 89, 190, 220, 33, 92, 190, 145, 189, 101, 63, 78, 59, 224, 62, 249, 108, 44, 63, 1, 127, 237, 61, 241, 77, 143, 62, 84, 199, 246, 189, 172, 128, 40, 191, 209, 180, 0, 190, 92, 211, 12, 62, 252, 38, 14, 61, 11, 39, 166, 190, 211, 150, 98, 191, 23, 204, 249, 189, 242, 63, 30, 62, 23, 59, 145, 61, 239, 101, 38, 62, 199, 63, 232, 187, 160, 149, 89, 190, 7, 120, 153, 190, 148, 204, 6, 62, 210, 161, 32, 190, 226, 149, 0, 62, 236, 15, 71, 190, 233, 100, 120, 61, 71, 60, 179, 60, 166, 108, 158, 61, 93, 240, 255, 61, 177, 83, 114, 190, 92, 253, 246, 61, 101, 41, 214, 60, 78, 55, 100, 187, 82, 92, 157, 188, 255, 28, 89, 62, 198, 211, 114, 189, 186, 155, 113, 62, 245, 210, 10, 190, 144, 67, 224, 61, 212, 76, 116, 61, 225, 129, 51, 62, 93, 126, 149, 61, 38, 30, 252, 61, 251, 228, 108, 190, 203, 75, 19, 62, 165, 172, 236, 188, 136, 137, 3, 190, 133, 19, 47, 190};
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
                alignas(float) const unsigned char memory[] = {33, 211, 170, 189, 73, 186, 53, 190};
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
    alignas(float) const unsigned char memory[] = {57, 247, 107, 190, 35, 57, 216, 63, 92, 136, 19, 192};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {204, 40, 132, 191, 112, 224, 87, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0014/steps/000000000006000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}