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
                alignas(float) const unsigned char memory[] = {146, 197, 123, 63, 145, 37, 51, 63, 192, 30, 166, 62, 237, 65, 214, 188, 146, 19, 16, 191, 113, 201, 111, 62, 175, 22, 249, 190, 102, 24, 183, 62, 222, 247, 173, 190, 53, 191, 102, 190, 40, 200, 37, 191, 74, 183, 95, 191, 246, 138, 12, 63, 175, 196, 227, 189, 100, 185, 21, 191, 7, 137, 33, 191, 209, 97, 133, 62, 23, 42, 8, 62, 80, 6, 254, 62, 142, 64, 22, 190, 194, 181, 180, 187, 19, 31, 247, 62, 127, 180, 69, 63, 182, 101, 4, 191, 0, 53, 46, 191, 243, 120, 130, 63, 128, 242, 144, 62, 230, 116, 14, 62, 150, 157, 25, 191, 208, 164, 136, 62, 205, 230, 187, 61, 241, 72, 120, 63, 84, 39, 101, 62, 71, 73, 7, 62, 253, 235, 200, 188, 38, 242, 29, 60, 28, 93, 237, 62, 92, 129, 92, 191, 72, 116, 135, 190, 203, 127, 16, 191, 154, 124, 114, 190, 119, 41, 225, 190, 124, 57, 218, 62, 60, 142, 230, 62, 132, 235, 56, 62, 183, 47, 74, 61, 174, 80, 89, 63, 4, 132, 44, 191, 101, 129, 248, 62, 189, 65, 37, 191, 208, 221, 197, 62, 199, 131, 63, 62, 238, 126, 101, 63, 224, 212, 3, 63, 128, 23, 73, 191, 23, 152, 70, 191, 201, 56, 39, 62, 224, 250, 63, 63, 165, 193, 69, 191, 69, 226, 228, 190, 188, 155, 152, 61, 215, 48, 83, 63, 25, 230, 109, 62, 245, 93, 31, 191, 178, 208, 5, 191, 209, 13, 168, 191, 112, 30, 160, 62, 185, 59, 155, 189, 9, 220, 39, 63, 109, 205, 47, 63, 32, 47, 167, 63, 86, 149, 151, 62, 151, 69, 175, 62, 206, 163, 40, 63, 59, 52, 198, 62, 81, 185, 169, 188, 226, 123, 240, 190, 33, 174, 30, 188, 5, 35, 31, 191, 35, 148, 128, 191, 13, 86, 19, 190, 104, 94, 200, 58, 181, 75, 23, 63, 97, 247, 79, 191, 225, 18, 10, 191, 133, 237, 138, 63, 165, 139, 134, 61, 16, 67, 160, 190, 39, 33, 18, 189, 201, 133, 61, 63, 150, 49, 214, 189, 69, 168, 79, 191, 37, 215, 191, 62, 12, 218, 125, 190, 215, 67, 166, 190, 218, 117, 223, 62};
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
                alignas(float) const unsigned char memory[] = {77, 218, 10, 191, 165, 240, 204, 62, 82, 122, 29, 63, 232, 216, 16, 189, 150, 15, 182, 190, 248, 29, 45, 63, 220, 187, 25, 191, 4, 92, 138, 62, 164, 155, 62, 63, 86, 162, 191, 62, 182, 157, 53, 60, 85, 114, 122, 190, 252, 196, 1, 63, 208, 11, 137, 61, 122, 211, 204, 190, 243, 179, 18, 189, 100, 8, 11, 63, 49, 170, 169, 61, 238, 84, 170, 190, 7, 192, 100, 190, 250, 206, 133, 188, 53, 236, 147, 190, 30, 206, 16, 63, 127, 57, 86, 62, 238, 99, 35, 62, 213, 232, 11, 63, 176, 193, 7, 63, 202, 132, 72, 190, 189, 234, 44, 62, 91, 27, 0, 190, 223, 17, 90, 62, 148, 151, 27, 62};
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
                alignas(float) const unsigned char memory[] = {238, 112, 10, 62, 2, 237, 147, 61, 67, 132, 108, 189, 100, 176, 130, 61, 189, 28, 52, 190, 38, 116, 21, 190, 228, 30, 157, 189, 180, 184, 68, 188, 142, 77, 26, 189, 223, 52, 191, 188, 254, 40, 31, 62, 43, 187, 144, 61, 186, 16, 28, 62, 1, 72, 30, 61, 24, 128, 217, 187, 14, 219, 222, 187, 170, 214, 218, 189, 152, 122, 11, 62, 251, 113, 8, 189, 180, 144, 32, 62, 97, 193, 147, 188, 115, 213, 197, 189, 248, 123, 182, 188, 238, 233, 198, 188, 142, 193, 245, 189, 105, 75, 34, 190, 203, 63, 171, 189, 64, 115, 50, 60, 78, 16, 177, 189, 40, 106, 177, 60, 240, 239, 25, 190, 31, 151, 114, 60, 99, 139, 135, 61, 252, 238, 129, 189, 216, 86, 188, 62, 205, 230, 233, 61, 61, 239, 165, 189, 241, 160, 178, 62, 108, 235, 201, 189, 211, 90, 160, 62, 133, 42, 166, 62, 20, 164, 143, 190, 76, 15, 144, 62, 60, 79, 188, 61, 46, 236, 162, 62, 214, 249, 84, 62, 210, 168, 223, 190, 229, 4, 64, 190, 124, 227, 222, 190, 154, 116, 32, 62, 185, 164, 132, 62, 214, 175, 160, 190, 169, 115, 90, 62, 33, 188, 185, 62, 99, 169, 1, 191, 237, 29, 142, 62, 34, 57, 116, 62, 105, 199, 12, 189, 21, 197, 70, 62, 207, 33, 68, 62, 10, 124, 195, 61, 221, 121, 49, 191, 190, 255, 221, 61, 122, 3, 140, 189, 100, 204, 26, 190, 46, 40, 71, 58, 12, 119, 249, 58, 47, 83, 243, 61, 32, 63, 70, 189, 0, 175, 9, 61, 147, 4, 17, 62, 184, 189, 62, 62, 177, 228, 151, 61, 109, 113, 181, 61, 30, 28, 204, 190, 251, 228, 18, 62, 220, 186, 28, 62, 152, 29, 170, 189, 108, 122, 57, 191, 82, 90, 12, 62, 207, 188, 126, 62, 84, 9, 28, 191, 110, 22, 88, 190, 207, 191, 144, 188, 244, 132, 214, 190, 118, 92, 255, 61, 110, 211, 126, 189, 106, 61, 153, 62, 190, 51, 100, 188, 224, 112, 19, 182, 186, 123, 210, 189, 35, 119, 184, 189, 185, 160, 55, 62, 167, 119, 130, 189, 167, 127, 138, 190, 228, 69, 47, 190, 182, 143, 246, 189, 22, 255, 249, 188, 44, 214, 213, 61, 172, 3, 50, 62, 203, 130, 130, 185, 238, 120, 113, 61, 39, 93, 46, 62, 74, 112, 41, 190, 89, 60, 36, 61, 208, 65, 255, 60, 114, 187, 167, 61, 124, 217, 241, 61, 41, 1, 205, 189, 75, 148, 47, 190, 53, 120, 131, 60, 79, 94, 9, 189, 129, 242, 195, 189, 242, 77, 182, 189, 195, 234, 23, 62, 167, 14, 45, 62, 80, 215, 53, 189, 195, 51, 21, 190, 84, 106, 33, 190, 107, 15, 24, 190, 139, 248, 52, 189, 35, 73, 226, 189, 99, 171, 36, 190, 59, 93, 48, 190, 74, 74, 14, 190, 237, 22, 28, 62, 208, 124, 129, 61, 214, 171, 11, 190, 133, 247, 27, 62, 112, 150, 181, 61, 24, 13, 228, 61, 189, 20, 193, 61, 71, 229, 52, 190, 93, 218, 103, 62, 191, 42, 196, 188, 125, 135, 56, 62, 215, 21, 181, 61, 191, 32, 127, 62, 254, 211, 16, 190, 251, 26, 7, 188, 100, 167, 85, 62, 55, 240, 124, 62, 52, 98, 40, 189, 182, 254, 160, 60, 14, 237, 8, 62, 8, 61, 211, 189, 22, 184, 189, 62, 32, 194, 23, 189, 168, 190, 128, 190, 41, 252, 117, 61, 106, 203, 122, 61, 69, 235, 53, 62, 83, 208, 125, 61, 55, 246, 253, 61, 82, 4, 213, 189, 128, 0, 72, 62, 32, 111, 29, 190, 11, 179, 157, 189, 158, 215, 173, 189, 37, 18, 36, 62, 130, 73, 245, 190, 204, 202, 206, 189, 42, 227, 131, 62, 240, 6, 125, 62, 140, 193, 60, 62, 148, 7, 57, 190, 130, 12, 77, 189, 156, 11, 40, 62, 86, 225, 198, 60, 106, 61, 148, 62, 10, 203, 107, 190, 86, 102, 180, 188, 114, 129, 103, 62, 42, 220, 113, 189, 186, 189, 139, 188, 237, 129, 115, 62, 119, 211, 155, 62, 140, 224, 194, 190, 131, 165, 182, 190, 84, 244, 70, 62, 171, 81, 62, 190, 47, 13, 174, 62, 249, 76, 229, 190, 26, 126, 244, 190, 180, 194, 218, 190, 170, 199, 19, 189, 245, 247, 3, 190, 24, 218, 75, 62, 95, 220, 56, 62, 20, 57, 247, 190, 7, 157, 5, 63, 88, 76, 106, 191, 57, 245, 36, 189, 238, 228, 158, 190, 130, 182, 13, 62, 51, 36, 16, 191, 51, 252, 44, 190, 152, 175, 214, 62, 49, 168, 110, 61, 3, 36, 204, 190, 164, 9, 161, 62, 172, 117, 154, 190, 133, 111, 247, 188, 2, 48, 84, 61, 71, 135, 37, 192, 234, 187, 187, 61, 23, 226, 6, 62, 40, 246, 187, 62, 35, 83, 149, 190, 145, 24, 85, 189, 230, 114, 196, 189, 229, 184, 152, 61, 182, 109, 140, 188, 134, 183, 6, 191, 80, 163, 71, 62, 232, 34, 44, 190, 140, 241, 31, 190, 120, 105, 134, 189, 219, 156, 49, 189, 74, 129, 48, 58, 9, 84, 218, 62, 189, 109, 138, 62, 36, 127, 199, 190, 168, 7, 14, 190, 30, 75, 209, 188, 129, 233, 134, 189, 208, 40, 13, 62, 205, 88, 58, 186, 220, 173, 143, 61, 157, 221, 93, 188, 101, 119, 172, 189, 233, 153, 188, 189, 131, 102, 30, 189, 30, 127, 218, 61, 228, 217, 19, 190, 69, 28, 26, 188, 176, 254, 152, 189, 52, 83, 50, 190, 23, 149, 57, 61, 17, 165, 114, 189, 171, 80, 254, 188, 1, 145, 131, 61, 36, 231, 52, 190, 215, 173, 8, 189, 251, 83, 233, 189, 194, 227, 139, 189, 158, 216, 43, 189, 4, 163, 114, 60, 137, 174, 247, 59, 16, 141, 36, 189, 134, 194, 14, 190, 41, 89, 155, 189, 133, 149, 199, 61, 102, 158, 253, 189, 27, 181, 208, 189, 134, 76, 15, 62, 149, 73, 223, 60, 238, 230, 205, 189, 156, 151, 230, 189, 226, 217, 22, 190, 110, 146, 12, 59, 203, 129, 71, 188, 198, 247, 74, 61, 165, 255, 14, 190, 74, 243, 36, 190, 154, 141, 43, 62, 116, 84, 139, 60, 62, 112, 46, 190, 205, 201, 17, 59, 0, 37, 181, 189, 164, 236, 248, 61, 42, 138, 187, 188, 213, 217, 198, 189, 23, 225, 253, 61, 24, 178, 157, 188, 225, 37, 6, 189, 39, 55, 24, 61, 189, 52, 23, 190, 52, 6, 42, 190, 232, 48, 209, 188, 81, 249, 245, 60, 36, 61, 3, 62, 16, 132, 42, 190, 163, 209, 23, 61, 102, 120, 229, 187, 16, 83, 19, 61, 178, 23, 131, 189, 7, 15, 61, 61, 80, 198, 87, 191, 199, 94, 28, 60, 191, 28, 239, 188, 80, 107, 19, 190, 4, 42, 72, 63, 39, 83, 23, 188, 198, 157, 194, 189, 250, 88, 40, 61, 112, 140, 187, 61, 27, 137, 3, 61, 73, 191, 6, 190, 176, 35, 120, 61, 62, 195, 247, 61, 248, 204, 167, 189, 167, 166, 232, 190, 247, 141, 194, 62, 147, 27, 194, 62, 154, 238, 131, 189, 61, 142, 161, 190, 4, 71, 43, 63, 229, 253, 206, 189, 199, 69, 13, 191, 135, 195, 117, 62, 83, 12, 146, 190, 145, 104, 151, 190, 124, 178, 241, 61, 71, 148, 216, 188, 77, 69, 235, 60, 229, 249, 207, 62, 65, 46, 179, 61, 116, 7, 146, 189, 112, 192, 197, 189, 17, 205, 194, 190, 72, 95, 6, 62, 0, 2, 191, 189, 31, 209, 135, 190, 124, 33, 12, 188, 38, 52, 216, 188, 45, 32, 10, 190, 194, 10, 104, 62, 86, 194, 62, 60, 242, 194, 187, 61, 5, 62, 152, 191, 93, 53, 97, 189, 228, 74, 80, 62, 193, 40, 79, 190, 109, 118, 164, 191, 89, 141, 168, 61, 201, 214, 197, 61, 129, 150, 36, 190, 126, 228, 35, 190, 211, 100, 60, 62, 244, 10, 130, 190, 217, 141, 48, 190, 187, 187, 11, 62, 162, 73, 34, 61, 219, 242, 21, 190, 183, 11, 135, 62, 79, 177, 145, 190, 58, 42, 189, 61, 79, 74, 46, 62, 165, 240, 24, 62, 218, 235, 72, 61, 9, 130, 233, 189, 107, 43, 1, 190, 127, 149, 41, 190, 236, 232, 230, 61, 201, 78, 180, 189, 252, 81, 28, 62, 96, 178, 239, 189, 212, 140, 219, 189, 212, 5, 100, 189, 99, 183, 12, 190, 252, 58, 212, 61, 199, 161, 138, 188, 201, 124, 169, 189, 88, 43, 22, 189, 159, 102, 34, 190, 89, 148, 154, 61, 132, 64, 46, 188, 165, 121, 130, 189, 80, 61, 187, 189, 200, 211, 75, 189, 147, 232, 123, 189, 233, 36, 31, 190, 173, 53, 163, 188, 33, 103, 234, 189, 40, 83, 62, 61, 19, 112, 48, 190, 123, 2, 117, 61, 175, 63, 0, 190, 98, 249, 228, 61, 0, 77, 226, 189, 245, 179, 184, 189, 71, 64, 183, 189, 197, 251, 33, 62, 85, 188, 17, 60, 178, 235, 58, 62, 185, 7, 32, 61, 96, 132, 117, 189, 47, 213, 121, 62, 107, 35, 143, 190, 162, 92, 10, 61, 4, 16, 80, 62, 248, 206, 46, 191, 161, 187, 162, 62, 224, 234, 137, 191, 237, 21, 16, 189, 150, 63, 142, 61, 73, 25, 169, 60, 70, 117, 105, 191, 191, 178, 18, 61, 243, 126, 179, 62, 146, 238, 149, 190, 150, 42, 23, 61, 188, 80, 148, 62, 173, 109, 93, 191, 17, 169, 185, 61, 237, 104, 46, 62, 20, 129, 56, 60, 88, 0, 117, 190, 50, 73, 81, 189, 168, 149, 228, 189, 108, 222, 88, 189, 144, 67, 198, 190, 69, 236, 79, 190, 145, 197, 80, 62, 210, 55, 148, 190, 64, 248, 97, 62, 209, 223, 34, 62, 255, 145, 96, 62, 129, 148, 201, 61, 142, 179, 66, 188, 60, 209, 75, 61, 204, 188, 150, 60, 91, 2, 156, 62, 234, 37, 108, 62, 174, 110, 12, 62, 242, 42, 126, 62, 14, 126, 4, 61, 239, 226, 23, 62, 134, 240, 113, 62, 52, 138, 236, 61, 255, 100, 188, 188, 160, 238, 238, 189, 3, 130, 73, 62, 14, 84, 40, 62, 118, 90, 86, 190, 79, 215, 85, 61, 231, 21, 93, 60, 38, 141, 145, 190, 224, 96, 78, 62, 244, 194, 54, 62, 74, 179, 215, 189, 213, 36, 31, 62, 115, 64, 219, 60, 69, 26, 49, 190, 134, 14, 211, 190, 130, 188, 247, 61, 157, 104, 164, 189, 246, 68, 235, 61, 9, 142, 44, 62, 143, 159, 8, 62, 1, 89, 237, 188, 98, 199, 205, 60, 137, 45, 37, 188, 90, 15, 45, 62, 105, 240, 232, 62, 10, 25, 132, 61, 126, 200, 209, 189, 80, 127, 182, 187, 26, 134, 35, 62, 60, 125, 189, 62, 62, 40, 5, 62, 1, 18, 149, 190, 40, 11, 62, 189, 107, 252, 4, 189, 247, 175, 97, 57, 82, 63, 188, 188, 191, 98, 192, 189, 60, 177, 16, 190, 246, 112, 248, 189, 224, 236, 6, 62, 169, 237, 165, 62, 169, 13, 87, 61, 225, 126, 131, 60, 100, 131, 59, 190, 229, 171, 85, 62, 45, 52, 137, 61, 80, 107, 41, 190, 168, 73, 51, 62, 138, 27, 21, 61, 234, 79, 207, 190, 16, 45, 206, 62, 131, 33, 147, 189, 227, 132, 191, 61, 248, 74, 166, 62, 174, 86, 29, 191, 204, 214, 9, 190, 214, 132, 98, 62, 5, 225, 139, 191, 223, 187, 192, 62, 212, 193, 168, 190, 232, 244, 48, 62, 98, 186, 223, 61, 139, 96, 119, 61, 103, 33, 29, 191, 23, 232, 215, 61, 102, 73, 0, 63, 187, 153, 37, 190, 39, 220, 22, 61, 149, 27, 194, 62, 159, 42, 139, 190, 202, 140, 253, 189, 65, 126, 118, 61, 74, 211, 138, 190, 127, 194, 148, 190, 83, 164, 112, 189, 163, 200, 173, 189, 72, 126, 210, 189, 148, 230, 133, 190, 254, 116, 64, 190, 211, 239, 203, 189, 245, 198, 28, 62, 120, 243, 38, 190, 116, 158, 18, 190, 47, 27, 24, 62, 208, 127, 56, 190, 194, 197, 76, 189, 153, 115, 40, 190, 232, 117, 173, 60, 182, 83, 39, 190, 189, 33, 134, 188, 53, 27, 64, 190, 186, 161, 114, 188, 162, 72, 41, 190, 202, 185, 185, 61, 109, 249, 190, 61, 74, 105, 238, 189, 75, 124, 160, 60, 162, 129, 186, 189, 199, 200, 198, 189, 59, 95, 139, 189, 193, 24, 253, 61, 139, 125, 55, 189, 253, 249, 15, 62, 221, 204, 39, 190, 32, 175, 122, 61, 204, 45, 202, 189, 189, 208, 41, 60, 139, 87, 14, 190, 104, 118, 54, 190, 193, 33, 59, 61, 255, 237, 89, 61, 73, 80, 180, 61, 134, 162, 5, 62, 129, 253, 228, 190, 33, 242, 229, 61, 99, 204, 190, 60, 147, 235, 126, 191, 63, 158, 187, 62, 23, 184, 121, 62, 214, 62, 199, 60, 173, 126, 58, 191, 181, 48, 190, 62, 21, 73, 167, 61, 251, 7, 99, 190, 201, 65, 206, 61, 203, 64, 73, 191, 163, 52, 193, 190, 130, 209, 128, 190, 194, 239, 105, 189, 129, 209, 216, 61, 91, 13, 255, 189, 221, 119, 32, 190, 165, 153, 115, 62, 8, 206, 61, 190, 90, 67, 134, 191, 49, 241, 24, 62, 210, 170, 84, 190, 174, 136, 92, 190, 92, 45, 226, 61, 114, 17, 66, 62, 41, 32, 205, 190, 216, 12, 83, 62, 0, 73, 175, 62, 206, 222, 34, 190, 217, 247, 230, 189, 238, 131, 153, 189, 72, 146, 244, 189, 53, 12, 98, 189, 122, 78, 54, 190, 49, 59, 207, 189, 99, 73, 78, 61, 111, 155, 90, 61, 131, 212, 107, 60, 216, 159, 211, 189, 141, 182, 16, 190, 199, 88, 75, 187, 84, 159, 50, 190, 198, 75, 230, 189, 121, 163, 160, 189, 241, 238, 226, 188, 143, 227, 139, 60, 90, 52, 65, 189, 118, 177, 178, 189, 1, 14, 176, 61, 75, 192, 83, 190, 4, 119, 164, 61, 148, 181, 19, 62, 22, 174, 34, 62, 165, 209, 21, 190, 215, 9, 1, 62, 164, 143, 2, 62, 121, 158, 245, 189, 88, 81, 83, 189, 211, 10, 2, 190, 177, 75, 34, 190, 156, 23, 255, 189, 97, 238, 42, 189, 4, 48, 230, 60, 66, 184, 135, 188, 155, 27, 160, 62, 31, 152, 133, 62, 231, 21, 221, 189, 109, 36, 148, 62, 114, 138, 160, 61, 249, 74, 232, 61, 231, 53, 136, 188, 124, 127, 120, 59, 247, 102, 206, 189, 160, 146, 32, 62, 62, 53, 193, 62, 52, 230, 34, 189, 220, 33, 1, 191, 28, 110, 128, 190, 42, 51, 88, 189, 42, 17, 87, 189, 110, 196, 22, 62, 134, 92, 232, 189, 31, 151, 2, 190, 179, 43, 34, 62, 217, 35, 157, 189, 156, 219, 119, 62, 146, 127, 113, 62, 189, 169, 8, 62, 97, 192, 30, 189, 49, 68, 38, 62, 145, 115, 91, 189, 79, 178, 128, 190, 240, 195, 130, 189, 131, 101, 55, 61, 140, 145, 211, 190, 150, 88, 225, 189, 137, 19, 63, 189, 17, 61, 96, 190, 241, 158, 21, 61, 217, 244, 70, 189, 231, 24, 49, 190, 43, 195, 145, 190, 156, 90, 50, 190, 219, 251, 117, 61, 212, 146, 25, 190, 98, 196, 17, 190, 187, 25, 186, 60, 182, 172, 57, 62, 146, 89, 126, 190, 109, 192, 86, 190, 66, 17, 26, 62, 210, 158, 160, 190, 131, 117, 218, 62, 98, 74, 169, 60, 137, 40, 186, 189, 74, 249, 86, 190, 34, 169, 197, 61, 85, 228, 225, 190, 27, 2, 128, 190, 174, 147, 111, 62, 162, 231, 158, 61, 109, 152, 54, 61, 223, 84, 218, 190, 90, 243, 55, 190, 94, 165, 131, 62, 210, 58, 203, 61, 34, 142, 54, 63, 91, 65, 91, 189, 251, 217, 254, 61, 66, 222, 103, 62, 54, 179, 43, 190, 170, 244, 230, 189, 217, 0, 219, 189, 172, 75, 136, 62, 237, 34, 154, 60, 108, 168, 199, 189, 149, 52, 32, 62, 26, 94, 242, 60, 50, 34, 118, 62, 218, 95, 86, 61, 97, 189, 127, 62, 177, 109, 155, 190, 223, 90, 237, 61, 72, 52, 215, 61, 32, 87, 182, 62, 125, 244, 8, 190, 72, 24, 71, 191, 206, 169, 37, 60, 161, 95, 196, 190, 33, 85, 158, 62, 112, 65, 138, 62, 203, 218, 81, 62, 21, 104, 145, 60, 38, 129, 102, 62, 75, 13, 3, 191, 9, 63, 159, 190, 67, 43, 213, 62, 180, 11, 170, 61, 108, 88, 96, 61, 135, 204, 141, 189, 119, 71, 41, 190, 196, 233, 46, 190, 109, 161, 52, 188, 205, 162, 100, 189, 149, 190, 12, 62, 32, 203, 136, 189, 57, 114, 207, 189, 46, 218, 52, 190, 212, 39, 145, 189, 197, 11, 216, 186, 10, 213, 0, 190, 182, 113, 141, 61, 78, 183, 85, 61, 71, 161, 250, 61, 52, 118, 49, 190, 91, 216, 141, 61, 43, 232, 247, 61, 246, 70, 2, 62, 114, 197, 82, 189, 165, 180, 29, 190, 196, 240, 220, 189, 205, 189, 132, 189, 254, 248, 215, 188, 77, 226, 198, 61, 167, 155, 0, 61, 4, 83, 23, 190, 142, 188, 8, 60, 150, 215, 11, 62, 9, 30, 56, 60, 68, 196, 148, 188, 118, 214, 5, 63, 124, 36, 213, 61, 223, 5, 194, 190, 148, 90, 0, 190, 118, 236, 181, 189, 66, 197, 72, 190, 169, 85, 250, 189, 91, 15, 153, 189, 126, 183, 67, 190, 221, 63, 13, 61, 60, 4, 147, 190, 72, 103, 139, 60, 89, 71, 209, 187, 235, 90, 45, 60, 161, 161, 136, 62, 194, 13, 74, 190, 23, 7, 160, 61, 213, 80, 240, 61, 86, 102, 129, 187, 69, 231, 183, 190, 71, 9, 135, 190, 73, 220, 182, 61, 129, 237, 181, 60, 88, 130, 42, 62, 189, 42, 42, 62, 33, 201, 193, 190, 65, 122, 71, 191, 104, 12, 1, 190, 237, 167, 228, 190, 227, 152, 200, 61, 237, 26, 140, 61, 231, 91, 231, 61, 238, 178, 202, 190, 95, 45, 219, 189, 133, 186, 133, 190, 123, 83, 52, 191, 70, 177, 169, 61, 161, 225, 34, 62, 122, 103, 111, 189, 0, 180, 4, 191, 19, 34, 35, 62, 202, 250, 153, 61, 9, 2, 213, 190, 231, 74, 237, 61, 143, 226, 43, 190, 16, 216, 13, 190, 98, 0, 38, 191, 17, 129, 10, 190, 176, 102, 75, 62, 180, 156, 62, 190, 209, 1, 56, 188, 59, 126, 138, 62, 181, 8, 25, 190, 139, 85, 31, 191, 151, 254, 50, 62, 69, 52, 239, 188, 247, 240, 65, 189, 135, 162, 15, 61, 255, 122, 219, 61, 206, 171, 53, 191, 25, 135, 132, 62, 202, 124, 95, 62, 132, 128, 139, 190, 159, 69, 73, 190, 216, 23, 123, 62, 68, 99, 238, 190, 4, 54, 135, 62, 174, 232, 25, 191, 148, 113, 32, 190, 25, 156, 137, 62, 147, 45, 25, 62, 80, 91, 114, 61, 242, 13, 150, 62, 158, 40, 139, 190, 108, 51, 193, 61, 233, 103, 28, 62, 98, 201, 185, 191, 101, 236, 130, 62, 164, 14, 196, 62, 245, 109, 105, 63, 22, 53, 43, 190, 227, 249, 53, 191, 91, 243, 195, 190, 132, 153, 111, 190, 4, 224, 44, 191, 114, 116, 81, 191, 246, 6, 201, 61, 172, 145, 7, 191, 153, 186, 27, 191, 222, 191, 49, 190, 201, 228, 153, 61, 172, 60, 51, 62, 105, 185, 192, 62, 244, 16, 180, 189, 234, 46, 33, 191, 136, 22, 18, 191, 49, 162, 242, 190, 219, 242, 196, 62, 88, 225, 204, 60, 106, 205, 16, 62, 152, 157, 101, 189, 123, 184, 163, 190, 205, 69, 147, 189, 48, 237, 33, 62, 184, 215, 175, 190, 76, 206, 134, 62, 209, 221, 133, 190, 32, 240, 127, 189, 116, 114, 41, 189, 205, 87, 114, 61, 232, 251, 253, 190, 84, 204, 44, 61, 171, 37, 165, 62, 12, 235, 68, 61, 113, 71, 12, 189, 37, 219, 152, 62, 193, 125, 8, 191, 82, 112, 38, 62, 102, 43, 2, 62, 100, 125, 166, 190, 186, 213, 130, 190, 192, 231, 57, 62, 149, 26, 137, 189, 51, 122, 182, 61, 31, 7, 57, 61, 42, 98, 194, 190, 46, 48, 51, 62, 209, 110, 32, 190, 143, 59, 99, 190, 5, 72, 184, 190, 26, 124, 153, 62, 6, 28, 7, 62, 73, 224, 98, 190, 174, 11, 159, 61, 73, 241, 129, 188, 174, 244, 17, 190, 113, 240, 150, 62, 155, 169, 212, 190, 137, 95, 139, 61, 78, 99, 33, 190, 59, 174, 200, 189, 225, 1, 57, 62, 52, 179, 200, 189, 222, 32, 130, 190, 103, 169, 15, 191, 14, 197, 172, 190, 214, 66, 144, 190, 4, 58, 225, 189, 23, 23, 132, 190, 120, 72, 68, 61, 144, 79, 121, 190, 222, 199, 130, 189, 72, 246, 71, 190, 250, 41, 96, 62, 85, 154, 37, 62, 219, 51, 23, 190, 145, 186, 179, 62, 43, 89, 180, 190, 228, 107, 192, 190, 199, 145, 1, 191, 37, 66, 185, 61, 244, 169, 254, 60, 56, 235, 227, 189, 30, 121, 248, 60, 108, 132, 67, 189, 73, 56, 124, 189, 84, 32, 232, 189, 209, 99, 203, 187, 117, 68, 150, 61, 144, 149, 42, 190, 118, 132, 51, 61, 129, 133, 134, 61, 185, 163, 29, 62, 168, 121, 19, 62, 214, 232, 198, 61, 157, 14, 233, 189, 35, 166, 254, 61, 127, 115, 199, 189, 87, 49, 224, 189, 18, 10, 42, 61, 180, 197, 230, 60, 162, 16, 12, 190, 168, 236, 228, 189, 49, 212, 185, 189, 88, 157, 28, 62, 33, 42, 145, 189, 231, 181, 200, 189, 206, 246, 33, 190, 255, 230, 171, 60, 36, 213, 31, 190, 61, 75, 219, 61, 56, 50, 17, 62, 28, 130, 1, 191, 240, 85, 113, 61, 193, 197, 78, 62, 8, 239, 227, 190, 104, 12, 140, 61, 108, 218, 152, 61, 217, 21, 79, 189, 64, 174, 91, 190, 235, 173, 94, 62, 28, 218, 136, 189, 167, 112, 237, 190, 201, 220, 13, 190, 99, 189, 164, 191, 108, 54, 107, 189, 9, 253, 33, 190, 111, 79, 207, 62, 6, 0, 240, 189, 210, 144, 7, 190, 111, 115, 163, 190, 0, 47, 200, 59, 165, 74, 130, 190, 137, 26, 150, 190, 140, 14, 148, 62, 69, 140, 45, 190, 121, 107, 131, 190, 252, 108, 24, 62, 226, 13, 34, 188, 107, 178, 189, 61, 254, 218, 207, 61, 69, 187, 55, 62, 22, 9, 139, 190, 151, 161, 55, 189, 164, 68, 139, 61, 127, 129, 68, 62, 28, 23, 95, 61, 190, 223, 196, 61, 111, 69, 19, 190, 226, 103, 67, 62, 172, 87, 69, 61, 145, 242, 227, 62, 70, 71, 156, 61, 104, 45, 31, 60, 112, 223, 51, 190, 115, 14, 13, 189, 92, 88, 125, 62, 227, 188, 12, 62, 28, 149, 170, 190, 197, 174, 224, 189, 20, 185, 64, 62, 190, 54, 0, 60, 61, 1, 97, 62, 47, 83, 147, 190, 8, 105, 132, 189, 90, 1, 136, 61, 188, 210, 197, 187, 58, 51, 127, 62, 91, 29, 84, 62, 182, 188, 148, 61, 61, 182, 56, 190, 222, 125, 74, 62, 63, 185, 27, 190, 230, 48, 16, 190, 254, 83, 132, 61, 88, 153, 233, 60, 107, 151, 25, 190, 113, 165, 158, 61, 100, 246, 75, 190, 206, 115, 21, 189, 181, 69, 7, 63, 157, 73, 30, 191, 148, 104, 103, 189, 164, 129, 71, 190, 196, 207, 232, 190, 60, 105, 92, 62, 44, 197, 74, 190, 38, 211, 51, 189, 189, 70, 143, 61, 142, 205, 255, 189, 62, 112, 46, 191, 233, 9, 181, 62, 229, 184, 96, 62, 151, 59, 229, 189, 198, 1, 79, 62, 191, 246, 233, 62, 143, 78, 8, 191, 188, 65, 191, 189, 206, 197, 10, 62, 199, 17, 83, 190, 124, 48, 180, 189, 193, 107, 23, 61, 235, 84, 171, 190, 7, 37, 138, 189, 237, 6, 15, 190, 234, 218, 213, 189, 11, 227, 246, 61, 201, 51, 202, 189};
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
                alignas(float) const unsigned char memory[] = {159, 49, 160, 188, 27, 77, 253, 61, 19, 115, 52, 62, 101, 244, 28, 190, 255, 223, 123, 62, 238, 47, 84, 189, 13, 179, 252, 61, 36, 123, 93, 59, 96, 124, 155, 61, 215, 237, 68, 62, 243, 138, 144, 62, 157, 89, 246, 189, 140, 35, 180, 188, 172, 42, 240, 61, 248, 70, 169, 62, 102, 11, 45, 190, 227, 90, 6, 190, 254, 5, 207, 61, 203, 102, 97, 61, 98, 67, 162, 62, 143, 133, 3, 188, 166, 25, 79, 62, 235, 126, 61, 190, 54, 195, 42, 190, 115, 82, 39, 62, 146, 153, 116, 62, 139, 89, 135, 187, 41, 135, 165, 60, 85, 235, 72, 190, 140, 11, 162, 61, 227, 103, 117, 62, 202, 169, 115, 60};
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
                alignas(float) const unsigned char memory[] = {73, 161, 144, 189, 28, 26, 221, 190, 146, 39, 66, 188, 227, 179, 96, 61, 224, 53, 49, 190, 159, 231, 5, 63, 14, 173, 86, 63, 190, 21, 48, 189, 220, 136, 170, 61, 222, 243, 31, 63, 201, 87, 146, 62, 50, 80, 60, 61, 152, 146, 163, 62, 232, 77, 151, 190, 219, 14, 21, 190, 29, 1, 9, 63, 190, 229, 162, 61, 238, 100, 98, 63, 119, 59, 147, 60, 254, 137, 145, 190, 32, 125, 98, 190, 186, 101, 146, 190, 129, 229, 6, 62, 41, 234, 31, 191, 22, 9, 16, 63, 85, 142, 171, 63, 195, 87, 136, 62, 62, 184, 224, 62, 167, 51, 53, 61, 101, 121, 96, 63, 106, 250, 157, 190, 240, 206, 12, 63, 160, 52, 187, 189, 33, 228, 4, 62, 146, 79, 112, 190, 70, 233, 163, 61, 128, 30, 65, 190, 28, 111, 183, 61, 40, 150, 128, 190, 20, 157, 2, 62, 187, 21, 37, 190, 1, 48, 177, 61, 0, 74, 12, 191, 103, 54, 205, 189, 223, 98, 100, 190, 149, 78, 233, 61, 247, 83, 87, 190, 229, 70, 106, 62, 86, 113, 248, 188, 15, 168, 117, 62, 0, 4, 133, 60, 194, 218, 175, 189, 116, 116, 40, 63, 185, 215, 225, 61, 228, 131, 86, 188, 175, 65, 108, 62, 127, 33, 33, 190, 229, 95, 97, 62, 151, 142, 110, 188, 36, 149, 139, 189, 130, 102, 66, 189, 67, 145, 25, 61, 102, 237, 142, 190, 160, 198, 69, 62};
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
                alignas(float) const unsigned char memory[] = {74, 210, 52, 190, 79, 10, 238, 189};
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
    alignas(float) const unsigned char memory[] = {255, 215, 77, 191, 147, 135, 200, 62, 164, 147, 73, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {5, 156, 240, 63, 199, 49, 196, 190};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0090/steps/000000000010000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}