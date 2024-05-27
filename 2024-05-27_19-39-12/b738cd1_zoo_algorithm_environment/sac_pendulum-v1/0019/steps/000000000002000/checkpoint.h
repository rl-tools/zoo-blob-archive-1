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
                alignas(float) const unsigned char memory[] = {89, 73, 28, 62, 189, 35, 223, 190, 165, 145, 245, 190, 83, 41, 63, 190, 181, 65, 70, 63, 19, 142, 184, 61, 241, 2, 89, 62, 193, 173, 147, 62, 42, 49, 131, 190, 103, 153, 15, 62, 94, 80, 94, 191, 181, 144, 146, 62, 133, 28, 176, 190, 145, 108, 190, 62, 218, 202, 132, 190, 202, 36, 49, 62, 117, 2, 150, 62, 53, 1, 152, 62, 46, 230, 167, 186, 91, 6, 251, 62, 226, 182, 11, 191, 234, 69, 62, 191, 96, 130, 225, 190, 173, 196, 64, 190, 2, 161, 41, 63, 205, 25, 157, 62, 212, 124, 37, 62, 14, 202, 154, 190, 70, 51, 138, 62, 96, 137, 173, 190, 103, 210, 60, 62, 239, 194, 75, 190, 87, 69, 17, 191, 13, 232, 185, 189, 139, 89, 180, 61, 132, 219, 224, 62, 117, 1, 82, 61, 121, 109, 33, 191, 89, 154, 150, 62, 122, 151, 9, 190, 109, 250, 16, 191, 48, 149, 227, 189, 236, 237, 7, 63, 157, 151, 26, 191, 41, 126, 156, 190, 110, 97, 186, 190, 72, 80, 177, 190, 123, 179, 108, 190, 88, 176, 167, 62, 26, 209, 184, 190, 166, 169, 241, 62, 33, 38, 147, 188, 255, 239, 84, 191, 235, 48, 104, 62, 128, 110, 81, 190, 210, 52, 9, 62, 246, 170, 231, 190, 118, 208, 28, 191, 26, 224, 205, 190, 96, 200, 159, 189, 225, 47, 218, 188, 29, 132, 154, 190, 76, 165, 185, 62, 17, 83, 139, 189, 59, 131, 2, 63, 225, 98, 97, 189, 92, 2, 17, 63, 73, 34, 217, 61, 48, 247, 12, 191, 107, 21, 22, 190, 221, 91, 11, 63, 238, 161, 6, 63, 111, 89, 216, 62, 82, 202, 136, 190, 207, 154, 86, 190, 233, 40, 61, 190, 83, 163, 150, 62, 32, 49, 132, 60, 102, 31, 175, 190, 183, 65, 104, 191, 175, 105, 201, 62, 70, 156, 41, 63, 63, 219, 253, 190, 218, 56, 21, 63, 21, 199, 167, 62, 224, 32, 105, 190, 137, 199, 37, 63, 102, 249, 204, 190, 132, 219, 196, 190, 217, 134, 195, 62, 8, 93, 136, 62, 234, 203, 21, 191, 78, 175, 110, 190, 225, 127, 0, 191, 113, 34, 7, 63, 154, 93, 58, 62};
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
                alignas(float) const unsigned char memory[] = {81, 49, 12, 191, 218, 174, 153, 62, 246, 200, 243, 61, 26, 185, 134, 62, 180, 149, 212, 189, 80, 156, 24, 189, 180, 73, 22, 63, 248, 192, 144, 188, 213, 211, 83, 190, 191, 184, 6, 60, 18, 192, 17, 63, 177, 224, 209, 190, 83, 122, 20, 62, 192, 151, 218, 62, 238, 80, 143, 62, 43, 149, 13, 191, 148, 99, 234, 62, 61, 22, 2, 63, 244, 134, 218, 188, 230, 100, 250, 62, 90, 82, 160, 61, 86, 51, 121, 61, 56, 68, 175, 62, 12, 196, 10, 191, 54, 144, 176, 190, 34, 30, 197, 62, 48, 246, 79, 190, 35, 57, 242, 61, 82, 176, 165, 190, 203, 29, 151, 190, 98, 247, 147, 61, 26, 237, 138, 62};
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
                alignas(float) const unsigned char memory[] = {175, 241, 120, 190, 70, 220, 85, 62, 229, 52, 164, 190, 207, 225, 54, 191, 218, 102, 18, 62, 205, 128, 164, 61, 70, 139, 58, 62, 47, 191, 133, 62, 167, 105, 65, 62, 165, 101, 53, 62, 46, 245, 81, 62, 176, 7, 139, 61, 138, 125, 83, 191, 10, 173, 134, 189, 84, 4, 203, 60, 138, 218, 142, 189, 252, 200, 178, 190, 112, 57, 201, 61, 209, 22, 99, 188, 194, 248, 132, 189, 29, 223, 6, 190, 187, 10, 209, 61, 41, 101, 24, 190, 43, 135, 109, 188, 249, 43, 102, 62, 125, 66, 154, 61, 101, 127, 32, 191, 26, 51, 137, 189, 13, 104, 120, 190, 70, 69, 184, 190, 177, 23, 96, 190, 182, 182, 130, 62, 187, 169, 198, 61, 29, 202, 46, 190, 143, 155, 44, 60, 227, 230, 40, 190, 108, 195, 42, 188, 171, 125, 246, 61, 212, 128, 243, 61, 182, 152, 242, 189, 50, 61, 51, 61, 199, 207, 86, 61, 77, 24, 180, 61, 128, 98, 185, 189, 207, 5, 228, 188, 115, 122, 162, 189, 215, 94, 40, 190, 150, 44, 142, 61, 21, 36, 108, 61, 43, 151, 14, 190, 226, 46, 27, 62, 133, 86, 54, 190, 217, 129, 232, 189, 4, 35, 37, 61, 254, 182, 72, 190, 239, 55, 141, 189, 90, 2, 5, 61, 230, 177, 4, 190, 37, 28, 52, 190, 125, 197, 204, 189, 82, 130, 216, 188, 234, 228, 9, 190, 5, 83, 61, 190, 11, 54, 101, 189, 98, 182, 184, 189, 49, 30, 43, 190, 255, 34, 96, 61, 117, 134, 207, 61, 208, 59, 12, 187, 26, 119, 202, 61, 159, 10, 37, 190, 183, 226, 175, 61, 81, 13, 21, 190, 114, 211, 43, 190, 31, 82, 207, 61, 167, 241, 179, 61, 156, 0, 153, 189, 177, 39, 28, 190, 112, 226, 158, 189, 124, 224, 70, 60, 105, 100, 53, 60, 119, 200, 217, 61, 235, 129, 9, 61, 207, 35, 38, 189, 115, 131, 135, 189, 185, 205, 47, 190, 140, 178, 5, 190, 115, 18, 242, 61, 47, 26, 43, 189, 102, 191, 159, 61, 187, 195, 186, 184, 216, 26, 169, 189, 4, 2, 142, 189, 167, 169, 167, 189, 36, 235, 201, 61, 115, 9, 84, 189, 157, 203, 49, 62, 15, 53, 131, 189, 118, 8, 132, 189, 218, 74, 204, 61, 224, 39, 9, 62, 198, 144, 205, 61, 247, 122, 51, 190, 68, 60, 192, 61, 142, 28, 137, 189, 166, 148, 23, 62, 126, 68, 135, 189, 126, 255, 149, 189, 88, 224, 36, 61, 214, 162, 198, 61, 127, 77, 88, 189, 105, 222, 4, 190, 2, 96, 158, 189, 13, 10, 219, 189, 139, 159, 46, 62, 237, 33, 41, 190, 169, 140, 9, 61, 6, 128, 122, 189, 245, 181, 48, 190, 193, 187, 46, 190, 61, 236, 62, 188, 102, 118, 38, 60, 107, 202, 72, 189, 212, 175, 84, 189, 95, 14, 89, 61, 58, 163, 11, 61, 84, 235, 14, 190, 223, 41, 145, 61, 158, 49, 43, 61, 206, 224, 39, 62, 50, 242, 26, 62, 17, 0, 38, 62, 189, 112, 85, 188, 99, 252, 128, 60, 7, 115, 138, 189, 101, 82, 41, 61, 248, 72, 13, 62, 7, 228, 30, 190, 208, 217, 69, 62, 199, 250, 24, 189, 7, 11, 121, 62, 65, 189, 85, 62, 9, 225, 68, 62, 190, 62, 57, 61, 165, 161, 47, 62, 103, 195, 149, 61, 247, 43, 134, 61, 242, 60, 68, 62, 83, 47, 106, 188, 18, 227, 19, 62, 231, 129, 29, 62, 6, 179, 5, 62, 60, 99, 50, 190, 94, 22, 0, 62, 212, 113, 166, 62, 73, 21, 79, 190, 99, 91, 56, 190, 63, 227, 142, 61, 0, 163, 53, 60, 162, 47, 138, 61, 252, 27, 24, 61, 232, 180, 55, 190, 95, 7, 135, 189, 227, 15, 86, 61, 99, 111, 4, 62, 19, 38, 15, 62, 10, 176, 3, 62, 244, 71, 51, 190, 252, 178, 30, 189, 248, 161, 33, 61, 29, 126, 29, 190, 60, 27, 40, 62, 168, 158, 20, 60, 94, 114, 134, 189, 48, 227, 25, 62, 232, 78, 149, 189, 207, 233, 194, 189, 37, 80, 12, 188, 191, 150, 46, 190, 97, 64, 149, 61, 92, 76, 4, 61, 140, 76, 31, 190, 139, 223, 213, 61, 86, 200, 192, 189, 207, 49, 32, 61, 68, 164, 251, 189, 114, 87, 171, 189, 117, 230, 8, 190, 76, 177, 202, 61, 71, 58, 130, 189, 104, 47, 87, 61, 69, 141, 208, 60, 227, 162, 212, 61, 102, 249, 206, 187, 20, 86, 10, 62, 219, 176, 74, 188, 8, 234, 210, 59, 42, 149, 47, 62, 94, 17, 102, 62, 56, 199, 88, 60, 169, 183, 169, 61, 59, 196, 178, 61, 74, 130, 173, 61, 0, 180, 163, 189, 64, 29, 90, 189, 238, 251, 97, 187, 69, 33, 180, 61, 105, 18, 78, 189, 153, 253, 202, 59, 100, 251, 128, 189, 111, 247, 75, 62, 248, 151, 215, 189, 134, 228, 16, 61, 62, 187, 168, 60, 73, 71, 133, 188, 222, 2, 145, 189, 166, 246, 123, 190, 13, 130, 241, 189, 134, 101, 200, 189, 129, 131, 135, 61, 44, 184, 86, 190, 161, 49, 49, 190, 12, 112, 70, 62, 150, 52, 102, 61, 23, 139, 52, 61, 240, 186, 63, 61, 28, 154, 194, 61, 77, 157, 123, 61, 13, 184, 101, 62, 253, 176, 165, 189, 249, 128, 12, 60, 125, 43, 243, 189, 29, 248, 14, 62, 54, 145, 54, 62, 113, 225, 36, 62, 148, 123, 28, 190, 128, 77, 148, 189, 224, 157, 0, 190, 14, 68, 5, 190, 83, 255, 39, 190, 15, 97, 66, 190, 57, 66, 246, 189, 60, 106, 192, 61, 11, 217, 111, 190, 244, 84, 70, 61, 194, 227, 166, 62, 171, 80, 181, 61, 121, 153, 79, 190, 183, 22, 196, 189, 70, 105, 205, 189, 28, 26, 249, 61, 124, 47, 80, 188, 236, 29, 212, 189, 136, 146, 62, 190, 36, 224, 49, 57, 222, 187, 61, 62, 238, 232, 30, 190, 243, 226, 32, 62, 210, 239, 151, 190, 177, 212, 11, 191, 30, 228, 133, 62, 83, 11, 35, 62, 203, 2, 209, 61, 78, 20, 1, 62, 50, 94, 4, 61, 173, 26, 122, 188, 183, 2, 132, 188, 57, 125, 204, 61, 43, 160, 246, 190, 205, 128, 246, 188, 5, 145, 34, 189, 126, 155, 16, 62, 62, 178, 135, 190, 211, 132, 19, 190, 231, 71, 177, 189, 127, 96, 43, 61, 105, 69, 79, 190, 255, 80, 187, 61, 57, 165, 135, 190, 214, 154, 222, 60, 202, 104, 5, 190, 127, 175, 168, 61, 217, 27, 212, 190, 28, 51, 118, 190, 62, 152, 44, 189, 234, 70, 239, 190, 34, 180, 161, 61, 220, 92, 94, 62, 112, 118, 158, 61, 35, 118, 123, 61, 68, 110, 21, 62, 140, 205, 160, 60, 190, 138, 50, 61, 134, 216, 50, 61, 1, 201, 253, 189, 132, 21, 172, 61, 51, 225, 251, 61, 179, 4, 41, 190, 19, 46, 8, 190, 226, 75, 252, 60, 57, 188, 147, 60, 233, 45, 212, 61, 227, 227, 7, 60, 220, 36, 202, 61, 164, 242, 250, 60, 5, 41, 163, 61, 136, 83, 153, 61, 140, 106, 144, 188, 182, 128, 62, 188, 10, 65, 192, 61, 122, 120, 43, 190, 179, 122, 157, 189, 22, 208, 251, 189, 117, 35, 216, 59, 147, 75, 32, 190, 148, 217, 23, 190, 140, 224, 2, 190, 101, 187, 189, 61, 196, 60, 173, 187, 205, 127, 231, 189, 137, 225, 153, 187, 240, 231, 246, 189, 179, 234, 37, 62, 8, 66, 254, 61, 88, 152, 209, 189, 46, 13, 6, 62, 44, 176, 39, 190, 176, 109, 163, 189, 79, 134, 137, 189, 91, 58, 173, 189, 203, 143, 223, 189, 177, 157, 223, 189, 180, 60, 32, 62, 109, 222, 0, 190, 163, 161, 233, 59, 87, 97, 48, 62, 183, 43, 147, 60, 220, 249, 220, 60, 239, 199, 179, 61, 170, 223, 196, 188, 97, 185, 79, 61, 112, 23, 30, 188, 163, 152, 63, 188, 103, 127, 189, 186, 179, 10, 27, 61, 108, 30, 205, 61, 70, 132, 112, 189, 240, 84, 19, 61, 12, 155, 85, 190, 87, 70, 9, 190, 114, 43, 244, 188, 213, 85, 19, 62, 96, 216, 204, 189, 111, 0, 72, 62, 8, 159, 40, 189, 135, 219, 13, 62, 224, 76, 19, 189, 51, 187, 244, 61, 112, 149, 227, 189, 50, 249, 219, 190, 241, 116, 231, 61, 180, 28, 168, 189, 130, 211, 154, 189, 155, 162, 81, 61, 240, 99, 106, 189, 234, 59, 135, 190, 190, 218, 234, 61, 173, 254, 132, 190, 104, 214, 132, 62, 15, 123, 8, 190, 89, 99, 97, 189, 52, 159, 150, 61, 117, 228, 252, 61, 20, 236, 53, 62, 199, 59, 114, 189, 117, 183, 59, 60, 183, 44, 202, 61, 156, 246, 39, 61, 35, 254, 77, 62, 12, 20, 149, 189, 182, 72, 244, 61, 181, 130, 114, 189, 69, 121, 161, 189, 97, 205, 131, 188, 121, 190, 252, 61, 89, 200, 70, 189, 8, 7, 154, 61, 147, 242, 128, 62, 200, 189, 69, 190, 108, 213, 199, 190, 197, 243, 157, 190, 19, 64, 38, 62, 221, 207, 171, 61, 132, 177, 142, 190, 222, 219, 185, 190, 219, 233, 159, 190, 208, 217, 212, 61, 181, 66, 108, 62, 47, 212, 130, 61, 208, 67, 89, 61, 70, 232, 12, 190, 106, 189, 107, 62, 181, 236, 3, 191, 175, 29, 17, 62, 191, 214, 25, 61, 106, 111, 127, 190, 108, 121, 246, 189, 145, 171, 64, 190, 75, 149, 202, 189, 240, 138, 17, 62, 28, 149, 142, 62, 144, 6, 239, 189, 35, 132, 140, 190, 237, 25, 2, 189, 164, 255, 224, 60, 106, 66, 32, 62, 67, 196, 40, 190, 173, 159, 172, 61, 240, 47, 106, 61, 206, 246, 53, 189, 11, 197, 151, 188, 172, 2, 196, 61, 245, 9, 17, 190, 215, 123, 121, 189, 27, 103, 38, 190, 135, 73, 141, 60, 83, 251, 50, 189, 232, 252, 225, 189, 207, 125, 232, 61, 162, 167, 195, 189, 169, 45, 164, 189, 241, 136, 98, 61, 177, 205, 121, 187, 146, 145, 20, 190, 37, 218, 99, 61, 33, 255, 1, 62, 5, 171, 166, 61, 121, 82, 30, 190, 187, 155, 128, 189, 25, 15, 243, 189, 207, 29, 177, 58, 135, 8, 132, 61, 186, 52, 221, 189, 252, 216, 129, 60, 206, 246, 213, 61, 89, 236, 250, 61, 112, 182, 222, 188, 82, 11, 55, 190, 99, 105, 162, 61, 198, 241, 95, 62, 164, 138, 154, 190, 106, 223, 216, 190, 175, 89, 141, 61, 213, 143, 52, 62, 118, 101, 21, 61, 186, 161, 163, 189, 84, 125, 234, 61, 147, 160, 18, 62, 69, 235, 218, 61, 207, 42, 193, 189, 119, 58, 214, 190, 55, 218, 51, 188, 21, 199, 4, 190, 11, 164, 30, 189, 233, 111, 176, 189, 142, 195, 38, 190, 13, 205, 160, 61, 97, 0, 127, 62, 158, 103, 143, 190, 23, 147, 178, 62, 255, 60, 93, 190, 126, 25, 148, 61, 152, 67, 179, 61, 232, 194, 203, 189, 245, 223, 219, 190, 241, 252, 157, 61, 170, 177, 82, 189, 49, 110, 212, 190, 114, 211, 33, 189, 218, 99, 156, 62, 78, 155, 154, 60, 201, 72, 11, 61, 237, 223, 25, 189, 166, 65, 186, 62, 46, 98, 124, 189, 135, 250, 45, 60, 207, 211, 120, 61, 40, 8, 230, 61, 183, 251, 105, 188, 223, 32, 15, 190, 216, 112, 250, 61, 184, 116, 141, 190, 181, 127, 76, 61, 90, 225, 146, 61, 194, 67, 60, 61, 135, 185, 80, 62, 121, 234, 114, 62, 173, 124, 89, 62, 120, 38, 37, 189, 208, 179, 10, 62, 146, 101, 55, 62, 165, 241, 223, 189, 220, 22, 93, 62, 170, 132, 181, 189, 96, 43, 137, 190, 188, 43, 54, 62, 205, 24, 21, 62, 24, 99, 112, 190, 138, 248, 31, 190, 93, 64, 70, 62, 59, 228, 52, 61, 118, 227, 217, 61, 209, 126, 109, 60, 191, 160, 240, 189, 55, 80, 128, 188, 122, 96, 97, 62, 200, 142, 41, 189, 29, 107, 171, 60, 72, 208, 57, 62, 24, 136, 111, 60, 194, 75, 17, 61, 98, 18, 141, 188, 85, 85, 64, 62, 117, 233, 165, 190, 145, 87, 196, 62, 133, 255, 186, 61, 229, 79, 240, 61, 160, 165, 169, 61, 75, 67, 37, 62, 80, 247, 150, 61, 187, 198, 216, 60, 240, 213, 75, 62, 72, 254, 157, 188, 75, 205, 59, 190, 218, 25, 235, 61, 12, 204, 205, 60, 125, 55, 9, 190, 252, 8, 143, 61, 211, 6, 90, 62, 113, 5, 112, 190, 49, 189, 136, 190, 244, 39, 233, 59, 131, 162, 164, 188, 252, 70, 121, 189, 244, 210, 35, 62, 196, 79, 82, 190, 114, 45, 30, 188, 112, 134, 206, 60, 13, 25, 129, 189, 135, 39, 58, 61, 232, 197, 2, 62, 89, 42, 143, 189, 208, 109, 34, 62, 98, 160, 0, 62, 14, 51, 253, 189, 30, 190, 75, 189, 204, 86, 18, 62, 220, 17, 233, 188, 9, 135, 254, 61, 67, 110, 250, 61, 111, 210, 58, 190, 127, 62, 15, 190, 7, 4, 99, 60, 177, 60, 148, 60, 39, 80, 41, 190, 78, 250, 35, 190, 233, 1, 100, 189, 96, 173, 145, 61, 212, 58, 132, 62, 215, 107, 93, 190, 181, 253, 120, 61, 45, 227, 46, 190, 99, 132, 32, 62, 248, 35, 201, 189, 83, 197, 153, 61, 183, 128, 70, 189, 238, 44, 136, 61, 40, 24, 52, 190, 29, 83, 24, 62, 27, 180, 7, 190, 119, 41, 155, 61, 187, 134, 10, 61, 186, 64, 249, 189, 12, 179, 72, 61, 13, 206, 62, 60, 40, 208, 24, 190, 141, 104, 72, 60, 49, 159, 28, 190, 130, 2, 29, 61, 157, 31, 152, 61, 73, 65, 84, 61, 220, 228, 182, 189, 201, 95, 34, 62, 61, 45, 39, 61, 187, 253, 67, 189, 134, 143, 234, 60, 189, 110, 221, 188, 156, 198, 139, 60, 58, 36, 115, 60, 167, 73, 7, 62, 19, 62, 44, 62, 207, 44, 44, 190, 243, 12, 42, 190, 66, 31, 18, 190, 141, 94, 158, 61, 180, 155, 35, 59, 11, 125, 9, 190, 29, 145, 227, 60, 215, 49, 29, 190, 236, 84, 55, 188, 56, 94, 159, 189, 8, 57, 44, 190, 111, 176, 134, 61, 255, 247, 249, 189, 71, 145, 160, 189, 208, 217, 34, 62, 171, 139, 235, 61, 162, 37, 254, 61, 220, 167, 14, 62, 58, 172, 251, 189, 204, 163, 195, 61, 97, 195, 203, 60, 134, 146, 30, 190, 63, 92, 9, 189, 47, 245, 148, 61, 70, 1, 34, 190, 60, 232, 186, 189, 253, 12, 148, 188, 117, 120, 150, 189, 73, 225, 243, 61, 243, 15, 144, 189, 50, 115, 17, 190, 228, 135, 9, 190, 142, 208, 230, 189, 224, 50, 250, 189, 76, 153, 47, 62, 220, 205, 71, 189, 7, 111, 34, 61, 164, 188, 60, 61, 241, 108, 200, 187, 194, 9, 218, 188, 128, 251, 2, 190, 212, 209, 166, 186, 209, 147, 174, 61, 71, 232, 75, 62, 208, 139, 73, 190, 89, 47, 209, 189, 5, 135, 18, 62, 35, 158, 42, 190, 249, 253, 141, 61, 21, 3, 11, 62, 83, 130, 202, 190, 31, 83, 21, 62, 137, 153, 224, 61, 14, 165, 116, 62, 172, 52, 221, 61, 218, 217, 201, 61, 119, 99, 75, 62, 80, 147, 73, 189, 170, 211, 1, 62, 5, 181, 6, 62, 111, 226, 182, 189, 149, 179, 32, 62, 168, 50, 121, 61, 103, 49, 32, 189, 192, 89, 4, 62, 233, 32, 102, 62, 123, 228, 255, 188, 55, 152, 168, 190, 193, 235, 224, 61, 154, 95, 55, 62, 155, 211, 199, 189, 176, 112, 21, 190, 146, 55, 106, 62, 147, 136, 150, 189, 175, 151, 31, 190, 178, 214, 106, 62, 97, 189, 243, 61, 166, 253, 155, 60, 223, 66, 132, 190, 1, 226, 71, 62, 174, 234, 37, 61, 35, 160, 14, 62, 171, 151, 100, 62, 85, 176, 189, 189, 148, 152, 153, 189, 105, 69, 250, 189, 135, 78, 61, 189, 220, 248, 157, 61, 130, 27, 204, 59, 163, 114, 191, 61, 177, 245, 37, 189, 230, 123, 248, 61, 221, 224, 77, 62, 117, 1, 12, 189, 162, 237, 57, 62, 37, 159, 143, 61, 15, 45, 144, 61, 168, 69, 173, 189, 104, 165, 28, 62, 94, 115, 106, 188, 26, 239, 64, 190, 8, 173, 24, 190, 6, 63, 50, 62, 225, 101, 171, 189, 130, 241, 66, 62, 96, 230, 157, 189, 56, 41, 181, 190, 97, 45, 107, 62, 222, 95, 236, 61, 31, 209, 166, 61, 177, 111, 57, 190, 81, 17, 145, 62, 221, 8, 174, 189, 106, 152, 87, 61, 218, 19, 29, 62, 243, 124, 143, 190, 234, 255, 249, 60, 210, 91, 62, 190, 7, 168, 104, 59, 33, 15, 215, 61, 97, 132, 222, 188, 188, 244, 46, 62, 195, 152, 140, 61, 110, 240, 141, 189, 48, 2, 112, 62, 144, 4, 214, 59, 165, 14, 5, 62, 216, 223, 16, 61, 52, 46, 85, 61, 76, 179, 161, 190, 159, 81, 1, 62, 127, 114, 196, 62, 124, 236, 11, 190, 214, 212, 96, 61, 239, 221, 72, 62, 236, 9, 2, 62, 156, 137, 47, 189, 220, 139, 189, 61, 253, 214, 140, 188, 125, 36, 15, 190, 123, 187, 4, 61, 170, 167, 142, 61, 117, 205, 251, 61, 130, 19, 16, 62, 176, 34, 17, 62, 125, 202, 83, 188, 215, 251, 24, 190, 180, 137, 155, 61, 34, 179, 38, 61, 63, 182, 216, 61, 250, 93, 197, 61, 98, 87, 139, 61, 33, 3, 119, 189, 16, 208, 55, 190, 42, 143, 197, 189, 119, 118, 192, 61, 98, 187, 36, 190, 79, 95, 44, 190, 136, 187, 110, 189, 145, 110, 174, 188, 65, 224, 190, 189, 177, 35, 183, 61, 202, 140, 247, 189, 202, 80, 138, 61, 194, 175, 228, 60, 17, 223, 201, 188, 211, 117, 7, 61, 98, 220, 238, 190, 148, 60, 53, 62, 195, 164, 139, 190, 222, 73, 62, 191, 149, 83, 199, 61, 59, 75, 39, 188, 148, 166, 162, 62, 72, 158, 104, 189, 6, 241, 142, 62, 187, 136, 179, 61, 105, 229, 223, 61, 138, 132, 179, 189, 169, 175, 23, 191, 21, 162, 52, 62, 10, 138, 64, 190, 14, 159, 138, 190, 120, 253, 40, 190, 173, 220, 64, 190, 63, 149, 248, 61, 128, 120, 38, 188, 20, 197, 134, 190, 124, 97, 108, 62, 154, 51, 69, 60, 209, 42, 251, 61, 241, 62, 176, 61, 252, 103, 90, 62, 176, 214, 76, 191, 40, 36, 81, 61, 231, 9, 160, 61, 169, 162, 199, 190, 189, 67, 37, 190, 243, 123, 239, 61, 245, 231, 32, 190, 110, 175, 234, 189, 107, 63, 49, 62, 145, 202, 74, 62, 229, 97, 226, 61, 147, 86, 49, 60, 123, 165, 13, 61, 224, 165, 136, 190, 1, 80, 104, 61, 88, 76, 187, 60, 87, 76, 219, 60, 52, 219, 247, 189, 63, 183, 222, 61, 117, 207, 18, 190, 63, 64, 214, 60, 206, 165, 253, 61, 130, 66, 27, 61, 226, 230, 155, 189, 154, 112, 145, 60, 84, 157, 3, 190, 24, 17, 36, 62, 216, 22, 99, 62, 162, 206, 230, 61, 133, 40, 48, 189, 224, 122, 79, 57, 201, 10, 252, 61, 166, 199, 90, 62, 130, 125, 20, 62, 130, 200, 130, 189, 47, 212, 45, 189, 72, 180, 185, 188, 153, 143, 232, 61, 155, 165, 214, 61, 92, 25, 184, 190, 231, 4, 148, 189, 116, 147, 176, 188, 113, 139, 85, 61, 199, 172, 184, 189, 151, 224, 233, 60, 52, 197, 100, 61, 40, 170, 158, 61, 43, 204, 146, 189, 87, 129, 47, 61, 237, 166, 124, 190, 34, 201, 197, 61, 167, 119, 44, 62, 243, 134, 91, 62, 93, 192, 170, 61, 130, 50, 111, 61, 174, 152, 209, 61, 132, 52, 21, 62, 204, 47, 151, 189, 89, 30, 220, 187, 27, 210, 231, 190, 225, 0, 160, 188, 224, 41, 51, 60, 251, 9, 40, 189, 203, 147, 9, 61, 93, 109, 156, 189, 238, 23, 61, 190, 48, 65, 146, 190, 210, 33, 102, 190, 146, 35, 154, 61, 78, 45, 211, 189, 89, 9, 34, 61, 182, 94, 147, 189, 216, 71, 37, 190, 87, 56, 2, 190, 248, 26, 135, 189, 192, 230, 146, 189, 7, 192, 219, 188, 228, 171, 254, 189, 162, 124, 48, 62, 141, 84, 139, 187, 60, 174, 189, 61, 26, 192, 16, 61, 219, 134, 111, 62, 30, 87, 12, 62, 154, 224, 237, 61, 134, 97, 18, 62, 68, 227, 241, 61, 229, 186, 195, 61, 129, 38, 112, 61, 242, 60, 166, 189, 150, 239, 74, 62, 61, 61, 84, 188, 10, 17, 144, 61, 44, 204, 33, 190, 99, 205, 52, 62, 210, 22, 218, 189, 10, 116, 104, 62, 131, 160, 59, 62, 75, 230, 154, 189, 68, 80, 157, 61, 40, 176, 51, 188, 229, 110, 194, 189, 182, 213, 91, 189, 195, 70, 2, 190, 181, 124, 88, 61, 238, 43, 50, 190, 231, 109, 216, 189, 16, 31, 237, 61, 78, 87, 57, 188, 161, 33, 175, 61, 28, 49, 234, 60, 52, 247, 44, 187, 199, 152, 39, 190, 59, 99, 10, 190, 106, 99, 16, 190, 177, 125, 40, 60, 58, 60, 63, 189, 126, 227, 30, 190, 143, 139, 48, 189, 5, 203, 149, 60, 156, 138, 169, 61, 235, 217, 238, 61, 161, 148, 48, 61, 246, 87, 2, 62, 86, 59, 52, 188, 21, 137, 191, 60, 55, 21, 39, 62, 172, 53, 44, 190, 148, 146, 43, 62, 67, 140, 141, 188, 50, 190, 12, 190, 70, 244, 187, 61, 153, 54, 203, 189, 40, 236, 6, 61, 206, 208, 208, 57, 219, 240, 138, 189, 106, 139, 44, 190, 107, 167, 70, 190, 207, 143, 217, 61, 151, 98, 46, 189, 137, 100, 17, 189, 87, 252, 227, 188, 61, 132, 18, 190, 113, 239, 103, 61, 144, 147, 57, 60, 51, 170, 166, 61, 141, 193, 31, 189, 43, 96, 34, 62, 211, 142, 105, 61, 37, 251, 21, 62, 189, 58, 15, 62, 19, 122, 163, 59, 50, 164, 180, 189, 215, 83, 126, 189, 32, 208, 87, 61, 61, 66, 207, 189, 18, 140, 17, 62, 179, 82, 109, 190, 121, 84, 85, 61, 11, 174, 17, 190, 212, 3, 121, 189, 168, 66, 172, 189, 57, 78, 37, 190, 66, 220, 146, 61, 21, 5, 55, 61, 7, 208, 150, 187, 17, 99, 179, 190, 65, 129, 95, 62, 169, 254, 206, 188, 17, 147, 166, 190, 57, 140, 5, 62, 114, 248, 159, 61, 128, 174, 93, 62, 41, 59, 36, 190, 172, 48, 15, 62, 101, 17, 137, 61, 109, 134, 141, 61, 96, 57, 109, 62, 86, 139, 181, 190, 115, 60, 156, 190, 2, 205, 183, 189, 112, 88, 140, 190, 236, 86, 141, 61, 39, 191, 16, 62, 229, 210, 214, 61, 125, 124, 83, 62, 255, 94, 6, 190, 85, 130, 137, 62, 134, 131, 241, 189, 235, 185, 147, 62, 179, 73, 131, 188, 145, 199, 120, 61, 58, 0, 3, 190, 210, 198, 149, 61, 22, 177, 85, 62, 193, 234, 178, 187, 110, 29, 205, 189, 51, 189, 21, 62, 5, 174, 221, 61, 128, 165, 109, 188, 160, 106, 107, 62, 23, 109, 190, 62, 125, 49, 232, 189, 25, 232, 194, 190, 141, 116, 35, 61, 147, 143, 150, 61, 155, 250, 245, 189, 212, 222, 249, 61, 107, 195, 32, 62, 96, 160, 167, 190, 113, 186, 176, 62, 128, 122, 100, 62, 121, 132, 106, 187, 25, 2, 133, 62, 61, 90, 12, 62, 174, 93, 227, 61, 59, 99, 244, 58, 29, 135, 129, 62, 125, 87, 5, 189, 160, 42, 42, 189, 10, 166, 189, 189, 160, 8, 91, 190, 89, 221, 127, 190, 40, 68, 72, 189, 50, 8, 183, 61, 192, 147, 11, 190, 185, 158, 185, 190, 127, 99, 86, 62, 233, 142, 79, 61, 252, 252, 190, 186};
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
                alignas(float) const unsigned char memory[] = {146, 154, 30, 62, 87, 88, 62, 188, 40, 181, 10, 190, 114, 110, 24, 61, 73, 32, 205, 188, 143, 140, 22, 190, 138, 57, 143, 189, 224, 159, 133, 188, 173, 193, 56, 62, 123, 195, 50, 190, 61, 5, 74, 190, 28, 128, 93, 62, 134, 90, 97, 62, 98, 146, 44, 190, 168, 234, 200, 59, 166, 216, 36, 62, 125, 188, 82, 61, 153, 187, 177, 189, 137, 66, 206, 189, 39, 120, 46, 190, 128, 69, 83, 187, 56, 61, 134, 61, 170, 224, 22, 59, 190, 64, 52, 190, 66, 151, 177, 62, 252, 227, 5, 62, 201, 146, 183, 189, 85, 223, 76, 190, 179, 52, 1, 190, 165, 250, 196, 189, 225, 245, 122, 189, 183, 154, 4, 62};
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
                alignas(float) const unsigned char memory[] = {209, 164, 8, 191, 168, 145, 194, 188, 52, 244, 232, 189, 76, 227, 169, 189, 165, 12, 20, 62, 26, 127, 15, 62, 0, 144, 197, 61, 144, 119, 72, 62, 59, 151, 239, 190, 193, 118, 34, 190, 145, 93, 41, 188, 252, 190, 208, 189, 234, 195, 8, 63, 249, 126, 15, 62, 94, 152, 203, 190, 106, 107, 250, 61, 106, 26, 83, 62, 89, 139, 41, 190, 188, 122, 131, 60, 65, 26, 38, 62, 144, 199, 143, 62, 230, 159, 66, 190, 131, 244, 137, 190, 116, 52, 134, 61, 70, 65, 241, 190, 231, 36, 230, 188, 26, 153, 95, 62, 37, 238, 19, 190, 125, 253, 118, 187, 155, 160, 89, 61, 159, 36, 108, 190, 115, 238, 150, 62, 119, 33, 132, 61, 196, 201, 212, 61, 98, 129, 142, 188, 251, 53, 159, 60, 143, 178, 90, 190, 53, 39, 28, 62, 194, 242, 29, 190, 216, 45, 3, 62, 57, 194, 2, 190, 165, 141, 166, 189, 114, 199, 96, 188, 123, 82, 167, 190, 236, 65, 238, 61, 146, 153, 226, 189, 50, 190, 149, 189, 4, 243, 146, 189, 116, 30, 62, 190, 245, 155, 55, 62, 100, 151, 223, 189, 116, 68, 41, 60, 126, 235, 127, 60, 63, 14, 47, 190, 20, 14, 157, 61, 199, 181, 181, 189, 63, 222, 164, 189, 176, 200, 9, 190, 16, 29, 192, 61, 62, 62, 12, 62, 7, 103, 156, 61, 192, 142, 245, 61, 219, 244, 228, 61, 227, 81, 199, 58};
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
                alignas(float) const unsigned char memory[] = {84, 195, 172, 189, 153, 222, 199, 60};
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
    alignas(float) const unsigned char memory[] = {20, 67, 243, 190, 114, 182, 140, 191, 58, 123, 37, 63};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {202, 142, 28, 64, 144, 220, 7, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0019/steps/000000000002000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}