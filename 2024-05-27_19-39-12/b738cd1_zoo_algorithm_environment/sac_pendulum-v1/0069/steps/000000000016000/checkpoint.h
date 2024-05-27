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
                alignas(float) const unsigned char memory[] = {49, 25, 26, 191, 181, 93, 56, 191, 50, 150, 243, 190, 187, 13, 5, 191, 111, 146, 120, 62, 15, 228, 211, 62, 103, 243, 4, 62, 94, 51, 126, 63, 215, 94, 111, 190, 16, 252, 40, 191, 219, 3, 135, 62, 236, 223, 243, 190, 85, 40, 146, 190, 68, 225, 137, 62, 46, 64, 26, 187, 32, 103, 71, 191, 124, 151, 142, 191, 11, 98, 224, 189, 130, 166, 246, 62, 234, 167, 87, 63, 96, 157, 169, 62, 198, 54, 177, 190, 188, 173, 136, 62, 226, 137, 6, 191, 184, 89, 125, 189, 146, 3, 22, 62, 237, 224, 60, 63, 185, 75, 22, 63, 57, 222, 238, 60, 32, 239, 86, 189, 212, 76, 74, 63, 34, 254, 29, 63, 251, 39, 117, 62, 116, 199, 234, 190, 47, 187, 211, 63, 221, 202, 139, 62, 223, 91, 149, 61, 92, 22, 36, 62, 253, 142, 50, 189, 196, 118, 229, 190, 10, 177, 62, 191, 147, 165, 153, 62, 111, 34, 41, 63, 175, 149, 111, 190, 103, 39, 169, 190, 238, 129, 193, 190, 231, 55, 194, 191, 57, 128, 143, 190, 44, 31, 56, 63, 13, 169, 16, 191, 106, 243, 120, 190, 35, 77, 21, 191, 81, 90, 49, 191, 221, 92, 47, 63, 84, 220, 39, 62, 82, 53, 73, 191, 183, 127, 167, 62, 14, 107, 228, 189, 29, 92, 208, 62, 106, 181, 188, 62, 136, 148, 227, 62, 179, 40, 172, 191, 24, 95, 79, 190, 101, 76, 188, 190, 87, 152, 187, 63, 6, 183, 203, 62, 90, 188, 13, 191, 195, 155, 198, 190, 241, 10, 132, 189, 175, 30, 65, 62, 146, 136, 149, 191, 39, 42, 98, 190, 5, 151, 54, 63, 117, 189, 49, 61, 195, 208, 10, 191, 199, 1, 128, 62, 3, 242, 136, 191, 155, 45, 92, 62, 11, 244, 240, 190, 223, 142, 157, 191, 8, 77, 75, 190, 157, 153, 214, 61, 248, 105, 27, 63, 159, 22, 126, 190, 120, 34, 209, 190, 102, 101, 3, 62, 113, 42, 94, 62, 19, 210, 42, 63, 111, 101, 148, 191, 75, 198, 210, 190, 15, 191, 205, 190, 29, 167, 183, 191, 200, 96, 244, 190, 23, 154, 25, 63, 15, 226, 138, 63, 193, 85, 135, 62};
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
                alignas(float) const unsigned char memory[] = {155, 91, 106, 191, 9, 44, 162, 190, 76, 91, 155, 60, 214, 58, 17, 191, 16, 174, 216, 62, 49, 107, 65, 190, 99, 121, 209, 190, 216, 132, 213, 190, 42, 35, 61, 190, 64, 245, 98, 190, 20, 138, 11, 191, 104, 221, 158, 190, 178, 53, 252, 190, 44, 207, 149, 61, 156, 108, 120, 191, 162, 223, 42, 190, 131, 202, 20, 191, 91, 84, 197, 190, 126, 32, 245, 61, 62, 87, 234, 62, 53, 236, 203, 62, 114, 148, 137, 190, 246, 80, 87, 63, 16, 102, 43, 62, 215, 1, 172, 62, 147, 125, 130, 62, 199, 112, 47, 190, 99, 7, 147, 189, 49, 196, 218, 62, 157, 166, 223, 190, 252, 75, 227, 189, 14, 183, 195, 62};
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
                alignas(float) const unsigned char memory[] = {69, 93, 185, 187, 73, 68, 39, 190, 9, 195, 58, 62, 119, 254, 63, 62, 150, 162, 183, 62, 205, 158, 173, 190, 190, 158, 205, 189, 214, 26, 99, 62, 41, 155, 179, 189, 71, 54, 73, 62, 26, 223, 10, 191, 96, 219, 42, 62, 29, 182, 225, 61, 234, 199, 53, 62, 155, 127, 143, 61, 7, 140, 254, 190, 189, 159, 76, 190, 168, 115, 39, 62, 226, 22, 19, 60, 75, 55, 63, 62, 110, 246, 8, 61, 120, 36, 111, 60, 213, 131, 18, 62, 238, 230, 156, 61, 63, 22, 203, 62, 20, 160, 190, 187, 240, 97, 231, 190, 59, 124, 154, 62, 7, 166, 78, 62, 243, 74, 176, 190, 99, 226, 51, 190, 139, 22, 204, 61, 118, 78, 14, 191, 202, 94, 130, 61, 105, 12, 160, 190, 211, 129, 243, 62, 102, 20, 192, 59, 243, 249, 135, 61, 47, 171, 241, 190, 76, 48, 4, 191, 186, 11, 158, 190, 187, 60, 181, 62, 229, 81, 90, 191, 152, 169, 236, 189, 242, 196, 31, 62, 60, 168, 235, 61, 22, 10, 34, 190, 248, 17, 227, 190, 248, 44, 186, 190, 238, 166, 80, 62, 225, 134, 251, 188, 12, 131, 201, 61, 49, 49, 120, 62, 26, 145, 155, 190, 157, 41, 224, 61, 151, 37, 128, 189, 185, 237, 193, 61, 13, 101, 187, 62, 99, 176, 143, 190, 82, 120, 236, 186, 207, 216, 217, 61, 35, 178, 1, 190, 186, 167, 113, 191, 114, 139, 80, 190, 22, 52, 40, 61, 91, 72, 188, 190, 14, 231, 14, 62, 140, 204, 168, 188, 216, 216, 203, 189, 29, 161, 187, 190, 233, 140, 60, 62, 24, 197, 165, 62, 12, 189, 136, 62, 35, 177, 171, 62, 238, 229, 242, 62, 122, 209, 249, 190, 148, 58, 49, 190, 50, 246, 249, 189, 197, 36, 126, 62, 141, 163, 124, 190, 121, 197, 201, 61, 142, 125, 209, 60, 79, 34, 129, 62, 104, 216, 16, 62, 152, 129, 97, 190, 12, 190, 97, 190, 21, 172, 192, 190, 234, 11, 150, 62, 191, 167, 42, 189, 131, 135, 59, 187, 17, 185, 85, 62, 94, 120, 13, 189, 85, 164, 198, 189, 18, 5, 169, 62, 186, 163, 9, 62, 224, 247, 168, 62, 152, 23, 218, 189, 17, 236, 203, 189, 28, 24, 237, 190, 213, 142, 181, 62, 20, 224, 82, 189, 44, 15, 64, 60, 124, 31, 97, 62, 217, 138, 88, 62, 108, 28, 15, 190, 82, 198, 44, 62, 171, 226, 44, 63, 180, 135, 243, 190, 4, 165, 148, 61, 228, 232, 44, 62, 209, 160, 11, 61, 196, 146, 34, 190, 13, 62, 43, 190, 16, 64, 17, 62, 251, 206, 104, 62, 203, 177, 7, 62, 93, 187, 161, 190, 19, 9, 2, 190, 68, 116, 247, 188, 96, 83, 52, 191, 190, 177, 251, 190, 131, 181, 121, 62, 45, 14, 123, 189, 162, 30, 231, 190, 67, 72, 36, 62, 184, 126, 92, 62, 132, 151, 159, 189, 176, 172, 152, 58, 79, 4, 216, 190, 54, 250, 253, 61, 49, 152, 168, 189, 18, 242, 159, 62, 131, 221, 218, 189, 221, 107, 10, 190, 78, 83, 154, 190, 104, 231, 88, 188, 196, 193, 151, 190, 44, 40, 123, 62, 13, 110, 148, 191, 43, 119, 228, 61, 54, 218, 245, 61, 117, 13, 196, 61, 186, 58, 58, 62, 222, 3, 182, 191, 111, 189, 69, 62, 178, 220, 50, 62, 157, 59, 144, 59, 35, 3, 175, 61, 205, 134, 130, 62, 46, 96, 147, 189, 204, 62, 71, 62, 219, 34, 147, 189, 5, 73, 169, 60, 139, 56, 78, 62, 27, 129, 116, 191, 52, 40, 83, 189, 171, 216, 15, 61, 210, 94, 139, 62, 220, 170, 20, 191, 46, 156, 156, 190, 222, 192, 226, 189, 21, 94, 245, 189, 35, 42, 216, 61, 9, 129, 89, 61, 6, 127, 23, 61, 10, 41, 242, 189, 65, 64, 65, 61, 152, 52, 213, 61, 210, 119, 192, 61, 131, 244, 175, 190, 5, 113, 165, 61, 164, 3, 17, 191, 34, 41, 4, 62, 31, 240, 207, 189, 55, 62, 5, 188, 87, 25, 4, 191, 230, 114, 15, 191, 23, 245, 203, 61, 123, 252, 6, 189, 48, 94, 215, 190, 97, 112, 209, 190, 62, 66, 61, 190, 147, 115, 36, 190, 197, 26, 107, 190, 123, 92, 113, 62, 93, 125, 75, 190, 39, 163, 231, 189, 68, 28, 132, 62, 61, 84, 138, 189, 62, 65, 217, 190, 199, 179, 61, 189, 236, 206, 55, 190, 7, 38, 240, 189, 137, 77, 171, 189, 196, 196, 111, 190, 115, 240, 9, 190, 39, 138, 230, 61, 171, 2, 116, 59, 173, 138, 191, 189, 173, 2, 138, 189, 240, 37, 13, 190, 229, 244, 236, 59, 53, 137, 197, 188, 83, 76, 250, 61, 109, 205, 198, 61, 182, 96, 47, 190, 165, 166, 108, 189, 131, 42, 44, 62, 83, 21, 52, 190, 192, 78, 160, 188, 63, 197, 14, 190, 176, 85, 227, 189, 94, 208, 200, 61, 144, 160, 137, 188, 59, 57, 32, 190, 173, 221, 235, 189, 44, 75, 230, 189, 74, 116, 18, 190, 187, 199, 171, 189, 179, 187, 85, 190, 16, 188, 114, 188, 14, 190, 11, 62, 7, 174, 28, 190, 172, 207, 243, 61, 74, 244, 170, 190, 119, 225, 231, 60, 47, 105, 160, 190, 206, 183, 177, 190, 186, 149, 181, 188, 119, 120, 167, 187, 103, 239, 99, 189, 172, 152, 47, 190, 12, 135, 97, 190, 112, 58, 22, 190, 28, 39, 32, 191, 150, 57, 229, 62, 134, 195, 202, 189, 159, 145, 105, 61, 55, 228, 184, 189, 172, 97, 185, 189, 55, 113, 208, 59, 9, 36, 115, 61, 210, 28, 141, 188, 92, 79, 194, 61, 246, 94, 142, 62, 138, 49, 241, 61, 159, 232, 107, 62, 165, 172, 127, 62, 37, 89, 148, 62, 41, 115, 113, 61, 144, 88, 245, 60, 182, 138, 107, 59, 78, 86, 125, 61, 218, 16, 67, 189, 111, 207, 173, 61, 233, 244, 200, 189, 14, 110, 162, 188, 193, 228, 8, 62, 230, 85, 148, 189, 132, 153, 127, 61, 144, 102, 38, 190, 66, 212, 161, 189, 211, 245, 32, 190, 134, 165, 51, 190, 186, 154, 233, 61, 151, 1, 11, 190, 128, 232, 26, 61, 140, 5, 89, 61, 147, 26, 46, 61, 71, 103, 35, 190, 154, 211, 40, 190, 192, 194, 40, 190, 207, 96, 153, 61, 117, 111, 5, 61, 24, 251, 254, 189, 21, 84, 4, 189, 228, 50, 171, 189, 218, 124, 28, 189, 86, 94, 223, 61, 162, 231, 32, 62, 54, 169, 203, 189, 38, 128, 210, 60, 51, 57, 91, 61, 185, 92, 100, 60, 80, 100, 24, 189, 110, 137, 52, 190, 98, 91, 22, 189, 88, 149, 212, 189, 11, 35, 173, 61, 192, 126, 158, 62, 23, 36, 246, 62, 39, 197, 31, 62, 102, 36, 120, 62, 77, 252, 231, 190, 234, 167, 21, 191, 248, 95, 152, 62, 153, 2, 33, 61, 32, 42, 162, 190, 56, 74, 120, 190, 31, 205, 29, 190, 9, 1, 207, 188, 157, 204, 120, 190, 67, 121, 133, 61, 228, 108, 3, 191, 179, 133, 179, 61, 157, 3, 175, 190, 43, 13, 154, 189, 207, 22, 171, 190, 212, 42, 72, 190, 129, 188, 120, 188, 238, 78, 150, 62, 57, 62, 189, 61, 163, 159, 143, 61, 150, 193, 243, 188, 163, 225, 71, 190, 170, 2, 157, 62, 130, 142, 100, 62, 82, 45, 186, 189, 52, 55, 237, 60, 180, 216, 50, 191, 251, 136, 83, 62, 3, 234, 248, 189, 94, 110, 173, 61, 29, 84, 52, 190, 41, 166, 149, 189, 80, 92, 46, 62, 122, 96, 193, 58, 131, 111, 159, 61, 57, 187, 88, 61, 90, 177, 99, 62, 28, 50, 64, 62, 185, 253, 35, 190, 11, 41, 167, 189, 147, 58, 104, 189, 167, 115, 83, 190, 52, 15, 113, 62, 17, 216, 153, 190, 12, 174, 16, 61, 87, 195, 135, 61, 132, 53, 84, 189, 198, 90, 87, 188, 70, 87, 151, 189, 218, 49, 58, 190, 14, 199, 120, 190, 53, 176, 1, 187, 226, 15, 9, 62, 0, 45, 137, 62, 47, 70, 225, 189, 169, 71, 16, 188, 241, 63, 127, 190, 203, 234, 73, 62, 229, 234, 138, 62, 96, 105, 155, 190, 75, 163, 15, 61, 116, 62, 73, 190, 76, 163, 102, 190, 38, 170, 34, 189, 128, 79, 17, 61, 24, 143, 31, 190, 4, 76, 161, 190, 241, 195, 23, 191, 66, 137, 131, 60, 184, 102, 19, 188, 15, 80, 14, 190, 200, 200, 138, 61, 55, 136, 46, 61, 12, 59, 79, 190, 84, 230, 3, 191, 252, 80, 238, 190, 125, 106, 54, 190, 203, 55, 136, 190, 143, 249, 35, 61, 54, 148, 30, 62, 112, 99, 197, 188, 127, 30, 140, 62, 58, 40, 135, 190, 176, 107, 184, 188, 24, 160, 32, 190, 199, 27, 150, 189, 36, 167, 255, 189, 9, 159, 191, 62, 103, 251, 12, 191, 40, 210, 144, 190, 223, 160, 216, 61, 158, 74, 50, 191, 251, 197, 176, 188, 133, 218, 166, 62, 40, 248, 135, 62, 169, 209, 168, 60, 82, 61, 58, 190, 57, 245, 59, 62, 1, 94, 82, 62, 54, 52, 60, 62, 37, 234, 4, 62, 47, 158, 235, 62, 239, 197, 219, 189, 129, 86, 117, 61, 232, 217, 23, 62, 109, 55, 17, 191, 34, 109, 151, 190, 47, 254, 128, 190, 48, 115, 62, 62, 124, 246, 193, 62, 205, 254, 32, 62, 195, 225, 16, 189, 208, 66, 44, 62, 192, 57, 126, 189, 231, 231, 232, 190, 245, 9, 187, 189, 86, 79, 65, 62, 49, 233, 179, 61, 130, 78, 171, 62, 195, 98, 5, 62, 227, 220, 155, 190, 85, 39, 172, 190, 133, 123, 84, 62, 117, 111, 228, 185, 15, 145, 88, 191, 170, 246, 86, 62, 2, 202, 97, 190, 105, 184, 102, 61, 75, 170, 114, 62, 135, 214, 178, 61, 49, 24, 40, 62, 214, 154, 223, 62, 178, 16, 154, 62, 134, 211, 186, 62, 206, 116, 150, 190, 29, 65, 32, 190, 86, 152, 247, 57, 196, 46, 240, 190, 90, 151, 210, 62, 70, 31, 223, 190, 203, 241, 176, 190, 69, 225, 26, 62, 219, 137, 13, 62, 207, 70, 211, 189, 230, 94, 146, 190, 24, 54, 93, 62, 48, 194, 6, 190, 251, 19, 52, 189, 28, 24, 204, 190, 236, 203, 182, 62, 143, 246, 87, 190, 79, 1, 49, 62, 213, 45, 169, 190, 125, 124, 202, 62, 52, 6, 151, 62, 184, 210, 15, 190, 34, 32, 75, 191, 54, 10, 182, 62, 34, 4, 45, 190, 206, 44, 96, 62, 6, 90, 29, 63, 122, 27, 179, 61, 93, 210, 46, 62, 75, 176, 36, 63, 137, 178, 29, 62, 191, 66, 198, 62, 185, 19, 45, 191, 110, 198, 106, 61, 254, 77, 94, 61, 159, 16, 36, 191, 41, 119, 15, 187, 144, 100, 75, 191, 179, 62, 75, 190, 52, 145, 84, 190, 156, 249, 12, 62, 156, 59, 87, 190, 87, 174, 133, 191, 107, 52, 133, 62, 42, 66, 164, 190, 195, 11, 96, 188, 59, 224, 119, 191, 249, 172, 166, 62, 224, 175, 78, 189, 147, 213, 162, 60, 45, 178, 32, 191, 85, 222, 118, 61, 240, 116, 208, 61, 17, 100, 82, 61, 235, 169, 99, 191, 147, 140, 157, 62, 198, 131, 200, 190, 154, 212, 255, 61, 143, 241, 22, 62, 50, 206, 118, 62, 242, 249, 180, 62, 35, 160, 32, 190, 116, 109, 15, 62, 142, 166, 12, 187, 88, 49, 107, 191, 140, 36, 87, 60, 213, 77, 101, 62, 62, 160, 11, 191, 85, 207, 248, 60, 52, 110, 20, 191, 12, 247, 24, 60, 235, 15, 50, 62, 197, 50, 150, 190, 193, 88, 140, 190, 164, 247, 88, 191, 163, 104, 153, 62, 235, 77, 7, 191, 56, 201, 239, 189, 139, 28, 238, 190, 208, 149, 155, 62, 82, 178, 15, 60, 203, 208, 191, 189, 85, 79, 5, 191, 187, 86, 96, 62, 149, 82, 136, 62, 250, 37, 41, 190, 60, 199, 170, 58, 195, 235, 151, 190, 229, 27, 170, 189, 60, 133, 191, 189, 112, 224, 61, 190, 242, 148, 58, 61, 167, 253, 181, 190, 153, 134, 97, 188, 203, 222, 83, 191, 232, 164, 12, 191, 231, 174, 132, 62, 3, 60, 253, 61, 241, 128, 95, 187, 82, 180, 83, 190, 142, 194, 77, 62, 176, 60, 4, 63, 130, 174, 189, 61, 129, 175, 209, 61, 104, 199, 176, 189, 74, 80, 145, 62, 108, 227, 37, 62, 164, 136, 227, 62, 228, 110, 189, 62, 149, 201, 209, 61, 141, 223, 76, 190, 55, 53, 54, 190, 188, 39, 189, 190, 32, 115, 227, 189, 20, 186, 112, 62, 76, 242, 82, 191, 5, 94, 193, 189, 162, 48, 157, 189, 31, 150, 168, 189, 160, 95, 125, 189, 144, 62, 7, 190, 32, 75, 24, 190, 44, 194, 7, 190, 59, 8, 9, 62, 6, 18, 39, 61, 102, 190, 206, 61, 42, 163, 50, 189, 244, 181, 178, 61, 167, 247, 147, 61, 210, 237, 101, 61, 64, 132, 107, 190, 218, 79, 0, 190, 164, 67, 234, 61, 97, 59, 125, 59, 25, 115, 32, 190, 42, 7, 7, 190, 43, 113, 221, 189, 112, 120, 140, 60, 183, 6, 104, 59, 199, 128, 126, 189, 216, 42, 34, 189, 97, 211, 17, 190, 98, 212, 21, 189, 105, 56, 171, 61, 61, 228, 33, 61, 125, 69, 215, 61, 22, 83, 155, 61, 175, 192, 6, 189, 87, 182, 32, 190, 64, 125, 195, 190, 91, 100, 21, 62, 199, 50, 48, 190, 237, 182, 133, 190, 220, 252, 20, 190, 65, 41, 87, 62, 88, 47, 168, 188, 32, 192, 246, 190, 143, 212, 33, 190, 187, 147, 3, 190, 14, 126, 3, 191, 148, 115, 89, 62, 233, 62, 249, 189, 239, 213, 161, 61, 101, 145, 55, 61, 106, 213, 82, 62, 138, 193, 70, 62, 227, 210, 2, 62, 32, 214, 114, 190, 231, 193, 202, 61, 189, 250, 136, 62, 37, 251, 45, 62, 219, 86, 132, 61, 207, 254, 169, 61, 135, 34, 168, 62, 73, 49, 168, 61, 199, 33, 11, 62, 114, 142, 2, 190, 227, 91, 138, 61, 160, 193, 136, 60, 145, 93, 226, 189, 210, 199, 182, 59, 157, 228, 102, 61, 223, 134, 140, 190, 227, 3, 144, 189, 68, 48, 115, 190, 247, 223, 9, 61, 246, 204, 11, 190, 23, 224, 108, 62, 49, 126, 24, 62, 14, 248, 172, 186, 37, 9, 3, 191, 6, 229, 173, 62, 146, 60, 130, 190, 119, 100, 129, 61, 178, 155, 114, 191, 143, 173, 10, 189, 181, 35, 133, 190, 15, 123, 165, 61, 66, 30, 179, 190, 87, 222, 128, 190, 143, 88, 3, 190, 75, 130, 182, 190, 111, 22, 255, 189, 8, 166, 239, 61, 19, 186, 92, 190, 166, 170, 87, 190, 186, 175, 116, 190, 180, 4, 138, 190, 80, 103, 120, 189, 165, 85, 85, 62, 249, 84, 157, 187, 200, 189, 188, 61, 86, 62, 89, 61, 179, 197, 90, 189, 177, 103, 133, 188, 253, 9, 251, 189, 117, 219, 118, 190, 27, 231, 59, 62, 225, 170, 125, 61, 100, 66, 109, 190, 140, 19, 1, 61, 204, 115, 218, 61, 189, 3, 70, 189, 162, 22, 255, 190, 176, 205, 34, 190, 93, 190, 149, 60, 188, 112, 133, 189, 168, 6, 34, 190, 242, 217, 136, 189, 22, 83, 245, 190, 243, 66, 232, 189, 97, 64, 33, 61, 193, 232, 45, 62, 118, 185, 174, 62, 118, 170, 16, 190, 146, 36, 66, 62, 153, 210, 203, 188, 187, 127, 24, 62, 124, 205, 100, 62, 83, 151, 1, 190, 4, 192, 34, 190, 233, 56, 238, 60, 145, 159, 50, 190, 19, 217, 10, 190, 66, 195, 27, 62, 128, 173, 248, 189, 56, 140, 155, 189, 163, 130, 50, 190, 25, 201, 234, 189, 36, 71, 126, 61, 116, 150, 196, 189, 35, 29, 85, 189, 18, 57, 17, 62, 134, 200, 181, 188, 38, 32, 245, 61, 109, 115, 201, 188, 226, 83, 156, 61, 15, 133, 128, 187, 209, 234, 39, 190, 147, 57, 22, 62, 173, 91, 220, 188, 224, 46, 205, 61, 67, 135, 11, 190, 139, 78, 32, 59, 191, 152, 120, 189, 222, 203, 40, 190, 157, 85, 42, 189, 53, 232, 180, 188, 90, 53, 114, 61, 132, 142, 136, 189, 57, 170, 143, 189, 183, 120, 49, 190, 172, 118, 5, 61, 153, 49, 146, 60, 145, 186, 94, 189, 225, 141, 0, 190, 247, 55, 89, 60, 10, 129, 22, 191, 238, 192, 183, 62, 159, 21, 18, 190, 132, 223, 210, 189, 241, 17, 215, 61, 237, 211, 156, 61, 100, 82, 5, 191, 158, 57, 18, 191, 243, 101, 193, 190, 181, 198, 78, 61, 133, 244, 55, 191, 137, 80, 194, 61, 43, 152, 45, 61, 176, 160, 149, 62, 61, 19, 97, 62, 160, 35, 28, 190, 34, 205, 222, 62, 52, 167, 35, 188, 229, 109, 41, 189, 120, 82, 171, 61, 72, 173, 102, 62, 1, 128, 131, 61, 27, 123, 176, 62, 13, 99, 52, 62, 242, 161, 73, 62, 2, 15, 15, 62, 209, 174, 165, 190, 253, 17, 140, 190, 189, 191, 210, 188, 2, 148, 192, 62, 156, 157, 24, 190, 17, 144, 230, 189, 62, 84, 146, 188, 198, 190, 64, 189, 65, 79, 37, 187, 219, 206, 233, 189, 1, 147, 79, 61, 213, 190, 244, 60, 62, 121, 169, 61, 218, 38, 182, 189, 13, 77, 1, 190, 216, 102, 15, 62, 243, 200, 244, 188, 123, 157, 39, 190, 120, 34, 170, 189, 206, 174, 14, 189, 108, 229, 90, 60, 243, 79, 1, 190, 206, 0, 7, 189, 245, 74, 130, 61, 144, 63, 221, 61, 106, 140, 42, 190, 248, 224, 36, 190, 242, 6, 248, 189, 59, 62, 72, 189, 43, 24, 240, 188, 192, 199, 90, 61, 36, 54, 248, 189, 6, 131, 12, 190, 61, 143, 142, 188, 196, 71, 60, 189, 37, 202, 132, 189, 157, 84, 128, 61, 29, 145, 4, 189, 157, 210, 209, 190, 53, 72, 9, 62, 141, 131, 59, 188, 76, 66, 184, 189, 19, 23, 30, 61, 169, 149, 64, 62, 183, 162, 242, 190, 131, 5, 245, 190, 199, 197, 214, 190, 166, 175, 41, 190, 121, 56, 125, 191, 42, 59, 103, 190, 76, 131, 57, 189, 9, 28, 8, 63, 151, 19, 147, 189, 235, 98, 248, 189, 175, 35, 140, 189, 205, 120, 128, 62, 156, 71, 37, 190, 164, 187, 21, 190, 45, 17, 202, 62, 166, 59, 129, 190, 57, 249, 117, 62, 231, 145, 106, 62, 216, 77, 206, 61, 111, 182, 158, 62, 168, 158, 135, 190, 208, 235, 43, 189, 34, 175, 218, 189, 28, 252, 46, 62, 213, 19, 229, 189, 188, 5, 214, 188, 181, 131, 9, 189, 139, 75, 67, 60, 16, 131, 2, 190, 80, 155, 155, 61, 73, 53, 43, 189, 38, 48, 57, 187, 213, 198, 237, 189, 145, 238, 129, 189, 42, 72, 207, 60, 15, 217, 108, 189, 23, 139, 137, 61, 38, 65, 16, 190, 255, 107, 175, 61, 42, 179, 126, 189, 77, 186, 143, 58, 117, 171, 56, 61, 101, 58, 174, 61, 95, 164, 38, 61, 42, 230, 181, 59, 10, 159, 37, 189, 92, 37, 115, 189, 159, 161, 10, 61, 245, 92, 207, 188, 237, 235, 222, 189, 232, 116, 5, 190, 254, 184, 48, 190, 144, 245, 62, 188, 171, 234, 169, 188, 180, 133, 96, 187, 225, 197, 74, 61, 44, 121, 248, 61, 147, 174, 40, 62, 13, 255, 64, 189, 136, 75, 42, 61, 73, 14, 214, 189, 28, 99, 9, 190, 160, 213, 65, 60, 49, 78, 135, 189, 71, 53, 141, 189, 45, 77, 240, 61, 19, 75, 196, 59, 169, 86, 168, 189, 197, 153, 19, 190, 97, 169, 40, 189, 172, 155, 43, 190, 177, 215, 245, 61, 72, 243, 195, 61, 210, 216, 199, 61, 216, 99, 153, 189, 127, 219, 31, 190, 155, 122, 158, 61, 128, 15, 42, 189, 26, 25, 236, 188, 140, 124, 0, 190, 16, 146, 70, 60, 238, 150, 136, 61, 147, 198, 54, 190, 8, 168, 65, 189, 48, 39, 13, 62, 220, 52, 155, 61, 22, 139, 19, 190, 194, 36, 59, 190, 127, 78, 174, 189, 216, 24, 49, 190, 85, 172, 142, 190, 66, 42, 82, 62, 54, 185, 206, 190, 66, 237, 192, 62, 62, 38, 146, 61, 233, 84, 188, 190, 166, 13, 9, 191, 34, 102, 236, 190, 30, 82, 163, 190, 218, 167, 11, 190, 108, 150, 157, 191, 99, 188, 48, 62, 90, 251, 27, 189, 65, 180, 161, 62, 115, 68, 27, 191, 118, 69, 49, 191, 21, 252, 146, 190, 97, 86, 44, 62, 86, 78, 123, 190, 21, 0, 57, 62, 217, 98, 191, 62, 212, 122, 20, 189, 30, 119, 162, 61, 188, 33, 204, 61, 49, 176, 172, 188, 106, 135, 48, 62, 18, 228, 36, 191, 41, 186, 124, 190, 177, 72, 249, 61, 255, 118, 37, 62, 25, 157, 4, 191, 162, 184, 195, 190, 131, 154, 172, 190, 10, 232, 44, 62, 65, 242, 171, 62, 88, 239, 9, 62, 107, 177, 229, 61, 11, 140, 226, 190, 119, 141, 39, 191, 113, 195, 21, 62, 174, 78, 132, 189, 238, 118, 165, 60, 250, 29, 140, 191, 23, 12, 149, 62, 71, 62, 83, 189, 139, 189, 47, 62, 36, 15, 243, 190, 251, 130, 144, 190, 216, 187, 5, 191, 214, 226, 206, 61, 113, 47, 79, 190, 228, 111, 19, 61, 255, 162, 0, 191, 235, 150, 101, 189, 177, 219, 74, 62, 66, 157, 47, 190, 229, 32, 208, 61, 217, 112, 182, 190, 89, 0, 167, 190, 211, 76, 122, 62, 71, 110, 102, 61, 61, 131, 54, 191, 125, 98, 206, 190, 217, 32, 66, 62, 79, 244, 37, 191, 102, 165, 102, 62, 113, 194, 254, 190, 88, 37, 185, 189, 118, 87, 29, 62, 218, 177, 140, 187, 118, 80, 76, 188, 111, 10, 219, 190, 108, 181, 201, 189, 249, 145, 144, 190, 109, 207, 0, 191, 22, 221, 196, 62, 209, 71, 34, 61, 203, 36, 20, 62, 171, 42, 194, 189, 29, 217, 154, 191, 197, 23, 151, 189, 123, 30, 223, 61, 55, 121, 227, 190, 241, 168, 61, 62, 134, 221, 27, 190, 172, 217, 166, 188, 95, 49, 155, 62, 54, 128, 184, 189, 251, 55, 148, 190, 104, 230, 102, 190, 97, 159, 12, 191, 131, 139, 142, 189, 216, 87, 149, 62, 227, 217, 192, 189, 33, 161, 131, 191, 173, 141, 149, 190, 252, 121, 44, 190, 108, 140, 184, 62, 45, 230, 73, 190, 29, 189, 127, 190, 125, 196, 3, 62, 200, 243, 146, 189, 49, 60, 72, 189, 168, 143, 144, 190, 31, 161, 4, 62, 8, 21, 77, 62, 44, 119, 72, 191, 19, 103, 101, 62, 149, 152, 48, 62, 58, 231, 126, 185, 24, 57, 173, 62, 207, 50, 114, 190, 8, 64, 194, 61, 109, 60, 40, 62, 172, 247, 233, 190, 116, 78, 150, 188, 56, 179, 7, 189, 73, 138, 82, 62, 244, 215, 215, 61, 176, 227, 142, 61, 118, 239, 133, 62, 90, 35, 48, 190, 127, 26, 8, 191, 150, 27, 158, 60, 195, 126, 17, 190, 124, 80, 219, 62, 194, 191, 11, 190, 121, 177, 128, 190, 0, 239, 175, 187, 124, 67, 130, 191, 136, 15, 84, 190, 51, 102, 113, 61, 126, 219, 80, 62, 150, 4, 199, 62, 186, 112, 8, 62, 75, 93, 66, 190, 125, 19, 164, 190, 36, 228, 56, 191, 143, 156, 4, 190, 187, 244, 232, 189, 244, 149, 44, 62, 30, 131, 32, 61, 194, 115, 72, 188, 75, 203, 2, 62, 115, 66, 34, 60, 100, 127, 155, 190, 112, 241, 226, 60, 4, 140, 5, 61, 250, 33, 179, 189, 110, 2, 143, 190, 103, 1, 176, 62, 133, 153, 47, 62, 86, 33, 136, 59, 171, 202, 205, 189, 235, 64, 109, 62, 18, 60, 54, 61, 36, 38, 110, 62, 58, 112, 55, 60, 115, 183, 139, 61, 72, 106, 73, 190};
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
                alignas(float) const unsigned char memory[] = {84, 30, 199, 62, 142, 85, 171, 58, 232, 141, 171, 60, 134, 44, 1, 62, 66, 194, 24, 62, 192, 228, 102, 190, 170, 229, 45, 61, 160, 58, 136, 62, 52, 149, 231, 187, 42, 120, 249, 61, 226, 217, 211, 61, 87, 71, 4, 62, 188, 12, 147, 62, 189, 152, 157, 62, 82, 225, 163, 62, 123, 243, 252, 61, 36, 122, 227, 189, 64, 89, 132, 189, 20, 126, 156, 62, 123, 114, 144, 188, 176, 227, 184, 62, 166, 18, 149, 188, 197, 54, 162, 189, 92, 4, 253, 189, 68, 63, 78, 62, 140, 153, 12, 190, 145, 24, 247, 189, 37, 243, 108, 62, 97, 193, 17, 60, 160, 81, 99, 59, 135, 168, 59, 60, 97, 176, 20, 62};
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
                alignas(float) const unsigned char memory[] = {60, 43, 59, 62, 223, 52, 76, 63, 45, 152, 180, 190, 92, 76, 148, 190, 8, 9, 72, 63, 75, 203, 203, 189, 229, 66, 174, 61, 201, 40, 148, 62, 255, 209, 158, 61, 77, 59, 79, 63, 85, 71, 252, 188, 40, 28, 206, 61, 68, 68, 124, 190, 55, 162, 51, 191, 83, 155, 168, 191, 156, 246, 128, 191, 219, 122, 132, 62, 65, 146, 243, 189, 250, 141, 119, 62, 215, 170, 120, 62, 137, 106, 111, 59, 137, 219, 214, 61, 18, 33, 158, 62, 178, 202, 35, 190, 51, 132, 13, 63, 173, 31, 35, 62, 57, 39, 181, 189, 105, 106, 144, 63, 67, 136, 100, 191, 40, 49, 94, 63, 28, 188, 2, 63, 208, 130, 34, 190, 12, 192, 249, 190, 87, 222, 171, 60, 186, 132, 186, 188, 247, 3, 191, 61, 33, 227, 150, 61, 49, 30, 190, 190, 164, 44, 143, 61, 248, 29, 62, 190, 246, 150, 94, 60, 36, 11, 71, 62, 57, 47, 224, 189, 7, 145, 22, 191, 216, 135, 200, 189, 28, 76, 243, 60, 242, 177, 173, 62, 43, 200, 181, 61, 97, 16, 198, 62, 21, 212, 11, 190, 176, 88, 202, 190, 17, 40, 76, 61, 148, 42, 230, 190, 214, 30, 247, 187, 71, 121, 5, 63, 60, 228, 200, 189, 222, 236, 133, 188, 80, 151, 149, 188, 7, 47, 165, 188, 39, 42, 192, 62, 221, 188, 236, 61, 135, 103, 5, 63, 68, 232, 159, 62, 85, 50, 137, 190};
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
                alignas(float) const unsigned char memory[] = {128, 119, 53, 189, 83, 225, 152, 190};
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
    alignas(float) const unsigned char memory[] = {85, 65, 166, 190, 110, 167, 186, 190, 118, 98, 212, 63};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {172, 188, 33, 64, 5, 33, 129, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0069/steps/000000000016000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}