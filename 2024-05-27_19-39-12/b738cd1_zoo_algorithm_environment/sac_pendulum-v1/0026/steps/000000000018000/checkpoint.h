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
                alignas(float) const unsigned char memory[] = {187, 196, 25, 191, 96, 145, 173, 191, 161, 150, 101, 190, 145, 147, 64, 63, 30, 17, 46, 191, 205, 190, 142, 190, 136, 17, 175, 190, 112, 128, 75, 191, 208, 180, 3, 191, 44, 115, 51, 63, 75, 103, 166, 190, 35, 85, 82, 190, 253, 232, 3, 191, 142, 214, 13, 63, 38, 152, 242, 62, 191, 128, 2, 62, 110, 65, 1, 189, 100, 27, 145, 190, 49, 54, 146, 190, 58, 19, 113, 62, 149, 203, 43, 61, 88, 214, 106, 62, 169, 148, 158, 190, 166, 169, 196, 62, 31, 84, 16, 191, 67, 138, 217, 63, 184, 155, 157, 62, 109, 187, 48, 63, 91, 122, 11, 63, 217, 157, 196, 62, 62, 206, 52, 62, 53, 162, 4, 63, 69, 129, 150, 190, 135, 120, 46, 62, 80, 250, 21, 191, 64, 147, 67, 63, 105, 198, 8, 63, 108, 28, 4, 63, 86, 23, 224, 62, 72, 6, 242, 60, 16, 64, 96, 190, 77, 4, 182, 190, 39, 69, 227, 190, 145, 12, 156, 191, 228, 96, 166, 190, 157, 62, 232, 62, 212, 35, 112, 63, 208, 53, 55, 62, 230, 111, 15, 190, 202, 218, 53, 191, 168, 6, 92, 61, 51, 54, 65, 63, 60, 166, 134, 190, 214, 57, 39, 190, 56, 118, 132, 189, 47, 99, 93, 190, 190, 74, 214, 62, 104, 79, 49, 191, 229, 226, 26, 63, 48, 197, 7, 63, 139, 114, 193, 190, 67, 145, 145, 191, 180, 150, 163, 190, 140, 200, 42, 63, 21, 167, 84, 62, 151, 1, 255, 189, 94, 119, 72, 63, 79, 198, 112, 191, 124, 164, 38, 190, 189, 231, 58, 63, 170, 34, 149, 63, 6, 217, 76, 62, 210, 192, 106, 63, 167, 67, 31, 191, 77, 223, 149, 190, 33, 113, 239, 62, 199, 216, 97, 63, 159, 20, 143, 62, 216, 247, 43, 63, 90, 224, 147, 62, 210, 27, 206, 62, 122, 102, 46, 190, 64, 103, 37, 191, 249, 166, 181, 190, 245, 68, 19, 191, 170, 105, 148, 63, 73, 33, 9, 62, 205, 161, 250, 62, 242, 181, 1, 191, 138, 60, 62, 190, 53, 146, 161, 62, 66, 115, 178, 191, 210, 26, 119, 190, 197, 179, 186, 190, 72, 163, 190, 190, 85, 133, 6, 60};
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
                alignas(float) const unsigned char memory[] = {29, 23, 91, 190, 240, 48, 139, 190, 40, 123, 172, 190, 122, 7, 174, 190, 92, 146, 237, 190, 157, 191, 163, 190, 112, 107, 244, 62, 18, 208, 133, 61, 222, 86, 176, 190, 137, 131, 65, 191, 154, 223, 54, 62, 214, 77, 192, 62, 52, 214, 165, 190, 136, 98, 141, 190, 7, 234, 251, 189, 118, 39, 171, 189, 225, 252, 134, 62, 188, 68, 24, 190, 225, 250, 27, 62, 87, 238, 129, 190, 143, 9, 66, 189, 137, 146, 198, 189, 216, 44, 22, 63, 165, 141, 4, 190, 60, 174, 79, 191, 86, 142, 75, 190, 67, 110, 70, 191, 84, 135, 242, 190, 1, 208, 21, 63, 214, 158, 158, 190, 170, 174, 4, 62, 209, 24, 3, 63};
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
                alignas(float) const unsigned char memory[] = {55, 110, 138, 62, 53, 188, 33, 62, 77, 123, 140, 190, 111, 252, 64, 190, 241, 56, 91, 190, 92, 195, 173, 190, 174, 197, 50, 61, 210, 154, 65, 190, 74, 49, 134, 62, 144, 197, 186, 61, 5, 161, 25, 60, 72, 206, 225, 189, 209, 61, 66, 61, 176, 78, 62, 190, 20, 86, 26, 190, 214, 216, 21, 62, 186, 240, 243, 190, 246, 118, 24, 62, 61, 53, 33, 191, 236, 17, 203, 60, 178, 30, 89, 190, 98, 160, 221, 60, 62, 241, 223, 61, 75, 241, 45, 60, 157, 187, 75, 191, 84, 177, 185, 61, 145, 66, 35, 62, 129, 255, 27, 190, 157, 74, 98, 62, 51, 5, 197, 190, 50, 74, 125, 190, 21, 64, 234, 186, 25, 57, 131, 62, 232, 253, 107, 190, 122, 199, 131, 62, 40, 9, 126, 190, 25, 20, 53, 190, 212, 30, 68, 62, 53, 172, 213, 189, 101, 236, 204, 61, 43, 82, 82, 190, 67, 134, 252, 62, 192, 195, 91, 62, 157, 144, 91, 190, 195, 122, 131, 62, 34, 149, 11, 63, 248, 226, 223, 62, 99, 84, 190, 60, 195, 111, 224, 62, 151, 28, 144, 190, 94, 157, 155, 189, 29, 50, 130, 190, 207, 222, 251, 62, 179, 192, 166, 61, 66, 186, 54, 190, 152, 169, 166, 60, 179, 34, 173, 62, 224, 196, 33, 61, 170, 12, 250, 62, 254, 250, 90, 62, 16, 187, 40, 188, 95, 99, 86, 62, 107, 172, 159, 61, 114, 236, 207, 189, 82, 252, 18, 62, 20, 222, 126, 188, 190, 30, 174, 190, 110, 216, 181, 61, 242, 164, 30, 191, 187, 195, 151, 60, 14, 103, 136, 62, 255, 224, 44, 62, 135, 181, 3, 190, 37, 254, 178, 62, 140, 45, 102, 62, 195, 132, 109, 188, 199, 131, 127, 62, 49, 221, 159, 62, 167, 57, 197, 190, 196, 230, 132, 62, 163, 84, 23, 189, 79, 122, 116, 62, 119, 201, 244, 189, 100, 226, 183, 190, 26, 109, 176, 190, 118, 196, 28, 62, 152, 102, 76, 189, 93, 131, 101, 188, 187, 213, 79, 191, 178, 122, 132, 62, 18, 22, 225, 188, 23, 136, 42, 59, 37, 148, 63, 62, 220, 189, 68, 191, 222, 0, 215, 190, 100, 200, 21, 190, 126, 215, 71, 191, 149, 239, 195, 62, 194, 215, 84, 60, 127, 84, 3, 189, 227, 113, 129, 62, 148, 96, 255, 61, 158, 170, 190, 189, 122, 30, 138, 61, 161, 102, 155, 62, 178, 99, 57, 61, 2, 163, 122, 189, 125, 214, 131, 62, 59, 255, 209, 61, 191, 88, 129, 61, 235, 158, 205, 60, 65, 74, 47, 62, 163, 169, 139, 61, 218, 24, 40, 62, 75, 109, 190, 62, 135, 117, 179, 60, 232, 114, 75, 62, 87, 114, 217, 190, 102, 240, 39, 189, 81, 218, 86, 189, 13, 180, 129, 61, 214, 222, 246, 61, 53, 254, 94, 62, 248, 57, 145, 190, 126, 216, 80, 61, 58, 108, 242, 62, 157, 214, 142, 62, 97, 226, 129, 189, 111, 158, 109, 62, 58, 124, 242, 189, 254, 153, 72, 190, 67, 91, 234, 188, 102, 15, 70, 190, 191, 141, 99, 61, 194, 91, 103, 62, 2, 23, 49, 61, 145, 124, 238, 189, 231, 132, 132, 62, 248, 227, 45, 62, 168, 176, 172, 187, 132, 244, 123, 61, 188, 134, 135, 62, 182, 200, 159, 188, 192, 184, 203, 62, 226, 101, 78, 190, 164, 81, 135, 60, 10, 164, 244, 189, 228, 51, 162, 190, 205, 184, 230, 189, 115, 81, 164, 189, 114, 133, 13, 62, 40, 177, 48, 62, 19, 227, 48, 191, 192, 47, 62, 62, 216, 127, 67, 62, 100, 60, 174, 188, 39, 5, 124, 62, 63, 6, 23, 191, 189, 43, 62, 190, 158, 13, 96, 62, 49, 183, 220, 61, 227, 224, 57, 61, 69, 45, 231, 61, 126, 53, 223, 189, 4, 216, 183, 190, 174, 154, 39, 189, 59, 73, 144, 61, 44, 105, 181, 189, 181, 22, 164, 191, 192, 225, 184, 190, 147, 154, 196, 61, 127, 230, 174, 190, 63, 130, 57, 190, 231, 83, 186, 62, 198, 70, 185, 60, 167, 28, 51, 58, 120, 14, 56, 190, 8, 70, 128, 188, 63, 233, 119, 191, 82, 49, 222, 190, 137, 187, 207, 61, 129, 68, 163, 62, 114, 11, 98, 62, 83, 203, 233, 59, 203, 184, 222, 190, 202, 98, 207, 189, 254, 171, 17, 62, 43, 78, 134, 189, 214, 196, 170, 61, 170, 157, 206, 190, 116, 88, 82, 189, 153, 226, 137, 190, 241, 3, 120, 62, 173, 236, 230, 62, 8, 1, 71, 62, 17, 41, 217, 62, 178, 192, 42, 61, 245, 166, 96, 62, 208, 83, 153, 61, 66, 13, 1, 62, 70, 161, 10, 190, 76, 171, 56, 188, 6, 11, 149, 61, 71, 100, 131, 62, 9, 141, 17, 62, 208, 27, 10, 62, 55, 64, 115, 61, 216, 142, 202, 61, 139, 132, 124, 62, 73, 66, 96, 62, 174, 1, 3, 189, 19, 107, 204, 189, 50, 92, 19, 62, 54, 190, 106, 62, 56, 33, 153, 62, 182, 48, 63, 62, 86, 147, 51, 62, 250, 149, 43, 62, 65, 73, 142, 188, 176, 210, 86, 62, 125, 5, 238, 188, 74, 60, 37, 60, 144, 197, 69, 188, 183, 134, 146, 62, 83, 52, 223, 188, 117, 25, 201, 190, 55, 181, 134, 189, 9, 124, 221, 189, 233, 72, 145, 61, 115, 119, 9, 62, 173, 43, 51, 62, 182, 11, 195, 190, 223, 134, 207, 62, 111, 30, 224, 59, 228, 52, 72, 62, 117, 243, 213, 190, 113, 207, 219, 190, 218, 107, 20, 189, 197, 212, 139, 190, 20, 146, 22, 189, 125, 145, 12, 191, 191, 80, 173, 60, 92, 10, 201, 190, 226, 46, 64, 62, 218, 84, 56, 190, 194, 209, 46, 62, 203, 145, 255, 189, 146, 241, 48, 59, 241, 248, 38, 191, 83, 219, 152, 190, 163, 245, 8, 191, 211, 126, 115, 190, 120, 15, 181, 62, 126, 72, 61, 191, 44, 193, 72, 191, 138, 206, 219, 61, 47, 242, 75, 60, 97, 129, 165, 60, 8, 249, 245, 188, 84, 72, 79, 61, 134, 25, 47, 191, 62, 16, 153, 61, 241, 75, 60, 62, 46, 232, 133, 62, 171, 227, 155, 190, 82, 22, 17, 63, 231, 224, 225, 189, 240, 39, 135, 189, 186, 75, 143, 62, 120, 187, 63, 61, 12, 31, 223, 190, 28, 53, 136, 62, 196, 242, 212, 189, 55, 131, 132, 188, 180, 160, 179, 188, 183, 146, 24, 191, 115, 108, 96, 189, 118, 172, 145, 62, 179, 70, 10, 189, 13, 136, 173, 62, 2, 8, 58, 191, 149, 106, 57, 62, 122, 29, 208, 60, 246, 244, 191, 188, 124, 5, 121, 62, 34, 212, 29, 191, 79, 147, 27, 191, 41, 37, 130, 190, 16, 46, 240, 62, 24, 88, 193, 188, 178, 103, 2, 62, 58, 24, 156, 190, 171, 118, 114, 191, 233, 126, 89, 62, 230, 176, 30, 188, 51, 246, 6, 63, 240, 186, 36, 191, 78, 99, 190, 190, 104, 143, 155, 189, 209, 44, 74, 61, 74, 109, 217, 190, 8, 87, 157, 60, 230, 244, 131, 62, 125, 185, 53, 189, 134, 218, 30, 62, 252, 103, 229, 190, 189, 125, 94, 190, 245, 2, 148, 191, 15, 35, 86, 62, 216, 212, 101, 191, 210, 148, 254, 189, 219, 62, 67, 190, 101, 178, 167, 190, 213, 65, 148, 190, 247, 58, 49, 190, 92, 234, 128, 62, 254, 173, 188, 60, 2, 24, 58, 190, 69, 150, 77, 61, 107, 202, 196, 62, 255, 250, 228, 62, 17, 247, 27, 190, 8, 95, 104, 190, 1, 71, 48, 190, 168, 215, 134, 191, 55, 175, 41, 60, 131, 8, 67, 189, 90, 245, 109, 190, 131, 236, 72, 191, 12, 230, 153, 189, 125, 17, 33, 62, 153, 35, 17, 191, 128, 170, 96, 189, 75, 185, 1, 62, 194, 146, 140, 61, 221, 234, 183, 61, 40, 213, 97, 190, 117, 9, 13, 190, 214, 251, 65, 191, 249, 106, 138, 191, 254, 82, 151, 188, 239, 86, 34, 60, 230, 58, 186, 189, 164, 23, 80, 62, 48, 224, 100, 191, 152, 254, 38, 190, 7, 35, 112, 61, 174, 135, 182, 60, 138, 193, 38, 62, 70, 52, 95, 191, 74, 5, 72, 190, 219, 191, 64, 61, 172, 91, 1, 191, 222, 139, 169, 61, 112, 213, 126, 62, 13, 10, 164, 62, 245, 120, 237, 189, 206, 240, 131, 62, 47, 112, 199, 189, 80, 109, 20, 190, 110, 55, 6, 62, 164, 233, 12, 191, 73, 251, 193, 189, 82, 52, 11, 62, 135, 208, 136, 189, 254, 174, 43, 62, 182, 142, 152, 190, 191, 150, 228, 190, 211, 189, 16, 190, 148, 238, 86, 62, 71, 225, 50, 62, 213, 172, 22, 62, 40, 199, 210, 190, 107, 170, 34, 62, 221, 187, 25, 62, 140, 181, 207, 190, 137, 117, 173, 62, 110, 131, 25, 190, 235, 110, 164, 190, 161, 197, 55, 62, 213, 192, 77, 189, 149, 226, 54, 62, 229, 22, 152, 62, 185, 187, 163, 61, 184, 197, 35, 191, 132, 135, 247, 61, 222, 10, 102, 61, 187, 222, 131, 189, 6, 244, 15, 190, 106, 104, 13, 190, 8, 65, 208, 61, 198, 137, 140, 190, 138, 219, 1, 190, 211, 108, 1, 191, 153, 130, 0, 62, 248, 84, 175, 62, 70, 93, 83, 190, 102, 165, 172, 190, 10, 204, 250, 190, 60, 56, 138, 190, 184, 174, 62, 62, 250, 229, 128, 62, 61, 193, 236, 62, 220, 65, 118, 61, 127, 120, 4, 191, 250, 6, 192, 61, 143, 43, 81, 62, 14, 150, 227, 190, 212, 197, 118, 59, 240, 124, 83, 190, 172, 241, 72, 189, 5, 153, 216, 190, 173, 207, 160, 190, 77, 114, 177, 189, 51, 229, 136, 189, 238, 92, 124, 61, 61, 181, 187, 61, 28, 210, 66, 187, 18, 214, 155, 191, 71, 199, 254, 189, 222, 239, 152, 62, 34, 243, 141, 190, 145, 126, 246, 62, 227, 119, 128, 190, 14, 26, 17, 63, 125, 170, 80, 191, 190, 59, 135, 190, 51, 80, 133, 190, 1, 44, 247, 190, 179, 84, 67, 191, 24, 229, 76, 189, 104, 166, 10, 191, 143, 220, 164, 190, 185, 153, 74, 190, 228, 10, 59, 190, 133, 80, 93, 62, 41, 47, 251, 61, 43, 179, 202, 190, 26, 17, 136, 191, 58, 163, 0, 191, 198, 218, 229, 187, 49, 72, 27, 191, 208, 174, 15, 191, 145, 2, 34, 191, 83, 236, 241, 62, 225, 66, 122, 60, 40, 78, 166, 191, 41, 232, 148, 62, 226, 5, 66, 189, 125, 193, 7, 62, 195, 31, 151, 61, 105, 117, 171, 189, 221, 205, 64, 188, 123, 158, 211, 60, 235, 83, 194, 61, 107, 80, 98, 61, 141, 223, 60, 190, 115, 151, 222, 189, 200, 111, 33, 190, 147, 130, 21, 190, 199, 92, 141, 61, 123, 174, 140, 60, 251, 195, 49, 190, 180, 182, 29, 190, 163, 15, 0, 62, 98, 98, 162, 187, 148, 127, 13, 189, 196, 15, 219, 61, 177, 134, 28, 190, 202, 147, 100, 189, 9, 147, 44, 190, 200, 240, 224, 189, 126, 158, 223, 189, 227, 34, 87, 189, 27, 253, 196, 189, 79, 66, 146, 61, 184, 97, 70, 60, 185, 178, 179, 189, 101, 76, 96, 189, 48, 122, 97, 190, 138, 93, 73, 190, 32, 0, 235, 62, 146, 64, 242, 188, 167, 198, 8, 63, 35, 101, 40, 190, 177, 71, 68, 62, 151, 66, 129, 190, 39, 87, 51, 62, 193, 74, 198, 62, 41, 142, 46, 190, 206, 105, 202, 61, 57, 87, 158, 61, 137, 118, 185, 59, 18, 4, 180, 188, 109, 229, 3, 190, 121, 212, 134, 191, 131, 123, 255, 62, 161, 118, 106, 62, 14, 11, 97, 62, 111, 90, 222, 189, 1, 8, 207, 188, 183, 234, 106, 187, 229, 252, 109, 62, 190, 74, 67, 191, 11, 69, 144, 62, 84, 87, 64, 191, 63, 247, 189, 190, 250, 236, 142, 189, 177, 184, 33, 191, 247, 158, 130, 62, 226, 253, 216, 62, 237, 84, 125, 62, 106, 241, 193, 189, 141, 142, 68, 190, 30, 218, 138, 191, 104, 34, 215, 61, 176, 45, 239, 61, 139, 90, 164, 61, 207, 100, 21, 62, 243, 51, 229, 60, 220, 32, 168, 59, 177, 243, 200, 189, 92, 31, 104, 62, 224, 36, 239, 61, 205, 185, 129, 61, 109, 87, 72, 60, 43, 87, 2, 60, 189, 201, 195, 190, 149, 40, 209, 61, 219, 228, 228, 189, 222, 180, 35, 62, 17, 55, 62, 62, 133, 48, 159, 61, 169, 204, 155, 190, 70, 78, 223, 190, 86, 208, 6, 190, 107, 56, 230, 61, 3, 59, 159, 190, 50, 90, 17, 62, 131, 233, 22, 190, 78, 122, 13, 61, 88, 187, 114, 61, 28, 63, 121, 191, 34, 11, 117, 61, 65, 135, 179, 189, 128, 100, 73, 189, 225, 206, 81, 189, 32, 83, 71, 186, 34, 90, 174, 189, 104, 186, 109, 189, 254, 20, 185, 61, 139, 107, 37, 190, 170, 116, 33, 60, 234, 245, 166, 61, 32, 159, 1, 189, 172, 212, 72, 190, 141, 58, 146, 189, 253, 94, 245, 59, 216, 126, 204, 61, 224, 80, 20, 62, 216, 11, 40, 190, 113, 12, 132, 59, 129, 58, 176, 60, 168, 153, 183, 61, 102, 200, 167, 189, 242, 142, 186, 189, 227, 78, 202, 60, 239, 21, 13, 62, 93, 26, 44, 61, 95, 3, 230, 61, 180, 178, 169, 189, 56, 180, 11, 62, 189, 226, 45, 190, 177, 103, 92, 56, 9, 185, 179, 189, 64, 104, 116, 61, 202, 18, 220, 190, 60, 89, 117, 62, 36, 151, 95, 62, 106, 45, 160, 189, 110, 185, 175, 61, 97, 208, 6, 62, 214, 229, 175, 189, 54, 42, 151, 61, 236, 195, 214, 60, 219, 187, 13, 62, 124, 255, 47, 190, 170, 81, 176, 62, 22, 145, 255, 189, 145, 60, 227, 189, 86, 133, 148, 62, 119, 21, 25, 190, 74, 18, 209, 60, 236, 233, 103, 189, 119, 118, 214, 62, 111, 82, 188, 61, 250, 116, 148, 62, 46, 52, 151, 190, 141, 222, 139, 61, 66, 61, 9, 62, 103, 173, 4, 190, 47, 73, 2, 61, 15, 141, 44, 62, 4, 245, 143, 190, 254, 205, 68, 190, 212, 251, 178, 62, 204, 232, 160, 62, 60, 129, 168, 61, 130, 118, 57, 191, 12, 112, 132, 62, 221, 239, 234, 61, 222, 179, 197, 62, 172, 163, 138, 62, 6, 1, 78, 62, 246, 216, 161, 61, 143, 23, 215, 189, 207, 73, 18, 63, 211, 19, 210, 190, 243, 241, 208, 190, 51, 155, 146, 61, 10, 98, 129, 190, 71, 104, 155, 190, 103, 37, 43, 191, 157, 127, 3, 191, 91, 25, 160, 188, 134, 92, 145, 61, 36, 20, 32, 62, 189, 108, 198, 61, 150, 226, 65, 191, 116, 48, 65, 190, 18, 145, 83, 62, 54, 79, 145, 190, 163, 4, 138, 62, 49, 245, 125, 190, 23, 209, 167, 190, 68, 42, 136, 190, 136, 125, 161, 61, 44, 114, 160, 62, 109, 195, 164, 62, 28, 122, 230, 60, 190, 85, 127, 62, 255, 53, 128, 62, 199, 109, 119, 61, 21, 210, 147, 61, 65, 81, 43, 191, 35, 130, 20, 61, 36, 37, 17, 191, 158, 95, 158, 62, 149, 119, 33, 61, 77, 194, 33, 191, 165, 11, 252, 60, 247, 234, 149, 62, 76, 92, 160, 191, 172, 122, 23, 190, 6, 32, 86, 61, 67, 75, 156, 191, 162, 142, 169, 62, 150, 39, 219, 61, 74, 28, 2, 189, 168, 32, 141, 191, 255, 128, 26, 62, 124, 165, 22, 191, 63, 125, 218, 62, 98, 55, 192, 191, 144, 190, 205, 61, 46, 251, 143, 191, 254, 26, 126, 191, 51, 106, 17, 190, 186, 140, 159, 191, 35, 12, 63, 62, 81, 72, 12, 63, 201, 2, 59, 60, 33, 42, 147, 61, 168, 61, 214, 188, 158, 109, 92, 189, 142, 37, 194, 189, 97, 219, 36, 187, 83, 168, 216, 189, 130, 145, 11, 190, 238, 26, 61, 62, 84, 87, 90, 61, 5, 3, 155, 61, 170, 245, 31, 190, 216, 69, 2, 190, 113, 71, 132, 61, 199, 195, 237, 189, 61, 40, 76, 190, 97, 153, 199, 189, 42, 120, 192, 189, 213, 98, 254, 59, 52, 222, 253, 189, 195, 253, 49, 190, 255, 172, 177, 61, 136, 45, 53, 62, 51, 153, 33, 190, 144, 249, 1, 189, 149, 122, 162, 60, 197, 181, 136, 189, 230, 104, 22, 62, 253, 186, 51, 189, 66, 95, 80, 188, 142, 56, 208, 61, 63, 32, 218, 189, 187, 226, 183, 189, 207, 30, 158, 191, 98, 251, 213, 61, 155, 245, 189, 190, 213, 191, 159, 59, 167, 22, 107, 62, 64, 117, 43, 190, 126, 73, 116, 62, 54, 163, 194, 190, 76, 106, 218, 62, 38, 210, 168, 190, 168, 115, 230, 190, 76, 17, 116, 62, 146, 138, 204, 190, 202, 201, 141, 191, 66, 8, 67, 192, 213, 208, 164, 190, 153, 57, 14, 61, 237, 52, 28, 62, 4, 203, 179, 62, 250, 207, 123, 61, 201, 39, 40, 192, 76, 2, 133, 62, 184, 161, 74, 62, 119, 21, 126, 190, 188, 50, 188, 62, 234, 150, 123, 190, 184, 254, 4, 191, 238, 205, 210, 190, 125, 189, 55, 61, 58, 244, 154, 189, 102, 174, 138, 62, 159, 23, 157, 62, 174, 110, 20, 190, 181, 2, 169, 191, 244, 152, 61, 62, 8, 130, 46, 191, 171, 7, 198, 190, 116, 175, 84, 62, 27, 227, 85, 190, 70, 211, 163, 190, 104, 39, 33, 190, 112, 16, 178, 62, 91, 7, 136, 189, 76, 62, 62, 187, 167, 245, 140, 62, 88, 143, 205, 189, 111, 186, 95, 191, 235, 56, 53, 62, 84, 213, 218, 189, 203, 207, 110, 61, 234, 13, 138, 190, 107, 249, 159, 190, 28, 149, 92, 191, 39, 67, 143, 190, 226, 42, 149, 62, 172, 128, 58, 62, 31, 161, 91, 190, 45, 196, 144, 62, 195, 205, 163, 188, 130, 168, 159, 190, 37, 102, 185, 60, 172, 95, 137, 189, 227, 29, 5, 190, 196, 183, 233, 190, 184, 138, 40, 190, 3, 175, 5, 192, 140, 76, 199, 62, 104, 30, 178, 191, 142, 222, 2, 62, 56, 141, 109, 62, 216, 211, 108, 61, 81, 190, 201, 190, 218, 87, 78, 62, 235, 231, 136, 61, 244, 40, 145, 190, 99, 206, 43, 61, 76, 103, 128, 61, 68, 212, 43, 190, 210, 255, 254, 191, 231, 40, 164, 62, 86, 208, 134, 190, 80, 126, 193, 187, 217, 17, 63, 61, 29, 161, 50, 189, 165, 10, 253, 191, 91, 173, 140, 61, 109, 144, 67, 190, 96, 230, 165, 62, 128, 193, 208, 61, 109, 109, 185, 62, 107, 183, 229, 61, 26, 46, 234, 190, 64, 254, 171, 62, 55, 105, 139, 188, 206, 55, 15, 191, 21, 126, 20, 62, 16, 98, 251, 62, 59, 68, 167, 190, 210, 26, 236, 190, 149, 197, 30, 190, 242, 149, 39, 191, 174, 168, 12, 189, 16, 208, 146, 61, 131, 184, 134, 62, 240, 232, 42, 190, 161, 213, 149, 62, 221, 179, 160, 62, 7, 178, 4, 189, 28, 220, 33, 62, 77, 71, 101, 62, 228, 64, 79, 61, 51, 172, 55, 62, 150, 76, 176, 190, 239, 174, 34, 61, 142, 63, 132, 190, 111, 254, 176, 190, 73, 244, 182, 61, 55, 198, 16, 62, 108, 100, 202, 61, 110, 49, 149, 62, 41, 6, 70, 191, 219, 47, 198, 61, 123, 81, 52, 62, 39, 191, 48, 61, 68, 10, 138, 62, 142, 184, 222, 190, 55, 214, 235, 190, 227, 38, 89, 62, 241, 161, 111, 190, 79, 27, 169, 62, 108, 159, 232, 60, 211, 159, 219, 61, 213, 89, 98, 62, 169, 240, 143, 60, 20, 226, 53, 62, 76, 235, 192, 190, 109, 174, 175, 62, 42, 177, 180, 190, 206, 134, 21, 190, 254, 87, 175, 62, 0, 115, 40, 189, 229, 157, 98, 190, 20, 182, 153, 190, 22, 240, 222, 190, 43, 218, 8, 62, 88, 230, 170, 62, 106, 229, 140, 62, 43, 206, 88, 62, 172, 57, 169, 190, 120, 44, 151, 189, 20, 66, 173, 62, 150, 230, 168, 190, 1, 246, 37, 62, 128, 85, 92, 189, 205, 98, 31, 190, 246, 245, 146, 190, 123, 146, 190, 190, 129, 176, 114, 62, 140, 102, 96, 62, 12, 54, 103, 62, 36, 48, 33, 191, 83, 208, 173, 62, 48, 39, 47, 62, 115, 49, 132, 188, 243, 184, 167, 61, 93, 67, 25, 62, 184, 182, 154, 61, 164, 201, 106, 190, 64, 103, 204, 62, 80, 77, 77, 190, 103, 158, 255, 61, 113, 135, 128, 62, 67, 183, 164, 189, 242, 20, 68, 190, 255, 248, 169, 61, 139, 66, 37, 191, 97, 232, 190, 61, 29, 236, 41, 62, 54, 0, 99, 62, 191, 164, 87, 62, 244, 212, 149, 190, 249, 44, 146, 60, 35, 73, 213, 61, 215, 167, 199, 190, 7, 42, 28, 62, 146, 164, 19, 190, 61, 147, 46, 190, 216, 120, 72, 61, 9, 219, 57, 61, 82, 24, 5, 63, 130, 126, 245, 61, 150, 97, 38, 62, 167, 39, 74, 63, 79, 204, 196, 190, 132, 120, 199, 190, 53, 130, 38, 190, 169, 18, 89, 190, 116, 110, 74, 188, 94, 41, 163, 61, 195, 240, 199, 62, 110, 128, 50, 191, 19, 61, 202, 62, 115, 205, 108, 62, 122, 213, 164, 189, 159, 249, 159, 62, 163, 110, 207, 62, 145, 216, 155, 190, 150, 75, 148, 62, 126, 136, 254, 60, 161, 214, 232, 61, 90, 136, 146, 190, 25, 86, 117, 190, 225, 157, 143, 189, 73, 228, 93, 62, 118, 128, 6, 190, 124, 210, 211, 62, 205, 125, 43, 191, 154, 247, 89, 62, 216, 101, 210, 62, 35, 12, 152, 62, 254, 247, 40, 62, 214, 146, 48, 191, 86, 165, 42, 191, 142, 177, 205, 61, 107, 214, 59, 62, 131, 21, 61, 189, 241, 173, 86, 190, 229, 40, 58, 190, 49, 16, 87, 189, 14, 167, 192, 188, 140, 163, 134, 190, 206, 239, 165, 190, 236, 163, 185, 60, 66, 225, 214, 62, 43, 117, 31, 188, 102, 156, 238, 190, 136, 253, 101, 62, 164, 125, 187, 189, 74, 124, 85, 189, 161, 177, 154, 62, 200, 191, 37, 191, 107, 154, 133, 61, 221, 174, 108, 190, 137, 201, 33, 190, 46, 148, 185, 189, 129, 42, 117, 62, 255, 249, 132, 61, 2, 166, 119, 62, 106, 16, 30, 189, 241, 251, 129, 62, 115, 243, 9, 190, 73, 154, 3, 190, 135, 242, 40, 62, 72, 109, 102, 189, 133, 58, 37, 190, 29, 107, 78, 191, 30, 141, 213, 60, 38, 210, 212, 189, 38, 186, 0, 190, 4, 66, 120, 62, 225, 103, 239, 188, 146, 28, 200, 61, 8, 99, 55, 189, 205, 224, 43, 62, 168, 163, 8, 191, 180, 14, 205, 62, 181, 241, 186, 61, 184, 74, 242, 60, 130, 76, 137, 62, 45, 237, 99, 62, 197, 57, 8, 191, 89, 185, 19, 62, 61, 96, 248, 189, 161, 105, 141, 62, 182, 0, 117, 190, 107, 58, 41, 190, 110, 2, 243, 190, 126, 95, 97, 61, 16, 221, 251, 61, 196, 195, 40, 62, 207, 201, 53, 191, 130, 139, 171, 62, 132, 205, 239, 62, 253, 240, 223, 60, 57, 70, 50, 61, 136, 67, 15, 191, 32, 218, 206, 190, 139, 74, 25, 190, 153, 47, 145, 61, 154, 38, 67, 188, 5, 192, 211, 189, 64, 172, 108, 189, 246, 35, 202, 61, 51, 213, 42, 189, 78, 142, 16, 190, 223, 50, 157, 188, 184, 124, 39, 62, 218, 120, 212, 61, 171, 50, 224, 189, 154, 143, 22, 190, 179, 142, 128, 189, 182, 174, 139, 61, 113, 180, 144, 59, 172, 1, 143, 189, 153, 210, 62, 61, 28, 145, 171, 61, 169, 80, 19, 62, 223, 134, 15, 190, 220, 108, 178, 189, 104, 190, 3, 62, 153, 209, 168, 61, 40, 209, 133, 188, 225, 168, 25, 190, 70, 107, 218, 188, 152, 136, 208, 188, 164, 18, 139, 189, 197, 39, 68, 190, 23, 65, 39, 61, 133, 4, 24, 190, 43, 6, 12, 189};
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
                alignas(float) const unsigned char memory[] = {130, 136, 240, 61, 114, 219, 244, 60, 105, 86, 170, 61, 239, 216, 229, 189, 129, 3, 97, 186, 207, 89, 65, 62, 152, 167, 165, 62, 141, 185, 82, 61, 40, 173, 234, 61, 234, 209, 151, 189, 184, 89, 104, 62, 160, 33, 47, 188, 83, 39, 179, 62, 252, 8, 73, 62, 115, 44, 5, 61, 19, 80, 131, 62, 133, 192, 149, 190, 177, 142, 77, 190, 249, 255, 153, 61, 127, 97, 243, 61, 141, 190, 37, 190, 220, 85, 115, 61, 240, 221, 173, 62, 114, 105, 136, 61, 140, 113, 98, 60, 106, 167, 145, 61, 93, 199, 130, 62, 156, 28, 93, 58, 202, 138, 19, 189, 118, 161, 123, 190, 29, 186, 9, 62, 20, 190, 68, 189};
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
                alignas(float) const unsigned char memory[] = {16, 18, 70, 189, 143, 197, 1, 63, 148, 25, 180, 190, 109, 174, 153, 190, 58, 186, 67, 190, 130, 239, 123, 189, 111, 62, 226, 188, 126, 197, 106, 191, 74, 231, 202, 190, 73, 165, 131, 191, 66, 202, 141, 191, 20, 220, 97, 62, 54, 130, 158, 61, 174, 151, 173, 191, 48, 237, 71, 61, 18, 220, 47, 63, 215, 167, 77, 190, 36, 27, 66, 61, 165, 89, 184, 190, 209, 35, 3, 63, 147, 188, 75, 191, 132, 86, 180, 61, 46, 213, 131, 63, 60, 254, 66, 63, 109, 27, 24, 63, 219, 116, 178, 190, 235, 63, 212, 62, 53, 94, 128, 62, 17, 205, 0, 191, 28, 172, 145, 62, 137, 41, 181, 190, 40, 37, 91, 61, 110, 192, 149, 190, 17, 3, 46, 62, 45, 121, 50, 190, 195, 136, 168, 189, 47, 37, 107, 190, 116, 59, 204, 190, 190, 23, 231, 190, 11, 9, 43, 189, 242, 20, 29, 62, 177, 9, 13, 62, 2, 96, 132, 62, 231, 205, 46, 190, 104, 63, 193, 190, 110, 149, 227, 189, 78, 248, 226, 61, 0, 1, 166, 62, 11, 190, 84, 62, 149, 243, 150, 188, 149, 133, 53, 62, 87, 30, 222, 62, 232, 164, 18, 190, 156, 198, 42, 61, 88, 89, 68, 62, 65, 105, 207, 62, 14, 216, 5, 190, 106, 176, 241, 188, 55, 15, 198, 190, 150, 127, 180, 60, 17, 2, 227, 62, 28, 151, 5, 63, 68, 27, 206, 190, 176, 41, 4, 62};
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
                alignas(float) const unsigned char memory[] = {250, 159, 82, 189, 34, 78, 0, 191};
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
    alignas(float) const unsigned char memory[] = {44, 95, 215, 63, 116, 4, 23, 190, 92, 247, 202, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {9, 64, 156, 64, 95, 133, 223, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0026/steps/000000000018000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}