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
                alignas(float) const unsigned char memory[] = {31, 237, 192, 189, 231, 6, 39, 190, 104, 24, 45, 190, 26, 216, 15, 191, 191, 151, 16, 191, 251, 13, 121, 189, 235, 99, 189, 62, 202, 187, 80, 61, 249, 37, 152, 190, 101, 231, 169, 190, 136, 136, 185, 189, 132, 246, 236, 62, 255, 104, 10, 188, 134, 146, 54, 61, 28, 78, 131, 190, 218, 10, 6, 63, 73, 252, 101, 62, 21, 184, 98, 61, 171, 25, 132, 62, 77, 15, 228, 62, 64, 103, 207, 62, 42, 105, 222, 62, 12, 147, 141, 190, 200, 239, 165, 62, 29, 166, 8, 191, 1, 5, 231, 190, 58, 188, 17, 191, 123, 49, 212, 189, 142, 17, 174, 189, 191, 232, 11, 190, 171, 143, 226, 62, 5, 165, 147, 190, 187, 160, 168, 190, 192, 154, 51, 62, 136, 65, 178, 189, 255, 95, 15, 62, 249, 105, 254, 62, 192, 88, 3, 191, 142, 247, 176, 61, 14, 98, 222, 61, 97, 184, 17, 63, 89, 0, 57, 62, 186, 120, 108, 189, 78, 173, 183, 190, 229, 92, 222, 62, 105, 240, 120, 190, 3, 47, 7, 191, 236, 168, 193, 189, 71, 101, 7, 62, 43, 249, 9, 191, 199, 113, 181, 62, 206, 7, 130, 62, 166, 108, 6, 191, 166, 61, 201, 61, 102, 91, 148, 188, 183, 191, 238, 62, 203, 190, 132, 62, 46, 47, 174, 190, 126, 16, 140, 62, 231, 166, 116, 190, 167, 227, 12, 191, 201, 53, 15, 191, 140, 186, 1, 191, 208, 98, 119, 190, 114, 159, 225, 190, 140, 32, 174, 189, 124, 238, 217, 62, 104, 243, 250, 62, 178, 90, 247, 61, 1, 163, 206, 62, 62, 217, 195, 62, 211, 42, 211, 190, 69, 223, 210, 62, 227, 229, 155, 190, 61, 157, 201, 61, 168, 12, 4, 63, 234, 1, 12, 190, 189, 205, 205, 189, 65, 40, 203, 61, 3, 172, 44, 190, 177, 90, 227, 190, 98, 24, 238, 62, 37, 2, 211, 190, 130, 0, 231, 62, 118, 172, 17, 191, 82, 243, 16, 63, 18, 227, 230, 62, 77, 70, 9, 62, 93, 189, 142, 62, 105, 128, 52, 190, 59, 38, 174, 61, 84, 27, 182, 190, 246, 179, 139, 60, 170, 49, 169, 189, 10, 73, 12, 191, 165, 73, 44, 190};
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
                alignas(float) const unsigned char memory[] = {82, 167, 19, 191, 254, 49, 238, 190, 64, 196, 236, 188, 236, 33, 188, 190, 243, 18, 6, 63, 232, 136, 129, 62, 167, 39, 204, 190, 17, 146, 18, 62, 90, 149, 175, 62, 100, 152, 82, 188, 32, 144, 183, 62, 158, 40, 105, 62, 7, 57, 92, 189, 107, 250, 166, 190, 160, 138, 214, 190, 70, 46, 235, 62, 117, 210, 209, 190, 233, 136, 57, 62, 230, 227, 137, 62, 121, 238, 163, 190, 252, 250, 13, 63, 198, 95, 160, 61, 165, 139, 9, 63, 235, 166, 37, 189, 96, 247, 21, 190, 75, 19, 5, 190, 210, 223, 199, 62, 188, 135, 174, 190, 50, 0, 251, 187, 146, 130, 162, 190, 113, 47, 191, 62, 68, 29, 130, 62};
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
                alignas(float) const unsigned char memory[] = {116, 128, 128, 189, 183, 158, 193, 61, 40, 207, 167, 61, 146, 222, 47, 61, 147, 187, 25, 61, 255, 31, 139, 61, 97, 170, 227, 61, 217, 4, 47, 62, 52, 169, 167, 188, 209, 138, 231, 60, 203, 183, 10, 190, 14, 75, 193, 61, 28, 26, 0, 190, 123, 48, 7, 61, 153, 2, 212, 187, 170, 58, 28, 62, 166, 105, 245, 189, 254, 85, 25, 190, 172, 225, 250, 189, 222, 191, 3, 190, 66, 53, 170, 189, 121, 85, 143, 61, 55, 196, 105, 59, 148, 34, 29, 190, 187, 248, 205, 61, 111, 2, 197, 188, 175, 51, 164, 189, 9, 89, 13, 190, 222, 129, 130, 61, 102, 14, 206, 61, 163, 162, 21, 189, 9, 3, 3, 62, 147, 165, 22, 62, 130, 29, 50, 190, 29, 209, 228, 61, 145, 245, 149, 61, 232, 212, 147, 189, 48, 172, 20, 190, 49, 132, 73, 61, 246, 192, 173, 189, 51, 131, 22, 189, 189, 106, 131, 61, 125, 126, 16, 62, 22, 193, 44, 189, 100, 56, 139, 60, 225, 81, 43, 189, 136, 91, 220, 189, 207, 224, 84, 61, 9, 236, 8, 190, 108, 116, 2, 190, 45, 235, 60, 189, 90, 232, 33, 62, 6, 71, 197, 61, 82, 38, 56, 61, 0, 176, 148, 61, 62, 197, 199, 61, 152, 18, 13, 187, 145, 56, 238, 189, 248, 27, 50, 190, 111, 157, 18, 190, 111, 157, 245, 189, 86, 19, 44, 189, 100, 165, 216, 188, 48, 248, 126, 189, 251, 91, 242, 60, 203, 75, 12, 62, 142, 224, 218, 186, 37, 156, 10, 190, 38, 51, 203, 61, 180, 180, 18, 190, 159, 189, 31, 62, 173, 166, 233, 189, 181, 33, 23, 190, 26, 31, 217, 187, 24, 28, 188, 59, 168, 178, 23, 189, 81, 112, 25, 62, 146, 114, 45, 61, 219, 198, 73, 186, 16, 99, 20, 62, 170, 189, 16, 190, 16, 101, 244, 189, 177, 154, 147, 61, 252, 109, 64, 61, 202, 6, 218, 61, 178, 215, 183, 189, 122, 254, 203, 189, 1, 214, 46, 188, 27, 91, 201, 189, 94, 39, 149, 61, 237, 165, 15, 61, 108, 17, 93, 61, 185, 51, 237, 189, 68, 76, 102, 61, 137, 88, 150, 189, 85, 152, 167, 61, 250, 150, 196, 61, 99, 82, 110, 61, 80, 222, 241, 188, 121, 248, 38, 62, 181, 105, 226, 61, 178, 226, 19, 62, 225, 82, 233, 61, 199, 233, 130, 189, 165, 233, 212, 61, 182, 199, 131, 60, 223, 62, 212, 189, 179, 165, 30, 62, 200, 134, 242, 188, 182, 115, 1, 190, 234, 202, 24, 62, 105, 225, 53, 61, 164, 23, 60, 189, 240, 143, 87, 60, 65, 141, 32, 62, 87, 113, 239, 61, 255, 105, 87, 189, 164, 44, 155, 188, 95, 59, 39, 190, 9, 167, 32, 190, 144, 135, 253, 186, 20, 49, 143, 60, 33, 95, 210, 188, 11, 170, 169, 61, 16, 17, 130, 61, 1, 25, 162, 60, 190, 129, 3, 190, 213, 212, 50, 60, 22, 131, 39, 190, 188, 130, 34, 190, 125, 160, 194, 189, 210, 122, 15, 62, 233, 44, 150, 189, 164, 17, 135, 61, 183, 213, 113, 61, 180, 253, 225, 189, 139, 69, 11, 62, 243, 166, 30, 62, 6, 235, 78, 61, 50, 37, 35, 62, 198, 175, 195, 189, 121, 172, 145, 189, 55, 250, 232, 189, 37, 223, 158, 61, 2, 217, 240, 189, 5, 120, 39, 190, 144, 7, 32, 190, 193, 81, 249, 188, 180, 93, 162, 61, 254, 170, 161, 189, 156, 159, 26, 62, 125, 3, 45, 61, 162, 101, 89, 188, 70, 203, 168, 61, 183, 216, 217, 187, 120, 201, 76, 188, 204, 21, 130, 189, 89, 178, 47, 190, 31, 179, 18, 190, 225, 248, 196, 189, 36, 11, 35, 62, 98, 19, 222, 58, 61, 182, 37, 190, 171, 141, 48, 61, 170, 202, 128, 60, 187, 61, 4, 62, 57, 114, 172, 60, 243, 198, 225, 189, 123, 239, 252, 61, 186, 227, 100, 60, 135, 124, 34, 61, 237, 12, 155, 189, 80, 14, 37, 60, 66, 59, 14, 189, 14, 141, 209, 61, 237, 241, 184, 59, 34, 128, 220, 61, 67, 236, 120, 61, 240, 222, 143, 188, 253, 32, 62, 61, 252, 77, 17, 190, 176, 224, 49, 62, 171, 225, 249, 189, 163, 25, 92, 189, 217, 0, 31, 190, 238, 78, 33, 190, 4, 71, 35, 190, 95, 27, 71, 61, 113, 222, 147, 189, 90, 129, 199, 189, 51, 136, 105, 61, 124, 214, 236, 61, 103, 50, 74, 61, 252, 26, 248, 189, 125, 19, 215, 60, 247, 248, 190, 60, 220, 209, 140, 61, 195, 41, 251, 189, 218, 249, 15, 61, 209, 1, 119, 188, 122, 146, 232, 61, 3, 173, 7, 62, 38, 209, 49, 190, 179, 193, 108, 61, 196, 70, 180, 189, 17, 234, 50, 62, 49, 231, 159, 189, 158, 228, 13, 62, 80, 157, 61, 61, 247, 67, 6, 190, 216, 124, 79, 188, 194, 17, 178, 187, 141, 160, 238, 189, 19, 66, 231, 60, 232, 152, 58, 188, 248, 202, 17, 190, 228, 227, 122, 189, 168, 88, 157, 61, 5, 241, 188, 61, 94, 184, 3, 190, 102, 82, 53, 61, 205, 218, 11, 62, 55, 116, 51, 190, 24, 100, 117, 61, 215, 54, 27, 190, 119, 100, 37, 62, 225, 36, 143, 60, 21, 245, 252, 189, 8, 233, 35, 62, 32, 105, 175, 61, 149, 30, 30, 190, 71, 12, 22, 190, 72, 166, 210, 61, 36, 204, 47, 190, 54, 231, 238, 188, 212, 81, 240, 189, 255, 206, 148, 189, 11, 242, 250, 188, 11, 142, 153, 189, 108, 201, 184, 189, 9, 45, 144, 189, 138, 14, 33, 62, 217, 243, 162, 189, 74, 101, 13, 190, 14, 161, 114, 188, 156, 237, 7, 60, 60, 190, 12, 62, 12, 9, 183, 189, 26, 228, 36, 62, 103, 232, 164, 189, 234, 91, 162, 61, 34, 128, 11, 190, 157, 236, 181, 188, 64, 99, 225, 61, 251, 167, 12, 190, 173, 37, 208, 61, 68, 81, 8, 189, 78, 57, 213, 188, 240, 206, 229, 189, 100, 119, 160, 189, 105, 220, 229, 61, 128, 80, 32, 62, 97, 136, 226, 61, 240, 6, 137, 61, 248, 227, 9, 190, 51, 33, 232, 189, 92, 237, 21, 189, 100, 189, 20, 188, 48, 192, 30, 62, 37, 253, 202, 189, 162, 212, 218, 61, 88, 158, 20, 62, 220, 3, 254, 61, 203, 68, 14, 61, 197, 31, 79, 61, 237, 156, 101, 189, 238, 103, 98, 61, 89, 46, 8, 190, 59, 53, 91, 60, 4, 6, 239, 59, 1, 145, 175, 189, 151, 178, 129, 189, 88, 156, 49, 190, 100, 76, 189, 189, 29, 48, 230, 60, 15, 247, 174, 189, 159, 212, 159, 189, 244, 47, 218, 60, 204, 150, 144, 189, 19, 8, 81, 189, 247, 229, 240, 59, 201, 238, 44, 62, 84, 227, 8, 61, 106, 179, 220, 189, 32, 48, 129, 61, 235, 208, 245, 189, 110, 88, 154, 61, 192, 157, 14, 190, 107, 144, 214, 61, 85, 31, 9, 62, 186, 217, 243, 189, 194, 5, 107, 189, 39, 202, 7, 62, 215, 159, 149, 189, 73, 184, 3, 188, 139, 142, 129, 189, 131, 6, 161, 189, 120, 129, 246, 61, 221, 155, 148, 189, 51, 11, 35, 190, 7, 188, 180, 187, 35, 229, 141, 189, 78, 40, 12, 62, 208, 103, 31, 190, 118, 45, 41, 189, 189, 21, 32, 190, 152, 128, 248, 61, 153, 147, 72, 61, 65, 28, 86, 189, 13, 192, 222, 60, 216, 255, 247, 189, 89, 82, 40, 190, 231, 252, 65, 188, 105, 81, 94, 61, 15, 250, 129, 61, 213, 20, 41, 188, 103, 129, 23, 62, 123, 145, 6, 62, 236, 140, 5, 61, 101, 137, 100, 188, 69, 233, 254, 188, 215, 189, 162, 189, 193, 180, 50, 190, 56, 161, 32, 189, 61, 19, 172, 189, 38, 50, 76, 189, 139, 211, 77, 61, 116, 254, 158, 189, 186, 9, 51, 62, 198, 213, 45, 190, 201, 126, 199, 59, 88, 114, 21, 62, 215, 11, 149, 189, 20, 155, 15, 62, 196, 100, 1, 190, 142, 168, 62, 61, 145, 94, 185, 189, 233, 65, 201, 61, 238, 107, 49, 190, 81, 119, 46, 190, 58, 90, 200, 189, 253, 251, 51, 62, 15, 92, 52, 190, 203, 89, 55, 61, 122, 53, 193, 188, 70, 196, 121, 189, 119, 204, 185, 61, 240, 216, 226, 189, 163, 167, 50, 190, 246, 232, 193, 61, 184, 239, 85, 188, 12, 66, 198, 61, 182, 61, 35, 189, 170, 46, 37, 62, 209, 247, 211, 61, 235, 218, 44, 61, 95, 165, 49, 61, 20, 125, 199, 189, 136, 83, 35, 190, 254, 193, 63, 189, 50, 190, 51, 62, 37, 42, 178, 61, 7, 131, 48, 62, 44, 202, 178, 61, 133, 132, 94, 186, 199, 140, 254, 189, 221, 72, 48, 62, 13, 97, 217, 189, 55, 165, 203, 61, 32, 22, 184, 188, 167, 135, 170, 189, 219, 136, 197, 189, 7, 104, 10, 189, 48, 173, 229, 189, 71, 0, 101, 60, 16, 166, 29, 62, 250, 113, 31, 190, 4, 224, 100, 60, 164, 99, 201, 60, 154, 170, 1, 190, 219, 136, 41, 62, 49, 26, 247, 61, 168, 116, 1, 190, 236, 93, 181, 61, 239, 77, 132, 189, 197, 178, 6, 58, 73, 88, 26, 62, 144, 103, 134, 61, 3, 104, 184, 189, 253, 197, 4, 190, 211, 220, 167, 61, 210, 165, 2, 62, 255, 206, 254, 60, 222, 81, 6, 190, 164, 57, 32, 62, 169, 207, 113, 61, 86, 194, 21, 62, 162, 166, 217, 61, 172, 159, 32, 60, 208, 205, 116, 60, 238, 138, 207, 61, 71, 195, 16, 62, 240, 176, 0, 62, 69, 56, 187, 61, 179, 132, 236, 189, 50, 237, 35, 60, 43, 211, 150, 61, 224, 234, 33, 189, 142, 39, 132, 189, 28, 39, 46, 62, 208, 210, 193, 189, 81, 125, 130, 60, 248, 221, 157, 61, 223, 126, 252, 61, 169, 90, 119, 189, 6, 112, 185, 61, 189, 123, 220, 61, 86, 68, 164, 189, 66, 216, 16, 61, 46, 109, 104, 60, 164, 142, 7, 62, 207, 156, 85, 57, 124, 141, 228, 189, 167, 192, 217, 188, 236, 19, 18, 62, 176, 190, 17, 62, 38, 134, 156, 188, 245, 105, 212, 189, 200, 145, 41, 190, 193, 50, 104, 60, 15, 94, 208, 189, 147, 95, 37, 62, 221, 59, 107, 61, 3, 96, 227, 60, 148, 102, 29, 62, 47, 179, 135, 60, 141, 87, 36, 62, 181, 178, 205, 61, 110, 165, 188, 189, 103, 208, 157, 61, 200, 16, 43, 61, 250, 252, 255, 61, 205, 51, 20, 189, 122, 9, 49, 187, 184, 174, 22, 190, 173, 67, 113, 189, 17, 125, 194, 188, 34, 120, 17, 62, 205, 137, 90, 61, 123, 8, 226, 61, 74, 167, 19, 190, 198, 53, 35, 62, 47, 150, 191, 189, 19, 88, 71, 188, 113, 28, 12, 190, 185, 179, 19, 190, 69, 148, 141, 61, 66, 231, 202, 61, 189, 110, 207, 189, 212, 117, 98, 61, 3, 202, 183, 61, 227, 244, 106, 60, 197, 11, 206, 189, 96, 23, 247, 61, 108, 17, 12, 62, 89, 126, 20, 62, 39, 173, 35, 190, 58, 6, 11, 190, 250, 139, 122, 60, 113, 12, 147, 188, 9, 211, 247, 59, 199, 2, 44, 190, 139, 246, 214, 189, 239, 237, 2, 62, 184, 251, 110, 61, 28, 85, 19, 190, 14, 153, 255, 61, 152, 224, 106, 189, 130, 142, 172, 60, 211, 91, 238, 61, 75, 88, 225, 189, 171, 96, 10, 62, 173, 71, 191, 188, 205, 64, 242, 59, 63, 73, 32, 62, 38, 170, 139, 186, 79, 193, 250, 61, 13, 126, 27, 62, 119, 95, 37, 62, 99, 108, 78, 61, 229, 97, 210, 189, 25, 86, 227, 189, 140, 31, 101, 61, 149, 38, 103, 61, 9, 150, 224, 189, 12, 142, 184, 186, 233, 74, 189, 60, 99, 165, 33, 62, 52, 128, 58, 61, 141, 218, 49, 62, 110, 22, 38, 190, 208, 211, 232, 189, 135, 97, 191, 188, 189, 120, 29, 62, 242, 60, 246, 61, 7, 74, 23, 190, 96, 63, 239, 189, 244, 73, 232, 189, 160, 223, 145, 61, 192, 129, 108, 188, 213, 65, 154, 189, 109, 137, 32, 62, 144, 219, 3, 190, 193, 100, 186, 189, 226, 9, 51, 190, 172, 119, 35, 62, 192, 89, 227, 189, 0, 12, 122, 189, 176, 46, 232, 58, 78, 159, 150, 61, 120, 125, 134, 61, 58, 252, 193, 189, 30, 253, 209, 61, 183, 153, 127, 61, 151, 119, 34, 62, 175, 108, 179, 61, 92, 233, 193, 189, 114, 181, 115, 57, 83, 153, 140, 60, 109, 205, 42, 189, 54, 242, 216, 189, 61, 192, 239, 61, 202, 218, 222, 58, 161, 167, 124, 189, 63, 10, 254, 188, 82, 247, 116, 189, 152, 176, 37, 188, 249, 147, 187, 61, 240, 50, 138, 187, 76, 233, 48, 190, 56, 104, 150, 61, 36, 105, 138, 61, 220, 98, 191, 189, 122, 228, 9, 190, 25, 114, 21, 190, 169, 221, 180, 61, 107, 36, 136, 61, 153, 110, 235, 60, 28, 187, 136, 61, 164, 84, 185, 189, 179, 204, 128, 61, 19, 80, 0, 190, 95, 127, 222, 61, 114, 153, 43, 190, 163, 77, 142, 189, 81, 178, 254, 188, 71, 135, 244, 59, 162, 128, 185, 189, 3, 238, 136, 61, 18, 44, 2, 62, 67, 91, 103, 59, 34, 114, 132, 189, 44, 159, 203, 189, 53, 206, 12, 190, 174, 235, 0, 62, 43, 108, 2, 189, 92, 43, 255, 189, 177, 167, 28, 61, 179, 1, 28, 61, 133, 46, 23, 190, 10, 94, 247, 189, 252, 59, 149, 61, 223, 180, 52, 188, 70, 101, 225, 189, 203, 186, 148, 61, 141, 60, 184, 61, 174, 117, 26, 62, 233, 90, 47, 190, 95, 102, 35, 62, 88, 140, 35, 190, 228, 52, 29, 190, 171, 172, 82, 188, 147, 92, 189, 189, 185, 106, 12, 190, 14, 108, 15, 62, 152, 41, 39, 61, 249, 78, 160, 60, 119, 58, 184, 61, 39, 204, 171, 61, 84, 70, 220, 189, 6, 221, 200, 60, 119, 17, 20, 190, 194, 151, 142, 61, 248, 224, 138, 189, 130, 199, 16, 62, 130, 137, 49, 61, 36, 232, 38, 62, 23, 118, 254, 61, 122, 251, 183, 188, 157, 131, 5, 62, 111, 162, 95, 61, 233, 223, 37, 62, 40, 165, 29, 62, 168, 27, 15, 62, 187, 71, 40, 190, 111, 69, 29, 189, 3, 142, 187, 189, 130, 222, 33, 190, 210, 162, 48, 190, 101, 226, 141, 187, 251, 98, 110, 61, 181, 1, 240, 189, 151, 74, 170, 60, 146, 4, 133, 61, 252, 232, 31, 190, 186, 30, 38, 62, 41, 112, 123, 189, 160, 65, 77, 189, 31, 239, 110, 189, 72, 141, 0, 188, 218, 185, 153, 59, 22, 187, 166, 59, 33, 68, 44, 189, 134, 187, 207, 189, 36, 170, 140, 61, 153, 221, 150, 60, 210, 253, 37, 62, 23, 74, 76, 189, 139, 95, 165, 60, 40, 176, 0, 190, 148, 102, 132, 61, 63, 174, 168, 61, 206, 201, 252, 61, 31, 157, 8, 190, 253, 177, 144, 188, 27, 155, 251, 61, 61, 217, 128, 61, 232, 36, 157, 189, 38, 6, 28, 62, 232, 91, 69, 61, 206, 116, 49, 190, 46, 148, 3, 189, 14, 172, 226, 188, 224, 245, 0, 190, 201, 69, 174, 61, 4, 199, 85, 61, 32, 93, 171, 60, 153, 89, 19, 62, 144, 2, 39, 62, 120, 239, 78, 61, 79, 36, 252, 189, 243, 116, 10, 62, 175, 194, 12, 190, 171, 53, 33, 62, 94, 255, 59, 189, 172, 1, 71, 61, 117, 141, 5, 190, 113, 247, 173, 60, 216, 23, 49, 190, 240, 44, 169, 189, 35, 242, 108, 61, 61, 185, 152, 188, 193, 234, 52, 190, 219, 115, 181, 61, 149, 145, 140, 189, 29, 97, 125, 61, 119, 233, 237, 189, 8, 117, 231, 189, 5, 111, 50, 190, 79, 89, 40, 190, 212, 32, 214, 189, 88, 243, 188, 189, 102, 198, 93, 61, 109, 89, 49, 189, 24, 225, 203, 189, 1, 118, 4, 190, 4, 200, 190, 189, 33, 231, 246, 189, 80, 7, 143, 187, 226, 54, 51, 190, 104, 242, 210, 61, 152, 210, 22, 62, 61, 251, 237, 189, 192, 223, 199, 60, 68, 194, 89, 189, 31, 40, 193, 189, 158, 26, 45, 190, 177, 184, 124, 188, 252, 124, 187, 189, 153, 18, 12, 61, 187, 240, 248, 189, 195, 217, 221, 189, 131, 68, 49, 62, 233, 175, 241, 61, 48, 56, 148, 61, 240, 73, 21, 62, 73, 98, 41, 62, 48, 70, 251, 61, 92, 20, 45, 62, 148, 106, 4, 189, 28, 64, 146, 61, 211, 148, 211, 189, 201, 199, 79, 189, 39, 28, 38, 190, 234, 28, 2, 190, 115, 92, 189, 189, 1, 92, 8, 190, 29, 9, 175, 189, 4, 1, 78, 61, 154, 81, 100, 189, 225, 62, 128, 61, 20, 92, 154, 189, 242, 108, 184, 60, 232, 112, 147, 61, 165, 178, 248, 61, 88, 195, 233, 189, 23, 239, 194, 187, 24, 209, 147, 61, 27, 45, 188, 60, 152, 187, 55, 188, 100, 133, 4, 189, 35, 55, 159, 187, 205, 185, 1, 60, 176, 33, 14, 62, 10, 230, 148, 61, 169, 61, 127, 61, 112, 181, 83, 189, 179, 145, 145, 188, 141, 45, 200, 61, 164, 160, 35, 62, 99, 102, 38, 61, 152, 9, 149, 61, 155, 181, 16, 62, 1, 4, 52, 189, 65, 7, 164, 189, 249, 249, 2, 190, 114, 124, 252, 189, 6, 142, 13, 62, 155, 246, 26, 62, 11, 36, 23, 189, 100, 196, 31, 189, 143, 12, 164, 189, 100, 67, 100, 61, 4, 120, 129, 61, 92, 224, 129, 61, 245, 17, 2, 190, 84, 9, 199, 189, 166, 166, 126, 60, 18, 39, 78, 189, 157, 203, 28, 62, 83, 246, 158, 188, 21, 4, 32, 190, 252, 171, 36, 190, 165, 117, 18, 62, 127, 141, 51, 61, 129, 46, 84, 189, 216, 230, 38, 62, 38, 120, 39, 61, 80, 0, 134, 189, 201, 237, 10, 190, 35, 72, 44, 62, 61, 93, 53, 189, 75, 22, 49, 61, 239, 76, 172, 61, 212, 207, 6, 62, 219, 71, 16, 62, 71, 69, 23, 188, 189, 207, 10, 61, 71, 145, 221, 59, 121, 11, 29, 62, 61, 161, 43, 190, 255, 124, 13, 62, 2, 33, 247, 61, 34, 150, 188, 61, 1, 1, 15, 62, 53, 58, 215, 189, 63, 242, 163, 61, 57, 93, 37, 62, 198, 97, 191, 189, 135, 135, 204, 189, 96, 82, 37, 190, 77, 87, 167, 61, 22, 123, 184, 61, 99, 202, 11, 61, 114, 43, 10, 62, 60, 243, 204, 61, 200, 88, 161, 61, 116, 188, 43, 61, 42, 153, 68, 61, 211, 224, 230, 189, 127, 70, 42, 62, 92, 231, 194, 189, 0, 107, 43, 188, 161, 146, 2, 190, 212, 226, 13, 62, 57, 195, 139, 189, 65, 217, 37, 189, 222, 205, 139, 61, 7, 228, 230, 60, 11, 60, 109, 189, 204, 152, 215, 189, 137, 111, 253, 189, 59, 123, 253, 61, 166, 135, 209, 189, 182, 179, 43, 62, 184, 231, 106, 188, 19, 58, 29, 62, 201, 84, 7, 188, 43, 78, 248, 61, 213, 207, 28, 190, 168, 130, 209, 61, 27, 31, 212, 60, 8, 247, 230, 188, 86, 120, 193, 189, 64, 17, 180, 61, 2, 190, 250, 189, 154, 118, 60, 189, 93, 255, 193, 189, 150, 117, 251, 58, 129, 106, 144, 61, 127, 104, 57, 61, 235, 87, 136, 189, 42, 175, 149, 61, 89, 60, 21, 62, 70, 60, 149, 58, 207, 65, 52, 61, 31, 94, 34, 60, 82, 25, 20, 61, 210, 114, 139, 189, 157, 86, 126, 61, 83, 241, 143, 189, 30, 97, 76, 189, 211, 55, 150, 59, 205, 198, 216, 188, 202, 246, 192, 60, 102, 247, 179, 189, 139, 66, 224, 189, 234, 17, 29, 190, 222, 203, 221, 61, 132, 85, 181, 61, 195, 108, 160, 60, 121, 185, 204, 188, 104, 156, 176, 58, 12, 50, 156, 60, 201, 76, 12, 62, 121, 13, 126, 61, 191, 195, 47, 62, 68, 118, 31, 190, 239, 211, 189, 61, 61, 63, 152, 61, 115, 133, 18, 189, 89, 22, 52, 190, 181, 219, 167, 189, 248, 28, 188, 189, 226, 233, 186, 61, 97, 102, 29, 190, 43, 250, 123, 187, 60, 30, 163, 61, 217, 33, 169, 61, 180, 105, 116, 189, 39, 191, 13, 62, 221, 82, 244, 61, 166, 100, 83, 61, 99, 80, 12, 62, 37, 52, 121, 189, 172, 106, 151, 189, 107, 219, 7, 62, 252, 23, 221, 188, 63, 0, 172, 59, 245, 137, 43, 190, 109, 99, 12, 190, 254, 3, 203, 189, 180, 147, 230, 189, 214, 72, 180, 188, 75, 124, 123, 189, 74, 37, 223, 61, 100, 170, 27, 190, 93, 63, 52, 190, 254, 3, 239, 61, 222, 94, 184, 188, 152, 131, 39, 61, 216, 206, 67, 61, 109, 215, 49, 190, 200, 72, 16, 60, 1, 166, 4, 190, 189, 219, 56, 60, 138, 247, 21, 62, 209, 34, 149, 188, 35, 165, 24, 190, 104, 255, 198, 189, 228, 157, 163, 188, 242, 169, 35, 190, 53, 22, 143, 61, 185, 97, 198, 61, 103, 175, 174, 189, 55, 237, 199, 61, 51, 17, 10, 190, 22, 160, 44, 62, 84, 51, 127, 189, 216, 205, 139, 61, 202, 63, 224, 60, 78, 11, 214, 61, 198, 97, 224, 61, 254, 61, 192, 61, 117, 126, 180, 61, 96, 229, 32, 190, 61, 83, 224, 189, 9, 219, 150, 60, 20, 249, 16, 62, 39, 164, 33, 61, 3, 73, 6, 188, 118, 205, 8, 62, 242, 221, 132, 189, 138, 82, 163, 188, 116, 92, 185, 61, 110, 236, 41, 190, 52, 31, 16, 190, 81, 36, 16, 62, 107, 80, 85, 61, 15, 59, 230, 189, 29, 144, 16, 188, 12, 17, 32, 190, 231, 84, 140, 61, 57, 226, 233, 61, 39, 205, 132, 189, 198, 227, 40, 62, 222, 156, 18, 62, 147, 92, 171, 61, 216, 89, 24, 190, 58, 242, 8, 62, 46, 1, 47, 62, 162, 127, 200, 61, 253, 90, 25, 189, 54, 80, 135, 61, 20, 55, 103, 189, 175, 141, 30, 190, 70, 179, 30, 62, 112, 171, 8, 62, 164, 36, 0, 190, 16, 14, 133, 61, 80, 185, 23, 62, 68, 15, 49, 190, 48, 63, 233, 61, 14, 28, 71, 60, 223, 67, 212, 189, 133, 71, 174, 187, 224, 199, 115, 61, 232, 133, 196, 61, 93, 174, 10, 190, 253, 177, 7, 188, 118, 175, 37, 190, 138, 60, 254, 61, 160, 72, 172, 61, 12, 142, 213, 187, 38, 4, 138, 61, 13, 225, 24, 190, 28, 128, 74, 189, 126, 105, 130, 189, 240, 254, 214, 188, 39, 215, 16, 62, 105, 124, 103, 188, 124, 94, 0, 62, 74, 31, 221, 61, 102, 255, 15, 190, 238, 220, 111, 61, 133, 196, 142, 189, 124, 151, 64, 61, 36, 19, 132, 61, 130, 86, 240, 189, 160, 245, 5, 62, 133, 92, 118, 189, 222, 250, 160, 189, 114, 116, 15, 62, 255, 107, 3, 190, 111, 28, 20, 188, 212, 137, 190, 61, 185, 75, 215, 189, 241, 247, 2, 190, 208, 159, 226, 59, 111, 123, 166, 189, 243, 20, 231, 189, 125, 135, 158, 61, 133, 111, 232, 189, 135, 112, 148, 189, 126, 124, 45, 62, 141, 72, 150, 189, 77, 133, 231, 189, 102, 158, 56, 60, 118, 201, 244, 189, 138, 82, 18, 61, 232, 250, 136, 61, 71, 143, 42, 190, 162, 97, 205, 60, 89, 211, 138, 189, 87, 37, 4, 190, 221, 201, 3, 62, 243, 98, 139, 60, 122, 242, 94, 189, 213, 49, 46, 190, 214, 77, 234, 61, 232, 80, 26, 190, 231, 191, 93, 61, 142, 32, 23, 190, 184, 26, 138, 61, 12, 183, 7, 190, 173, 183, 237, 189, 183, 231, 140, 61, 242, 47, 4, 190, 72, 117, 31, 62, 14, 167, 31, 190, 6, 3, 22, 62, 180, 70, 50, 60, 106, 176, 187, 61, 127, 33, 29, 190};
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
                alignas(float) const unsigned char memory[] = {199, 254, 223, 60, 234, 207, 65, 187, 216, 124, 54, 189, 33, 225, 90, 61, 217, 237, 58, 189, 218, 176, 110, 188, 137, 54, 12, 62, 173, 122, 105, 188, 115, 32, 28, 62, 96, 176, 45, 61, 201, 159, 17, 190, 205, 173, 35, 62, 75, 194, 105, 189, 184, 229, 7, 190, 83, 208, 22, 190, 234, 85, 223, 189, 10, 37, 216, 189, 186, 9, 190, 189, 93, 70, 247, 61, 9, 240, 36, 62, 12, 45, 40, 189, 105, 230, 173, 189, 120, 236, 150, 188, 112, 96, 199, 61, 212, 202, 10, 190, 136, 126, 159, 188, 236, 243, 180, 61, 32, 17, 20, 190, 104, 153, 1, 62, 80, 126, 42, 190, 144, 162, 207, 61, 49, 70, 203, 189};
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
                alignas(float) const unsigned char memory[] = {205, 219, 40, 190, 134, 99, 108, 60, 220, 144, 59, 189, 27, 187, 85, 61, 60, 12, 46, 190, 109, 103, 76, 61, 109, 88, 197, 61, 198, 173, 213, 189, 109, 212, 119, 61, 159, 41, 191, 61, 64, 133, 138, 61, 109, 149, 205, 61, 95, 149, 207, 188, 143, 161, 21, 62, 40, 44, 1, 62, 224, 2, 16, 190, 206, 44, 40, 190, 1, 27, 163, 189, 154, 165, 171, 60, 41, 10, 144, 60, 10, 130, 91, 189, 155, 214, 28, 62, 32, 20, 178, 188, 138, 241, 6, 190, 126, 129, 48, 62, 18, 9, 51, 188, 192, 98, 39, 190, 205, 73, 22, 62, 170, 54, 66, 189, 34, 204, 202, 186, 194, 150, 34, 62, 84, 97, 17, 189, 80, 13, 11, 62, 163, 186, 174, 61, 123, 105, 186, 189, 249, 103, 222, 60, 206, 142, 16, 190, 211, 215, 103, 61, 135, 29, 199, 189, 175, 193, 153, 61, 152, 225, 180, 188, 220, 193, 3, 62, 3, 59, 18, 190, 229, 224, 49, 190, 105, 226, 222, 61, 52, 220, 50, 190, 253, 144, 191, 189, 157, 247, 29, 62, 127, 227, 251, 61, 48, 147, 187, 189, 32, 82, 242, 60, 116, 134, 109, 61, 145, 119, 238, 189, 162, 190, 147, 189, 187, 159, 13, 190, 190, 157, 2, 62, 89, 56, 8, 190, 208, 87, 162, 61, 169, 212, 175, 61, 168, 54, 227, 61, 49, 185, 75, 187, 46, 242, 163, 61, 122, 23, 35, 62, 239, 128, 175, 61};
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
                alignas(float) const unsigned char memory[] = {215, 227, 45, 62, 120, 252, 183, 189};
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
    alignas(float) const unsigned char memory[] = {215, 34, 150, 191, 170, 207, 152, 191, 8, 11, 200, 190};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {84, 135, 50, 62, 32, 98, 17, 190};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0063/steps/000000000000000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}