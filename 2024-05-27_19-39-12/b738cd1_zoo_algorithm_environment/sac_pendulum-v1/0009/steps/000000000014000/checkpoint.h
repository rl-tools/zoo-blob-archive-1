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
                alignas(float) const unsigned char memory[] = {29, 25, 59, 63, 205, 130, 149, 62, 246, 38, 139, 62, 49, 253, 111, 190, 232, 21, 157, 63, 16, 133, 219, 62, 103, 112, 32, 190, 242, 137, 61, 63, 108, 120, 204, 190, 155, 145, 13, 190, 85, 135, 26, 191, 19, 194, 238, 190, 101, 132, 104, 191, 241, 192, 44, 63, 230, 103, 247, 60, 145, 189, 5, 190, 98, 1, 68, 62, 207, 177, 82, 191, 88, 73, 97, 190, 227, 187, 70, 63, 194, 218, 187, 189, 46, 29, 36, 191, 114, 236, 224, 190, 240, 197, 0, 63, 73, 218, 142, 188, 60, 216, 72, 190, 125, 252, 239, 190, 134, 30, 246, 62, 114, 4, 137, 63, 193, 41, 91, 62, 153, 61, 20, 63, 48, 96, 80, 191, 104, 180, 241, 61, 175, 186, 64, 188, 34, 115, 100, 63, 110, 173, 31, 62, 12, 229, 31, 191, 35, 87, 227, 62, 70, 194, 57, 62, 160, 93, 13, 63, 252, 146, 50, 62, 236, 230, 157, 62, 231, 45, 49, 63, 65, 114, 21, 191, 124, 86, 76, 61, 97, 14, 101, 62, 170, 89, 192, 190, 178, 172, 218, 190, 22, 154, 166, 62, 249, 51, 0, 63, 98, 11, 199, 62, 43, 195, 146, 62, 143, 58, 94, 189, 214, 205, 10, 63, 228, 237, 104, 190, 73, 162, 7, 191, 231, 178, 208, 62, 185, 1, 37, 191, 15, 16, 146, 63, 232, 60, 144, 62, 174, 152, 229, 190, 144, 244, 130, 62, 113, 22, 71, 63, 230, 155, 11, 191, 68, 85, 73, 191, 109, 98, 131, 189, 31, 244, 62, 63, 186, 38, 124, 191, 239, 219, 206, 190, 183, 91, 57, 190, 191, 151, 44, 63, 187, 117, 122, 190, 174, 232, 116, 60, 136, 131, 246, 189, 225, 9, 34, 191, 171, 205, 46, 63, 108, 210, 33, 63, 99, 99, 122, 62, 102, 94, 89, 63, 149, 134, 100, 191, 147, 174, 150, 190, 104, 40, 58, 63, 216, 137, 252, 62, 25, 182, 42, 62, 252, 130, 16, 63, 197, 54, 82, 190, 32, 235, 38, 59, 226, 139, 190, 61, 121, 177, 150, 191, 152, 29, 103, 190, 43, 108, 65, 63, 114, 85, 152, 191, 107, 18, 157, 190, 88, 99, 137, 191, 164, 38, 7, 191, 120, 185, 215, 189};
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
                alignas(float) const unsigned char memory[] = {115, 132, 49, 191, 250, 124, 95, 190, 76, 133, 140, 62, 176, 246, 198, 190, 174, 218, 65, 63, 80, 16, 115, 62, 52, 182, 83, 62, 40, 81, 18, 191, 206, 224, 42, 189, 125, 3, 129, 190, 228, 20, 229, 188, 61, 92, 132, 190, 33, 229, 49, 63, 44, 207, 1, 190, 130, 238, 212, 62, 224, 65, 119, 191, 52, 164, 113, 62, 152, 110, 22, 189, 23, 158, 72, 62, 130, 194, 254, 61, 209, 76, 196, 61, 201, 33, 107, 61, 24, 205, 234, 62, 24, 160, 131, 190, 167, 192, 248, 190, 248, 89, 155, 190, 94, 175, 225, 190, 238, 64, 16, 190, 60, 78, 193, 62, 2, 207, 76, 190, 117, 52, 169, 62, 82, 150, 163, 190};
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
                alignas(float) const unsigned char memory[] = {237, 30, 78, 191, 53, 128, 197, 61, 66, 233, 153, 188, 209, 242, 170, 189, 245, 109, 132, 62, 108, 86, 26, 62, 239, 50, 4, 62, 239, 199, 182, 189, 247, 179, 229, 189, 51, 94, 163, 190, 87, 237, 124, 189, 193, 252, 16, 61, 87, 60, 35, 62, 184, 194, 251, 190, 77, 73, 28, 62, 34, 174, 27, 189, 203, 78, 194, 190, 225, 45, 169, 190, 249, 129, 12, 62, 244, 136, 190, 60, 199, 27, 5, 62, 236, 202, 11, 62, 179, 236, 5, 62, 187, 150, 69, 190, 230, 30, 234, 61, 39, 129, 16, 191, 37, 157, 115, 191, 54, 212, 37, 190, 239, 158, 194, 61, 35, 180, 17, 190, 102, 145, 59, 188, 50, 1, 30, 189, 146, 124, 248, 61, 233, 96, 85, 190, 2, 108, 2, 190, 235, 245, 46, 190, 247, 183, 223, 189, 188, 144, 131, 189, 23, 170, 4, 189, 101, 2, 30, 190, 21, 177, 210, 189, 111, 157, 181, 61, 94, 77, 205, 61, 9, 56, 114, 187, 226, 82, 187, 60, 208, 246, 102, 188, 133, 240, 35, 189, 175, 163, 87, 189, 136, 60, 138, 61, 223, 92, 11, 189, 176, 119, 67, 189, 16, 155, 19, 189, 180, 186, 69, 190, 111, 77, 154, 189, 126, 252, 18, 189, 219, 74, 1, 190, 109, 116, 202, 61, 57, 88, 70, 190, 190, 90, 1, 188, 123, 190, 206, 188, 171, 133, 214, 187, 167, 111, 31, 190, 191, 250, 83, 190, 68, 225, 234, 189, 29, 96, 52, 190, 176, 126, 36, 190, 159, 62, 209, 61, 163, 81, 14, 189, 131, 112, 57, 191, 204, 201, 158, 62, 190, 150, 182, 190, 26, 168, 19, 61, 25, 105, 14, 62, 60, 52, 30, 191, 174, 243, 184, 62, 3, 80, 44, 190, 77, 116, 173, 191, 214, 205, 170, 190, 32, 166, 89, 61, 171, 89, 77, 61, 118, 106, 76, 189, 212, 10, 87, 190, 97, 28, 236, 186, 133, 46, 240, 190, 232, 115, 199, 190, 113, 74, 163, 190, 130, 134, 164, 61, 200, 75, 137, 61, 110, 79, 137, 61, 216, 197, 109, 190, 215, 155, 231, 189, 193, 192, 15, 62, 252, 96, 128, 62, 158, 129, 212, 190, 58, 177, 219, 62, 26, 10, 22, 191, 245, 75, 45, 191, 96, 120, 98, 61, 72, 43, 124, 190, 9, 119, 116, 191, 160, 173, 117, 62, 30, 109, 114, 191, 244, 126, 58, 190, 144, 86, 183, 62, 152, 130, 29, 191, 74, 21, 30, 189, 101, 149, 2, 190, 15, 243, 218, 188, 109, 22, 135, 62, 153, 199, 137, 190, 228, 246, 73, 62, 79, 58, 25, 190, 85, 127, 191, 60, 193, 11, 131, 190, 141, 151, 207, 62, 60, 206, 56, 62, 132, 81, 20, 60, 32, 73, 78, 62, 127, 200, 211, 190, 175, 61, 44, 191, 151, 158, 229, 188, 110, 15, 132, 190, 168, 195, 210, 60, 224, 208, 18, 191, 237, 46, 12, 62, 129, 215, 44, 62, 171, 219, 129, 190, 197, 125, 194, 62, 76, 229, 139, 191, 69, 81, 61, 61, 27, 67, 206, 59, 221, 35, 252, 189, 207, 141, 229, 190, 86, 205, 150, 190, 236, 107, 147, 191, 177, 51, 190, 189, 120, 140, 1, 191, 220, 243, 129, 190, 63, 218, 203, 60, 210, 156, 5, 60, 133, 65, 227, 189, 27, 192, 70, 62, 208, 94, 3, 62, 193, 36, 35, 61, 123, 214, 221, 61, 100, 237, 19, 190, 219, 47, 195, 61, 55, 111, 60, 189, 235, 190, 43, 190, 175, 243, 17, 190, 22, 180, 248, 61, 146, 36, 14, 190, 205, 86, 189, 190, 116, 200, 0, 190, 240, 138, 141, 61, 178, 99, 130, 186, 113, 246, 81, 62, 173, 148, 37, 191, 6, 186, 25, 59, 139, 192, 238, 61, 243, 57, 194, 187, 115, 214, 17, 190, 204, 99, 243, 61, 227, 104, 42, 189, 145, 143, 227, 62, 88, 121, 196, 59, 44, 21, 193, 62, 99, 153, 222, 188, 197, 96, 71, 190, 175, 157, 245, 62, 127, 173, 54, 191, 79, 79, 66, 62, 126, 233, 200, 61, 145, 182, 131, 189, 89, 39, 205, 61, 239, 191, 102, 191, 70, 45, 96, 62, 223, 228, 139, 190, 174, 158, 240, 189, 200, 81, 22, 62, 184, 85, 91, 190, 173, 177, 216, 62, 182, 144, 17, 191, 207, 168, 123, 62, 217, 251, 59, 190, 176, 206, 168, 62, 124, 119, 181, 190, 112, 50, 147, 62, 77, 41, 84, 188, 75, 208, 226, 62, 95, 222, 175, 191, 54, 212, 1, 63, 134, 1, 10, 62, 121, 25, 231, 189, 84, 161, 2, 190, 143, 150, 164, 58, 234, 97, 122, 61, 244, 17, 175, 61, 190, 206, 202, 188, 56, 130, 187, 61, 186, 191, 184, 61, 181, 26, 212, 61, 72, 49, 205, 61, 136, 242, 142, 61, 159, 119, 65, 60, 22, 253, 158, 61, 56, 24, 185, 61, 92, 62, 17, 190, 96, 4, 153, 189, 225, 169, 211, 189, 117, 249, 151, 188, 183, 57, 32, 61, 7, 116, 14, 189, 249, 46, 247, 189, 58, 233, 159, 188, 45, 204, 13, 190, 151, 83, 81, 187, 125, 228, 46, 190, 96, 170, 38, 190, 251, 227, 254, 61, 156, 80, 214, 187, 194, 20, 127, 61, 120, 226, 115, 189, 124, 225, 17, 189, 31, 10, 69, 190, 24, 176, 204, 188, 146, 42, 212, 189, 70, 195, 108, 191, 21, 185, 130, 62, 36, 253, 5, 191, 155, 3, 188, 187, 200, 73, 9, 62, 219, 69, 143, 190, 27, 144, 32, 61, 161, 38, 88, 190, 208, 202, 144, 61, 8, 30, 192, 60, 255, 113, 93, 190, 21, 90, 16, 190, 80, 202, 131, 190, 157, 236, 79, 190, 133, 179, 46, 190, 157, 25, 26, 62, 45, 80, 234, 61, 94, 30, 81, 62, 87, 6, 132, 62, 138, 124, 71, 62, 60, 200, 29, 190, 63, 154, 75, 189, 92, 238, 76, 190, 17, 10, 140, 62, 76, 23, 130, 190, 251, 191, 144, 190, 50, 24, 127, 190, 213, 1, 3, 62, 246, 81, 83, 62, 90, 15, 30, 190, 225, 226, 251, 61, 190, 232, 18, 190, 174, 77, 2, 61, 73, 10, 194, 188, 10, 203, 195, 61, 5, 5, 0, 190, 202, 127, 1, 62, 15, 15, 234, 189, 51, 27, 3, 61, 112, 1, 20, 190, 187, 51, 36, 189, 192, 110, 218, 61, 111, 173, 246, 189, 173, 72, 148, 61, 102, 150, 202, 61, 47, 52, 16, 190, 125, 45, 19, 190, 142, 69, 39, 190, 133, 69, 210, 189, 196, 100, 187, 61, 121, 30, 245, 189, 101, 236, 236, 188, 7, 147, 130, 61, 15, 219, 75, 186, 139, 248, 189, 189, 69, 71, 25, 62, 229, 159, 11, 59, 134, 194, 191, 61, 4, 42, 240, 58, 21, 214, 21, 190, 0, 212, 146, 188, 195, 232, 6, 191, 8, 135, 237, 189, 213, 98, 72, 62, 177, 195, 31, 188, 103, 221, 67, 62, 61, 205, 4, 189, 158, 148, 153, 61, 122, 150, 126, 189, 221, 224, 28, 190, 33, 19, 242, 190, 109, 65, 242, 61, 32, 152, 23, 190, 235, 48, 37, 62, 124, 227, 217, 60, 170, 207, 74, 62, 246, 121, 26, 190, 44, 241, 0, 62, 147, 218, 37, 190, 119, 92, 17, 189, 205, 161, 71, 190, 202, 203, 100, 61, 34, 6, 128, 189, 139, 40, 252, 61, 18, 177, 8, 190, 153, 5, 97, 190, 119, 13, 131, 190, 254, 93, 147, 190, 102, 129, 229, 61, 112, 89, 55, 62, 166, 110, 76, 190, 107, 178, 67, 62, 66, 189, 75, 190, 123, 156, 76, 190, 158, 59, 40, 190, 110, 176, 15, 189, 211, 200, 200, 189, 160, 47, 82, 191, 88, 68, 225, 60, 212, 138, 60, 191, 171, 87, 146, 190, 40, 29, 110, 189, 148, 119, 221, 190, 165, 46, 249, 61, 107, 97, 83, 190, 236, 179, 148, 62, 134, 121, 169, 190, 57, 42, 20, 61, 178, 181, 136, 62, 102, 49, 134, 190, 67, 242, 145, 60, 49, 204, 44, 62, 79, 209, 105, 61, 52, 208, 197, 190, 158, 218, 108, 190, 20, 69, 67, 62, 245, 104, 3, 191, 220, 216, 42, 62, 226, 72, 150, 190, 92, 34, 64, 63, 18, 143, 251, 190, 109, 63, 174, 62, 2, 104, 171, 59, 255, 228, 90, 62, 159, 37, 225, 189, 232, 230, 171, 189, 174, 232, 171, 61, 216, 218, 6, 191, 89, 223, 210, 190, 84, 119, 197, 188, 38, 226, 203, 190, 176, 223, 149, 62, 221, 118, 34, 62, 122, 107, 196, 190, 12, 62, 20, 189, 13, 56, 240, 61, 25, 24, 34, 189, 213, 222, 128, 61, 108, 160, 168, 61, 176, 24, 190, 61, 14, 241, 28, 61, 45, 96, 37, 61, 251, 236, 19, 62, 236, 98, 85, 61, 172, 68, 105, 61, 2, 172, 99, 62, 243, 44, 160, 190, 246, 93, 131, 190, 144, 194, 0, 191, 61, 23, 155, 60, 190, 0, 25, 190, 174, 209, 165, 190, 249, 254, 44, 62, 127, 189, 52, 62, 214, 189, 189, 190, 228, 35, 140, 189, 125, 153, 144, 62, 220, 217, 111, 190, 63, 157, 198, 61, 255, 103, 184, 189, 2, 48, 158, 189, 12, 84, 170, 190, 162, 134, 6, 190, 229, 42, 182, 61, 54, 153, 70, 62, 66, 133, 66, 57, 131, 147, 91, 191, 12, 200, 104, 62, 190, 54, 220, 61, 162, 89, 33, 191, 153, 46, 59, 191, 141, 7, 101, 62, 28, 234, 195, 190, 207, 55, 221, 190, 95, 173, 80, 62, 145, 177, 176, 62, 110, 219, 178, 189, 218, 168, 7, 190, 212, 82, 60, 190, 255, 76, 90, 62, 52, 193, 214, 61, 1, 16, 61, 62, 112, 78, 98, 191, 253, 253, 186, 62, 89, 127, 149, 190, 245, 147, 84, 61, 2, 161, 199, 190, 18, 156, 104, 62, 156, 112, 61, 191, 84, 195, 134, 191, 50, 102, 173, 190, 27, 19, 135, 62, 197, 1, 212, 189, 252, 140, 129, 62, 130, 91, 129, 62, 218, 213, 57, 189, 174, 21, 68, 191, 22, 99, 160, 189, 164, 226, 83, 190, 5, 123, 107, 189, 24, 255, 100, 190, 135, 242, 99, 62, 201, 166, 174, 189, 75, 209, 135, 189, 151, 192, 128, 188, 90, 174, 6, 62, 207, 4, 20, 190, 251, 92, 253, 189, 164, 43, 148, 189, 63, 19, 2, 190, 77, 207, 228, 189, 239, 135, 147, 62, 58, 112, 15, 62, 255, 201, 141, 190, 186, 155, 185, 61, 212, 150, 123, 189, 55, 190, 64, 62, 142, 103, 109, 62, 181, 111, 31, 61, 66, 165, 85, 62, 247, 60, 234, 189, 195, 209, 131, 191, 76, 24, 117, 62, 148, 45, 73, 190, 152, 89, 215, 191, 149, 203, 58, 62, 159, 103, 175, 191, 48, 84, 192, 189, 6, 110, 44, 62, 80, 80, 58, 191, 193, 167, 194, 190, 215, 19, 143, 62, 18, 6, 109, 188, 209, 227, 105, 62, 178, 237, 180, 190, 129, 31, 17, 62, 25, 232, 39, 190, 139, 225, 30, 189, 44, 71, 128, 190, 107, 193, 233, 62, 221, 121, 118, 62, 152, 232, 19, 190, 204, 75, 142, 62, 201, 144, 56, 190, 180, 205, 214, 188, 102, 251, 18, 190, 47, 31, 8, 191, 153, 114, 13, 62, 176, 79, 207, 190, 90, 87, 171, 62, 236, 170, 157, 186, 189, 120, 68, 61, 80, 132, 189, 61, 214, 72, 251, 190, 128, 59, 54, 190, 151, 174, 196, 190, 176, 90, 24, 190, 13, 90, 151, 189, 154, 164, 183, 190, 88, 43, 119, 188, 44, 44, 236, 60, 213, 12, 64, 191, 30, 37, 156, 190, 55, 117, 221, 62, 143, 100, 134, 187, 173, 201, 72, 61, 202, 219, 225, 61, 155, 20, 8, 62, 219, 5, 152, 189, 234, 151, 138, 62, 223, 71, 227, 187, 130, 212, 15, 62, 207, 236, 250, 189, 211, 151, 15, 62, 62, 69, 188, 190, 236, 216, 160, 61, 73, 200, 89, 190, 153, 60, 250, 189, 24, 167, 78, 189, 169, 164, 183, 190, 159, 216, 135, 62, 252, 65, 166, 62, 29, 129, 87, 61, 12, 182, 226, 187, 74, 149, 179, 62, 119, 29, 121, 188, 28, 207, 181, 61, 233, 64, 24, 61, 226, 39, 136, 189, 213, 16, 48, 188, 207, 13, 120, 61, 7, 66, 104, 62, 146, 44, 158, 190, 12, 249, 62, 62, 45, 11, 169, 62, 36, 217, 165, 190, 249, 132, 65, 62, 154, 25, 99, 190, 65, 76, 125, 189, 27, 184, 236, 189, 81, 213, 80, 62, 154, 67, 126, 62, 76, 177, 111, 60, 224, 244, 153, 190, 18, 202, 28, 62, 195, 79, 89, 189, 56, 8, 32, 191, 129, 88, 150, 61, 91, 160, 193, 61, 156, 189, 240, 188, 158, 56, 146, 61, 39, 22, 23, 62, 18, 193, 215, 188, 251, 5, 47, 61, 205, 86, 220, 190, 227, 114, 141, 190, 149, 82, 202, 190, 128, 70, 171, 62, 1, 145, 199, 191, 238, 55, 146, 62, 152, 136, 198, 189, 107, 226, 90, 62, 10, 52, 175, 189, 215, 228, 190, 62, 184, 161, 23, 191, 52, 161, 165, 62, 197, 10, 163, 62, 50, 220, 115, 190, 211, 137, 146, 191, 244, 13, 140, 62, 31, 136, 34, 63, 204, 86, 156, 190, 93, 215, 248, 190, 185, 211, 117, 189, 42, 120, 196, 62, 122, 184, 13, 190, 88, 221, 183, 191, 18, 3, 186, 191, 26, 233, 17, 61, 129, 18, 194, 189, 112, 194, 2, 62, 40, 174, 9, 191, 180, 194, 90, 62, 101, 139, 0, 191, 17, 75, 152, 62, 206, 58, 107, 62, 220, 208, 128, 62, 57, 154, 137, 190, 17, 56, 75, 62, 148, 112, 61, 191, 7, 223, 135, 190, 85, 195, 129, 62, 237, 45, 185, 189, 219, 209, 15, 63, 161, 31, 142, 60, 253, 21, 72, 62, 67, 25, 62, 191, 178, 172, 105, 62, 196, 10, 233, 189, 2, 68, 2, 190, 31, 210, 210, 190, 109, 161, 31, 63, 190, 210, 29, 62, 16, 16, 23, 191, 110, 64, 175, 189, 171, 181, 71, 62, 222, 151, 74, 62, 234, 175, 163, 189, 242, 128, 183, 188, 39, 24, 185, 190, 169, 229, 24, 62, 220, 57, 75, 189, 101, 43, 33, 62, 27, 218, 11, 61, 187, 132, 32, 62, 2, 251, 18, 189, 203, 150, 224, 189, 46, 20, 26, 190, 21, 48, 245, 62, 43, 145, 1, 61, 230, 14, 12, 63, 166, 87, 122, 191, 172, 1, 70, 190, 250, 222, 133, 189, 81, 80, 136, 190, 217, 103, 120, 191, 177, 85, 238, 189, 214, 127, 90, 190, 168, 66, 193, 62, 104, 7, 135, 189, 195, 207, 6, 191, 45, 49, 213, 62, 89, 209, 133, 60, 211, 34, 17, 191, 250, 238, 155, 190, 11, 80, 125, 62, 61, 60, 21, 189, 124, 172, 46, 61, 89, 117, 89, 190, 137, 9, 100, 188, 116, 112, 70, 190, 185, 43, 141, 188, 166, 45, 9, 62, 202, 196, 33, 62, 36, 51, 189, 190, 209, 142, 242, 61, 161, 216, 173, 190, 219, 21, 145, 189, 19, 254, 82, 189, 45, 130, 136, 62, 47, 187, 69, 61, 80, 162, 118, 62, 245, 47, 252, 190, 34, 123, 235, 190, 116, 208, 93, 190, 3, 205, 142, 61, 26, 71, 34, 190, 135, 131, 147, 190, 110, 252, 194, 189, 116, 204, 180, 190, 125, 81, 241, 62, 135, 249, 225, 61, 91, 111, 20, 191, 255, 250, 157, 62, 138, 2, 144, 190, 129, 131, 112, 191, 31, 59, 153, 190, 238, 145, 199, 62, 73, 89, 160, 61, 112, 55, 121, 189, 140, 246, 242, 61, 62, 204, 120, 62, 141, 63, 176, 190, 233, 253, 94, 190, 99, 154, 80, 190, 135, 112, 133, 62, 84, 192, 126, 60, 19, 46, 211, 62, 222, 59, 11, 191, 27, 41, 155, 62, 104, 132, 167, 189, 170, 206, 14, 62, 63, 191, 104, 190, 235, 246, 157, 62, 217, 251, 70, 191, 190, 28, 1, 191, 212, 108, 150, 189, 168, 37, 213, 61, 216, 145, 93, 190, 40, 68, 155, 60, 162, 60, 203, 61, 184, 95, 148, 60, 133, 198, 2, 191, 190, 161, 134, 185, 155, 75, 87, 189, 47, 172, 206, 189, 183, 224, 167, 59, 105, 152, 26, 189, 175, 7, 62, 62, 29, 103, 185, 189, 108, 238, 17, 189, 40, 69, 213, 61, 145, 103, 225, 60, 26, 100, 129, 190, 204, 156, 96, 190, 206, 109, 167, 190, 22, 196, 28, 190, 177, 55, 115, 189, 163, 82, 101, 189, 74, 254, 119, 60, 56, 16, 156, 61, 201, 137, 152, 190, 179, 136, 194, 62, 182, 205, 21, 62, 94, 81, 134, 190, 172, 67, 131, 61, 97, 124, 48, 190, 72, 72, 234, 190, 242, 108, 142, 61, 149, 200, 51, 62, 49, 225, 133, 189, 204, 97, 17, 189, 201, 78, 196, 61, 237, 211, 21, 190, 94, 174, 50, 190, 29, 90, 22, 190, 163, 186, 154, 190, 168, 37, 117, 62, 233, 104, 20, 61, 140, 45, 186, 190, 54, 210, 47, 60, 180, 54, 49, 62, 5, 193, 40, 190, 230, 11, 107, 62, 232, 2, 186, 189, 43, 142, 88, 62, 192, 160, 229, 190, 186, 237, 5, 189, 219, 42, 167, 190, 242, 131, 133, 62, 16, 164, 197, 189, 87, 140, 44, 62, 148, 254, 124, 60, 146, 210, 209, 190, 212, 114, 110, 61, 116, 200, 158, 61, 173, 32, 15, 190, 60, 115, 140, 62, 28, 51, 184, 190, 14, 31, 83, 62, 242, 55, 42, 190, 97, 144, 107, 62, 236, 231, 184, 62, 234, 127, 196, 189, 195, 227, 76, 62, 70, 166, 146, 61, 222, 172, 105, 190, 255, 76, 237, 58, 4, 208, 10, 63, 194, 172, 37, 191, 176, 186, 84, 187, 226, 18, 223, 60, 239, 158, 153, 61, 158, 237, 15, 190, 222, 165, 97, 62, 128, 157, 186, 62, 23, 235, 142, 189, 239, 77, 228, 190, 130, 147, 14, 190, 221, 18, 184, 190, 59, 249, 12, 190, 93, 228, 143, 190, 202, 111, 117, 61, 211, 128, 96, 62, 165, 230, 52, 62, 94, 123, 145, 190, 74, 215, 157, 62, 114, 174, 139, 190, 89, 82, 222, 189, 4, 168, 155, 190, 126, 165, 242, 61, 228, 252, 113, 190, 55, 95, 114, 61, 22, 4, 239, 189, 207, 34, 149, 189, 9, 171, 62, 191, 244, 52, 190, 189, 71, 227, 61, 190, 243, 59, 19, 61, 100, 189, 234, 61, 60, 138, 22, 191, 177, 122, 99, 61, 6, 182, 104, 190, 50, 30, 90, 191, 6, 8, 112, 189, 114, 78, 92, 190, 182, 40, 36, 62, 166, 66, 108, 189, 3, 244, 148, 190, 2, 179, 228, 190, 130, 95, 89, 190, 198, 64, 156, 189, 13, 158, 246, 190, 132, 39, 170, 56, 94, 180, 135, 188, 19, 176, 157, 62, 250, 112, 64, 190, 204, 84, 68, 63, 6, 117, 103, 190, 163, 188, 211, 62, 16, 215, 58, 190, 234, 128, 40, 62, 121, 249, 46, 191, 23, 18, 32, 190, 174, 165, 154, 188, 161, 17, 99, 189, 19, 31, 11, 62, 231, 171, 227, 188, 100, 232, 177, 60, 23, 27, 183, 189, 203, 27, 56, 190, 32, 136, 144, 60, 58, 91, 179, 189, 195, 184, 218, 61, 109, 193, 31, 60, 211, 205, 186, 61, 97, 230, 229, 189, 130, 213, 238, 189, 180, 196, 1, 62, 236, 233, 37, 61, 66, 55, 234, 189, 23, 176, 167, 61, 95, 206, 3, 190, 127, 209, 251, 61, 208, 79, 145, 189, 46, 212, 205, 189, 81, 244, 24, 60, 185, 37, 215, 189, 20, 225, 69, 189, 63, 102, 147, 188, 188, 17, 91, 189, 28, 117, 56, 61, 187, 190, 247, 189, 177, 77, 229, 60, 24, 99, 53, 189, 202, 64, 39, 190, 183, 151, 157, 189, 226, 34, 255, 190, 65, 137, 18, 190, 236, 210, 162, 187, 132, 102, 193, 60, 57, 24, 140, 62, 173, 141, 88, 187, 40, 199, 154, 61, 196, 56, 96, 190, 79, 158, 59, 62, 41, 191, 2, 188, 105, 159, 115, 60, 155, 200, 138, 188, 1, 85, 198, 62, 67, 210, 59, 190, 113, 139, 138, 61, 99, 213, 37, 62, 223, 107, 144, 62, 67, 7, 51, 61, 215, 56, 151, 188, 160, 93, 134, 190, 26, 53, 87, 189, 16, 192, 21, 190, 161, 196, 163, 187, 200, 231, 203, 61, 57, 119, 157, 190, 170, 1, 158, 62, 3, 169, 61, 62, 76, 141, 10, 61, 124, 53, 197, 61, 193, 193, 127, 61, 76, 41, 48, 189, 113, 7, 128, 191, 119, 94, 52, 62, 9, 21, 17, 190, 219, 113, 43, 189, 236, 255, 115, 61, 49, 194, 170, 62, 155, 181, 96, 190, 22, 58, 155, 188, 216, 66, 74, 62, 45, 235, 208, 189, 164, 163, 50, 191, 21, 101, 150, 61, 115, 108, 146, 62, 90, 131, 232, 61, 206, 178, 196, 190, 197, 171, 238, 189, 6, 170, 72, 62, 199, 3, 109, 61, 54, 157, 145, 191, 185, 68, 170, 189, 211, 20, 121, 190, 244, 85, 144, 61, 9, 108, 111, 189, 60, 78, 185, 187, 140, 242, 233, 61, 104, 79, 147, 191, 64, 43, 58, 62, 31, 177, 1, 62, 245, 60, 158, 62, 51, 115, 170, 190, 247, 221, 27, 191, 94, 61, 18, 190, 225, 56, 11, 190, 49, 152, 112, 61, 213, 68, 254, 188, 0, 243, 245, 59, 5, 87, 20, 189, 72, 89, 129, 61, 201, 159, 60, 189, 36, 39, 251, 189, 200, 80, 143, 189, 37, 190, 117, 190, 4, 225, 31, 61, 128, 130, 43, 190, 169, 132, 250, 189, 234, 19, 3, 190, 235, 30, 71, 190, 222, 184, 174, 61, 125, 60, 220, 61, 145, 249, 197, 61, 130, 189, 49, 62, 229, 228, 74, 189, 127, 178, 160, 189, 109, 55, 3, 190, 180, 89, 231, 189, 165, 74, 221, 188, 44, 167, 29, 190, 246, 177, 187, 188, 198, 236, 0, 190, 123, 7, 74, 190, 72, 91, 178, 61, 30, 190, 18, 60, 49, 87, 68, 61, 123, 16, 98, 62, 166, 133, 138, 62, 156, 122, 252, 60, 66, 31, 142, 188, 221, 94, 99, 61, 59, 224, 3, 61, 187, 173, 42, 190, 64, 75, 74, 62, 159, 177, 59, 190, 53, 153, 131, 62, 58, 175, 98, 61, 52, 32, 176, 61, 47, 222, 89, 190, 135, 234, 3, 62, 62, 187, 189, 189, 211, 62, 179, 62, 93, 92, 104, 60, 183, 92, 66, 61, 86, 51, 153, 61, 230, 62, 132, 62, 199, 45, 201, 188, 152, 181, 55, 190, 254, 210, 114, 62, 116, 129, 28, 188, 48, 153, 21, 62, 56, 248, 188, 61, 135, 231, 183, 60, 53, 20, 209, 61, 254, 213, 34, 190, 206, 61, 166, 190, 209, 228, 138, 61, 84, 80, 236, 190, 35, 64, 113, 63, 121, 35, 185, 62, 206, 207, 236, 61, 197, 221, 36, 61, 32, 234, 3, 191, 18, 254, 252, 61, 204, 219, 235, 60, 245, 36, 188, 190, 205, 145, 51, 189, 156, 84, 140, 62, 142, 73, 62, 189, 228, 121, 173, 62, 252, 210, 227, 190, 142, 156, 65, 189, 200, 178, 57, 62, 39, 189, 147, 189, 158, 205, 230, 61, 166, 135, 125, 62, 36, 172, 37, 190, 136, 221, 142, 62, 163, 220, 148, 189, 109, 64, 162, 61, 4, 171, 243, 60, 119, 134, 30, 188, 181, 221, 153, 62, 94, 193, 153, 61, 192, 251, 36, 62, 243, 245, 228, 59, 160, 217, 211, 189, 85, 3, 140, 190, 187, 216, 130, 62, 213, 180, 28, 191, 18, 69, 201, 61, 252, 164, 147, 189, 170, 159, 100, 189, 73, 214, 37, 189, 142, 24, 45, 61, 241, 172, 171, 188, 164, 247, 221, 61, 52, 86, 145, 61, 216, 122, 128, 61, 220, 241, 167, 188, 85, 89, 13, 62, 197, 252, 242, 189, 26, 149, 215, 188, 42, 173, 92, 189, 194, 202, 144, 188, 36, 4, 154, 188, 174, 34, 201, 61, 192, 109, 230, 189, 252, 138, 190, 189, 58, 250, 156, 188, 238, 49, 218, 60, 14, 206, 133, 61, 90, 200, 32, 189, 95, 185, 15, 190, 61, 190, 135, 187, 226, 76, 0, 190, 61, 244, 42, 190, 74, 130, 200, 189, 78, 200, 93, 61, 223, 111, 164, 189, 210, 186, 25, 188, 109, 13, 183, 189};
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
                alignas(float) const unsigned char memory[] = {235, 118, 196, 62, 95, 122, 10, 61, 66, 212, 224, 60, 23, 187, 173, 62, 125, 229, 132, 189, 36, 84, 157, 62, 210, 188, 42, 190, 212, 119, 106, 188, 77, 35, 119, 189, 8, 51, 91, 62, 90, 253, 221, 189, 180, 52, 161, 188, 81, 216, 16, 189, 47, 126, 173, 62, 109, 116, 180, 62, 57, 142, 31, 62, 184, 238, 88, 190, 76, 157, 207, 61, 65, 237, 125, 61, 124, 128, 93, 187, 229, 97, 23, 190, 17, 142, 150, 62, 186, 79, 154, 61, 10, 6, 86, 190, 240, 101, 150, 190, 194, 43, 54, 189, 12, 173, 30, 61, 215, 75, 135, 60, 152, 201, 180, 188, 140, 170, 42, 190, 245, 153, 212, 190, 135, 19, 237, 189};
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
                alignas(float) const unsigned char memory[] = {245, 138, 21, 190, 226, 47, 156, 61, 193, 79, 11, 63, 162, 96, 39, 63, 51, 193, 41, 61, 128, 220, 41, 63, 148, 77, 242, 61, 248, 188, 131, 61, 179, 131, 162, 59, 6, 34, 187, 189, 160, 123, 37, 191, 107, 207, 103, 190, 211, 245, 158, 62, 68, 134, 56, 190, 214, 79, 53, 63, 152, 90, 94, 190, 104, 37, 56, 62, 244, 255, 189, 191, 47, 174, 239, 190, 175, 248, 220, 62, 195, 253, 66, 63, 219, 89, 183, 59, 138, 63, 0, 189, 215, 191, 118, 62, 213, 252, 139, 191, 1, 105, 235, 189, 221, 252, 18, 190, 18, 8, 192, 191, 168, 56, 162, 61, 223, 182, 95, 61, 63, 150, 220, 62, 234, 251, 13, 189, 50, 126, 188, 190, 77, 90, 0, 62, 173, 184, 234, 190, 178, 218, 106, 188, 224, 132, 20, 191, 66, 157, 222, 60, 107, 57, 16, 190, 38, 217, 80, 190, 68, 176, 195, 189, 190, 31, 76, 190, 22, 44, 116, 61, 17, 144, 234, 61, 122, 70, 65, 63, 83, 129, 199, 190, 117, 62, 112, 62, 226, 183, 163, 190, 131, 96, 144, 61, 121, 127, 9, 63, 139, 105, 23, 62, 184, 108, 174, 190, 21, 59, 4, 62, 162, 81, 160, 190, 141, 109, 164, 190, 151, 82, 206, 61, 175, 95, 20, 63, 234, 109, 176, 189, 45, 101, 168, 187, 199, 156, 107, 63, 123, 224, 206, 61, 16, 199, 133, 188, 138, 43, 239, 189, 54, 74, 248, 61};
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
                alignas(float) const unsigned char memory[] = {225, 108, 125, 190, 240, 151, 181, 190};
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
    alignas(float) const unsigned char memory[] = {204, 52, 166, 189, 86, 220, 185, 63, 239, 101, 173, 63};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {160, 88, 243, 63, 128, 134, 4, 60};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0009/steps/000000000014000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}