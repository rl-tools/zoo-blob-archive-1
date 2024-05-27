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
                alignas(float) const unsigned char memory[] = {103, 235, 3, 63, 64, 31, 113, 63, 211, 104, 21, 63, 3, 5, 179, 61, 140, 237, 46, 190, 99, 154, 211, 62, 46, 227, 28, 191, 178, 229, 56, 63, 218, 188, 90, 62, 189, 104, 242, 62, 158, 130, 149, 63, 21, 11, 72, 62, 73, 178, 61, 191, 104, 159, 203, 63, 48, 33, 191, 62, 12, 99, 235, 62, 226, 230, 139, 62, 26, 39, 42, 191, 86, 247, 206, 62, 38, 255, 179, 190, 74, 65, 143, 58, 4, 160, 87, 191, 95, 232, 127, 63, 96, 176, 224, 62, 244, 159, 12, 189, 114, 168, 245, 191, 21, 68, 191, 190, 116, 92, 37, 63, 56, 50, 145, 63, 199, 156, 55, 62, 88, 4, 152, 60, 29, 248, 40, 191, 172, 77, 163, 62, 164, 222, 200, 62, 168, 254, 130, 191, 160, 202, 75, 190, 254, 203, 239, 61, 45, 81, 226, 62, 147, 120, 4, 191, 145, 6, 236, 60, 34, 78, 67, 189, 69, 167, 12, 191, 5, 108, 16, 63, 154, 203, 171, 63, 206, 97, 137, 62, 36, 113, 225, 190, 184, 174, 55, 191, 0, 217, 179, 190, 3, 3, 31, 188, 214, 22, 69, 191, 184, 131, 250, 189, 120, 166, 81, 62, 116, 41, 1, 63, 83, 30, 58, 63, 165, 133, 57, 62, 147, 148, 75, 63, 147, 242, 55, 191, 241, 84, 130, 189, 33, 54, 44, 62, 201, 96, 9, 191, 115, 82, 254, 61, 95, 68, 21, 63, 30, 158, 146, 62, 1, 40, 71, 190, 164, 100, 22, 190, 120, 43, 6, 191, 165, 2, 64, 62, 255, 224, 233, 61, 6, 203, 205, 62, 232, 184, 130, 62, 199, 20, 128, 63, 188, 114, 231, 62, 77, 188, 74, 63, 21, 2, 235, 62, 19, 200, 0, 61, 115, 12, 119, 191, 65, 2, 56, 63, 108, 74, 209, 190, 90, 138, 27, 191, 129, 141, 247, 190, 71, 89, 199, 59, 13, 66, 176, 61, 108, 26, 133, 62, 108, 114, 53, 62, 111, 185, 237, 190, 151, 94, 164, 190, 103, 235, 46, 63, 25, 0, 53, 63, 74, 153, 10, 61, 235, 198, 140, 62, 55, 220, 4, 63, 248, 71, 148, 191, 96, 76, 140, 190, 15, 202, 204, 62, 84, 196, 136, 191, 74, 45, 169, 190};
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
                alignas(float) const unsigned char memory[] = {39, 70, 184, 190, 100, 5, 71, 62, 144, 180, 44, 63, 97, 213, 62, 62, 122, 25, 12, 62, 223, 195, 193, 61, 101, 192, 19, 191, 124, 122, 241, 62, 195, 19, 216, 190, 44, 56, 128, 190, 249, 97, 139, 61, 25, 227, 144, 62, 138, 129, 155, 61, 158, 169, 132, 190, 46, 221, 24, 190, 26, 168, 7, 63, 208, 1, 214, 62, 51, 178, 50, 62, 111, 205, 84, 62, 51, 72, 173, 190, 172, 27, 216, 62, 253, 24, 154, 190, 219, 233, 69, 63, 121, 36, 86, 189, 162, 84, 130, 190, 36, 101, 39, 62, 221, 75, 48, 63, 108, 9, 157, 62, 233, 125, 142, 190, 129, 119, 5, 191, 232, 92, 235, 189, 132, 56, 136, 190};
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
                alignas(float) const unsigned char memory[] = {19, 101, 152, 60, 20, 77, 161, 189, 75, 21, 178, 60, 131, 47, 0, 63, 34, 235, 101, 62, 133, 196, 222, 189, 225, 97, 38, 190, 237, 71, 53, 189, 196, 199, 192, 61, 200, 20, 234, 62, 198, 86, 235, 187, 183, 185, 212, 191, 206, 220, 79, 62, 111, 76, 141, 62, 38, 170, 21, 63, 44, 149, 229, 188, 125, 32, 189, 191, 166, 73, 42, 62, 3, 169, 57, 62, 125, 6, 121, 62, 45, 145, 33, 188, 33, 59, 166, 62, 18, 203, 45, 189, 81, 9, 128, 62, 47, 45, 240, 62, 184, 163, 240, 190, 240, 73, 60, 191, 146, 19, 147, 61, 31, 11, 37, 190, 161, 227, 62, 190, 25, 205, 177, 191, 245, 204, 98, 191, 55, 152, 139, 62, 234, 112, 97, 190, 251, 64, 42, 190, 159, 135, 2, 62, 56, 11, 23, 63, 0, 132, 87, 62, 191, 68, 132, 189, 232, 210, 19, 62, 92, 118, 13, 62, 98, 112, 165, 61, 207, 26, 133, 191, 161, 25, 81, 190, 86, 235, 150, 62, 1, 170, 0, 62, 74, 94, 119, 58, 13, 24, 57, 62, 96, 76, 46, 190, 49, 172, 111, 189, 62, 7, 22, 62, 44, 252, 53, 62, 97, 195, 95, 60, 55, 86, 163, 61, 212, 101, 30, 190, 55, 167, 73, 62, 18, 62, 10, 189, 112, 148, 63, 62, 196, 97, 119, 190, 157, 72, 31, 60, 6, 42, 141, 190, 156, 134, 122, 191, 108, 93, 139, 62, 97, 225, 76, 62, 151, 207, 180, 190, 63, 157, 110, 189, 34, 99, 127, 61, 221, 39, 170, 188, 251, 150, 222, 62, 124, 197, 84, 62, 12, 110, 6, 190, 139, 169, 165, 62, 231, 177, 208, 191, 180, 161, 84, 191, 173, 216, 85, 60, 249, 189, 247, 62, 6, 10, 214, 190, 150, 212, 8, 63, 36, 224, 26, 191, 230, 65, 208, 189, 84, 190, 197, 61, 191, 126, 37, 189, 130, 212, 244, 190, 176, 208, 235, 62, 122, 129, 17, 61, 208, 50, 249, 189, 1, 191, 12, 62, 121, 132, 172, 189, 128, 212, 147, 62, 240, 169, 187, 189, 76, 64, 167, 62, 217, 37, 22, 61, 233, 131, 121, 62, 206, 249, 180, 190, 181, 125, 199, 62, 94, 105, 31, 189, 54, 77, 41, 190, 136, 143, 168, 62, 201, 171, 16, 191, 192, 32, 203, 190, 222, 97, 55, 191, 124, 182, 187, 190, 72, 89, 0, 62, 21, 112, 229, 189, 195, 3, 17, 191, 205, 71, 242, 190, 211, 158, 125, 61, 102, 42, 164, 62, 116, 137, 11, 191, 164, 233, 230, 190, 164, 76, 160, 191, 25, 12, 19, 191, 96, 128, 210, 61, 166, 36, 41, 62, 164, 136, 155, 190, 187, 135, 162, 190, 129, 204, 165, 189, 212, 41, 98, 191, 97, 127, 30, 189, 108, 149, 174, 190, 49, 85, 134, 189, 185, 102, 21, 191, 44, 99, 35, 61, 250, 68, 56, 189, 231, 253, 69, 62, 140, 94, 92, 62, 49, 44, 209, 61, 242, 200, 5, 191, 18, 134, 203, 61, 63, 182, 145, 61, 245, 222, 155, 61, 190, 216, 221, 62, 50, 51, 29, 191, 53, 225, 70, 62, 128, 236, 199, 61, 194, 29, 206, 190, 154, 149, 83, 191, 36, 93, 4, 62, 182, 180, 50, 190, 205, 235, 113, 190, 119, 5, 199, 188, 47, 183, 51, 62, 143, 114, 181, 62, 143, 71, 130, 190, 212, 180, 160, 190, 199, 246, 254, 61, 197, 154, 132, 61, 250, 212, 144, 61, 70, 253, 16, 60, 22, 157, 32, 190, 200, 91, 80, 62, 226, 233, 25, 61, 38, 209, 113, 62, 158, 120, 133, 62, 107, 173, 73, 190, 100, 15, 144, 62, 91, 220, 210, 189, 234, 135, 224, 62, 193, 158, 77, 191, 138, 190, 11, 191, 94, 233, 162, 190, 151, 11, 101, 189, 122, 6, 174, 62, 42, 100, 208, 190, 188, 169, 35, 62, 151, 56, 31, 62, 170, 127, 34, 190, 46, 38, 181, 62, 38, 87, 235, 191, 26, 162, 24, 191, 207, 71, 129, 189, 110, 94, 2, 62, 77, 93, 176, 190, 194, 52, 34, 63, 44, 143, 4, 191, 172, 123, 65, 189, 29, 44, 177, 62, 157, 107, 152, 189, 24, 208, 0, 191, 226, 90, 227, 62, 157, 183, 9, 189, 134, 38, 75, 190, 218, 76, 154, 62, 130, 212, 158, 190, 164, 222, 84, 62, 4, 252, 104, 190, 53, 187, 101, 62, 61, 191, 151, 61, 155, 61, 13, 62, 167, 219, 37, 191, 67, 174, 69, 63, 89, 61, 43, 190, 245, 214, 101, 190, 242, 132, 234, 61, 93, 248, 25, 191, 183, 231, 137, 189, 121, 173, 190, 188, 53, 149, 68, 62, 26, 237, 223, 61, 226, 109, 85, 190, 221, 4, 59, 191, 22, 103, 41, 190, 51, 218, 235, 189, 245, 68, 8, 62, 190, 45, 167, 188, 72, 225, 144, 62, 16, 21, 181, 190, 204, 113, 131, 61, 129, 96, 138, 60, 145, 54, 41, 190, 204, 49, 158, 60, 141, 118, 164, 62, 216, 20, 26, 190, 185, 44, 175, 190, 17, 88, 97, 62, 79, 7, 217, 189, 49, 42, 151, 62, 66, 120, 36, 190, 239, 114, 251, 61, 88, 239, 22, 62, 26, 54, 60, 62, 254, 84, 190, 61, 243, 170, 115, 62, 73, 34, 209, 189, 238, 205, 19, 62, 15, 50, 98, 189, 166, 185, 129, 62, 67, 15, 152, 188, 27, 40, 110, 190, 228, 220, 153, 61, 190, 26, 69, 188, 41, 193, 104, 61, 192, 97, 38, 62, 72, 196, 104, 62, 129, 101, 6, 190, 57, 4, 205, 62, 146, 235, 254, 61, 174, 71, 62, 190, 155, 164, 17, 189, 244, 82, 147, 61, 255, 126, 236, 61, 70, 59, 172, 61, 149, 154, 202, 61, 88, 192, 112, 61, 206, 96, 14, 62, 48, 121, 34, 190, 49, 178, 145, 61, 172, 83, 15, 62, 195, 192, 60, 189, 89, 115, 155, 59, 235, 36, 132, 62, 71, 112, 24, 190, 13, 244, 56, 190, 52, 43, 12, 62, 212, 204, 140, 190, 62, 127, 108, 61, 34, 139, 130, 62, 30, 139, 55, 62, 94, 215, 132, 62, 8, 49, 141, 62, 85, 15, 162, 191, 30, 101, 186, 190, 127, 96, 221, 61, 87, 25, 133, 191, 14, 246, 157, 62, 88, 141, 159, 62, 111, 199, 178, 61, 25, 192, 65, 190, 177, 106, 21, 62, 36, 222, 150, 189, 229, 164, 237, 62, 177, 88, 165, 62, 94, 203, 212, 188, 9, 70, 0, 62, 59, 188, 251, 60, 8, 249, 138, 61, 105, 105, 176, 190, 203, 225, 170, 62, 105, 117, 175, 189, 254, 236, 184, 62, 184, 149, 66, 62, 18, 226, 42, 62, 223, 109, 169, 62, 15, 191, 162, 189, 213, 4, 11, 191, 213, 119, 199, 62, 66, 57, 20, 191, 166, 213, 58, 190, 143, 138, 37, 189, 200, 148, 50, 61, 170, 35, 9, 191, 247, 173, 61, 190, 175, 76, 182, 62, 57, 250, 148, 61, 245, 249, 178, 61, 170, 105, 81, 62, 30, 52, 69, 191, 237, 143, 15, 191, 54, 248, 25, 190, 168, 255, 91, 189, 226, 219, 26, 61, 26, 250, 243, 61, 188, 27, 210, 190, 97, 152, 85, 61, 115, 138, 235, 61, 75, 233, 94, 61, 250, 236, 191, 189, 33, 224, 18, 62, 172, 81, 34, 186, 16, 231, 48, 190, 139, 111, 20, 61, 211, 80, 9, 60, 252, 212, 60, 62, 127, 73, 175, 61, 154, 12, 127, 190, 239, 93, 119, 189, 52, 29, 3, 61, 26, 134, 31, 188, 9, 174, 8, 63, 242, 213, 248, 61, 179, 155, 189, 59, 137, 251, 73, 59, 206, 175, 45, 60, 141, 197, 232, 189, 247, 133, 242, 61, 49, 189, 57, 190, 38, 109, 7, 62, 20, 150, 228, 188, 33, 247, 218, 59, 165, 157, 178, 59, 80, 56, 109, 61, 105, 2, 107, 189, 10, 184, 36, 190, 102, 63, 43, 190, 13, 68, 153, 189, 213, 122, 85, 61, 29, 145, 26, 188, 162, 189, 26, 190, 137, 20, 8, 62, 136, 111, 232, 61, 209, 51, 6, 62, 11, 186, 222, 59, 36, 20, 32, 61, 187, 41, 38, 189, 222, 253, 45, 190, 161, 187, 87, 189, 3, 96, 109, 190, 141, 67, 4, 190, 220, 25, 185, 189, 227, 57, 126, 61, 12, 201, 1, 62, 228, 240, 23, 189, 30, 24, 53, 61, 109, 240, 169, 61, 148, 193, 78, 62, 187, 61, 185, 189, 70, 168, 11, 61, 171, 201, 35, 189, 206, 205, 134, 189, 130, 76, 174, 188, 187, 92, 66, 190, 46, 212, 39, 61, 87, 123, 0, 61, 250, 126, 29, 190, 209, 27, 36, 61, 20, 12, 135, 190, 79, 167, 3, 60, 177, 65, 20, 61, 13, 137, 225, 61, 72, 121, 181, 188, 14, 21, 187, 61, 85, 110, 138, 189, 49, 228, 58, 190, 79, 86, 141, 189, 94, 117, 18, 61, 231, 134, 13, 190, 31, 79, 149, 61, 158, 218, 159, 61, 107, 56, 89, 62, 82, 40, 86, 189, 205, 220, 55, 188, 88, 237, 11, 61, 173, 20, 35, 191, 0, 187, 47, 189, 203, 51, 193, 62, 232, 44, 96, 188, 244, 92, 158, 188, 47, 124, 102, 62, 43, 212, 242, 190, 108, 145, 16, 190, 172, 255, 196, 189, 244, 146, 86, 190, 117, 31, 128, 62, 41, 51, 75, 62, 42, 137, 71, 62, 239, 74, 113, 62, 146, 30, 140, 61, 48, 221, 255, 188, 143, 237, 144, 62, 55, 115, 56, 62, 212, 211, 152, 61, 1, 197, 168, 62, 129, 212, 2, 62, 128, 102, 185, 189, 198, 189, 56, 190, 163, 21, 3, 189, 162, 180, 57, 189, 79, 148, 28, 62, 32, 59, 105, 62, 177, 95, 62, 62, 48, 178, 153, 189, 21, 76, 110, 190, 193, 128, 102, 190, 71, 219, 175, 62, 153, 118, 148, 190, 208, 53, 115, 190, 181, 70, 227, 189, 52, 171, 27, 190, 122, 69, 35, 190, 162, 146, 186, 188, 40, 90, 9, 190, 249, 190, 160, 61, 239, 20, 68, 189, 64, 81, 219, 61, 234, 148, 53, 189, 103, 59, 229, 61, 176, 18, 106, 61, 154, 141, 226, 189, 38, 6, 6, 190, 137, 126, 198, 189, 45, 25, 32, 189, 90, 16, 253, 61, 97, 53, 80, 190, 165, 18, 26, 62, 61, 174, 71, 190, 228, 2, 149, 189, 169, 87, 100, 189, 244, 186, 58, 190, 190, 159, 4, 189, 19, 115, 0, 61, 46, 91, 26, 188, 34, 70, 153, 189, 79, 249, 254, 188, 234, 171, 129, 61, 70, 225, 122, 189, 201, 189, 153, 189, 228, 249, 234, 189, 110, 186, 183, 61, 58, 13, 156, 190, 43, 27, 162, 62, 50, 25, 125, 191, 250, 208, 255, 188, 15, 250, 80, 190, 41, 80, 32, 62, 155, 97, 157, 189, 106, 88, 41, 189, 143, 243, 56, 191, 48, 210, 170, 190, 116, 202, 168, 62, 178, 187, 168, 62, 63, 196, 151, 62, 145, 162, 12, 62, 47, 232, 50, 191, 233, 52, 139, 190, 244, 168, 67, 61, 70, 39, 243, 61, 219, 170, 64, 61, 70, 175, 180, 189, 46, 247, 10, 190, 3, 6, 63, 189, 21, 98, 193, 61, 193, 137, 110, 190, 3, 90, 150, 62, 252, 191, 178, 61, 94, 8, 140, 190, 179, 226, 195, 61, 31, 97, 25, 60, 192, 14, 175, 60, 243, 151, 252, 61, 4, 99, 127, 189, 50, 190, 45, 62, 110, 165, 154, 190, 173, 48, 134, 62, 80, 199, 149, 190, 162, 201, 96, 61, 138, 97, 86, 62, 242, 219, 46, 190, 150, 244, 125, 61, 254, 28, 25, 192, 65, 123, 21, 190, 135, 39, 71, 190, 253, 158, 241, 191, 208, 251, 59, 191, 222, 201, 212, 62, 252, 71, 140, 190, 88, 230, 246, 62, 136, 15, 147, 62, 82, 135, 167, 190, 246, 196, 56, 191, 5, 168, 227, 62, 61, 111, 23, 190, 57, 126, 191, 190, 152, 174, 180, 190, 200, 165, 131, 190, 194, 190, 188, 190, 91, 14, 58, 62, 90, 84, 107, 61, 116, 162, 214, 190, 20, 92, 150, 189, 126, 76, 36, 190, 208, 210, 149, 190, 82, 1, 207, 190, 16, 235, 147, 190, 129, 138, 64, 189, 144, 2, 222, 190, 201, 124, 57, 61, 50, 85, 126, 62, 246, 4, 52, 62, 218, 15, 24, 190, 253, 110, 118, 61, 162, 40, 131, 191, 218, 56, 206, 190, 190, 236, 37, 189, 51, 200, 90, 62, 249, 187, 133, 188, 209, 41, 133, 62, 63, 191, 219, 190, 249, 105, 209, 60, 235, 106, 73, 189, 146, 194, 138, 190, 245, 87, 43, 190, 82, 14, 67, 62, 142, 79, 68, 62, 92, 161, 251, 190, 223, 22, 99, 60, 104, 218, 230, 189, 108, 106, 238, 60, 77, 204, 156, 190, 210, 144, 191, 61, 177, 33, 50, 62, 230, 214, 116, 62, 62, 246, 48, 189, 16, 144, 200, 62, 66, 145, 30, 189, 141, 42, 129, 190, 133, 199, 156, 188, 5, 185, 200, 189, 105, 115, 254, 188, 47, 20, 160, 60, 66, 16, 144, 62, 250, 153, 23, 190, 84, 125, 69, 61, 107, 186, 214, 191, 136, 72, 185, 190, 108, 239, 176, 61, 200, 171, 147, 62, 134, 152, 93, 189, 114, 103, 61, 61, 82, 136, 167, 190, 61, 159, 36, 62, 173, 92, 149, 62, 194, 193, 172, 189, 6, 57, 137, 189, 77, 3, 80, 190, 157, 234, 109, 61, 15, 161, 142, 190, 56, 84, 58, 189, 46, 47, 27, 190, 243, 212, 8, 62, 102, 234, 6, 191, 101, 178, 103, 62, 74, 30, 58, 189, 174, 73, 130, 61, 46, 23, 163, 60, 137, 152, 80, 62, 165, 129, 169, 61, 1, 77, 182, 190, 76, 77, 2, 62, 108, 53, 70, 191, 154, 214, 163, 189, 93, 150, 161, 189, 174, 161, 26, 62, 178, 67, 191, 189, 118, 31, 61, 62, 183, 225, 63, 191, 183, 169, 204, 190, 135, 90, 91, 61, 158, 105, 67, 60, 72, 180, 216, 61, 1, 51, 81, 61, 85, 69, 100, 191, 42, 97, 253, 189, 138, 167, 221, 60, 231, 249, 130, 190, 226, 43, 26, 62, 226, 130, 108, 62, 53, 133, 14, 62, 189, 215, 184, 189, 31, 209, 205, 62, 28, 36, 15, 189, 212, 182, 134, 62, 214, 62, 168, 189, 179, 13, 191, 188, 240, 80, 42, 60, 111, 66, 201, 61, 51, 137, 169, 189, 2, 53, 99, 61, 120, 128, 14, 60, 17, 83, 222, 62, 155, 87, 59, 62, 0, 90, 133, 62, 194, 23, 245, 61, 253, 67, 108, 191, 86, 71, 65, 190, 235, 162, 38, 62, 16, 118, 135, 191, 230, 7, 155, 62, 211, 117, 224, 62, 60, 137, 61, 63, 110, 179, 3, 62, 77, 94, 11, 62, 95, 82, 83, 190, 58, 151, 236, 62, 126, 132, 59, 62, 88, 121, 89, 61, 243, 238, 232, 61, 192, 170, 38, 62, 9, 255, 168, 60, 115, 95, 45, 191, 60, 141, 84, 189, 190, 237, 162, 190, 82, 217, 59, 61, 13, 243, 6, 187, 167, 236, 39, 189, 237, 177, 178, 62, 98, 74, 129, 190, 204, 134, 2, 191, 173, 124, 191, 62, 217, 70, 67, 191, 120, 52, 181, 190, 120, 36, 64, 188, 242, 233, 75, 190, 97, 205, 47, 187, 98, 68, 230, 187, 65, 194, 181, 188, 49, 42, 240, 61, 174, 71, 156, 61, 133, 176, 48, 190, 34, 157, 11, 190, 157, 70, 106, 189, 153, 222, 4, 189, 81, 253, 59, 189, 98, 186, 93, 61, 124, 124, 15, 190, 153, 198, 48, 60, 11, 176, 217, 189, 66, 117, 153, 60, 251, 146, 31, 190, 246, 53, 209, 188, 58, 131, 163, 61, 143, 133, 203, 189, 0, 211, 88, 189, 67, 207, 23, 60, 133, 251, 173, 61, 52, 138, 56, 189, 211, 51, 180, 189, 247, 185, 65, 189, 102, 41, 187, 60, 139, 21, 95, 189, 93, 86, 205, 188, 12, 112, 13, 62, 122, 65, 232, 189, 33, 218, 39, 188, 39, 18, 31, 62, 71, 67, 4, 191, 11, 122, 25, 191, 130, 194, 236, 62, 22, 83, 16, 62, 205, 182, 134, 189, 65, 89, 29, 190, 236, 192, 161, 189, 0, 175, 46, 191, 121, 60, 90, 189, 244, 116, 141, 61, 243, 75, 91, 61, 255, 157, 52, 187, 106, 234, 182, 191, 11, 121, 90, 62, 10, 14, 17, 62, 213, 71, 36, 62, 253, 182, 235, 61, 37, 12, 126, 62, 115, 59, 141, 61, 224, 155, 181, 61, 37, 150, 76, 190, 123, 23, 250, 190, 104, 247, 14, 191, 222, 134, 24, 62, 35, 163, 50, 190, 179, 147, 67, 62, 45, 69, 177, 61, 173, 3, 128, 62, 86, 149, 86, 189, 139, 14, 56, 189, 66, 104, 18, 190, 15, 247, 11, 61, 197, 71, 143, 191, 119, 139, 8, 62, 236, 222, 24, 62, 90, 29, 129, 62, 150, 13, 7, 190, 110, 91, 244, 61, 228, 216, 122, 190, 167, 101, 135, 190, 31, 237, 108, 189, 45, 228, 9, 62, 237, 120, 233, 189, 54, 224, 201, 187, 228, 143, 191, 190, 120, 14, 5, 189, 93, 182, 119, 189, 158, 218, 101, 189, 191, 112, 90, 187, 166, 174, 85, 61, 44, 157, 143, 189, 6, 170, 17, 190, 185, 65, 71, 61, 18, 156, 223, 189, 149, 188, 157, 62, 45, 91, 110, 61, 239, 99, 143, 189, 127, 63, 89, 61, 81, 43, 66, 62, 243, 244, 9, 62, 43, 59, 210, 62, 162, 189, 61, 189, 5, 52, 154, 190, 84, 196, 4, 62, 108, 71, 152, 189, 76, 161, 173, 62, 222, 22, 223, 61, 207, 207, 141, 62, 162, 51, 139, 189, 134, 14, 202, 61, 90, 30, 186, 191, 206, 82, 148, 60, 226, 133, 13, 60, 229, 128, 41, 62, 11, 225, 190, 190, 77, 52, 248, 61, 204, 248, 131, 190, 117, 7, 97, 62, 93, 131, 101, 62, 142, 54, 223, 188, 95, 147, 103, 190, 96, 222, 212, 189, 51, 210, 48, 62, 59, 119, 5, 191, 26, 196, 130, 189, 140, 93, 25, 62, 116, 156, 45, 63, 212, 53, 14, 190, 104, 207, 14, 62, 75, 66, 225, 61, 179, 16, 163, 61, 203, 40, 23, 61, 52, 7, 252, 62, 50, 138, 137, 61, 159, 205, 150, 62, 192, 128, 64, 62, 233, 32, 151, 190, 126, 181, 233, 62, 100, 114, 253, 190, 11, 156, 249, 189, 187, 48, 113, 189, 83, 248, 185, 190, 213, 162, 2, 191, 143, 77, 109, 62, 108, 128, 2, 190, 132, 241, 198, 190, 154, 62, 131, 189, 127, 189, 25, 62, 105, 243, 151, 62, 201, 46, 189, 190, 149, 223, 130, 190, 197, 140, 207, 61, 99, 196, 104, 62, 18, 83, 42, 62, 32, 240, 35, 189, 39, 131, 17, 61, 57, 173, 204, 188, 36, 98, 132, 62, 132, 56, 232, 62, 214, 117, 161, 62, 41, 42, 90, 190, 104, 96, 207, 188, 167, 236, 106, 60, 235, 244, 61, 63, 191, 141, 139, 191, 17, 103, 93, 191, 115, 130, 140, 188, 134, 205, 94, 60, 173, 179, 157, 62, 24, 81, 123, 62, 242, 78, 253, 189, 191, 72, 171, 190, 106, 52, 147, 61, 101, 19, 42, 190, 51, 109, 113, 190, 81, 237, 178, 62, 67, 128, 196, 59, 226, 109, 248, 189, 95, 195, 131, 62, 194, 180, 170, 190, 105, 236, 208, 62, 39, 204, 5, 60, 133, 141, 51, 189, 205, 181, 42, 62, 208, 245, 96, 62, 247, 175, 6, 190, 253, 84, 240, 60, 31, 1, 113, 62, 157, 246, 213, 60, 151, 15, 130, 61, 226, 87, 211, 57, 147, 187, 130, 62, 234, 82, 55, 189, 156, 93, 26, 62, 204, 60, 142, 189, 130, 4, 115, 61, 23, 239, 102, 191, 109, 253, 168, 190, 180, 1, 232, 189, 1, 127, 155, 190, 103, 21, 169, 62, 83, 193, 211, 61, 140, 93, 10, 190, 230, 153, 153, 190, 232, 251, 120, 189, 57, 239, 51, 190, 90, 242, 13, 63, 34, 177, 174, 62, 231, 82, 194, 189, 88, 177, 179, 189, 225, 201, 112, 61, 23, 6, 83, 190, 49, 129, 165, 62, 123, 60, 158, 62, 161, 169, 89, 61, 32, 158, 92, 189, 55, 112, 45, 62, 11, 218, 3, 190, 216, 221, 158, 190, 155, 184, 230, 62, 249, 155, 50, 191, 36, 150, 131, 61, 110, 218, 140, 61, 181, 76, 136, 62, 109, 233, 57, 62, 205, 155, 202, 190, 19, 105, 36, 191, 160, 10, 176, 190, 61, 6, 55, 191, 183, 242, 213, 190, 104, 147, 139, 61, 198, 94, 246, 187, 106, 202, 108, 62, 86, 35, 78, 62, 11, 159, 156, 189, 3, 200, 31, 190, 107, 129, 20, 187, 54, 164, 232, 187, 160, 144, 12, 191, 169, 165, 176, 62, 91, 78, 228, 61, 200, 19, 148, 190, 191, 170, 247, 61, 129, 20, 142, 190, 234, 143, 246, 62, 201, 123, 141, 188, 141, 194, 76, 190, 222, 81, 112, 62, 140, 67, 32, 62, 244, 159, 28, 190, 224, 203, 15, 61, 28, 124, 53, 62, 94, 30, 184, 61, 84, 162, 0, 62, 121, 239, 178, 61, 135, 19, 219, 62, 100, 96, 32, 190, 76, 177, 14, 189, 34, 206, 35, 190, 72, 118, 66, 62, 82, 28, 126, 191, 168, 72, 15, 191, 5, 155, 59, 62, 92, 245, 55, 190, 234, 59, 34, 190, 154, 122, 178, 62, 122, 178, 200, 189, 28, 182, 224, 189, 197, 164, 132, 188, 37, 14, 18, 190, 220, 144, 128, 61, 119, 58, 253, 62, 185, 76, 139, 189, 104, 4, 192, 191, 56, 172, 92, 60, 30, 27, 117, 190, 192, 18, 186, 62, 52, 194, 235, 190, 137, 107, 176, 191, 245, 43, 137, 61, 247, 92, 21, 189, 185, 174, 217, 189, 152, 153, 21, 62, 206, 114, 152, 190, 244, 27, 148, 60, 107, 247, 3, 62, 120, 219, 29, 63, 113, 72, 173, 61, 225, 21, 36, 191, 57, 223, 64, 188, 85, 108, 90, 190, 4, 149, 125, 62, 160, 83, 142, 191, 173, 34, 133, 191, 80, 234, 64, 61, 114, 83, 55, 188, 121, 165, 42, 62, 209, 52, 2, 190, 196, 191, 85, 189, 163, 230, 95, 190, 147, 187, 19, 62, 42, 203, 56, 61, 74, 22, 51, 61, 181, 228, 99, 61, 153, 82, 22, 190, 17, 175, 162, 61, 57, 1, 88, 62, 184, 128, 145, 190, 86, 183, 69, 62, 23, 211, 3, 62, 198, 33, 55, 188, 114, 141, 36, 61, 168, 54, 68, 62, 76, 197, 105, 189, 159, 206, 5, 62, 168, 188, 255, 62, 146, 70, 6, 62, 191, 152, 175, 61, 66, 218, 135, 62, 170, 186, 115, 62, 82, 224, 73, 62, 206, 35, 62, 190, 239, 200, 14, 189, 107, 150, 218, 61, 11, 149, 48, 191, 232, 34, 137, 190, 224, 242, 139, 191, 235, 187, 126, 190, 39, 7, 134, 190, 235, 206, 23, 61, 196, 122, 158, 62, 123, 4, 63, 62, 55, 64, 34, 62, 122, 151, 191, 62, 253, 209, 135, 191, 157, 209, 217, 189, 43, 66, 81, 191, 83, 129, 246, 61, 48, 43, 199, 189, 234, 86, 145, 61, 218, 192, 191, 190, 114, 37, 61, 62, 98, 163, 112, 61, 149, 33, 164, 191, 68, 242, 94, 190, 46, 77, 60, 188, 113, 216, 247, 189, 85, 205, 226, 190, 78, 34, 121, 58, 35, 48, 190, 190, 25, 47, 26, 63, 225, 82, 37, 190, 185, 31, 51, 61, 173, 87, 208, 61, 154, 12, 81, 190, 62, 224, 19, 191, 166, 207, 113, 62, 175, 90, 90, 62, 139, 128, 142, 190, 142, 73, 224, 61, 244, 3, 64, 191, 125, 233, 66, 190, 5, 152, 33, 190, 240, 171, 195, 62, 64, 116, 35, 190, 196, 82, 252, 189, 178, 138, 62, 191, 44, 143, 71, 190, 254, 112, 200, 61, 38, 251, 135, 61, 252, 81, 235, 188, 126, 49, 166, 62, 98, 54, 32, 191, 153, 196, 41, 190, 81, 24, 58, 189, 151, 246, 227, 61, 241, 195, 134, 189, 129, 55, 157, 62, 102, 121, 10, 190, 1, 214, 224, 190, 190, 57, 7, 61, 131, 151, 235, 188, 79, 145, 30, 61, 52, 189, 36, 190, 201, 20, 162, 59, 130, 146, 240, 61, 151, 9, 147, 62, 219, 25, 223, 61, 172, 246, 165, 62, 83, 243, 216, 61};
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
                alignas(float) const unsigned char memory[] = {78, 196, 110, 190, 39, 49, 135, 190, 7, 92, 156, 62, 177, 48, 5, 62, 84, 219, 190, 188, 48, 1, 226, 61, 53, 17, 20, 190, 90, 151, 195, 62, 109, 55, 107, 62, 52, 76, 103, 61, 154, 168, 18, 190, 197, 205, 81, 62, 136, 237, 62, 62, 21, 168, 232, 61, 169, 187, 32, 62, 204, 198, 235, 188, 242, 193, 53, 62, 76, 226, 63, 62, 241, 12, 19, 62, 226, 194, 69, 62, 208, 57, 221, 189, 202, 39, 68, 190, 171, 99, 21, 189, 83, 189, 194, 61, 66, 61, 137, 189, 235, 202, 206, 61, 122, 121, 55, 62, 15, 21, 173, 62, 252, 245, 67, 190, 120, 199, 36, 62, 113, 50, 2, 62, 222, 11, 148, 61};
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
                alignas(float) const unsigned char memory[] = {186, 157, 101, 63, 18, 57, 153, 62, 165, 2, 97, 63, 129, 51, 107, 63, 76, 228, 4, 191, 164, 232, 110, 63, 89, 206, 26, 62, 116, 55, 15, 190, 56, 66, 89, 191, 167, 225, 176, 62, 95, 61, 240, 58, 163, 243, 239, 60, 239, 196, 85, 190, 5, 241, 248, 59, 93, 159, 198, 62, 150, 76, 213, 63, 212, 6, 133, 62, 227, 236, 1, 62, 164, 86, 215, 62, 142, 123, 170, 191, 224, 242, 172, 61, 31, 118, 107, 62, 14, 75, 69, 61, 13, 42, 151, 62, 18, 103, 121, 191, 171, 56, 24, 190, 59, 50, 79, 191, 186, 208, 184, 190, 108, 164, 99, 63, 0, 76, 199, 188, 22, 17, 154, 63, 238, 91, 212, 62, 15, 136, 111, 61, 51, 30, 161, 61, 108, 224, 158, 62, 207, 165, 231, 62, 147, 192, 237, 190, 3, 206, 138, 62, 146, 20, 240, 189, 228, 204, 171, 190, 172, 49, 121, 61, 117, 183, 116, 62, 134, 127, 246, 61, 241, 202, 42, 189, 153, 20, 60, 190, 144, 84, 252, 61, 11, 12, 161, 190, 80, 208, 104, 189, 232, 217, 243, 189, 72, 16, 230, 190, 11, 52, 33, 190, 117, 48, 63, 63, 220, 197, 210, 61, 247, 52, 11, 189, 224, 144, 64, 190, 232, 109, 252, 190, 20, 204, 211, 62, 56, 230, 69, 61, 120, 150, 88, 62, 164, 251, 152, 61, 53, 121, 114, 62, 10, 144, 86, 190, 215, 98, 242, 62, 45, 107, 179, 62};
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
                alignas(float) const unsigned char memory[] = {113, 84, 232, 189, 9, 137, 31, 191};
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
    alignas(float) const unsigned char memory[] = {194, 29, 239, 191, 197, 67, 204, 60, 53, 129, 9, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {145, 25, 135, 64, 240, 213, 13, 189};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0012/steps/000000000020000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}