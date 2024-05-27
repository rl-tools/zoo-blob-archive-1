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
                alignas(float) const unsigned char memory[] = {226, 59, 129, 189, 9, 131, 12, 191, 196, 76, 247, 188, 236, 98, 135, 62, 183, 89, 102, 190, 44, 78, 139, 190, 101, 85, 177, 62, 156, 101, 172, 62, 197, 217, 101, 189, 128, 109, 101, 62, 194, 112, 13, 62, 75, 151, 6, 63, 237, 47, 17, 190, 169, 228, 169, 62, 178, 220, 132, 190, 147, 144, 51, 62, 187, 191, 212, 62, 8, 30, 216, 61, 129, 229, 188, 62, 189, 154, 237, 59, 177, 96, 7, 191, 111, 128, 39, 190, 217, 2, 250, 61, 176, 19, 52, 190, 183, 5, 78, 190, 220, 100, 255, 190, 74, 64, 246, 190, 115, 217, 0, 191, 94, 219, 143, 61, 242, 108, 237, 62, 78, 230, 209, 190, 224, 251, 211, 189, 108, 4, 245, 62, 94, 177, 145, 61, 41, 13, 5, 63, 34, 152, 48, 190, 219, 248, 8, 190, 187, 188, 137, 61, 227, 137, 215, 189, 214, 212, 11, 189, 117, 231, 245, 61, 65, 176, 201, 190, 17, 106, 15, 63, 223, 36, 114, 61, 80, 61, 10, 63, 58, 6, 131, 62, 68, 124, 110, 190, 2, 206, 28, 62, 124, 125, 174, 190, 117, 168, 7, 191, 116, 209, 127, 189, 41, 114, 6, 62, 16, 223, 35, 61, 113, 240, 190, 62, 236, 203, 163, 62, 81, 70, 7, 63, 159, 112, 152, 62, 230, 4, 89, 189, 154, 177, 91, 190, 47, 231, 141, 62, 46, 30, 211, 190, 244, 17, 164, 62, 134, 134, 138, 62, 9, 133, 205, 62, 26, 67, 251, 190, 45, 185, 85, 61, 58, 94, 61, 61, 227, 178, 173, 189, 232, 233, 16, 191, 218, 173, 206, 190, 190, 83, 9, 63, 105, 214, 93, 189, 148, 63, 157, 190, 97, 103, 179, 190, 31, 60, 44, 190, 236, 1, 253, 62, 129, 52, 252, 190, 190, 189, 140, 62, 82, 134, 16, 191, 34, 87, 87, 190, 241, 116, 13, 62, 84, 30, 176, 189, 93, 219, 184, 62, 183, 174, 68, 62, 57, 203, 44, 62, 228, 17, 11, 62, 170, 236, 141, 190, 20, 199, 177, 189, 19, 168, 13, 191, 124, 245, 0, 190, 122, 176, 85, 189, 31, 181, 208, 190, 153, 11, 108, 190, 68, 57, 166, 62, 199, 20, 7, 63, 60, 33, 151, 62};
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
                alignas(float) const unsigned char memory[] = {53, 176, 19, 191, 210, 44, 233, 190, 115, 153, 125, 190, 106, 120, 128, 62, 21, 101, 228, 62, 194, 66, 76, 189, 253, 226, 50, 189, 125, 50, 9, 190, 97, 243, 212, 62, 124, 151, 19, 63, 35, 149, 233, 190, 4, 234, 250, 62, 168, 61, 34, 190, 105, 123, 50, 62, 133, 160, 200, 62, 144, 95, 75, 190, 221, 185, 54, 190, 94, 212, 140, 189, 108, 28, 182, 61, 22, 190, 231, 190, 206, 24, 149, 61, 90, 159, 80, 61, 4, 243, 11, 63, 240, 130, 177, 190, 219, 29, 182, 190, 222, 127, 75, 190, 1, 171, 24, 61, 120, 110, 184, 190, 164, 95, 192, 190, 143, 70, 194, 62, 195, 39, 68, 189, 100, 116, 88, 190};
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
                alignas(float) const unsigned char memory[] = {19, 38, 172, 60, 51, 250, 88, 188, 3, 60, 35, 62, 145, 114, 65, 189, 29, 36, 37, 189, 204, 152, 18, 62, 199, 125, 52, 62, 133, 2, 147, 187, 223, 35, 196, 189, 192, 13, 197, 61, 203, 115, 193, 188, 210, 92, 22, 62, 158, 27, 228, 61, 199, 45, 180, 189, 156, 49, 174, 189, 1, 75, 230, 189, 136, 80, 42, 190, 209, 157, 34, 62, 9, 92, 130, 61, 86, 38, 83, 189, 186, 73, 30, 62, 36, 247, 171, 61, 48, 28, 19, 190, 203, 244, 234, 189, 210, 155, 208, 61, 205, 108, 79, 61, 122, 250, 241, 61, 47, 200, 210, 189, 108, 244, 20, 62, 168, 80, 103, 188, 79, 99, 88, 189, 241, 203, 0, 190, 148, 92, 25, 190, 175, 69, 38, 62, 183, 189, 30, 189, 107, 65, 230, 189, 253, 57, 16, 62, 211, 47, 38, 62, 204, 219, 211, 188, 244, 225, 14, 190, 72, 216, 207, 188, 37, 126, 21, 189, 94, 63, 191, 59, 97, 24, 34, 62, 150, 52, 207, 187, 51, 102, 17, 62, 229, 22, 17, 189, 109, 76, 46, 61, 91, 188, 53, 189, 146, 136, 137, 189, 184, 39, 7, 190, 172, 57, 244, 189, 248, 65, 72, 61, 129, 47, 92, 61, 20, 234, 27, 62, 12, 159, 136, 60, 241, 203, 144, 189, 78, 83, 87, 60, 51, 144, 176, 189, 58, 41, 230, 189, 189, 195, 19, 190, 45, 80, 211, 61, 123, 192, 233, 188, 133, 28, 31, 190, 156, 58, 89, 61, 0, 113, 41, 61, 7, 128, 51, 190, 237, 121, 29, 60, 188, 21, 2, 189, 150, 78, 188, 61, 78, 12, 5, 189, 148, 18, 60, 189, 252, 215, 192, 61, 191, 168, 153, 61, 79, 62, 234, 189, 49, 152, 112, 189, 60, 240, 211, 189, 65, 78, 28, 190, 37, 241, 153, 189, 76, 107, 174, 189, 74, 138, 35, 62, 217, 67, 179, 60, 114, 140, 186, 61, 231, 3, 8, 61, 250, 243, 28, 190, 137, 170, 191, 189, 163, 31, 46, 61, 57, 204, 97, 189, 139, 173, 29, 62, 157, 170, 244, 188, 118, 120, 162, 61, 95, 218, 146, 61, 174, 52, 221, 189, 236, 179, 37, 62, 56, 228, 37, 62, 104, 153, 156, 61, 253, 108, 201, 61, 161, 68, 22, 62, 211, 206, 207, 188, 93, 159, 32, 61, 121, 62, 94, 61, 73, 27, 232, 61, 1, 193, 28, 190, 175, 10, 246, 187, 133, 222, 176, 60, 200, 147, 0, 62, 38, 162, 40, 188, 126, 246, 203, 189, 152, 200, 221, 189, 170, 212, 134, 60, 52, 24, 20, 62, 56, 183, 21, 60, 89, 48, 14, 62, 242, 83, 68, 189, 80, 89, 37, 62, 83, 50, 26, 60, 188, 157, 14, 62, 167, 96, 216, 189, 158, 118, 42, 190, 12, 109, 37, 190, 186, 187, 14, 62, 204, 228, 73, 61, 84, 79, 74, 61, 233, 175, 54, 188, 57, 91, 167, 188, 41, 202, 92, 189, 245, 20, 32, 190, 64, 111, 47, 62, 202, 128, 26, 61, 126, 114, 64, 61, 76, 40, 51, 190, 206, 172, 184, 188, 172, 183, 252, 61, 213, 27, 246, 187, 117, 187, 81, 188, 235, 223, 42, 62, 26, 18, 34, 190, 44, 168, 97, 61, 88, 150, 203, 188, 222, 202, 15, 190, 150, 92, 223, 189, 158, 181, 22, 62, 201, 58, 23, 62, 136, 248, 28, 190, 206, 53, 3, 189, 51, 51, 145, 61, 147, 201, 235, 61, 116, 47, 204, 58, 172, 213, 157, 60, 11, 187, 17, 189, 111, 192, 232, 189, 78, 13, 38, 62, 66, 108, 241, 189, 203, 227, 134, 61, 250, 122, 81, 59, 251, 70, 146, 188, 175, 10, 114, 61, 16, 112, 1, 61, 99, 176, 165, 61, 117, 232, 3, 189, 79, 91, 155, 188, 197, 220, 45, 62, 220, 212, 181, 61, 193, 101, 16, 190, 220, 60, 15, 190, 227, 164, 32, 62, 83, 15, 11, 190, 26, 172, 14, 62, 33, 240, 221, 61, 249, 60, 39, 190, 58, 79, 192, 61, 92, 174, 135, 189, 2, 90, 8, 190, 92, 242, 45, 61, 130, 176, 150, 189, 96, 54, 184, 61, 86, 26, 66, 189, 98, 197, 202, 61, 2, 188, 1, 190, 206, 132, 225, 61, 49, 200, 250, 189, 209, 1, 155, 188, 161, 174, 49, 190, 109, 8, 25, 62, 236, 106, 203, 61, 4, 169, 252, 189, 6, 113, 253, 61, 221, 181, 155, 189, 240, 96, 209, 189, 188, 50, 181, 187, 151, 28, 62, 61, 147, 103, 16, 62, 121, 35, 230, 61, 114, 243, 36, 189, 11, 163, 12, 190, 72, 184, 132, 61, 177, 240, 1, 190, 132, 83, 175, 189, 255, 133, 15, 62, 157, 30, 131, 189, 70, 171, 51, 190, 234, 54, 134, 61, 210, 125, 242, 61, 244, 135, 10, 190, 52, 110, 167, 188, 152, 31, 23, 62, 112, 236, 3, 190, 39, 158, 229, 189, 60, 32, 146, 61, 14, 14, 132, 189, 1, 247, 149, 189, 107, 209, 214, 60, 61, 103, 28, 190, 130, 175, 185, 61, 70, 120, 177, 60, 182, 135, 103, 189, 239, 132, 7, 189, 87, 112, 137, 61, 34, 96, 127, 61, 252, 175, 105, 189, 226, 69, 61, 189, 208, 111, 242, 61, 110, 76, 251, 61, 232, 180, 125, 60, 77, 42, 64, 61, 132, 103, 168, 61, 208, 143, 184, 188, 175, 56, 10, 59, 32, 195, 188, 61, 26, 205, 43, 62, 108, 212, 29, 190, 75, 97, 70, 60, 156, 118, 20, 190, 55, 72, 82, 189, 98, 109, 50, 190, 228, 137, 115, 189, 66, 70, 39, 190, 165, 75, 23, 190, 246, 96, 8, 62, 221, 136, 75, 61, 43, 220, 132, 61, 26, 165, 23, 189, 211, 203, 95, 60, 108, 177, 241, 61, 159, 135, 246, 60, 34, 15, 21, 190, 71, 249, 141, 61, 205, 8, 31, 62, 176, 135, 34, 189, 65, 28, 211, 189, 53, 225, 152, 189, 240, 148, 22, 62, 49, 192, 49, 62, 113, 129, 172, 189, 244, 43, 65, 189, 221, 200, 252, 60, 110, 9, 137, 189, 107, 216, 95, 61, 255, 238, 8, 189, 125, 116, 162, 189, 22, 134, 99, 61, 183, 245, 17, 190, 172, 148, 218, 60, 53, 203, 17, 62, 250, 140, 156, 61, 166, 112, 149, 189, 202, 217, 185, 61, 170, 235, 24, 189, 72, 140, 169, 61, 250, 5, 46, 62, 65, 39, 200, 189, 54, 77, 44, 61, 87, 120, 218, 189, 228, 31, 115, 188, 26, 220, 21, 190, 241, 166, 28, 60, 15, 116, 46, 190, 240, 12, 227, 61, 37, 22, 151, 61, 86, 72, 97, 188, 167, 231, 255, 61, 208, 21, 78, 188, 108, 164, 156, 60, 232, 46, 237, 187, 235, 174, 253, 188, 232, 118, 15, 189, 163, 61, 238, 187, 194, 216, 8, 62, 13, 249, 48, 190, 8, 188, 253, 61, 192, 204, 21, 190, 88, 213, 136, 189, 178, 9, 50, 189, 35, 66, 197, 189, 102, 4, 229, 61, 67, 179, 78, 189, 6, 200, 223, 60, 240, 157, 23, 190, 135, 41, 36, 62, 235, 91, 178, 188, 228, 229, 50, 183, 2, 118, 50, 62, 110, 181, 193, 189, 2, 185, 210, 189, 1, 7, 154, 189, 215, 106, 161, 189, 55, 135, 176, 61, 240, 253, 51, 190, 161, 199, 140, 61, 194, 191, 198, 189, 105, 163, 206, 189, 69, 168, 19, 190, 66, 165, 197, 61, 207, 110, 238, 189, 224, 88, 20, 190, 81, 34, 179, 61, 183, 94, 119, 187, 22, 197, 28, 190, 36, 152, 172, 61, 99, 205, 138, 61, 26, 195, 211, 61, 173, 183, 245, 61, 212, 56, 52, 62, 55, 125, 47, 62, 208, 91, 166, 189, 128, 167, 35, 190, 168, 19, 2, 190, 178, 28, 23, 62, 114, 209, 30, 61, 166, 125, 153, 61, 230, 149, 167, 189, 206, 13, 203, 60, 173, 128, 218, 61, 9, 88, 146, 189, 156, 190, 49, 61, 83, 71, 62, 189, 213, 165, 243, 189, 69, 132, 37, 190, 5, 187, 132, 61, 123, 4, 31, 189, 120, 166, 43, 62, 245, 239, 31, 190, 229, 113, 140, 61, 250, 165, 138, 188, 227, 81, 30, 62, 14, 51, 204, 189, 124, 147, 146, 61, 142, 175, 193, 61, 164, 130, 175, 189, 20, 118, 50, 61, 205, 26, 135, 61, 11, 220, 74, 186, 124, 61, 25, 62, 250, 118, 14, 189, 65, 109, 23, 190, 17, 51, 204, 61, 88, 63, 146, 189, 233, 242, 2, 62, 125, 128, 195, 60, 227, 57, 45, 62, 140, 38, 207, 189, 124, 231, 215, 189, 193, 126, 47, 190, 191, 65, 142, 188, 147, 35, 52, 62, 170, 202, 5, 190, 151, 74, 97, 188, 232, 150, 237, 61, 181, 248, 111, 189, 245, 125, 180, 188, 226, 189, 8, 190, 198, 150, 73, 59, 180, 205, 162, 61, 64, 41, 199, 188, 255, 248, 207, 61, 135, 80, 9, 62, 6, 180, 22, 190, 150, 200, 57, 189, 44, 138, 114, 189, 168, 190, 61, 61, 249, 188, 74, 61, 94, 7, 175, 188, 17, 132, 235, 61, 174, 113, 215, 189, 190, 60, 10, 62, 255, 207, 23, 62, 167, 55, 8, 190, 198, 213, 253, 61, 58, 122, 230, 188, 61, 172, 30, 190, 35, 79, 20, 189, 0, 130, 178, 189, 24, 43, 36, 190, 74, 244, 160, 189, 43, 33, 36, 187, 80, 43, 155, 188, 232, 47, 28, 190, 57, 98, 210, 61, 11, 35, 249, 61, 118, 168, 63, 189, 75, 125, 250, 189, 195, 68, 190, 189, 56, 118, 31, 190, 160, 245, 195, 61, 214, 167, 40, 190, 19, 232, 39, 62, 103, 81, 172, 189, 108, 251, 160, 61, 252, 127, 250, 189, 104, 151, 50, 62, 36, 58, 152, 189, 214, 221, 29, 190, 6, 168, 236, 61, 62, 189, 124, 61, 37, 76, 175, 61, 1, 38, 186, 188, 37, 114, 132, 61, 93, 227, 203, 61, 1, 62, 27, 190, 109, 223, 99, 61, 87, 224, 255, 189, 170, 68, 218, 189, 53, 18, 1, 190, 197, 11, 21, 61, 26, 154, 145, 189, 180, 116, 249, 61, 129, 23, 197, 61, 122, 108, 131, 189, 8, 169, 32, 62, 141, 190, 4, 62, 133, 222, 23, 62, 224, 254, 186, 61, 225, 228, 41, 62, 153, 94, 36, 60, 195, 162, 1, 189, 158, 251, 42, 62, 160, 146, 25, 190, 114, 123, 247, 189, 158, 152, 38, 190, 138, 6, 202, 60, 248, 26, 242, 61, 107, 59, 250, 189, 71, 195, 209, 189, 28, 182, 196, 60, 41, 232, 51, 62, 131, 68, 80, 189, 33, 54, 36, 189, 91, 132, 140, 61, 9, 54, 43, 190, 48, 214, 116, 189, 1, 86, 43, 62, 202, 2, 69, 188, 166, 130, 10, 62, 83, 155, 10, 61, 40, 130, 1, 190, 77, 69, 143, 189, 14, 60, 37, 62, 167, 131, 201, 189, 109, 77, 42, 190, 32, 32, 144, 59, 235, 158, 249, 60, 244, 6, 44, 190, 45, 208, 156, 188, 54, 41, 36, 60, 93, 8, 221, 61, 58, 123, 44, 190, 106, 208, 73, 189, 114, 199, 155, 189, 188, 219, 40, 61, 121, 126, 190, 189, 74, 225, 236, 61, 139, 221, 4, 62, 190, 96, 103, 60, 74, 23, 240, 61, 106, 10, 20, 189, 179, 30, 62, 189, 10, 14, 51, 190, 177, 137, 218, 189, 173, 68, 11, 62, 245, 200, 203, 61, 143, 173, 110, 61, 198, 175, 145, 60, 227, 207, 18, 62, 65, 156, 48, 62, 172, 33, 129, 189, 25, 227, 253, 189, 105, 157, 57, 189, 174, 35, 152, 189, 197, 180, 16, 190, 196, 118, 199, 61, 144, 90, 47, 189, 90, 216, 47, 189, 135, 223, 126, 61, 19, 238, 61, 59, 35, 131, 167, 189, 53, 184, 165, 189, 41, 107, 10, 62, 119, 145, 108, 189, 241, 185, 29, 62, 40, 61, 109, 61, 86, 224, 251, 61, 237, 179, 36, 62, 255, 226, 75, 60, 27, 147, 28, 190, 206, 95, 218, 61, 194, 80, 132, 189, 178, 98, 184, 189, 131, 241, 38, 61, 67, 111, 48, 190, 225, 13, 244, 61, 27, 235, 29, 189, 67, 207, 166, 61, 80, 152, 17, 190, 180, 40, 147, 59, 147, 73, 48, 62, 216, 92, 120, 189, 50, 76, 34, 190, 160, 1, 9, 190, 76, 113, 199, 189, 176, 152, 10, 190, 4, 98, 6, 189, 155, 13, 9, 62, 22, 23, 34, 62, 56, 78, 182, 189, 23, 240, 14, 62, 106, 59, 4, 190, 154, 193, 2, 62, 3, 233, 53, 61, 61, 131, 155, 61, 40, 111, 218, 189, 230, 150, 151, 189, 23, 55, 4, 62, 245, 50, 82, 189, 190, 139, 42, 62, 9, 46, 209, 61, 177, 13, 17, 62, 44, 187, 89, 189, 130, 217, 159, 60, 188, 195, 19, 190, 240, 204, 211, 61, 174, 167, 167, 61, 114, 155, 37, 190, 124, 223, 228, 187, 75, 113, 57, 188, 197, 231, 34, 190, 0, 70, 20, 62, 143, 179, 238, 61, 216, 2, 1, 190, 228, 77, 32, 189, 120, 143, 38, 190, 182, 248, 195, 189, 71, 65, 134, 61, 190, 137, 198, 61, 206, 127, 12, 62, 253, 71, 26, 62, 125, 194, 166, 61, 178, 243, 172, 189, 104, 73, 50, 190, 184, 181, 0, 62, 19, 19, 52, 61, 137, 223, 2, 189, 237, 105, 33, 61, 135, 227, 243, 61, 235, 52, 148, 60, 241, 64, 41, 60, 65, 235, 234, 60, 86, 31, 153, 61, 184, 201, 157, 61, 38, 175, 48, 190, 225, 174, 179, 189, 40, 54, 192, 61, 221, 170, 38, 190, 85, 222, 172, 189, 121, 229, 32, 62, 246, 1, 237, 61, 123, 146, 238, 61, 5, 135, 251, 61, 206, 250, 0, 62, 220, 103, 251, 189, 51, 236, 41, 62, 28, 192, 0, 62, 140, 223, 88, 59, 88, 243, 225, 61, 61, 203, 234, 189, 252, 83, 161, 60, 204, 43, 120, 61, 47, 250, 162, 61, 106, 36, 74, 188, 216, 215, 50, 62, 172, 196, 43, 62, 71, 50, 73, 60, 180, 229, 172, 189, 88, 243, 161, 189, 89, 112, 64, 189, 78, 148, 19, 190, 227, 219, 26, 189, 234, 238, 189, 189, 179, 135, 248, 61, 150, 247, 156, 189, 42, 89, 38, 190, 144, 79, 25, 190, 29, 144, 130, 189, 205, 148, 25, 62, 144, 46, 191, 189, 74, 165, 2, 62, 234, 107, 50, 187, 236, 57, 24, 190, 202, 144, 114, 61, 113, 248, 241, 61, 189, 34, 44, 190, 255, 63, 6, 189, 145, 134, 228, 188, 213, 23, 34, 189, 4, 224, 159, 189, 107, 144, 118, 60, 110, 110, 14, 62, 60, 171, 48, 61, 214, 28, 11, 62, 191, 156, 162, 60, 173, 84, 8, 190, 120, 228, 251, 60, 21, 10, 212, 189, 211, 179, 162, 61, 190, 229, 21, 190, 117, 7, 202, 61, 57, 164, 24, 62, 183, 55, 30, 61, 215, 251, 175, 61, 101, 63, 66, 189, 140, 190, 16, 190, 116, 43, 52, 190, 191, 187, 171, 188, 76, 48, 34, 62, 25, 71, 231, 61, 212, 205, 237, 61, 18, 44, 135, 189, 46, 51, 30, 62, 126, 241, 88, 61, 129, 181, 143, 189, 62, 149, 204, 61, 249, 173, 21, 62, 241, 230, 13, 190, 8, 211, 33, 62, 151, 34, 19, 62, 37, 168, 47, 62, 169, 17, 33, 190, 28, 107, 246, 189, 162, 47, 168, 61, 110, 175, 61, 189, 230, 10, 35, 190, 189, 170, 96, 60, 61, 144, 74, 189, 2, 48, 0, 61, 167, 32, 203, 189, 177, 141, 239, 60, 19, 92, 24, 61, 1, 137, 185, 61, 191, 226, 27, 190, 139, 210, 204, 61, 155, 178, 186, 61, 174, 147, 33, 190, 152, 27, 237, 60, 188, 55, 251, 188, 140, 175, 150, 61, 141, 84, 247, 189, 125, 151, 191, 60, 55, 151, 153, 189, 20, 121, 251, 188, 128, 162, 197, 189, 154, 113, 24, 190, 110, 110, 204, 60, 50, 3, 214, 61, 145, 180, 30, 61, 10, 194, 12, 189, 154, 89, 13, 62, 0, 244, 222, 188, 177, 234, 162, 61, 188, 80, 31, 190, 71, 219, 196, 60, 4, 173, 245, 61, 247, 166, 41, 190, 148, 213, 143, 61, 229, 189, 7, 190, 17, 143, 27, 62, 145, 186, 37, 190, 134, 15, 244, 61, 77, 93, 106, 60, 145, 246, 150, 186, 1, 213, 179, 61, 64, 135, 138, 61, 50, 111, 40, 62, 99, 89, 191, 61, 107, 32, 45, 190, 57, 114, 10, 189, 71, 226, 159, 61, 27, 249, 107, 61, 75, 24, 248, 189, 71, 95, 230, 61, 94, 38, 224, 61, 124, 153, 47, 189, 74, 171, 21, 60, 5, 135, 186, 61, 51, 75, 16, 190, 247, 234, 23, 62, 223, 195, 19, 61, 109, 89, 194, 188, 143, 227, 151, 61, 220, 225, 21, 190, 112, 134, 194, 187, 110, 219, 146, 189, 42, 146, 151, 61, 144, 34, 149, 61, 247, 150, 243, 189, 161, 252, 29, 189, 230, 196, 29, 62, 89, 40, 91, 61, 135, 196, 52, 190, 75, 220, 131, 61, 206, 243, 220, 189, 228, 89, 246, 61, 137, 25, 149, 61, 175, 12, 97, 189, 128, 108, 44, 61, 84, 51, 41, 61, 52, 58, 211, 189, 34, 211, 211, 60, 59, 104, 143, 61, 187, 68, 209, 189, 182, 214, 37, 190, 167, 23, 169, 61, 15, 103, 7, 189, 154, 7, 37, 190, 53, 162, 151, 189, 91, 236, 245, 61, 115, 218, 198, 61, 231, 106, 213, 189, 17, 2, 38, 61, 235, 122, 248, 189, 16, 7, 8, 62, 40, 72, 106, 189, 252, 56, 41, 188, 241, 12, 84, 59, 169, 203, 134, 189, 226, 19, 129, 61, 181, 207, 16, 61, 42, 120, 251, 189, 130, 69, 84, 187, 126, 32, 22, 60, 138, 14, 22, 190, 37, 73, 44, 189, 14, 229, 47, 62, 13, 211, 16, 190, 218, 220, 155, 189, 81, 209, 126, 61, 34, 190, 3, 62, 134, 254, 230, 188, 208, 55, 30, 190, 114, 207, 108, 59, 71, 197, 163, 189, 38, 87, 9, 190, 245, 63, 156, 61, 79, 139, 137, 189, 133, 247, 8, 62, 99, 55, 32, 62, 125, 130, 174, 189, 83, 135, 252, 61, 195, 146, 18, 190, 224, 34, 18, 190, 38, 122, 161, 188, 11, 120, 80, 188, 245, 131, 71, 61, 123, 166, 39, 190, 157, 38, 64, 61, 82, 66, 188, 60, 189, 156, 34, 62, 255, 4, 176, 187, 100, 220, 0, 190, 78, 49, 71, 189, 19, 6, 152, 61, 166, 106, 206, 189, 226, 68, 189, 189, 68, 171, 173, 189, 59, 149, 70, 189, 166, 156, 206, 61, 131, 184, 148, 189, 8, 180, 138, 188, 200, 216, 43, 61, 17, 16, 24, 62, 246, 233, 175, 61, 93, 41, 177, 61, 216, 124, 148, 61, 234, 25, 3, 190, 209, 0, 76, 189, 193, 16, 9, 62, 236, 81, 217, 59, 79, 131, 196, 61, 19, 34, 10, 62, 245, 249, 22, 190, 84, 124, 137, 61, 234, 237, 190, 61, 53, 218, 10, 62, 157, 236, 24, 188, 154, 134, 215, 61, 253, 232, 216, 189, 102, 49, 114, 61, 61, 83, 97, 189, 15, 84, 231, 188, 95, 252, 7, 190, 213, 244, 16, 61, 36, 240, 242, 61, 231, 76, 197, 187, 159, 192, 165, 189, 62, 185, 9, 190, 126, 140, 26, 62, 228, 218, 251, 189, 188, 113, 99, 60, 19, 61, 236, 188, 167, 14, 61, 61, 174, 35, 105, 61, 60, 148, 166, 189, 27, 146, 28, 62, 92, 220, 46, 190, 235, 197, 16, 62, 183, 174, 111, 189, 54, 103, 211, 61, 235, 125, 64, 59, 104, 17, 7, 190, 55, 193, 210, 189, 241, 86, 122, 60, 104, 253, 251, 61, 179, 163, 2, 61, 16, 22, 127, 61, 106, 64, 164, 60, 182, 209, 68, 61, 212, 37, 177, 61, 249, 117, 39, 189, 145, 165, 46, 62, 128, 30, 243, 189, 175, 12, 135, 189, 25, 216, 204, 61, 119, 110, 172, 189, 155, 109, 21, 190, 1, 37, 187, 60, 121, 84, 211, 187, 64, 103, 23, 62, 124, 242, 5, 190, 105, 171, 188, 189, 70, 219, 234, 189, 56, 50, 16, 190, 67, 29, 146, 188, 107, 60, 35, 61, 150, 145, 47, 62, 255, 238, 39, 62, 219, 209, 206, 59, 212, 67, 97, 60, 193, 136, 18, 190, 65, 182, 20, 62, 161, 52, 227, 189, 26, 174, 139, 61, 51, 217, 144, 61, 108, 139, 110, 61, 69, 78, 52, 190, 10, 248, 6, 190, 223, 171, 223, 61, 245, 67, 1, 190, 185, 45, 235, 60, 198, 4, 204, 189, 209, 119, 16, 62, 35, 52, 238, 189, 97, 143, 2, 189, 72, 150, 184, 189, 129, 149, 30, 62, 163, 225, 243, 187, 22, 81, 141, 61, 96, 136, 136, 61, 186, 96, 81, 61, 141, 222, 34, 186, 98, 88, 40, 62, 170, 42, 58, 61, 219, 209, 11, 190, 233, 175, 41, 61, 30, 194, 0, 62, 145, 45, 7, 62, 112, 247, 15, 62, 101, 94, 13, 62, 67, 152, 151, 189, 96, 150, 174, 61, 195, 163, 36, 62, 57, 8, 23, 61, 85, 168, 89, 189, 91, 246, 3, 189, 57, 106, 42, 62, 188, 241, 151, 61, 243, 87, 59, 189, 10, 118, 197, 189, 149, 15, 13, 190, 152, 175, 93, 61, 249, 203, 98, 189, 58, 227, 101, 189, 232, 255, 49, 188, 182, 144, 37, 190, 66, 123, 210, 188, 253, 10, 18, 190, 249, 138, 157, 61, 35, 22, 128, 189, 211, 24, 7, 189, 123, 138, 3, 61, 160, 224, 2, 190, 238, 125, 179, 61, 139, 132, 214, 61, 0, 73, 218, 61, 199, 48, 181, 189, 162, 19, 200, 61, 227, 74, 19, 61, 246, 110, 34, 62, 196, 102, 229, 189, 100, 1, 162, 61, 153, 95, 19, 62, 205, 92, 35, 190, 217, 106, 135, 61, 108, 35, 185, 61, 1, 50, 2, 62, 62, 74, 249, 60, 225, 232, 14, 190, 147, 23, 237, 189, 164, 72, 209, 189, 248, 177, 135, 61, 77, 220, 214, 189, 29, 227, 91, 61, 85, 72, 60, 188, 52, 211, 211, 189, 146, 56, 145, 61, 166, 205, 135, 189, 236, 175, 154, 189, 108, 243, 38, 62, 198, 114, 15, 62, 170, 120, 241, 61, 167, 167, 176, 188, 204, 26, 33, 189, 37, 106, 181, 61, 13, 220, 217, 188, 202, 158, 157, 189, 37, 134, 9, 62, 168, 100, 222, 61, 207, 18, 23, 61, 50, 12, 238, 61, 145, 150, 41, 62, 57, 245, 120, 189, 231, 56, 1, 190, 193, 22, 249, 60, 11, 151, 30, 62, 38, 21, 187, 61, 150, 248, 48, 62, 120, 89, 29, 190, 4, 31, 239, 61, 124, 20, 12, 62, 235, 197, 75, 188, 74, 250, 171, 189, 102, 234, 46, 61, 88, 228, 84, 60, 87, 159, 35, 190, 213, 86, 46, 61, 219, 178, 250, 61, 45, 229, 43, 61, 61, 1, 210, 187, 139, 188, 246, 61, 33, 80, 90, 61, 4, 164, 218, 189, 114, 219, 70, 186, 62, 87, 176, 188, 131, 212, 208, 189, 78, 18, 205, 189, 171, 139, 101, 188, 182, 21, 179, 187, 247, 187, 142, 61, 172, 28, 4, 61, 62, 133, 192, 61, 218, 1, 210, 189, 77, 193, 14, 62, 248, 234, 89, 61, 192, 26, 34, 61, 73, 194, 255, 61, 9, 54, 25, 190, 130, 108, 34, 62, 99, 128, 172, 61, 53, 178, 88, 60, 192, 30, 193, 189, 150, 124, 6, 62, 225, 37, 220, 61, 41, 180, 138, 187, 147, 243, 159, 189, 190, 233, 194, 61, 23, 169, 48, 190, 254, 251, 87, 189, 220, 93, 237, 61, 27, 43, 245, 189, 176, 31, 179, 61, 65, 82, 180, 189, 234, 173, 35, 62, 177, 207, 44, 190, 231, 89, 37, 190, 208, 61, 66, 189, 227, 223, 237, 189, 236, 115, 35, 190, 121, 120, 11, 187, 105, 71, 113, 189, 121, 79, 171, 189, 30, 171, 13, 190, 215, 24, 214, 61, 62, 177, 39, 190, 42, 102, 131, 61, 171, 114, 180, 187, 211, 232, 158, 61, 185, 235, 36, 190, 81, 75, 95, 189, 9, 179, 49, 62, 242, 246, 7, 62, 54, 246, 243, 188, 31, 51, 227, 61, 166, 207, 238, 189, 109, 253, 137, 189, 92, 191, 53, 60, 177, 221, 239, 61, 35, 243, 234, 189};
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
                alignas(float) const unsigned char memory[] = {230, 190, 3, 62, 20, 60, 96, 189, 136, 221, 39, 190, 188, 134, 230, 188, 154, 175, 171, 61, 103, 165, 18, 61, 202, 63, 198, 189, 102, 69, 42, 61, 69, 190, 38, 189, 239, 29, 67, 189, 23, 164, 125, 189, 128, 119, 154, 61, 249, 113, 142, 61, 14, 222, 145, 189, 10, 68, 7, 190, 108, 210, 128, 61, 173, 5, 232, 188, 7, 18, 152, 188, 44, 201, 0, 190, 255, 231, 116, 61, 107, 29, 217, 189, 154, 64, 26, 190, 10, 170, 47, 190, 77, 158, 169, 61, 11, 214, 36, 189, 199, 162, 160, 189, 62, 236, 45, 62, 134, 128, 164, 189, 52, 202, 52, 190, 104, 135, 187, 189, 231, 9, 220, 189, 98, 31, 178, 61};
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
                alignas(float) const unsigned char memory[] = {247, 163, 199, 61, 118, 204, 7, 188, 252, 59, 153, 187, 145, 254, 217, 189, 254, 119, 163, 185, 253, 40, 129, 61, 92, 189, 154, 59, 131, 150, 47, 62, 231, 117, 1, 62, 237, 132, 13, 188, 104, 181, 12, 62, 5, 250, 84, 61, 38, 215, 169, 189, 54, 36, 195, 189, 149, 243, 35, 62, 116, 121, 98, 61, 91, 65, 23, 62, 17, 202, 175, 189, 49, 165, 255, 189, 160, 41, 178, 60, 127, 0, 74, 189, 227, 246, 14, 190, 105, 11, 64, 61, 21, 143, 115, 189, 229, 92, 219, 61, 139, 222, 169, 189, 243, 3, 174, 60, 90, 225, 148, 189, 8, 54, 180, 61, 137, 83, 129, 187, 207, 159, 10, 62, 238, 12, 11, 62, 98, 244, 5, 190, 137, 65, 15, 62, 147, 109, 18, 62, 254, 237, 245, 189, 127, 26, 25, 190, 123, 87, 32, 62, 100, 151, 24, 190, 96, 81, 157, 61, 18, 151, 16, 190, 95, 35, 245, 189, 8, 245, 148, 188, 67, 4, 11, 190, 76, 184, 16, 62, 193, 194, 3, 62, 201, 243, 174, 189, 60, 216, 220, 60, 27, 158, 38, 190, 228, 130, 217, 60, 88, 140, 142, 61, 126, 161, 163, 189, 114, 114, 67, 189, 51, 233, 231, 189, 101, 249, 22, 188, 93, 102, 127, 188, 112, 73, 47, 188, 3, 212, 21, 62, 81, 195, 50, 190, 1, 158, 179, 61, 93, 220, 147, 61, 221, 46, 253, 60, 4, 65, 142, 61, 80, 248, 163, 188};
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
                alignas(float) const unsigned char memory[] = {35, 151, 30, 62, 242, 3, 122, 61};
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
    alignas(float) const unsigned char memory[] = {191, 30, 65, 191, 209, 128, 216, 59, 48, 100, 211, 63};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {211, 231, 1, 62, 179, 103, 152, 189};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0048/steps/000000000000000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}