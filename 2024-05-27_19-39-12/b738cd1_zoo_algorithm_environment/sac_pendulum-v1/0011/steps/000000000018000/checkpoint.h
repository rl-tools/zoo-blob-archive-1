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
                alignas(float) const unsigned char memory[] = {101, 135, 185, 61, 36, 214, 255, 190, 102, 215, 143, 59, 101, 165, 0, 63, 25, 43, 193, 60, 52, 49, 210, 190, 112, 53, 0, 191, 89, 45, 207, 191, 54, 146, 168, 190, 165, 223, 142, 190, 24, 175, 254, 61, 53, 113, 165, 189, 113, 37, 103, 62, 164, 225, 150, 63, 93, 241, 243, 62, 101, 19, 99, 190, 201, 228, 181, 191, 151, 49, 183, 190, 44, 246, 154, 190, 61, 83, 159, 190, 39, 237, 232, 62, 244, 222, 220, 190, 85, 126, 94, 62, 239, 102, 5, 191, 187, 149, 114, 63, 246, 88, 70, 63, 236, 22, 211, 62, 206, 189, 11, 191, 213, 85, 167, 190, 96, 204, 178, 190, 13, 249, 86, 188, 60, 238, 164, 62, 216, 103, 151, 190, 157, 62, 196, 62, 57, 22, 74, 191, 215, 237, 29, 62, 14, 148, 18, 190, 114, 218, 253, 190, 246, 130, 239, 62, 121, 140, 73, 190, 1, 39, 196, 62, 150, 54, 50, 63, 210, 120, 116, 62, 52, 168, 181, 63, 247, 219, 123, 62, 68, 178, 0, 191, 104, 84, 7, 191, 63, 157, 208, 62, 119, 99, 50, 63, 215, 109, 169, 191, 227, 142, 188, 190, 65, 143, 215, 62, 210, 237, 109, 191, 80, 94, 108, 62, 109, 61, 100, 63, 58, 54, 177, 190, 207, 94, 29, 61, 191, 16, 33, 63, 155, 165, 138, 191, 246, 149, 178, 190, 136, 175, 56, 62, 109, 33, 124, 191, 248, 80, 131, 189, 188, 170, 38, 63, 226, 255, 157, 63, 26, 126, 69, 62, 227, 110, 79, 62, 198, 97, 103, 63, 220, 49, 100, 62, 152, 13, 25, 191, 228, 207, 219, 191, 150, 114, 14, 191, 61, 169, 41, 191, 56, 104, 47, 63, 156, 218, 14, 63, 5, 138, 55, 63, 238, 254, 201, 190, 31, 7, 137, 190, 99, 235, 91, 62, 252, 229, 154, 190, 196, 177, 238, 189, 253, 82, 55, 63, 79, 143, 92, 62, 112, 202, 33, 63, 105, 50, 165, 62, 109, 201, 147, 190, 74, 231, 0, 191, 70, 223, 185, 59, 34, 189, 17, 63, 133, 165, 8, 62, 151, 194, 139, 60, 153, 0, 255, 189, 71, 155, 213, 62, 228, 248, 92, 62, 159, 34, 184, 191, 216, 15, 124, 62};
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
                alignas(float) const unsigned char memory[] = {31, 198, 19, 191, 126, 149, 24, 191, 140, 237, 4, 190, 35, 244, 25, 63, 223, 141, 128, 190, 224, 104, 197, 189, 173, 253, 170, 190, 2, 74, 41, 62, 110, 155, 75, 191, 35, 196, 35, 190, 176, 225, 188, 62, 158, 60, 134, 62, 28, 37, 226, 189, 111, 9, 211, 62, 50, 238, 122, 62, 100, 21, 15, 63, 39, 55, 166, 188, 115, 194, 196, 58, 36, 94, 113, 190, 165, 23, 197, 190, 10, 34, 11, 63, 49, 120, 188, 190, 38, 155, 44, 63, 157, 236, 10, 62, 42, 160, 26, 63, 98, 117, 53, 191, 74, 44, 210, 62, 209, 133, 212, 190, 20, 204, 77, 190, 116, 21, 187, 62, 91, 252, 105, 191, 119, 113, 10, 188};
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
                alignas(float) const unsigned char memory[] = {185, 206, 224, 61, 202, 144, 220, 189, 154, 114, 152, 62, 77, 28, 253, 60, 179, 225, 57, 190, 136, 232, 201, 61, 243, 241, 227, 188, 70, 225, 53, 62, 49, 233, 98, 62, 211, 35, 145, 190, 62, 73, 53, 190, 39, 84, 90, 189, 127, 173, 68, 189, 61, 107, 20, 62, 38, 90, 130, 62, 247, 78, 56, 62, 238, 130, 60, 62, 4, 3, 91, 62, 97, 72, 217, 61, 79, 43, 38, 190, 241, 198, 160, 62, 69, 134, 141, 62, 109, 168, 36, 62, 21, 185, 25, 62, 106, 30, 10, 189, 24, 75, 75, 190, 188, 127, 11, 62, 173, 11, 10, 62, 124, 31, 2, 62, 167, 183, 105, 61, 149, 1, 67, 60, 54, 243, 50, 62, 228, 191, 120, 61, 233, 217, 243, 189, 18, 252, 177, 189, 21, 194, 135, 61, 17, 122, 16, 191, 168, 199, 170, 188, 251, 50, 124, 189, 64, 208, 30, 187, 251, 146, 4, 191, 25, 79, 71, 190, 112, 209, 50, 190, 148, 109, 244, 62, 202, 169, 3, 62, 135, 12, 28, 190, 137, 99, 13, 191, 154, 209, 19, 62, 35, 1, 190, 188, 69, 25, 198, 62, 33, 248, 122, 62, 52, 224, 253, 189, 0, 67, 22, 62, 71, 64, 85, 191, 46, 65, 61, 190, 143, 30, 44, 189, 199, 244, 94, 190, 226, 12, 164, 62, 112, 206, 249, 189, 45, 155, 87, 189, 169, 228, 220, 188, 185, 245, 131, 190, 76, 103, 135, 190, 69, 30, 144, 62, 181, 243, 135, 60, 101, 17, 233, 188, 170, 198, 160, 61, 168, 103, 250, 61, 175, 196, 192, 61, 240, 151, 46, 190, 226, 248, 38, 190, 52, 100, 58, 62, 28, 59, 208, 190, 181, 119, 109, 189, 74, 110, 135, 61, 45, 23, 179, 62, 162, 186, 33, 190, 194, 35, 251, 190, 104, 50, 49, 191, 64, 201, 25, 63, 159, 117, 160, 189, 144, 178, 146, 62, 117, 139, 226, 62, 20, 55, 99, 189, 240, 172, 10, 62, 180, 124, 89, 191, 32, 123, 70, 190, 167, 89, 66, 62, 203, 71, 40, 190, 101, 152, 149, 62, 69, 226, 19, 61, 232, 167, 203, 190, 192, 141, 72, 61, 152, 150, 75, 62, 109, 41, 159, 189, 116, 56, 205, 62, 147, 141, 24, 189, 150, 139, 62, 62, 216, 96, 248, 61, 95, 192, 145, 62, 85, 205, 128, 60, 75, 171, 80, 188, 243, 178, 176, 190, 48, 94, 82, 62, 22, 43, 85, 190, 129, 248, 255, 60, 85, 60, 76, 62, 58, 175, 136, 62, 208, 10, 84, 190, 115, 19, 20, 191, 163, 56, 40, 191, 18, 163, 85, 63, 100, 248, 15, 190, 247, 4, 212, 62, 126, 26, 5, 63, 180, 204, 31, 61, 174, 3, 173, 61, 206, 206, 48, 191, 75, 216, 238, 190, 21, 153, 157, 189, 129, 219, 107, 189, 211, 207, 159, 62, 165, 89, 38, 62, 61, 22, 247, 190, 209, 234, 43, 190, 54, 222, 200, 188, 157, 201, 56, 190, 120, 250, 37, 63, 174, 236, 32, 62, 40, 37, 159, 189, 80, 61, 128, 62, 51, 222, 225, 60, 136, 173, 132, 190, 96, 55, 236, 188, 178, 186, 168, 61, 180, 47, 139, 62, 117, 76, 19, 190, 158, 86, 0, 190, 110, 116, 195, 61, 119, 19, 152, 62, 199, 46, 194, 188, 103, 215, 202, 189, 180, 95, 35, 190, 240, 155, 13, 62, 41, 240, 148, 60, 249, 42, 138, 62, 1, 144, 83, 62, 112, 180, 118, 190, 23, 156, 228, 187, 31, 212, 132, 190, 168, 251, 122, 61, 196, 194, 205, 61, 245, 45, 20, 62, 60, 109, 147, 189, 184, 77, 142, 62, 43, 242, 13, 189, 136, 251, 20, 188, 236, 245, 121, 62, 205, 79, 247, 61, 19, 35, 127, 62, 129, 136, 219, 61, 32, 39, 12, 190, 84, 51, 104, 62, 128, 7, 162, 61, 249, 10, 158, 190, 170, 233, 192, 188, 17, 155, 83, 190, 182, 215, 180, 189, 167, 196, 98, 190, 104, 219, 10, 189, 222, 64, 210, 61, 140, 9, 209, 60, 215, 221, 159, 188, 23, 179, 9, 62, 149, 157, 23, 61, 225, 178, 141, 61, 73, 124, 8, 190, 172, 205, 18, 62, 10, 10, 184, 61, 100, 18, 176, 190, 225, 114, 138, 62, 172, 19, 148, 188, 213, 218, 56, 62, 164, 21, 31, 62, 57, 22, 176, 61, 65, 156, 147, 190, 7, 176, 101, 62, 151, 103, 233, 61, 188, 224, 61, 62, 42, 127, 68, 62, 80, 28, 31, 190, 124, 18, 162, 189, 71, 58, 32, 190, 73, 225, 27, 190, 107, 248, 20, 190, 124, 4, 54, 190, 6, 234, 165, 188, 37, 27, 31, 61, 85, 71, 71, 189, 87, 153, 9, 61, 167, 250, 94, 61, 102, 147, 163, 189, 110, 8, 227, 61, 212, 139, 66, 189, 168, 250, 35, 190, 21, 46, 33, 190, 145, 141, 26, 190, 74, 116, 2, 190, 193, 251, 16, 61, 147, 126, 83, 61, 148, 217, 139, 189, 218, 165, 18, 189, 187, 130, 253, 189, 243, 222, 1, 62, 196, 60, 207, 188, 135, 81, 15, 190, 254, 3, 26, 62, 29, 7, 138, 61, 136, 88, 11, 190, 232, 194, 244, 61, 226, 41, 110, 61, 32, 53, 67, 190, 147, 120, 7, 190, 187, 134, 65, 57, 250, 58, 35, 62, 219, 244, 114, 61, 128, 180, 170, 189, 72, 80, 26, 62, 205, 128, 242, 189, 135, 208, 166, 190, 215, 71, 52, 191, 93, 121, 110, 62, 232, 182, 43, 191, 160, 190, 204, 189, 216, 231, 255, 61, 237, 238, 248, 61, 12, 169, 39, 191, 61, 169, 252, 190, 206, 124, 153, 190, 159, 82, 100, 61, 175, 200, 233, 61, 238, 70, 138, 62, 82, 32, 212, 62, 198, 104, 56, 190, 10, 52, 81, 62, 58, 37, 34, 191, 137, 145, 237, 190, 28, 45, 51, 190, 112, 44, 77, 191, 3, 217, 25, 62, 124, 48, 52, 62, 19, 122, 244, 61, 229, 113, 164, 62, 51, 146, 205, 189, 212, 72, 81, 59, 242, 43, 128, 62, 213, 119, 25, 190, 12, 88, 118, 190, 6, 12, 169, 61, 164, 167, 2, 62, 170, 125, 65, 190, 178, 88, 130, 61, 44, 111, 205, 189, 225, 218, 227, 61, 24, 162, 178, 189, 96, 139, 132, 61, 60, 171, 232, 60, 141, 127, 2, 62, 32, 225, 4, 190, 13, 111, 20, 62, 146, 9, 239, 61, 150, 161, 44, 188, 216, 144, 178, 61, 53, 118, 136, 61, 242, 164, 144, 189, 65, 24, 90, 190, 110, 177, 136, 61, 226, 114, 3, 62, 139, 145, 86, 62, 1, 76, 62, 62, 39, 192, 21, 62, 50, 78, 81, 190, 199, 104, 58, 62, 89, 233, 150, 61, 233, 39, 9, 62, 42, 154, 217, 61, 60, 82, 118, 190, 164, 197, 104, 189, 147, 243, 198, 188, 239, 230, 5, 61, 161, 74, 63, 190, 213, 151, 138, 62, 236, 250, 84, 190, 149, 147, 230, 61, 142, 88, 38, 62, 159, 10, 136, 62, 146, 192, 206, 190, 181, 145, 202, 189, 157, 145, 194, 61, 150, 57, 126, 59, 54, 76, 205, 61, 118, 97, 13, 62, 212, 125, 147, 189, 175, 3, 132, 62, 172, 196, 76, 189, 232, 118, 52, 61, 27, 230, 73, 61, 21, 56, 132, 189, 95, 196, 65, 61, 172, 58, 40, 191, 13, 144, 95, 190, 156, 194, 47, 190, 60, 67, 173, 58, 151, 152, 245, 60, 189, 162, 248, 61, 212, 104, 9, 190, 170, 10, 86, 61, 74, 147, 19, 190, 163, 72, 228, 187, 206, 9, 254, 189, 99, 179, 19, 190, 237, 199, 185, 61, 163, 25, 199, 61, 214, 127, 29, 62, 148, 228, 6, 190, 42, 51, 106, 189, 72, 74, 225, 188, 125, 177, 243, 189, 63, 247, 47, 62, 38, 122, 18, 189, 249, 218, 170, 59, 232, 202, 68, 189, 65, 125, 184, 60, 148, 155, 26, 190, 53, 149, 12, 190, 69, 202, 222, 189, 249, 154, 229, 189, 103, 109, 49, 62, 40, 195, 181, 189, 111, 108, 172, 58, 102, 137, 40, 190, 174, 111, 189, 187, 29, 114, 130, 61, 89, 20, 81, 189, 93, 18, 40, 62, 236, 3, 28, 62, 16, 38, 193, 189, 114, 42, 211, 189, 66, 88, 52, 190, 153, 78, 133, 189, 63, 245, 195, 189, 69, 211, 52, 62, 170, 68, 30, 190, 132, 109, 219, 188, 176, 18, 175, 189, 0, 94, 184, 61, 164, 15, 12, 190, 162, 18, 25, 61, 214, 217, 88, 61, 29, 67, 105, 62, 198, 94, 103, 190, 110, 30, 88, 189, 55, 160, 68, 62, 46, 30, 88, 62, 100, 85, 189, 61, 133, 154, 155, 61, 10, 239, 0, 189, 117, 191, 129, 62, 65, 113, 210, 60, 195, 173, 182, 62, 128, 46, 59, 61, 80, 135, 56, 190, 16, 99, 23, 62, 130, 25, 178, 190, 248, 238, 68, 61, 255, 11, 59, 190, 137, 121, 39, 190, 115, 81, 133, 189, 158, 16, 100, 62, 114, 198, 118, 188, 21, 243, 130, 60, 130, 87, 135, 189, 44, 203, 108, 190, 73, 17, 191, 61, 87, 194, 163, 61, 60, 246, 82, 190, 104, 243, 9, 62, 117, 82, 45, 190, 21, 171, 146, 61, 180, 232, 75, 61, 75, 188, 194, 190, 20, 185, 187, 190, 70, 134, 126, 61, 237, 142, 23, 190, 205, 154, 176, 190, 190, 48, 74, 62, 235, 96, 42, 190, 168, 228, 206, 58, 173, 133, 2, 62, 105, 182, 17, 189, 8, 120, 244, 189, 84, 86, 46, 189, 155, 151, 98, 61, 192, 138, 34, 190, 36, 143, 66, 62, 60, 78, 50, 61, 100, 12, 5, 62, 208, 64, 210, 60, 148, 206, 116, 190, 184, 26, 226, 190, 228, 209, 63, 189, 95, 167, 43, 62, 50, 32, 74, 190, 244, 232, 245, 189, 102, 225, 174, 190, 6, 189, 17, 62, 41, 237, 231, 61, 117, 14, 135, 62, 5, 8, 241, 189, 208, 150, 79, 190, 35, 58, 201, 61, 220, 31, 56, 190, 89, 176, 40, 188, 165, 143, 250, 188, 206, 206, 7, 190, 182, 239, 63, 190, 66, 202, 52, 190, 182, 60, 26, 189, 82, 171, 72, 62, 248, 200, 99, 61, 153, 108, 87, 190, 30, 154, 12, 62, 105, 211, 1, 62, 40, 126, 168, 189, 204, 85, 175, 62, 204, 141, 28, 190, 63, 99, 166, 61, 189, 78, 226, 190, 72, 246, 98, 190, 234, 177, 138, 189, 253, 50, 129, 189, 135, 22, 64, 60, 131, 255, 130, 189, 92, 217, 138, 189, 142, 230, 66, 61, 186, 38, 119, 189, 150, 62, 112, 190, 203, 133, 37, 190, 150, 4, 239, 189, 222, 13, 139, 62, 156, 243, 151, 191, 107, 220, 216, 61, 94, 91, 15, 191, 221, 115, 9, 191, 23, 40, 159, 62, 182, 228, 34, 61, 188, 43, 41, 191, 178, 78, 167, 189, 76, 85, 195, 189, 161, 9, 153, 62, 155, 177, 203, 61, 165, 118, 35, 62, 172, 45, 37, 191, 135, 15, 11, 62, 159, 30, 105, 62, 20, 67, 154, 61, 10, 109, 74, 62, 105, 157, 218, 62, 60, 9, 71, 59, 148, 103, 78, 191, 159, 193, 97, 190, 128, 138, 200, 191, 65, 141, 115, 62, 22, 66, 65, 62, 174, 92, 50, 62, 241, 10, 191, 190, 178, 25, 195, 61, 219, 11, 183, 189, 164, 145, 217, 189, 188, 33, 12, 190, 220, 124, 155, 189, 125, 98, 83, 189, 190, 201, 35, 190, 225, 92, 105, 190, 57, 225, 4, 62, 117, 221, 28, 62, 67, 172, 130, 61, 95, 243, 173, 189, 210, 77, 184, 189, 110, 50, 129, 61, 244, 78, 153, 61, 251, 30, 62, 189, 6, 200, 51, 190, 25, 5, 211, 189, 34, 252, 22, 61, 74, 134, 124, 188, 164, 137, 227, 61, 137, 141, 15, 189, 170, 182, 221, 189, 39, 131, 234, 189, 157, 39, 19, 190, 87, 211, 244, 61, 89, 69, 180, 189, 80, 48, 202, 61, 30, 142, 128, 61, 89, 58, 152, 189, 140, 21, 186, 59, 124, 91, 13, 62, 216, 12, 17, 189, 8, 250, 125, 190, 49, 184, 155, 189, 111, 62, 43, 190, 231, 92, 167, 189, 96, 48, 172, 61, 36, 122, 157, 189, 23, 32, 215, 189, 88, 225, 18, 190, 44, 154, 250, 61, 83, 146, 43, 189, 95, 239, 163, 189, 111, 15, 142, 189, 126, 59, 34, 190, 231, 23, 253, 189, 234, 243, 213, 61, 219, 129, 136, 61, 210, 174, 33, 190, 4, 135, 103, 61, 235, 194, 177, 60, 146, 93, 41, 190, 83, 54, 50, 190, 206, 44, 133, 189, 99, 130, 149, 189, 149, 200, 254, 189, 25, 92, 186, 60, 211, 233, 26, 62, 115, 226, 24, 190, 72, 161, 14, 190, 245, 207, 248, 189, 158, 79, 242, 189, 166, 21, 27, 190, 141, 254, 43, 62, 60, 219, 41, 190, 109, 254, 202, 189, 157, 180, 134, 61, 200, 31, 13, 62, 217, 137, 117, 62, 191, 210, 167, 191, 47, 91, 137, 62, 182, 36, 209, 189, 194, 77, 240, 190, 58, 128, 254, 61, 32, 128, 202, 190, 40, 200, 28, 191, 193, 183, 76, 62, 60, 90, 162, 190, 222, 98, 156, 189, 116, 19, 159, 62, 33, 84, 63, 62, 254, 231, 42, 190, 126, 162, 123, 59, 42, 144, 240, 62, 46, 254, 132, 190, 110, 27, 151, 62, 225, 17, 3, 63, 85, 107, 128, 62, 33, 193, 33, 191, 185, 224, 131, 62, 162, 157, 240, 191, 61, 185, 155, 62, 78, 127, 31, 190, 236, 196, 87, 62, 6, 191, 29, 190, 68, 207, 29, 62, 24, 132, 184, 61, 80, 1, 13, 190, 125, 69, 25, 190, 234, 79, 246, 61, 150, 205, 111, 62, 147, 201, 141, 189, 64, 81, 167, 62, 2, 94, 146, 188, 70, 172, 218, 58, 107, 44, 87, 60, 217, 189, 251, 61, 183, 157, 175, 190, 110, 144, 112, 188, 68, 126, 5, 62, 33, 32, 4, 62, 168, 87, 201, 188, 76, 194, 131, 189, 38, 232, 35, 62, 209, 225, 137, 62, 139, 225, 250, 189, 117, 195, 150, 61, 149, 119, 218, 189, 200, 20, 181, 190, 39, 20, 197, 61, 62, 195, 124, 190, 175, 35, 28, 62, 206, 52, 129, 189, 181, 156, 41, 62, 151, 138, 132, 190, 205, 146, 137, 62, 62, 171, 94, 190, 156, 179, 131, 60, 205, 0, 168, 61, 163, 105, 97, 190, 38, 146, 236, 188, 234, 99, 23, 190, 149, 244, 227, 62, 195, 117, 134, 191, 127, 99, 246, 60, 222, 76, 106, 190, 1, 232, 11, 191, 117, 91, 174, 188, 33, 222, 69, 190, 108, 15, 8, 191, 53, 239, 147, 61, 235, 71, 82, 57, 28, 133, 110, 189, 222, 122, 178, 189, 129, 222, 49, 62, 12, 76, 246, 187, 63, 218, 38, 62, 34, 31, 198, 62, 156, 48, 116, 61, 139, 9, 78, 62, 21, 29, 255, 62, 138, 140, 204, 188, 40, 246, 4, 191, 179, 245, 149, 61, 126, 142, 201, 191, 138, 107, 125, 62, 45, 234, 8, 63, 111, 15, 45, 62, 15, 15, 59, 189, 57, 148, 102, 62, 167, 71, 14, 62, 215, 46, 149, 188, 212, 242, 59, 190, 205, 120, 228, 61, 196, 181, 194, 190, 92, 102, 56, 63, 96, 165, 134, 62, 206, 195, 185, 191, 108, 95, 19, 191, 28, 16, 38, 191, 77, 204, 172, 61, 100, 11, 196, 62, 57, 203, 111, 62, 116, 17, 45, 61, 44, 119, 57, 61, 222, 98, 103, 191, 91, 173, 231, 190, 15, 182, 183, 58, 51, 161, 169, 61, 127, 10, 168, 190, 74, 108, 145, 189, 215, 215, 188, 62, 110, 150, 98, 191, 115, 56, 164, 61, 128, 10, 186, 62, 151, 198, 173, 62, 152, 91, 122, 62, 103, 104, 255, 190, 132, 181, 85, 191, 7, 69, 25, 62, 56, 74, 234, 62, 92, 134, 153, 188, 252, 97, 28, 62, 53, 106, 33, 62, 173, 146, 54, 191, 228, 185, 135, 189, 62, 94, 51, 190, 70, 8, 212, 189, 119, 109, 132, 190, 223, 190, 206, 190, 73, 39, 190, 190, 121, 213, 177, 61, 20, 2, 17, 190, 183, 169, 254, 190, 140, 83, 198, 190, 84, 49, 214, 188, 198, 40, 179, 62, 169, 186, 62, 61, 86, 124, 11, 61, 187, 130, 192, 190, 247, 192, 13, 62, 217, 196, 217, 61, 48, 138, 234, 61, 9, 45, 136, 62, 175, 123, 68, 62, 61, 83, 242, 61, 5, 46, 5, 191, 135, 90, 109, 190, 191, 186, 1, 190, 194, 232, 229, 60, 255, 93, 135, 62, 29, 32, 47, 61, 207, 243, 159, 190, 225, 151, 11, 62, 52, 207, 20, 190, 221, 180, 135, 190, 254, 149, 210, 61, 171, 88, 10, 62, 158, 52, 22, 62, 80, 37, 14, 190, 231, 120, 249, 190, 153, 162, 218, 61, 219, 250, 34, 62, 85, 63, 246, 189, 175, 39, 216, 190, 5, 86, 244, 62, 155, 84, 102, 191, 146, 93, 89, 190, 194, 42, 211, 62, 210, 53, 18, 62, 51, 96, 4, 62, 80, 136, 156, 190, 206, 70, 26, 190, 77, 134, 121, 188, 25, 71, 242, 62, 212, 62, 115, 62, 92, 244, 92, 62, 28, 104, 166, 62, 149, 221, 105, 62, 254, 104, 211, 190, 148, 100, 245, 189, 154, 3, 232, 189, 13, 169, 42, 61, 16, 117, 30, 190, 198, 109, 129, 61, 163, 221, 98, 189, 68, 55, 187, 190, 250, 79, 62, 62, 38, 251, 108, 62, 148, 126, 223, 189, 30, 245, 93, 62, 177, 47, 108, 190, 150, 139, 115, 189, 1, 10, 253, 190, 218, 82, 102, 187, 100, 14, 149, 187, 218, 168, 185, 188, 112, 68, 83, 191, 99, 36, 60, 190, 111, 143, 166, 189, 122, 244, 173, 62, 40, 218, 91, 61, 81, 203, 103, 190, 98, 209, 8, 191, 8, 221, 226, 62, 229, 247, 62, 62, 246, 141, 31, 62, 197, 104, 186, 62, 202, 156, 179, 62, 72, 183, 111, 62, 154, 35, 77, 191, 111, 54, 180, 190, 64, 162, 113, 190, 3, 7, 187, 61, 224, 173, 59, 62, 24, 14, 227, 188, 186, 218, 213, 190, 85, 252, 217, 60, 207, 239, 93, 190, 195, 152, 199, 190, 207, 186, 44, 62, 40, 220, 159, 186, 55, 212, 166, 189, 249, 120, 164, 190, 131, 7, 48, 189, 31, 41, 35, 191, 239, 31, 16, 63, 135, 63, 198, 189, 200, 143, 54, 190, 108, 170, 203, 60, 83, 213, 30, 63, 214, 90, 143, 189, 199, 89, 136, 190, 172, 25, 252, 189, 232, 88, 16, 190, 42, 203, 168, 62, 93, 21, 223, 190, 141, 121, 159, 190, 233, 232, 111, 191, 143, 50, 46, 191, 243, 89, 71, 62, 112, 153, 143, 191, 227, 46, 178, 62, 177, 237, 225, 61, 138, 103, 200, 191, 219, 184, 151, 189, 198, 189, 199, 61, 197, 29, 28, 62, 100, 15, 155, 190, 27, 36, 26, 191, 54, 141, 32, 62, 237, 113, 34, 191, 122, 213, 108, 62, 0, 192, 5, 62, 180, 58, 186, 62, 41, 93, 139, 190, 185, 169, 10, 190, 148, 120, 201, 62, 8, 141, 55, 189, 126, 245, 133, 61, 58, 113, 240, 188, 58, 225, 194, 62, 254, 200, 68, 190, 15, 184, 94, 62, 35, 247, 42, 62, 78, 60, 25, 62, 154, 213, 53, 61, 29, 180, 22, 190, 217, 243, 125, 188, 252, 237, 141, 62, 202, 126, 154, 190, 0, 77, 220, 62, 50, 187, 198, 62, 212, 215, 133, 190, 101, 209, 145, 61, 129, 92, 122, 190, 163, 89, 34, 189, 126, 222, 134, 62, 215, 183, 35, 63, 19, 183, 30, 190, 241, 240, 171, 189, 94, 57, 200, 62, 219, 224, 86, 61, 91, 13, 185, 189, 11, 28, 168, 190, 124, 83, 130, 189, 125, 200, 223, 189, 14, 170, 69, 189, 236, 253, 15, 62, 28, 166, 127, 190, 125, 39, 43, 61, 86, 36, 40, 62, 209, 7, 38, 190, 182, 164, 2, 190, 42, 175, 144, 188, 235, 98, 130, 190, 254, 67, 85, 62, 112, 144, 67, 62, 82, 224, 118, 189, 3, 144, 109, 190, 24, 247, 50, 61, 252, 18, 115, 62, 13, 92, 210, 61, 14, 9, 132, 60, 83, 22, 79, 62, 73, 77, 7, 190, 166, 71, 59, 190, 158, 253, 43, 189, 99, 134, 40, 190, 88, 77, 45, 190, 61, 60, 63, 188, 85, 204, 137, 60, 44, 171, 55, 190, 24, 100, 37, 190, 232, 164, 114, 190, 110, 40, 97, 190, 67, 83, 152, 61, 84, 249, 13, 62, 155, 128, 237, 190, 106, 5, 235, 62, 36, 18, 123, 61, 98, 38, 109, 190, 13, 15, 244, 60, 163, 156, 159, 190, 52, 246, 11, 62, 33, 198, 210, 62, 15, 112, 63, 61, 21, 70, 175, 188, 140, 141, 88, 190, 40, 227, 30, 191, 195, 165, 28, 62, 56, 17, 245, 62, 26, 72, 132, 190, 56, 53, 53, 190, 34, 21, 100, 190, 248, 79, 53, 62, 173, 91, 230, 190, 127, 2, 52, 62, 245, 226, 184, 62, 118, 128, 104, 62, 225, 183, 80, 62, 147, 228, 136, 188, 142, 97, 70, 191, 120, 195, 239, 61, 111, 217, 86, 62, 56, 79, 233, 189, 226, 196, 136, 62, 55, 24, 214, 58, 39, 18, 37, 191, 228, 186, 29, 61, 45, 15, 186, 190, 76, 198, 105, 191, 228, 60, 85, 62, 191, 248, 226, 188, 117, 223, 205, 189, 170, 99, 59, 62, 207, 176, 1, 191, 139, 121, 183, 189, 72, 255, 5, 63, 252, 166, 148, 190, 244, 249, 192, 61, 15, 153, 212, 189, 20, 77, 183, 61, 87, 248, 214, 62, 82, 115, 146, 60, 210, 53, 239, 190, 184, 177, 99, 190, 190, 231, 231, 61, 202, 77, 2, 62, 29, 193, 2, 191, 208, 67, 205, 62, 40, 20, 193, 62, 40, 73, 203, 191, 164, 29, 84, 62, 134, 59, 170, 189, 135, 245, 1, 62, 247, 30, 78, 190, 30, 253, 49, 191, 43, 16, 55, 62, 48, 204, 209, 189, 53, 241, 44, 190, 105, 180, 51, 62, 175, 147, 134, 61, 122, 112, 76, 190, 148, 140, 138, 62, 87, 93, 147, 188, 79, 205, 96, 191, 172, 251, 223, 59, 172, 18, 159, 61, 95, 143, 175, 62, 106, 217, 114, 62, 8, 146, 134, 62, 34, 221, 148, 61, 240, 21, 190, 189, 157, 78, 203, 61, 54, 78, 29, 62, 171, 2, 68, 62, 171, 123, 189, 190, 29, 35, 168, 61, 214, 226, 144, 189, 64, 95, 150, 191, 193, 91, 178, 189, 141, 240, 4, 63, 77, 14, 227, 62, 131, 145, 167, 190, 63, 203, 186, 61, 251, 230, 119, 190, 181, 212, 139, 59, 61, 65, 23, 62, 95, 218, 47, 61, 133, 116, 6, 62, 149, 142, 88, 188, 61, 206, 171, 189, 33, 134, 220, 189, 230, 22, 127, 62, 88, 215, 147, 191, 152, 225, 192, 60, 95, 11, 139, 189, 93, 188, 230, 189, 39, 31, 194, 190, 248, 202, 39, 62, 6, 249, 66, 189, 112, 8, 202, 189, 208, 40, 123, 61, 129, 139, 118, 61, 243, 231, 1, 191, 169, 24, 233, 61, 124, 237, 184, 62, 125, 122, 208, 190, 59, 235, 149, 189, 171, 251, 145, 189, 151, 244, 62, 188, 113, 136, 206, 190, 108, 250, 83, 190, 31, 69, 88, 62, 246, 172, 181, 62, 22, 36, 22, 191, 228, 65, 201, 189, 217, 58, 152, 190, 19, 177, 24, 62, 53, 255, 132, 190, 238, 189, 194, 62, 137, 133, 254, 61, 211, 23, 220, 188, 71, 168, 175, 190, 151, 103, 66, 60, 244, 205, 234, 189, 116, 164, 196, 61, 18, 216, 8, 190, 200, 120, 198, 190, 149, 126, 30, 189, 47, 173, 16, 189, 68, 47, 4, 62, 161, 62, 143, 62, 95, 69, 123, 190, 148, 120, 196, 61, 42, 51, 110, 62, 163, 111, 254, 189, 69, 48, 143, 189, 252, 4, 169, 61, 251, 82, 56, 190, 6, 13, 71, 188, 137, 129, 145, 61, 255, 53, 179, 61, 52, 67, 32, 62, 101, 46, 130, 62, 161, 194, 175, 62, 171, 54, 233, 188, 135, 143, 185, 61, 122, 204, 110, 190, 160, 217, 93, 190, 80, 175, 136, 61, 113, 197, 152, 62, 147, 231, 137, 60, 187, 102, 156, 61, 225, 135, 114, 190, 91, 45, 222, 60};
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
                alignas(float) const unsigned char memory[] = {214, 87, 4, 189, 72, 222, 232, 61, 189, 215, 154, 60, 223, 16, 68, 61, 14, 3, 96, 62, 232, 182, 168, 183, 194, 9, 58, 61, 2, 152, 254, 189, 51, 228, 88, 61, 191, 226, 62, 62, 251, 97, 46, 190, 136, 98, 158, 62, 158, 241, 156, 189, 153, 188, 73, 189, 53, 2, 0, 62, 228, 128, 63, 190, 70, 235, 198, 189, 178, 151, 163, 61, 19, 115, 147, 61, 118, 218, 228, 61, 32, 55, 186, 62, 125, 173, 2, 61, 186, 223, 162, 190, 124, 134, 52, 62, 137, 31, 3, 62, 232, 24, 74, 190, 63, 98, 40, 190, 154, 14, 48, 62, 222, 238, 162, 61, 49, 160, 110, 62, 29, 17, 232, 187, 97, 79, 116, 62};
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
                alignas(float) const unsigned char memory[] = {196, 20, 70, 190, 86, 126, 200, 62, 153, 207, 143, 62, 176, 88, 241, 62, 139, 195, 130, 189, 212, 135, 48, 189, 221, 21, 170, 189, 186, 200, 8, 63, 167, 61, 114, 189, 60, 105, 24, 61, 123, 163, 167, 188, 183, 252, 76, 189, 207, 63, 191, 189, 118, 171, 139, 186, 147, 0, 128, 63, 252, 163, 244, 61, 195, 148, 140, 61, 31, 237, 107, 63, 252, 228, 61, 59, 250, 140, 20, 63, 227, 144, 149, 191, 49, 39, 166, 62, 176, 207, 50, 191, 175, 228, 23, 63, 28, 104, 156, 63, 77, 220, 8, 63, 152, 109, 93, 190, 187, 167, 47, 191, 18, 77, 22, 63, 203, 168, 216, 190, 188, 37, 16, 191, 126, 209, 66, 190, 183, 133, 134, 189, 235, 15, 222, 190, 158, 41, 148, 62, 159, 219, 4, 62, 104, 45, 167, 190, 187, 176, 240, 189, 7, 117, 13, 62, 183, 226, 226, 190, 29, 187, 23, 190, 17, 137, 125, 190, 135, 187, 208, 59, 145, 170, 99, 190, 23, 142, 255, 189, 154, 173, 248, 188, 1, 220, 81, 62, 0, 175, 120, 60, 57, 224, 250, 61, 72, 199, 154, 62, 77, 54, 137, 190, 53, 229, 42, 188, 167, 80, 214, 62, 159, 160, 139, 61, 160, 172, 174, 62, 109, 183, 10, 63, 124, 52, 124, 190, 151, 175, 130, 61, 9, 113, 160, 186, 177, 207, 41, 62, 3, 20, 154, 189, 115, 111, 196, 189, 17, 199, 184, 60, 140, 75, 7, 190};
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
                alignas(float) const unsigned char memory[] = {240, 202, 16, 190, 203, 85, 84, 190};
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
    alignas(float) const unsigned char memory[] = {221, 247, 16, 63, 190, 7, 195, 62, 232, 84, 35, 63};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {202, 152, 217, 191, 6, 111, 72, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0011/steps/000000000018000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}