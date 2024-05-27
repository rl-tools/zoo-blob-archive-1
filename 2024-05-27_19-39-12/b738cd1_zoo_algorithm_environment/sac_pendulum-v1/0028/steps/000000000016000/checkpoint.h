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
                alignas(float) const unsigned char memory[] = {62, 212, 239, 190, 177, 145, 62, 63, 73, 230, 241, 190, 137, 19, 66, 190, 197, 58, 186, 63, 83, 169, 159, 62, 37, 222, 4, 191, 12, 217, 148, 191, 142, 169, 173, 190, 131, 247, 168, 191, 164, 102, 9, 190, 117, 102, 172, 60, 83, 212, 23, 62, 144, 12, 219, 190, 153, 4, 70, 63, 150, 32, 29, 63, 82, 44, 39, 191, 249, 249, 40, 63, 246, 81, 5, 191, 17, 88, 188, 63, 83, 54, 162, 62, 94, 190, 240, 62, 207, 236, 6, 191, 141, 222, 184, 190, 77, 4, 6, 189, 206, 111, 153, 190, 67, 199, 82, 62, 205, 2, 215, 189, 233, 29, 93, 191, 46, 154, 73, 190, 27, 46, 154, 62, 177, 119, 150, 63, 182, 146, 211, 62, 253, 67, 14, 191, 247, 9, 13, 191, 66, 88, 127, 62, 52, 138, 177, 62, 22, 227, 102, 191, 34, 120, 232, 62, 217, 13, 36, 63, 46, 23, 122, 189, 22, 2, 231, 62, 125, 119, 23, 191, 109, 138, 177, 62, 194, 201, 176, 62, 148, 14, 228, 189, 182, 16, 122, 63, 121, 221, 227, 190, 2, 192, 150, 190, 17, 10, 87, 63, 255, 54, 59, 189, 252, 93, 68, 191, 173, 39, 35, 191, 155, 87, 114, 190, 219, 167, 85, 58, 39, 96, 34, 190, 147, 244, 18, 189, 9, 255, 79, 190, 216, 156, 130, 191, 176, 78, 174, 186, 64, 1, 254, 62, 237, 241, 158, 62, 234, 9, 44, 63, 215, 81, 164, 190, 28, 190, 187, 191, 46, 51, 186, 190, 140, 13, 36, 63, 102, 232, 141, 63, 83, 88, 79, 62, 69, 106, 79, 63, 31, 55, 19, 191, 131, 31, 2, 62, 176, 217, 96, 190, 121, 200, 21, 63, 217, 234, 22, 191, 119, 158, 140, 61, 91, 191, 195, 191, 79, 97, 166, 190, 82, 183, 130, 189, 39, 125, 56, 63, 44, 183, 7, 63, 231, 22, 242, 62, 35, 74, 90, 63, 216, 110, 76, 62, 159, 169, 87, 63, 164, 92, 33, 191, 217, 248, 149, 190, 126, 151, 48, 191, 53, 36, 71, 63, 220, 73, 42, 62, 247, 246, 134, 63, 23, 86, 135, 191, 55, 202, 194, 190, 86, 219, 202, 62, 10, 239, 141, 61, 126, 203, 2, 63};
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
                alignas(float) const unsigned char memory[] = {216, 230, 143, 189, 71, 200, 28, 190, 38, 244, 167, 62, 76, 5, 234, 60, 73, 204, 251, 190, 3, 147, 211, 190, 180, 153, 247, 189, 75, 235, 72, 191, 126, 90, 217, 55, 249, 131, 39, 189, 108, 227, 10, 191, 20, 69, 8, 63, 73, 213, 243, 62, 130, 85, 159, 62, 41, 127, 63, 191, 90, 133, 147, 190, 20, 105, 240, 61, 23, 78, 239, 62, 116, 88, 9, 191, 32, 6, 157, 190, 101, 169, 88, 191, 227, 243, 228, 189, 194, 248, 228, 62, 240, 207, 1, 189, 219, 251, 44, 63, 133, 96, 210, 62, 136, 207, 179, 190, 127, 99, 251, 189, 53, 114, 26, 191, 209, 135, 0, 63, 92, 218, 78, 62, 244, 161, 240, 189};
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
                alignas(float) const unsigned char memory[] = {208, 164, 230, 189, 238, 69, 161, 61, 192, 28, 230, 61, 169, 80, 87, 189, 172, 144, 187, 61, 100, 117, 225, 189, 55, 252, 194, 189, 42, 119, 42, 188, 8, 106, 160, 189, 19, 70, 71, 190, 218, 5, 155, 186, 83, 163, 25, 190, 155, 199, 149, 61, 53, 111, 9, 190, 241, 108, 147, 189, 100, 110, 225, 188, 175, 120, 170, 61, 174, 242, 48, 190, 247, 202, 42, 189, 88, 94, 136, 189, 158, 44, 241, 189, 39, 214, 29, 189, 193, 14, 190, 61, 66, 79, 96, 61, 179, 131, 164, 61, 250, 210, 235, 189, 92, 226, 181, 189, 107, 237, 2, 61, 112, 224, 11, 62, 138, 196, 89, 190, 77, 50, 200, 189, 175, 86, 226, 189, 243, 147, 183, 190, 173, 55, 72, 61, 126, 42, 18, 186, 230, 155, 152, 190, 237, 232, 207, 190, 54, 102, 22, 190, 158, 14, 151, 190, 150, 194, 132, 189, 224, 140, 103, 190, 116, 17, 24, 189, 232, 121, 159, 61, 28, 206, 149, 188, 26, 75, 10, 190, 136, 232, 132, 62, 189, 139, 64, 191, 128, 105, 60, 62, 191, 105, 22, 62, 196, 224, 2, 190, 168, 181, 3, 190, 122, 178, 30, 190, 202, 203, 161, 190, 58, 236, 140, 190, 198, 94, 176, 62, 63, 46, 114, 61, 183, 13, 237, 61, 56, 241, 10, 190, 250, 114, 83, 190, 173, 188, 158, 62, 213, 144, 185, 190, 64, 199, 50, 62, 212, 2, 202, 188, 199, 142, 23, 62, 33, 244, 84, 190, 176, 146, 207, 189, 104, 154, 11, 190, 154, 190, 92, 190, 228, 238, 35, 61, 137, 5, 33, 62, 238, 156, 29, 191, 121, 187, 137, 189, 133, 176, 236, 189, 145, 76, 163, 61, 9, 46, 157, 61, 82, 255, 231, 189, 11, 88, 180, 187, 3, 135, 37, 62, 90, 68, 231, 189, 32, 74, 154, 62, 75, 241, 187, 60, 60, 42, 207, 61, 105, 62, 244, 189, 211, 172, 220, 190, 218, 81, 177, 61, 38, 196, 81, 190, 59, 75, 102, 188, 86, 160, 92, 190, 156, 137, 64, 62, 200, 11, 201, 190, 134, 153, 19, 190, 8, 223, 32, 61, 191, 21, 92, 191, 189, 138, 231, 188, 126, 56, 57, 190, 248, 59, 226, 189, 221, 50, 120, 61, 77, 92, 31, 192, 87, 31, 62, 191, 192, 14, 70, 62, 179, 217, 183, 190, 100, 99, 137, 191, 172, 30, 30, 190, 58, 143, 90, 189, 229, 28, 31, 191, 172, 143, 110, 190, 111, 169, 188, 191, 142, 126, 58, 189, 29, 50, 83, 190, 167, 71, 98, 62, 121, 24, 139, 190, 170, 243, 14, 189, 248, 213, 217, 61, 198, 240, 19, 191, 182, 190, 43, 62, 251, 17, 84, 191, 197, 170, 13, 190, 247, 97, 137, 190, 0, 24, 140, 61, 3, 47, 238, 188, 72, 101, 186, 61, 158, 50, 5, 191, 226, 196, 126, 191, 12, 108, 179, 189, 149, 102, 16, 62, 147, 126, 131, 191, 155, 43, 127, 62, 19, 108, 254, 190, 64, 34, 92, 189, 154, 68, 37, 191, 49, 14, 36, 190, 191, 153, 235, 189, 243, 234, 131, 61, 234, 36, 80, 190, 169, 226, 140, 190, 190, 174, 29, 190, 247, 57, 108, 62, 94, 224, 67, 190, 28, 217, 152, 191, 174, 1, 142, 62, 36, 56, 200, 62, 222, 16, 220, 189, 242, 115, 111, 190, 196, 30, 52, 190, 75, 70, 14, 190, 200, 76, 156, 190, 44, 225, 229, 189, 117, 242, 129, 62, 14, 181, 181, 190, 146, 172, 29, 190, 112, 116, 21, 189, 220, 189, 104, 62, 61, 128, 251, 61, 25, 188, 138, 62, 179, 17, 237, 187, 6, 239, 44, 191, 100, 190, 208, 190, 111, 100, 36, 191, 239, 61, 126, 62, 153, 21, 223, 61, 108, 0, 173, 62, 219, 22, 14, 192, 246, 242, 80, 189, 127, 110, 44, 191, 119, 210, 60, 191, 38, 174, 52, 191, 150, 61, 234, 189, 212, 165, 172, 62, 28, 13, 183, 190, 61, 107, 162, 61, 50, 38, 228, 190, 184, 251, 221, 190, 131, 125, 59, 186, 21, 39, 92, 62, 222, 0, 133, 190, 49, 145, 179, 61, 38, 238, 108, 190, 203, 211, 85, 190, 58, 14, 30, 190, 45, 251, 187, 190, 109, 39, 81, 189, 126, 178, 25, 188, 170, 2, 189, 188, 211, 36, 14, 63, 212, 50, 132, 60, 37, 200, 71, 62, 84, 93, 24, 191, 43, 251, 142, 190, 37, 87, 148, 62, 25, 62, 190, 191, 183, 164, 217, 62, 24, 63, 108, 190, 225, 92, 19, 62, 192, 17, 108, 191, 66, 183, 166, 189, 5, 159, 98, 62, 235, 68, 187, 61, 26, 186, 51, 190, 43, 249, 198, 61, 250, 129, 176, 62, 30, 56, 197, 61, 229, 215, 25, 190, 240, 141, 125, 191, 155, 149, 134, 62, 190, 138, 238, 61, 77, 124, 10, 189, 15, 71, 29, 190, 209, 207, 99, 61, 209, 59, 71, 190, 58, 232, 117, 189, 141, 244, 19, 189, 33, 124, 15, 62, 162, 234, 173, 190, 14, 102, 121, 190, 237, 162, 227, 189, 189, 172, 52, 63, 247, 183, 74, 189, 186, 148, 165, 61, 44, 243, 205, 189, 246, 155, 226, 190, 218, 57, 72, 62, 233, 126, 222, 190, 119, 255, 219, 62, 237, 77, 151, 60, 211, 95, 105, 190, 150, 238, 7, 191, 55, 145, 200, 59, 86, 228, 117, 190, 214, 131, 23, 62, 117, 99, 76, 62, 214, 37, 149, 190, 187, 239, 38, 190, 60, 177, 246, 188, 36, 93, 232, 59, 39, 172, 74, 191, 53, 114, 131, 189, 130, 34, 5, 61, 59, 216, 69, 62, 192, 255, 5, 62, 127, 29, 141, 61, 58, 124, 220, 61, 96, 162, 7, 190, 159, 69, 13, 62, 119, 84, 6, 62, 58, 117, 130, 62, 88, 92, 71, 190, 25, 146, 3, 62, 221, 65, 240, 62, 156, 131, 168, 62, 3, 112, 48, 190, 149, 165, 193, 189, 69, 157, 58, 190, 20, 161, 43, 190, 246, 50, 188, 190, 148, 237, 147, 62, 48, 114, 188, 61, 158, 22, 2, 190, 71, 243, 217, 61, 10, 130, 42, 190, 139, 43, 36, 62, 73, 198, 33, 61, 62, 38, 237, 189, 241, 75, 6, 190, 9, 231, 239, 189, 112, 70, 100, 190, 152, 74, 53, 190, 210, 223, 95, 60, 100, 106, 17, 189, 154, 1, 79, 190, 158, 206, 253, 187, 180, 252, 133, 61, 16, 244, 152, 61, 167, 252, 16, 62, 92, 20, 238, 189, 229, 90, 49, 190, 104, 30, 27, 190, 16, 107, 182, 188, 50, 254, 80, 189, 27, 216, 213, 188, 193, 73, 111, 190, 101, 90, 1, 189, 124, 242, 17, 62, 247, 63, 48, 188, 182, 92, 48, 189, 53, 99, 1, 62, 176, 44, 9, 190, 231, 178, 64, 190, 121, 223, 197, 61, 153, 198, 207, 190, 109, 138, 10, 192, 178, 188, 98, 61, 199, 19, 163, 62, 238, 142, 7, 191, 4, 231, 204, 190, 176, 61, 1, 191, 4, 96, 45, 190, 232, 44, 169, 190, 241, 146, 93, 190, 16, 53, 207, 189, 254, 204, 173, 61, 147, 50, 153, 60, 206, 148, 71, 191, 225, 123, 178, 190, 164, 136, 225, 61, 163, 229, 244, 61, 59, 178, 58, 62, 28, 107, 41, 190, 203, 120, 246, 189, 254, 163, 21, 190, 90, 203, 9, 189, 108, 107, 214, 60, 32, 33, 94, 191, 56, 222, 130, 62, 177, 36, 178, 61, 163, 225, 1, 191, 118, 91, 1, 63, 148, 247, 76, 191, 141, 75, 108, 60, 65, 216, 121, 190, 60, 140, 21, 191, 181, 168, 140, 189, 102, 12, 227, 60, 210, 182, 38, 190, 127, 89, 19, 190, 135, 14, 32, 190, 85, 210, 252, 189, 42, 123, 15, 190, 190, 246, 81, 61, 222, 26, 145, 189, 151, 247, 44, 189, 0, 8, 25, 190, 8, 72, 147, 189, 229, 39, 3, 62, 241, 97, 234, 189, 56, 163, 15, 190, 229, 184, 43, 189, 63, 201, 18, 60, 233, 102, 27, 189, 126, 126, 29, 62, 22, 5, 11, 62, 196, 6, 181, 189, 113, 150, 247, 60, 236, 164, 197, 189, 12, 32, 2, 62, 245, 214, 117, 189, 152, 180, 113, 189, 62, 232, 134, 189, 103, 144, 21, 190, 71, 194, 177, 189, 194, 132, 202, 188, 71, 178, 141, 189, 53, 30, 240, 185, 155, 41, 126, 189, 193, 172, 56, 62, 17, 227, 189, 62, 244, 38, 4, 191, 20, 110, 31, 62, 106, 227, 160, 189, 138, 228, 125, 189, 77, 163, 214, 62, 78, 216, 107, 62, 146, 206, 130, 62, 74, 239, 191, 61, 17, 179, 21, 61, 81, 223, 245, 61, 152, 39, 93, 58, 238, 162, 178, 62, 237, 251, 192, 189, 49, 216, 91, 191, 166, 249, 85, 62, 180, 180, 50, 61, 165, 96, 181, 61, 168, 117, 9, 190, 223, 6, 248, 60, 48, 211, 100, 190, 126, 63, 78, 190, 194, 88, 184, 190, 86, 31, 195, 62, 92, 229, 70, 61, 177, 64, 36, 188, 2, 130, 17, 63, 173, 90, 164, 190, 35, 197, 124, 62, 99, 153, 234, 61, 204, 247, 72, 190, 29, 150, 189, 60, 81, 62, 47, 61, 2, 163, 7, 62, 235, 69, 135, 61, 149, 190, 71, 62, 124, 64, 131, 62, 97, 113, 198, 61, 213, 85, 109, 189, 24, 73, 101, 62, 172, 50, 37, 190, 239, 51, 193, 61, 132, 152, 5, 188, 113, 142, 229, 189, 173, 76, 217, 61, 49, 44, 204, 189, 76, 204, 239, 61, 18, 247, 130, 189, 98, 88, 136, 61, 72, 236, 146, 61, 128, 65, 37, 60, 73, 146, 136, 61, 135, 223, 191, 61, 20, 213, 71, 190, 131, 133, 172, 62, 55, 215, 51, 60, 152, 196, 163, 188, 80, 250, 135, 190, 21, 178, 156, 190, 251, 26, 4, 62, 159, 243, 76, 62, 158, 152, 45, 61, 14, 76, 222, 62, 48, 152, 0, 62, 86, 222, 147, 190, 44, 45, 135, 191, 9, 56, 11, 62, 147, 64, 185, 61, 131, 82, 159, 190, 214, 236, 7, 190, 135, 126, 4, 187, 126, 20, 26, 190, 177, 15, 58, 62, 164, 44, 140, 190, 5, 49, 152, 189, 31, 72, 59, 62, 159, 250, 125, 62, 212, 175, 150, 61, 235, 53, 46, 190, 255, 142, 15, 190, 115, 75, 183, 61, 122, 216, 162, 190, 223, 88, 128, 61, 204, 45, 103, 190, 145, 81, 189, 62, 169, 231, 183, 60, 9, 106, 149, 61, 4, 251, 18, 191, 139, 219, 73, 62, 202, 14, 240, 62, 1, 107, 19, 191, 54, 230, 72, 190, 135, 47, 34, 62, 213, 67, 221, 61, 109, 253, 212, 61, 80, 222, 36, 189, 43, 224, 60, 62, 223, 207, 198, 62, 230, 212, 133, 188, 246, 62, 119, 190, 96, 40, 184, 61, 90, 177, 141, 60, 22, 27, 13, 62, 26, 53, 13, 190, 172, 50, 19, 191, 50, 231, 101, 62, 81, 249, 240, 60, 231, 14, 243, 60, 99, 109, 252, 189, 30, 89, 5, 62, 208, 44, 173, 60, 245, 98, 182, 61, 31, 252, 233, 60, 68, 113, 224, 61, 235, 75, 0, 190, 29, 113, 8, 189, 5, 7, 1, 190, 49, 173, 11, 62, 63, 15, 92, 62, 207, 14, 116, 62, 207, 59, 186, 61, 215, 57, 8, 191, 44, 31, 141, 188, 107, 190, 28, 62, 236, 113, 154, 61, 238, 37, 0, 62, 108, 214, 135, 190, 110, 12, 171, 61, 63, 250, 26, 61, 10, 1, 128, 190, 180, 113, 9, 62, 42, 216, 216, 61, 154, 118, 132, 61, 169, 172, 25, 189, 28, 4, 84, 189, 180, 72, 142, 61, 31, 236, 31, 189, 97, 162, 9, 189, 90, 31, 234, 187, 195, 97, 210, 189, 59, 133, 163, 189, 142, 221, 213, 61, 31, 69, 218, 62, 20, 77, 98, 188, 144, 207, 214, 60, 122, 186, 122, 190, 28, 72, 7, 190, 196, 188, 150, 188, 252, 245, 8, 62, 64, 51, 128, 190, 161, 139, 113, 62, 79, 196, 70, 189, 5, 210, 255, 61, 242, 199, 249, 188, 69, 104, 8, 191, 84, 216, 91, 62, 29, 234, 58, 61, 98, 207, 173, 61, 10, 229, 34, 190, 153, 36, 8, 192, 114, 232, 251, 188, 232, 121, 43, 62, 182, 135, 203, 190, 19, 138, 68, 62, 2, 160, 1, 190, 17, 232, 159, 59, 158, 93, 74, 62, 152, 11, 62, 191, 154, 145, 171, 190, 164, 195, 173, 61, 201, 34, 141, 61, 74, 58, 72, 62, 129, 249, 24, 191, 51, 109, 63, 62, 7, 107, 128, 62, 244, 217, 133, 60, 105, 12, 191, 61, 187, 43, 182, 190, 171, 168, 41, 190, 249, 113, 170, 190, 50, 177, 151, 191, 254, 242, 122, 62, 201, 6, 165, 188, 76, 21, 27, 190, 17, 140, 22, 191, 193, 249, 98, 190, 70, 67, 156, 189, 157, 85, 132, 62, 164, 29, 40, 190, 83, 164, 54, 191, 165, 211, 192, 189, 19, 45, 131, 61, 15, 126, 139, 189, 169, 143, 98, 61, 73, 155, 25, 62, 150, 81, 0, 189, 109, 23, 175, 189, 77, 74, 97, 189, 4, 184, 235, 61, 69, 166, 21, 62, 125, 16, 153, 61, 180, 208, 58, 189, 245, 183, 76, 189, 49, 209, 219, 60, 163, 222, 24, 190, 216, 213, 215, 61, 59, 30, 38, 189, 174, 15, 191, 60, 203, 78, 210, 189, 188, 88, 23, 62, 180, 94, 144, 186, 69, 100, 2, 190, 88, 207, 145, 189, 199, 246, 46, 190, 203, 130, 13, 190, 134, 213, 13, 190, 156, 156, 14, 190, 245, 233, 51, 190, 53, 221, 131, 189, 3, 229, 160, 61, 139, 190, 8, 190, 204, 235, 32, 189, 56, 108, 80, 63, 219, 26, 207, 190, 90, 28, 205, 188, 97, 22, 252, 62, 188, 115, 131, 190, 237, 102, 8, 190, 249, 155, 194, 189, 115, 144, 224, 188, 201, 212, 117, 190, 91, 55, 152, 191, 206, 201, 181, 190, 224, 43, 47, 190, 149, 182, 118, 190, 165, 200, 10, 191, 203, 124, 156, 61, 112, 92, 14, 191, 47, 193, 6, 62, 255, 62, 5, 62, 21, 162, 135, 61, 238, 225, 237, 187, 201, 1, 29, 189, 116, 104, 254, 191, 68, 90, 37, 191, 66, 94, 202, 190, 9, 3, 172, 189, 196, 148, 195, 191, 8, 37, 153, 190, 141, 254, 232, 190, 85, 44, 3, 190, 145, 186, 150, 62, 251, 52, 175, 190, 35, 53, 239, 190, 206, 183, 93, 62, 193, 219, 149, 189, 93, 199, 139, 190, 208, 36, 243, 61, 114, 176, 68, 62, 167, 214, 199, 190, 190, 131, 166, 188, 2, 240, 91, 61, 228, 38, 220, 62, 178, 174, 8, 190, 75, 154, 71, 191, 5, 10, 0, 63, 115, 223, 192, 62, 119, 25, 72, 189, 108, 32, 114, 62, 144, 155, 173, 190, 57, 49, 222, 190, 36, 46, 150, 190, 107, 129, 130, 189, 80, 207, 145, 62, 227, 206, 17, 191, 172, 54, 160, 190, 151, 170, 181, 189, 218, 117, 135, 62, 120, 40, 4, 60, 82, 8, 224, 61, 212, 229, 122, 59, 66, 56, 88, 191, 227, 37, 224, 189, 48, 25, 156, 190, 246, 89, 172, 62, 27, 108, 137, 189, 146, 245, 51, 190, 247, 224, 141, 191, 92, 93, 148, 61, 206, 200, 47, 62, 53, 86, 216, 190, 111, 120, 99, 62, 55, 13, 189, 191, 10, 84, 155, 190, 78, 42, 204, 189, 111, 183, 186, 188, 86, 185, 180, 62, 234, 194, 82, 189, 115, 236, 66, 190, 106, 190, 185, 62, 158, 205, 5, 191, 40, 42, 45, 62, 46, 187, 58, 61, 140, 214, 11, 61, 78, 60, 130, 60, 23, 177, 6, 61, 78, 106, 149, 61, 206, 188, 27, 190, 120, 55, 179, 62, 33, 71, 12, 190, 209, 142, 70, 62, 99, 179, 21, 60, 85, 131, 240, 189, 203, 29, 181, 62, 29, 171, 79, 191, 110, 157, 246, 61, 98, 49, 131, 190, 135, 168, 216, 61, 44, 42, 133, 190, 137, 29, 105, 61, 204, 40, 236, 60, 222, 127, 149, 190, 158, 160, 49, 62, 205, 194, 239, 61, 73, 58, 1, 59, 7, 169, 239, 185, 0, 57, 248, 188, 218, 239, 101, 188, 88, 240, 219, 189, 223, 126, 206, 62, 169, 80, 6, 189, 254, 192, 240, 189, 85, 102, 0, 61, 131, 66, 92, 62, 84, 153, 0, 62, 72, 247, 221, 61, 160, 94, 48, 60, 130, 70, 241, 188, 252, 149, 168, 189, 234, 217, 220, 61, 126, 69, 207, 61, 105, 21, 70, 190, 1, 66, 13, 61, 140, 90, 156, 188, 18, 221, 201, 188, 250, 181, 107, 61, 93, 81, 22, 190, 12, 104, 219, 61, 197, 49, 144, 62, 54, 4, 16, 190, 236, 32, 64, 62, 142, 211, 210, 189, 140, 124, 2, 191, 23, 45, 153, 191, 67, 132, 16, 189, 31, 209, 212, 60, 153, 57, 252, 190, 106, 92, 36, 190, 183, 184, 117, 187, 118, 28, 57, 190, 68, 28, 111, 190, 83, 232, 61, 190, 96, 217, 125, 62, 243, 183, 179, 62, 231, 111, 117, 189, 33, 156, 222, 61, 57, 253, 6, 63, 209, 41, 29, 190, 152, 175, 139, 61, 32, 164, 68, 190, 153, 143, 65, 190, 101, 190, 230, 189, 248, 215, 20, 63, 234, 176, 218, 61, 188, 34, 90, 62, 91, 31, 56, 191, 166, 134, 239, 189, 189, 157, 172, 62, 138, 204, 195, 191, 191, 149, 40, 62, 31, 241, 80, 61, 67, 217, 159, 61, 156, 249, 3, 63, 232, 229, 164, 61, 230, 171, 11, 191, 3, 100, 37, 62, 48, 232, 16, 188, 17, 2, 61, 189, 251, 50, 41, 62, 141, 28, 34, 62, 220, 70, 154, 62, 110, 43, 9, 191, 213, 172, 71, 190, 209, 79, 15, 62, 100, 240, 173, 187, 206, 26, 4, 189, 29, 99, 38, 190, 103, 161, 27, 191, 59, 79, 190, 61, 54, 176, 130, 191, 135, 69, 200, 61, 71, 123, 82, 61, 121, 210, 157, 190, 172, 78, 63, 191, 220, 98, 1, 190, 175, 63, 162, 62, 61, 179, 236, 189, 200, 40, 1, 62, 204, 184, 39, 62, 86, 111, 178, 190, 237, 28, 53, 62, 192, 178, 174, 189, 9, 124, 176, 62, 189, 119, 151, 189, 89, 140, 99, 63, 163, 114, 137, 62, 161, 28, 135, 190, 230, 70, 228, 62, 47, 174, 252, 61, 236, 65, 209, 190, 67, 179, 169, 61, 151, 247, 112, 62, 181, 132, 236, 61, 109, 196, 196, 191, 90, 228, 172, 190, 165, 131, 172, 62, 114, 169, 149, 62, 86, 131, 66, 190, 172, 57, 184, 62, 46, 139, 16, 191, 127, 68, 24, 63, 7, 254, 1, 191, 174, 187, 1, 190, 137, 146, 23, 63, 75, 30, 144, 190, 136, 160, 185, 191, 249, 211, 190, 189, 209, 179, 1, 190, 60, 154, 121, 190, 247, 140, 124, 191, 149, 56, 177, 61, 165, 210, 37, 191, 115, 46, 107, 190, 114, 109, 187, 62, 87, 28, 23, 62, 160, 145, 206, 189, 249, 232, 193, 61, 14, 185, 80, 188, 82, 13, 17, 62, 248, 237, 157, 189, 8, 142, 145, 61, 182, 241, 30, 190, 188, 251, 216, 61, 217, 36, 41, 190, 247, 52, 149, 189, 181, 108, 240, 189, 65, 88, 1, 62, 171, 25, 17, 190, 115, 251, 243, 187, 90, 168, 140, 60, 4, 67, 161, 61, 64, 250, 82, 61, 243, 219, 29, 190, 165, 152, 239, 189, 239, 55, 22, 190, 121, 107, 7, 62, 109, 97, 8, 190, 148, 165, 162, 189, 22, 215, 212, 189, 169, 131, 3, 190, 177, 136, 229, 189, 223, 255, 85, 61, 116, 168, 3, 190, 152, 46, 132, 59, 7, 149, 173, 189, 213, 151, 46, 189, 72, 141, 212, 189, 93, 8, 238, 61, 97, 249, 51, 190, 249, 9, 18, 61, 48, 63, 29, 189, 116, 45, 41, 190, 197, 122, 177, 189, 128, 182, 21, 62, 136, 89, 96, 61, 237, 92, 182, 189, 76, 47, 129, 60, 198, 120, 162, 61, 26, 1, 41, 62, 122, 228, 199, 189, 92, 234, 33, 190, 231, 33, 140, 189, 61, 55, 141, 189, 71, 6, 45, 61, 232, 132, 6, 190, 87, 248, 144, 61, 146, 247, 136, 61, 12, 200, 162, 61, 255, 108, 185, 189, 228, 199, 111, 188, 113, 126, 32, 190, 43, 108, 123, 189, 24, 10, 92, 188, 44, 196, 93, 189, 237, 138, 168, 189, 72, 192, 84, 189, 152, 229, 76, 189, 79, 222, 54, 190, 136, 219, 17, 61, 17, 184, 192, 189, 65, 101, 179, 190, 39, 138, 115, 62, 132, 232, 91, 61, 233, 128, 133, 62, 160, 97, 34, 191, 60, 108, 102, 191, 45, 51, 36, 62, 84, 227, 178, 61, 64, 77, 16, 191, 223, 221, 87, 190, 90, 192, 203, 62, 1, 190, 12, 190, 50, 242, 19, 190, 231, 93, 109, 190, 88, 229, 10, 191, 194, 196, 142, 190, 48, 194, 3, 62, 222, 207, 183, 60, 181, 67, 6, 190, 19, 214, 82, 62, 252, 206, 216, 190, 113, 74, 46, 62, 74, 54, 35, 62, 31, 98, 33, 190, 85, 227, 186, 61, 132, 67, 111, 62, 136, 35, 198, 189, 103, 215, 22, 61, 243, 162, 49, 62, 227, 87, 140, 62, 186, 136, 163, 189, 28, 33, 195, 189, 44, 126, 205, 190, 15, 67, 27, 192, 75, 161, 3, 62, 123, 133, 92, 62, 235, 54, 210, 190, 23, 111, 166, 190, 197, 113, 39, 191, 133, 153, 247, 189, 168, 177, 33, 190, 95, 205, 169, 60, 176, 232, 35, 190, 158, 19, 129, 189, 136, 195, 227, 60, 226, 89, 0, 191, 34, 34, 209, 190, 202, 201, 134, 61, 220, 67, 60, 62, 120, 236, 73, 189, 150, 182, 206, 189, 117, 13, 12, 190, 9, 206, 157, 190, 155, 80, 131, 190, 6, 89, 129, 61, 104, 93, 26, 191, 55, 13, 166, 62, 148, 187, 23, 62, 60, 98, 133, 190, 187, 65, 112, 62, 22, 184, 182, 191, 170, 125, 19, 62, 153, 65, 207, 189, 197, 55, 225, 190, 237, 94, 145, 190, 108, 91, 255, 60, 237, 193, 25, 191, 255, 164, 13, 191, 10, 107, 31, 189, 18, 96, 127, 62, 234, 36, 38, 190, 198, 210, 27, 190, 106, 6, 141, 188, 37, 63, 118, 189, 118, 145, 87, 62, 4, 218, 19, 61, 122, 236, 92, 188, 194, 34, 145, 189, 143, 196, 247, 60, 79, 148, 167, 62, 8, 100, 90, 190, 59, 79, 158, 190, 0, 180, 125, 61, 20, 156, 160, 189, 126, 1, 178, 61, 52, 243, 34, 190, 89, 37, 36, 62, 36, 108, 57, 190, 188, 247, 144, 188, 62, 235, 129, 190, 212, 189, 178, 189, 120, 17, 4, 62, 172, 158, 200, 190, 51, 23, 86, 190, 70, 187, 155, 61, 244, 40, 2, 62, 113, 114, 32, 191, 249, 166, 197, 191, 213, 9, 195, 61, 43, 111, 187, 61, 131, 252, 195, 190, 99, 167, 4, 190, 167, 122, 121, 190, 225, 250, 88, 62, 182, 124, 137, 62, 95, 26, 1, 191, 18, 26, 89, 190, 202, 20, 92, 62, 17, 242, 104, 62, 128, 231, 223, 188, 62, 104, 18, 191, 238, 156, 65, 190, 224, 108, 75, 190, 182, 103, 39, 190, 224, 162, 41, 60, 114, 211, 143, 188, 116, 175, 66, 187, 199, 248, 111, 190, 88, 239, 87, 60, 71, 205, 221, 62, 72, 124, 163, 190, 163, 213, 124, 189, 48, 147, 171, 190, 72, 60, 130, 190, 35, 36, 243, 62, 39, 17, 176, 61, 90, 135, 192, 58, 85, 44, 166, 190, 208, 23, 11, 189, 154, 163, 147, 61, 91, 192, 186, 61, 191, 103, 46, 190, 57, 212, 144, 188, 172, 209, 234, 189, 235, 57, 139, 189, 182, 180, 130, 60, 61, 172, 174, 189, 22, 45, 235, 187, 152, 194, 156, 189, 222, 170, 124, 189, 72, 30, 108, 188, 177, 173, 188, 60, 205, 150, 225, 189, 232, 138, 48, 190, 92, 231, 73, 190, 209, 7, 154, 188, 66, 84, 247, 189, 220, 238, 154, 188, 15, 138, 120, 60, 251, 34, 22, 189, 218, 111, 142, 189, 35, 196, 22, 62, 100, 121, 19, 61, 120, 60, 52, 190, 101, 46, 32, 61, 111, 173, 21, 61, 149, 200, 169, 62, 242, 190, 229, 61, 245, 73, 61, 60, 189, 61, 10, 61};
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
                alignas(float) const unsigned char memory[] = {254, 112, 0, 190, 32, 35, 159, 62, 229, 175, 2, 62, 67, 17, 96, 62, 189, 191, 186, 62, 135, 208, 119, 60, 120, 195, 3, 60, 32, 86, 227, 61, 141, 132, 137, 189, 183, 67, 130, 61, 69, 241, 148, 189, 147, 77, 80, 190, 120, 193, 227, 62, 132, 68, 93, 190, 6, 190, 155, 62, 255, 61, 197, 62, 166, 109, 146, 190, 96, 5, 31, 190, 17, 29, 206, 61, 240, 73, 172, 62, 183, 46, 167, 62, 225, 144, 73, 62, 81, 139, 43, 62, 164, 26, 144, 62, 242, 57, 124, 62, 18, 150, 32, 189, 12, 110, 32, 61, 82, 205, 90, 190, 70, 28, 175, 62, 15, 1, 239, 189, 160, 68, 240, 188, 152, 83, 127, 190};
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
                alignas(float) const unsigned char memory[] = {152, 235, 112, 61, 93, 155, 168, 190, 202, 151, 0, 190, 104, 114, 211, 62, 192, 77, 33, 63, 77, 122, 43, 63, 121, 108, 10, 63, 194, 250, 24, 189, 226, 228, 81, 61, 178, 21, 110, 191, 35, 90, 172, 187, 31, 238, 169, 190, 94, 150, 141, 60, 14, 109, 1, 191, 61, 224, 38, 62, 9, 105, 157, 59, 99, 119, 102, 191, 124, 179, 192, 189, 162, 67, 178, 63, 194, 56, 58, 63, 233, 161, 45, 191, 127, 185, 232, 187, 162, 175, 78, 191, 56, 87, 128, 62, 254, 108, 149, 63, 6, 199, 50, 62, 91, 176, 9, 62, 114, 79, 203, 190, 29, 242, 188, 191, 90, 7, 183, 189, 177, 177, 82, 191, 54, 190, 6, 190, 212, 197, 200, 61, 20, 76, 158, 188, 55, 26, 184, 61, 69, 146, 100, 191, 232, 66, 150, 190, 230, 115, 183, 189, 25, 219, 231, 61, 123, 172, 9, 191, 135, 239, 244, 60, 118, 217, 132, 62, 55, 135, 23, 62, 107, 48, 168, 61, 58, 193, 153, 190, 184, 240, 41, 62, 172, 234, 194, 189, 43, 242, 112, 190, 117, 204, 53, 62, 87, 159, 135, 61, 8, 141, 59, 62, 254, 142, 229, 61, 243, 154, 254, 189, 72, 103, 138, 190, 92, 181, 13, 190, 160, 194, 158, 190, 115, 50, 184, 62, 142, 232, 56, 55, 68, 0, 52, 190, 151, 66, 7, 60, 94, 78, 2, 62, 109, 174, 162, 189, 6, 185, 73, 62, 181, 210, 147, 61};
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
                alignas(float) const unsigned char memory[] = {227, 32, 138, 62, 105, 11, 135, 190};
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
    alignas(float) const unsigned char memory[] = {38, 245, 207, 191, 87, 108, 219, 191, 116, 120, 168, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {83, 173, 27, 192, 178, 56, 128, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0028/steps/000000000016000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}