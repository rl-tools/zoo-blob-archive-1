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
                alignas(float) const unsigned char memory[] = {117, 234, 186, 190, 117, 160, 177, 62, 81, 4, 220, 190, 223, 30, 11, 63, 96, 36, 181, 189, 0, 179, 230, 190, 231, 139, 207, 189, 193, 76, 101, 189, 164, 159, 78, 62, 201, 76, 95, 190, 109, 67, 178, 188, 211, 7, 158, 62, 114, 164, 254, 190, 142, 250, 104, 189, 45, 56, 240, 61, 51, 159, 188, 190, 128, 140, 107, 190, 149, 17, 21, 190, 196, 72, 143, 62, 159, 186, 193, 62, 75, 198, 227, 62, 13, 208, 95, 190, 37, 145, 181, 190, 170, 180, 212, 62, 137, 52, 172, 189, 155, 125, 19, 62, 97, 60, 6, 63, 53, 233, 181, 62, 31, 234, 247, 62, 102, 157, 122, 190, 126, 193, 202, 62, 58, 55, 149, 59, 88, 168, 165, 62, 209, 75, 54, 62, 15, 104, 90, 62, 39, 173, 8, 63, 85, 220, 252, 62, 109, 145, 235, 62, 235, 248, 108, 190, 231, 105, 244, 188, 235, 159, 157, 190, 234, 54, 217, 186, 7, 244, 248, 190, 214, 124, 187, 190, 46, 53, 85, 61, 132, 134, 64, 61, 224, 95, 45, 62, 80, 131, 219, 62, 101, 50, 128, 189, 148, 152, 247, 189, 119, 44, 187, 62, 61, 156, 65, 62, 136, 202, 240, 59, 210, 13, 74, 189, 69, 246, 162, 190, 30, 72, 158, 62, 197, 45, 189, 190, 94, 232, 104, 189, 67, 17, 209, 62, 166, 78, 255, 62, 38, 194, 219, 190, 107, 44, 211, 190, 71, 171, 179, 190, 197, 38, 68, 62, 42, 2, 21, 62, 95, 199, 7, 61, 141, 245, 18, 63, 40, 56, 237, 190, 1, 225, 151, 62, 73, 65, 13, 62, 223, 206, 84, 190, 79, 153, 6, 62, 141, 10, 174, 61, 147, 17, 180, 189, 132, 8, 141, 62, 11, 181, 170, 190, 245, 204, 200, 61, 225, 47, 248, 61, 3, 241, 209, 190, 188, 143, 164, 190, 54, 117, 111, 190, 173, 100, 129, 188, 49, 86, 232, 61, 148, 183, 138, 62, 53, 226, 14, 191, 169, 50, 18, 62, 175, 76, 185, 61, 6, 54, 245, 62, 250, 226, 159, 189, 38, 211, 192, 190, 201, 197, 7, 189, 74, 210, 11, 191, 81, 44, 135, 62, 62, 252, 3, 190, 134, 88, 139, 189, 32, 124, 201, 190};
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
                alignas(float) const unsigned char memory[] = {229, 199, 19, 191, 145, 89, 174, 62, 250, 102, 228, 190, 121, 152, 201, 188, 47, 224, 7, 191, 60, 41, 152, 62, 52, 146, 8, 62, 67, 64, 144, 62, 2, 21, 35, 190, 211, 22, 101, 62, 174, 142, 163, 190, 162, 0, 215, 62, 144, 184, 87, 189, 41, 218, 212, 190, 110, 122, 15, 190, 102, 185, 211, 190, 34, 135, 224, 62, 86, 80, 13, 61, 41, 1, 237, 187, 248, 120, 19, 189, 224, 204, 106, 189, 125, 197, 185, 62, 1, 92, 18, 63, 53, 133, 201, 190, 48, 205, 118, 62, 63, 125, 198, 62, 105, 198, 9, 190, 131, 77, 183, 62, 109, 55, 17, 63, 105, 214, 146, 189, 36, 139, 188, 62, 46, 153, 152, 190};
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
                alignas(float) const unsigned char memory[] = {195, 142, 1, 62, 145, 213, 46, 62, 228, 107, 5, 62, 50, 219, 84, 189, 50, 48, 5, 190, 173, 68, 32, 188, 249, 163, 114, 187, 254, 3, 88, 186, 101, 96, 121, 189, 154, 232, 155, 189, 27, 143, 31, 61, 238, 221, 136, 189, 47, 231, 14, 61, 82, 24, 51, 190, 138, 80, 113, 189, 57, 62, 253, 61, 161, 137, 129, 61, 111, 235, 161, 189, 129, 147, 22, 190, 134, 41, 167, 189, 195, 177, 21, 189, 240, 102, 234, 189, 219, 3, 89, 61, 225, 103, 4, 190, 20, 164, 215, 61, 64, 33, 7, 62, 50, 169, 108, 61, 138, 47, 2, 190, 117, 204, 2, 62, 55, 38, 9, 61, 138, 50, 197, 189, 125, 21, 195, 189, 220, 94, 177, 58, 151, 103, 238, 61, 81, 32, 177, 189, 213, 92, 11, 190, 84, 21, 245, 61, 172, 155, 160, 189, 147, 155, 30, 60, 90, 157, 139, 61, 66, 51, 231, 189, 233, 117, 42, 62, 253, 160, 238, 61, 77, 240, 104, 188, 57, 31, 74, 61, 160, 119, 153, 189, 110, 24, 161, 189, 58, 166, 205, 189, 35, 129, 35, 190, 218, 159, 17, 190, 152, 67, 0, 190, 51, 108, 27, 190, 30, 239, 158, 189, 222, 111, 38, 189, 180, 19, 4, 62, 208, 75, 30, 62, 37, 231, 10, 190, 94, 125, 231, 189, 109, 51, 180, 189, 194, 97, 179, 61, 80, 70, 187, 189, 33, 64, 155, 60, 8, 175, 11, 189, 138, 143, 77, 189, 186, 9, 246, 189, 229, 117, 180, 60, 193, 240, 140, 61, 17, 91, 36, 62, 132, 28, 225, 188, 158, 159, 216, 189, 119, 111, 130, 189, 136, 34, 11, 62, 236, 242, 1, 61, 115, 197, 105, 61, 132, 98, 22, 61, 103, 228, 243, 61, 248, 33, 60, 61, 32, 1, 28, 62, 189, 211, 163, 61, 104, 35, 224, 189, 189, 221, 12, 62, 236, 169, 38, 62, 27, 42, 196, 60, 195, 37, 234, 61, 61, 132, 171, 188, 111, 135, 212, 189, 151, 115, 76, 189, 149, 17, 126, 61, 137, 158, 237, 189, 45, 181, 43, 62, 216, 213, 162, 61, 188, 3, 239, 189, 106, 61, 251, 60, 150, 98, 229, 188, 175, 27, 16, 189, 120, 184, 49, 190, 86, 82, 214, 61, 159, 59, 181, 189, 55, 29, 212, 61, 141, 86, 49, 190, 233, 50, 15, 62, 70, 6, 179, 189, 11, 201, 33, 190, 208, 91, 18, 62, 96, 56, 31, 62, 221, 223, 47, 190, 189, 86, 247, 61, 253, 15, 63, 61, 10, 245, 28, 62, 194, 164, 37, 62, 228, 149, 211, 189, 65, 227, 173, 189, 135, 165, 154, 189, 245, 36, 18, 62, 30, 36, 50, 62, 157, 62, 42, 189, 212, 140, 124, 61, 14, 146, 136, 60, 154, 20, 51, 190, 190, 39, 50, 190, 65, 153, 38, 62, 253, 69, 133, 60, 30, 229, 6, 62, 101, 232, 187, 61, 151, 114, 1, 190, 90, 190, 7, 190, 102, 131, 251, 61, 167, 233, 32, 60, 55, 35, 113, 188, 109, 27, 254, 61, 217, 158, 170, 61, 113, 36, 8, 62, 25, 155, 112, 61, 48, 191, 25, 62, 117, 192, 24, 62, 190, 53, 166, 61, 101, 12, 91, 185, 114, 28, 201, 60, 123, 165, 33, 60, 0, 44, 73, 59, 246, 53, 223, 188, 13, 217, 195, 189, 70, 27, 163, 60, 64, 12, 50, 62, 52, 47, 33, 190, 130, 197, 218, 61, 16, 63, 100, 60, 60, 233, 177, 61, 170, 37, 16, 190, 16, 241, 163, 61, 156, 202, 252, 61, 25, 196, 219, 189, 55, 89, 49, 189, 114, 225, 196, 189, 45, 62, 241, 60, 125, 166, 3, 189, 129, 30, 5, 61, 203, 198, 129, 188, 96, 235, 232, 188, 193, 182, 13, 62, 255, 242, 15, 190, 142, 38, 22, 62, 181, 219, 43, 62, 211, 213, 153, 61, 171, 213, 170, 189, 135, 78, 251, 189, 199, 76, 169, 189, 92, 46, 200, 61, 88, 184, 43, 190, 222, 113, 145, 61, 89, 147, 56, 59, 10, 15, 40, 189, 48, 109, 37, 190, 180, 151, 5, 62, 246, 228, 145, 189, 88, 104, 32, 190, 45, 120, 3, 62, 203, 60, 170, 61, 116, 169, 47, 62, 42, 174, 150, 189, 55, 18, 41, 62, 51, 171, 122, 189, 252, 238, 153, 189, 18, 201, 129, 188, 68, 67, 63, 189, 214, 63, 175, 61, 74, 198, 130, 189, 17, 217, 48, 190, 144, 160, 90, 61, 98, 33, 249, 61, 117, 50, 204, 189, 86, 10, 186, 61, 241, 212, 149, 189, 194, 176, 107, 61, 122, 183, 8, 62, 157, 201, 118, 189, 181, 60, 115, 189, 159, 62, 87, 60, 22, 33, 45, 190, 182, 19, 157, 189, 137, 143, 92, 187, 39, 254, 157, 59, 152, 250, 147, 61, 128, 140, 121, 189, 131, 117, 155, 189, 68, 88, 36, 190, 12, 214, 21, 190, 99, 163, 53, 61, 86, 119, 166, 60, 125, 165, 151, 187, 184, 157, 128, 58, 207, 15, 0, 190, 102, 51, 95, 188, 116, 168, 14, 62, 83, 235, 0, 190, 45, 118, 95, 61, 180, 182, 35, 62, 86, 180, 40, 61, 61, 159, 142, 188, 84, 10, 9, 62, 232, 22, 84, 189, 106, 214, 41, 190, 171, 219, 18, 190, 0, 232, 7, 62, 176, 119, 85, 188, 32, 78, 4, 190, 215, 3, 58, 188, 48, 172, 207, 61, 63, 84, 22, 62, 161, 82, 173, 189, 192, 130, 17, 189, 69, 26, 167, 61, 245, 78, 202, 189, 173, 179, 10, 61, 237, 194, 183, 189, 60, 45, 16, 190, 219, 142, 83, 189, 60, 32, 218, 189, 191, 65, 154, 188, 173, 12, 71, 189, 177, 160, 59, 189, 174, 149, 27, 62, 199, 246, 186, 189, 217, 41, 192, 61, 87, 110, 25, 62, 31, 249, 172, 189, 172, 203, 180, 59, 17, 49, 206, 61, 139, 61, 107, 60, 152, 40, 39, 190, 182, 163, 96, 188, 98, 193, 158, 61, 63, 238, 58, 188, 31, 15, 6, 190, 145, 7, 36, 190, 219, 96, 159, 61, 28, 91, 32, 190, 128, 139, 171, 189, 36, 214, 112, 61, 176, 51, 19, 61, 250, 112, 15, 62, 0, 178, 47, 59, 136, 45, 32, 62, 219, 160, 34, 188, 131, 71, 77, 61, 98, 54, 28, 62, 102, 41, 40, 189, 161, 241, 251, 61, 54, 234, 2, 60, 215, 203, 98, 189, 237, 75, 93, 189, 12, 99, 235, 189, 85, 21, 211, 61, 214, 143, 22, 190, 55, 48, 29, 62, 35, 151, 136, 61, 56, 214, 46, 62, 210, 2, 48, 62, 252, 219, 102, 186, 219, 136, 68, 61, 108, 163, 166, 188, 139, 186, 160, 59, 166, 209, 122, 61, 150, 27, 129, 188, 124, 164, 144, 189, 218, 148, 11, 190, 69, 66, 130, 61, 7, 91, 46, 190, 61, 211, 212, 60, 49, 121, 145, 58, 198, 62, 173, 189, 28, 60, 217, 189, 204, 199, 5, 190, 145, 252, 45, 62, 187, 41, 200, 59, 145, 71, 10, 62, 178, 33, 10, 62, 112, 158, 47, 190, 144, 247, 148, 61, 233, 188, 170, 189, 104, 199, 19, 189, 152, 223, 6, 189, 106, 174, 227, 189, 43, 34, 90, 61, 41, 192, 11, 190, 235, 86, 236, 61, 219, 31, 130, 189, 78, 227, 15, 190, 207, 103, 188, 61, 243, 209, 140, 61, 78, 213, 244, 189, 215, 38, 29, 60, 236, 114, 54, 188, 157, 185, 4, 190, 70, 62, 44, 62, 74, 211, 249, 60, 145, 76, 208, 189, 186, 150, 120, 60, 189, 63, 194, 61, 156, 141, 116, 189, 75, 255, 230, 61, 122, 49, 132, 189, 146, 156, 23, 190, 158, 76, 216, 189, 130, 53, 250, 61, 170, 85, 178, 189, 173, 226, 28, 190, 73, 133, 56, 189, 172, 58, 49, 62, 158, 58, 35, 190, 216, 196, 11, 62, 194, 169, 44, 190, 116, 15, 25, 62, 236, 53, 33, 190, 114, 158, 242, 60, 116, 42, 25, 189, 18, 44, 12, 62, 161, 161, 175, 61, 216, 212, 226, 189, 107, 250, 48, 189, 170, 202, 21, 60, 84, 52, 12, 190, 14, 88, 188, 61, 28, 234, 168, 189, 18, 153, 161, 61, 44, 6, 150, 188, 234, 215, 25, 62, 184, 186, 7, 189, 233, 1, 180, 189, 109, 125, 190, 189, 56, 202, 24, 62, 123, 11, 21, 185, 188, 244, 35, 190, 162, 37, 4, 190, 119, 35, 225, 61, 123, 21, 122, 189, 48, 208, 25, 190, 21, 54, 51, 62, 53, 15, 30, 190, 180, 65, 7, 62, 121, 89, 143, 60, 41, 21, 99, 189, 187, 157, 44, 190, 0, 166, 15, 190, 192, 134, 8, 62, 83, 34, 26, 187, 47, 153, 142, 61, 57, 24, 180, 188, 153, 94, 206, 188, 229, 202, 37, 62, 170, 241, 7, 190, 158, 176, 117, 60, 166, 46, 78, 189, 6, 123, 1, 61, 255, 59, 198, 189, 133, 25, 245, 189, 251, 239, 100, 189, 28, 56, 146, 186, 69, 49, 50, 188, 239, 14, 194, 187, 125, 219, 43, 62, 223, 233, 121, 61, 232, 2, 34, 62, 26, 121, 255, 60, 59, 84, 213, 61, 65, 56, 210, 189, 39, 21, 39, 62, 231, 45, 48, 190, 15, 48, 137, 61, 231, 7, 252, 61, 45, 176, 117, 60, 93, 88, 85, 189, 64, 5, 118, 188, 36, 252, 132, 61, 133, 182, 148, 189, 8, 161, 64, 61, 254, 131, 11, 190, 190, 162, 171, 61, 94, 156, 171, 188, 251, 200, 102, 61, 160, 181, 33, 62, 108, 220, 214, 60, 152, 118, 132, 189, 63, 24, 228, 61, 230, 31, 33, 62, 163, 37, 226, 188, 157, 192, 223, 189, 118, 57, 251, 61, 38, 193, 234, 61, 166, 48, 42, 60, 65, 45, 146, 189, 30, 235, 14, 58, 115, 227, 239, 188, 37, 151, 143, 188, 135, 174, 174, 189, 80, 184, 0, 62, 203, 222, 38, 61, 219, 80, 243, 189, 219, 103, 179, 61, 125, 7, 213, 61, 211, 253, 179, 189, 213, 64, 28, 61, 181, 1, 33, 62, 222, 0, 34, 62, 123, 17, 204, 189, 237, 207, 178, 61, 123, 0, 46, 190, 108, 132, 197, 61, 35, 191, 221, 189, 46, 232, 10, 189, 225, 246, 55, 189, 64, 40, 158, 188, 133, 217, 165, 61, 94, 27, 3, 190, 195, 85, 18, 190, 66, 130, 247, 189, 111, 168, 225, 188, 180, 127, 42, 190, 140, 243, 23, 189, 42, 147, 46, 62, 10, 146, 236, 61, 52, 93, 131, 61, 76, 10, 120, 61, 168, 159, 212, 189, 10, 59, 244, 189, 50, 215, 166, 59, 74, 1, 106, 60, 72, 50, 133, 188, 245, 226, 6, 190, 161, 118, 63, 61, 79, 194, 251, 60, 252, 106, 195, 188, 114, 154, 81, 59, 207, 12, 92, 60, 157, 80, 40, 62, 221, 163, 203, 189, 120, 149, 134, 61, 78, 34, 5, 189, 127, 58, 56, 189, 29, 4, 46, 189, 9, 29, 18, 62, 221, 251, 160, 60, 29, 150, 123, 61, 91, 87, 71, 189, 87, 117, 47, 62, 88, 245, 246, 61, 67, 230, 217, 61, 69, 212, 146, 189, 42, 107, 77, 189, 112, 244, 139, 188, 76, 134, 80, 189, 104, 209, 10, 189, 122, 37, 9, 189, 99, 108, 221, 61, 29, 46, 19, 190, 103, 209, 25, 62, 224, 196, 198, 189, 73, 132, 181, 61, 47, 181, 213, 61, 151, 198, 52, 190, 201, 233, 154, 61, 184, 219, 155, 189, 173, 179, 201, 61, 36, 115, 126, 189, 61, 25, 8, 189, 54, 201, 40, 62, 205, 231, 20, 190, 43, 11, 238, 61, 35, 248, 7, 62, 61, 125, 63, 61, 12, 184, 11, 62, 33, 102, 146, 61, 118, 35, 96, 61, 26, 191, 222, 61, 101, 113, 220, 61, 158, 51, 110, 189, 216, 49, 45, 62, 83, 39, 185, 61, 28, 12, 208, 189, 5, 78, 35, 189, 143, 242, 204, 189, 220, 164, 105, 189, 151, 85, 7, 62, 142, 158, 249, 189, 63, 54, 194, 188, 246, 10, 40, 59, 94, 101, 28, 189, 120, 169, 18, 189, 219, 187, 60, 189, 252, 133, 19, 190, 85, 118, 49, 62, 52, 137, 5, 62, 39, 8, 216, 189, 12, 180, 33, 190, 209, 107, 153, 61, 180, 94, 92, 61, 63, 106, 27, 190, 81, 226, 66, 61, 90, 217, 154, 189, 1, 118, 213, 189, 218, 251, 164, 61, 219, 237, 38, 190, 52, 42, 12, 190, 237, 232, 11, 61, 6, 38, 169, 189, 193, 3, 152, 189, 7, 45, 51, 62, 182, 183, 228, 188, 225, 137, 163, 189, 21, 190, 6, 59, 20, 100, 190, 189, 68, 164, 202, 189, 247, 186, 2, 62, 209, 68, 222, 188, 67, 220, 141, 61, 52, 209, 138, 189, 229, 222, 118, 189, 252, 50, 64, 189, 84, 104, 7, 62, 202, 155, 155, 60, 140, 153, 216, 187, 97, 70, 164, 189, 97, 241, 246, 188, 186, 79, 168, 59, 0, 95, 239, 188, 107, 199, 136, 188, 31, 100, 206, 61, 118, 126, 239, 189, 202, 253, 107, 188, 89, 205, 204, 61, 36, 54, 154, 189, 202, 197, 51, 190, 37, 115, 8, 62, 191, 204, 30, 62, 86, 192, 155, 186, 152, 201, 48, 190, 39, 34, 126, 188, 49, 204, 0, 190, 44, 210, 144, 189, 19, 209, 42, 62, 236, 92, 73, 189, 5, 46, 237, 59, 184, 74, 238, 60, 24, 190, 155, 189, 146, 88, 77, 188, 234, 199, 143, 61, 226, 170, 11, 62, 7, 145, 133, 189, 223, 172, 212, 189, 75, 54, 40, 62, 58, 83, 154, 188, 216, 224, 40, 62, 43, 184, 53, 189, 97, 88, 233, 181, 97, 161, 239, 188, 195, 74, 34, 62, 250, 150, 45, 189, 112, 66, 254, 61, 173, 100, 164, 189, 207, 14, 115, 61, 60, 101, 43, 189, 189, 191, 131, 189, 97, 110, 25, 189, 185, 220, 222, 61, 46, 208, 107, 187, 188, 68, 145, 188, 54, 133, 242, 59, 40, 183, 117, 189, 247, 176, 198, 61, 68, 93, 161, 188, 156, 18, 10, 190, 116, 88, 160, 61, 112, 181, 49, 189, 244, 254, 35, 190, 6, 167, 157, 189, 84, 183, 4, 190, 24, 111, 30, 189, 101, 164, 178, 61, 53, 204, 26, 190, 35, 197, 149, 189, 55, 96, 18, 190, 120, 192, 171, 189, 255, 165, 3, 62, 18, 84, 37, 190, 17, 202, 221, 188, 169, 209, 252, 187, 138, 188, 165, 61, 127, 250, 111, 59, 48, 198, 177, 60, 230, 113, 14, 190, 231, 197, 179, 61, 210, 181, 128, 189, 221, 26, 27, 62, 253, 7, 42, 62, 122, 54, 15, 62, 169, 96, 16, 62, 10, 169, 42, 62, 158, 98, 16, 190, 2, 94, 123, 61, 27, 175, 230, 61, 61, 39, 36, 190, 16, 161, 44, 62, 166, 238, 40, 57, 160, 42, 247, 189, 214, 197, 63, 189, 192, 101, 233, 61, 90, 15, 42, 190, 29, 223, 194, 61, 56, 209, 203, 61, 130, 175, 212, 188, 251, 17, 140, 189, 245, 53, 185, 189, 9, 170, 104, 188, 88, 187, 184, 188, 75, 252, 225, 59, 235, 250, 98, 189, 147, 223, 207, 189, 43, 217, 215, 188, 151, 32, 36, 62, 187, 173, 229, 61, 138, 238, 2, 62, 75, 21, 199, 61, 197, 33, 111, 60, 6, 141, 118, 189, 58, 115, 24, 190, 154, 155, 162, 189, 211, 216, 12, 190, 248, 211, 27, 62, 28, 74, 87, 60, 206, 254, 251, 189, 202, 99, 157, 189, 134, 237, 195, 189, 33, 196, 144, 61, 225, 88, 184, 61, 71, 189, 241, 186, 8, 166, 235, 61, 55, 6, 158, 189, 194, 14, 108, 58, 98, 180, 139, 189, 4, 73, 167, 61, 159, 103, 110, 188, 96, 253, 202, 61, 61, 163, 203, 189, 166, 114, 175, 61, 110, 156, 26, 62, 169, 137, 37, 190, 80, 29, 149, 61, 66, 57, 136, 61, 114, 47, 44, 188, 63, 83, 21, 62, 79, 167, 97, 61, 11, 209, 29, 189, 228, 77, 192, 189, 182, 129, 223, 61, 189, 243, 146, 188, 80, 221, 181, 61, 175, 45, 5, 62, 5, 222, 26, 190, 63, 7, 30, 190, 112, 51, 132, 189, 26, 42, 18, 62, 115, 151, 25, 62, 209, 3, 157, 61, 62, 36, 28, 190, 148, 226, 18, 62, 42, 85, 48, 189, 121, 162, 46, 190, 44, 163, 20, 189, 153, 107, 163, 188, 59, 196, 225, 189, 93, 99, 18, 190, 219, 149, 138, 61, 147, 66, 152, 189, 79, 181, 145, 189, 87, 179, 49, 189, 254, 139, 1, 190, 114, 163, 216, 59, 121, 220, 204, 61, 148, 28, 102, 61, 35, 171, 5, 190, 68, 255, 232, 189, 125, 158, 172, 189, 132, 166, 168, 61, 38, 131, 254, 189, 18, 5, 106, 61, 136, 201, 142, 187, 18, 49, 82, 189, 240, 133, 32, 190, 196, 234, 142, 186, 34, 152, 113, 61, 57, 51, 23, 189, 221, 155, 145, 61, 76, 103, 133, 189, 136, 117, 49, 62, 71, 101, 161, 61, 183, 172, 182, 61, 54, 101, 123, 61, 208, 69, 0, 190, 3, 238, 115, 61, 239, 185, 234, 57, 243, 181, 204, 61, 251, 82, 242, 189, 240, 40, 193, 61, 199, 42, 34, 190, 37, 230, 230, 189, 75, 105, 39, 62, 22, 195, 165, 189, 85, 84, 15, 62, 72, 206, 134, 189, 131, 79, 171, 188, 42, 22, 15, 189, 132, 60, 4, 62, 247, 6, 105, 189, 114, 132, 41, 190, 109, 8, 38, 62, 117, 106, 157, 189, 253, 208, 79, 61, 228, 240, 51, 189, 190, 44, 2, 190, 97, 205, 62, 189, 167, 182, 21, 190, 212, 198, 131, 189, 241, 30, 182, 61, 94, 150, 230, 61, 163, 45, 220, 61, 105, 131, 223, 189, 42, 53, 22, 189, 181, 110, 203, 189, 198, 17, 255, 58, 252, 216, 49, 190, 154, 152, 186, 189, 4, 221, 141, 189, 130, 45, 51, 61, 190, 102, 52, 190, 206, 14, 137, 61, 134, 154, 240, 61, 143, 200, 146, 189, 25, 255, 230, 188, 160, 207, 34, 190, 38, 228, 153, 189, 248, 190, 180, 188, 16, 118, 87, 61, 131, 199, 16, 190, 240, 212, 49, 189, 237, 83, 44, 61, 82, 76, 131, 58, 242, 191, 9, 190, 81, 50, 153, 61, 128, 179, 8, 190, 235, 87, 29, 189, 236, 173, 12, 189, 201, 45, 219, 61, 129, 194, 50, 62, 216, 114, 15, 190, 112, 149, 250, 189, 236, 142, 35, 190, 147, 194, 13, 61, 23, 207, 173, 61, 14, 145, 11, 62, 59, 41, 62, 61, 153, 228, 31, 188, 121, 14, 227, 60, 62, 128, 21, 190, 217, 9, 228, 189, 44, 103, 74, 189, 90, 177, 143, 188, 100, 113, 110, 61, 83, 47, 233, 61, 130, 100, 18, 190, 131, 169, 188, 187, 25, 96, 219, 61, 243, 2, 162, 60, 165, 246, 70, 61, 25, 93, 61, 61, 111, 98, 204, 189, 217, 176, 6, 189, 0, 92, 141, 189, 158, 88, 129, 189, 49, 188, 240, 189, 126, 232, 89, 61, 15, 59, 92, 61, 197, 66, 132, 188, 144, 178, 51, 190, 225, 229, 69, 189, 90, 3, 170, 61, 149, 246, 200, 61, 79, 71, 232, 189, 147, 188, 31, 62, 186, 151, 48, 62, 15, 126, 20, 57, 249, 93, 194, 189, 224, 182, 26, 62, 15, 243, 244, 61, 204, 196, 238, 189, 222, 178, 149, 189, 9, 140, 182, 61, 71, 179, 151, 61, 46, 91, 150, 61, 236, 70, 84, 59, 216, 26, 253, 187, 28, 150, 134, 189, 108, 108, 67, 60, 123, 156, 141, 59, 65, 238, 30, 62, 201, 108, 214, 60, 239, 251, 207, 61, 127, 63, 0, 190, 14, 71, 227, 61, 112, 207, 44, 62, 72, 191, 20, 62, 96, 167, 233, 61, 217, 66, 46, 62, 116, 132, 103, 187, 131, 132, 190, 60, 112, 14, 33, 190, 28, 185, 176, 61, 236, 152, 30, 60, 113, 201, 107, 61, 27, 179, 51, 62, 67, 158, 170, 61, 7, 81, 234, 61, 76, 114, 70, 189, 71, 177, 61, 189, 58, 185, 40, 62, 170, 37, 225, 189, 18, 53, 29, 188, 31, 134, 59, 189, 137, 101, 4, 190, 172, 189, 200, 189, 107, 248, 45, 62, 237, 80, 192, 61, 226, 87, 65, 188, 128, 222, 10, 60, 194, 239, 226, 188, 91, 29, 30, 61, 166, 85, 139, 60, 168, 201, 36, 190, 137, 3, 11, 60, 213, 79, 247, 61, 188, 204, 50, 190, 25, 95, 38, 190, 101, 227, 52, 190, 61, 101, 22, 190, 151, 239, 101, 61, 97, 150, 239, 189, 188, 191, 151, 189, 32, 90, 244, 189, 129, 187, 141, 61, 55, 70, 107, 189, 1, 241, 35, 62, 130, 1, 226, 189, 5, 156, 101, 60, 162, 248, 144, 61, 104, 221, 178, 59, 50, 22, 47, 62, 74, 61, 254, 60, 31, 51, 236, 61, 5, 203, 25, 190, 192, 81, 28, 62, 2, 241, 92, 189, 231, 246, 146, 189, 91, 233, 203, 189, 83, 172, 38, 189, 234, 26, 8, 190, 120, 191, 30, 190, 65, 160, 20, 62, 184, 36, 219, 189, 18, 206, 237, 61, 59, 63, 110, 189, 112, 16, 139, 188, 77, 123, 11, 60, 204, 41, 218, 189, 103, 217, 229, 60, 230, 50, 150, 189, 92, 246, 0, 190, 156, 117, 93, 61, 193, 86, 37, 62, 93, 47, 30, 190, 43, 183, 37, 190, 70, 144, 134, 188, 199, 116, 75, 61, 217, 54, 197, 61, 37, 192, 245, 189, 74, 184, 192, 189, 178, 46, 245, 189, 217, 243, 226, 188, 219, 72, 193, 59, 215, 229, 17, 62, 34, 223, 131, 60, 30, 101, 172, 61, 74, 71, 29, 190, 78, 219, 6, 190, 78, 186, 45, 190, 240, 6, 32, 186, 212, 116, 227, 187, 140, 201, 7, 60, 224, 51, 233, 187, 164, 160, 226, 189, 98, 213, 12, 190, 70, 153, 158, 60, 93, 226, 240, 61, 228, 38, 225, 61, 18, 56, 72, 61, 160, 11, 215, 189, 153, 240, 34, 62, 156, 226, 138, 61, 164, 244, 181, 189, 59, 228, 46, 190, 140, 8, 52, 62, 202, 108, 196, 189, 47, 201, 245, 189, 10, 245, 247, 188, 228, 139, 58, 61, 127, 181, 254, 59, 253, 54, 48, 190, 39, 193, 37, 190, 165, 235, 78, 61, 235, 68, 45, 62, 193, 229, 206, 189, 167, 70, 25, 190, 205, 139, 29, 62, 217, 42, 147, 189, 2, 2, 70, 59, 78, 188, 6, 190, 191, 18, 77, 61, 69, 145, 103, 60, 70, 242, 42, 189, 11, 190, 43, 60, 167, 132, 218, 61, 53, 193, 101, 61, 79, 230, 48, 62, 12, 34, 182, 61, 247, 209, 16, 190, 139, 135, 215, 187, 185, 5, 236, 61, 128, 28, 38, 62, 248, 209, 24, 62, 13, 193, 18, 62, 250, 123, 146, 189, 133, 26, 69, 189, 63, 196, 21, 189, 83, 247, 105, 189, 214, 34, 4, 190, 15, 252, 131, 189, 61, 244, 25, 62, 177, 85, 116, 60, 93, 88, 215, 188, 135, 20, 7, 62, 48, 115, 79, 189, 109, 85, 8, 62, 146, 29, 142, 60, 178, 196, 229, 189, 65, 38, 212, 189, 63, 125, 238, 189, 164, 138, 203, 61, 58, 66, 43, 190, 158, 122, 9, 190, 27, 202, 156, 189, 228, 25, 243, 189, 163, 200, 167, 61, 169, 225, 41, 190, 189, 57, 33, 190, 180, 203, 13, 62, 131, 26, 12, 190, 82, 206, 168, 188, 162, 165, 29, 62, 219, 93, 46, 62, 117, 35, 246, 189, 130, 255, 195, 189, 159, 244, 27, 190, 12, 214, 109, 60, 84, 79, 202, 60, 145, 224, 16, 62, 219, 125, 241, 189, 54, 35, 20, 190, 190, 160, 247, 187, 157, 250, 173, 189, 222, 255, 239, 189, 22, 145, 163, 61, 119, 149, 255, 189, 53, 130, 48, 62, 229, 165, 13, 61, 215, 195, 174, 188, 21, 192, 80, 189, 39, 20, 206, 61, 6, 120, 23, 62, 44, 88, 238, 189, 218, 117, 1, 190, 239, 95, 68, 60, 120, 10, 165, 189, 56, 10, 68, 61, 14, 179, 145, 61, 125, 230, 237, 188, 113, 150, 48, 62, 10, 71, 168, 189, 55, 104, 69, 59, 213, 155, 138, 61, 25, 2, 240, 61, 191, 5, 11, 188, 130, 194, 4, 190, 8, 118, 70, 189, 202, 123, 217, 189, 127, 109, 79, 189, 186, 103, 4, 190};
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
                alignas(float) const unsigned char memory[] = {144, 116, 57, 61, 55, 150, 153, 189, 145, 25, 219, 61, 224, 229, 2, 190, 120, 93, 45, 189, 170, 77, 134, 189, 35, 204, 214, 61, 132, 161, 148, 61, 51, 228, 26, 62, 178, 41, 85, 189, 127, 16, 171, 189, 113, 36, 176, 61, 50, 161, 47, 62, 201, 99, 18, 190, 33, 0, 215, 60, 5, 227, 138, 189, 237, 173, 116, 61, 157, 5, 124, 61, 149, 94, 43, 61, 174, 46, 208, 60, 81, 57, 152, 61, 53, 254, 20, 62, 123, 72, 2, 62, 136, 134, 52, 61, 202, 196, 178, 188, 15, 75, 203, 55, 28, 139, 172, 189, 227, 25, 20, 190, 101, 62, 155, 61, 10, 86, 29, 188, 135, 129, 36, 62, 127, 214, 185, 187};
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
                alignas(float) const unsigned char memory[] = {134, 112, 184, 61, 196, 164, 72, 61, 147, 223, 5, 190, 49, 4, 117, 61, 228, 112, 12, 190, 97, 12, 201, 61, 37, 111, 249, 189, 250, 240, 167, 61, 48, 56, 136, 61, 204, 210, 55, 189, 10, 123, 23, 190, 24, 196, 157, 189, 164, 12, 82, 186, 255, 202, 2, 189, 33, 98, 117, 60, 195, 66, 60, 188, 217, 23, 166, 189, 231, 156, 209, 189, 39, 220, 35, 190, 31, 148, 6, 61, 175, 81, 27, 189, 130, 173, 15, 62, 202, 173, 190, 187, 73, 150, 8, 62, 175, 8, 137, 189, 211, 230, 160, 61, 182, 142, 154, 189, 122, 10, 43, 62, 224, 165, 195, 61, 245, 43, 220, 61, 251, 163, 38, 190, 187, 243, 87, 59, 19, 185, 137, 188, 61, 122, 139, 189, 251, 251, 51, 190, 188, 247, 34, 190, 86, 228, 47, 190, 73, 10, 42, 190, 86, 12, 136, 61, 201, 22, 21, 189, 167, 169, 215, 189, 212, 239, 47, 61, 93, 115, 33, 189, 200, 150, 170, 61, 6, 148, 0, 190, 157, 77, 171, 187, 252, 8, 48, 62, 117, 13, 40, 61, 82, 85, 11, 62, 245, 221, 216, 61, 86, 45, 115, 189, 69, 154, 192, 189, 216, 203, 10, 62, 138, 220, 5, 62, 187, 105, 203, 61, 216, 122, 37, 190, 220, 209, 27, 189, 60, 206, 21, 190, 235, 211, 37, 190, 88, 170, 188, 189, 173, 241, 164, 189, 130, 206, 10, 62, 38, 187, 85, 189, 121, 143, 45, 62};
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
                alignas(float) const unsigned char memory[] = {46, 149, 235, 61, 236, 230, 0, 190};
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
    alignas(float) const unsigned char memory[] = {113, 181, 252, 191, 42, 208, 243, 190, 162, 187, 149, 188};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {118, 63, 189, 61, 126, 245, 150, 190};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0008/steps/000000000000000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}