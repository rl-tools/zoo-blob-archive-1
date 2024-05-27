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
                alignas(float) const unsigned char memory[] = {202, 226, 62, 187, 149, 192, 9, 191, 24, 203, 250, 59, 107, 205, 37, 63, 187, 136, 136, 191, 248, 113, 177, 190, 142, 98, 210, 62, 231, 253, 6, 63, 93, 16, 55, 188, 66, 89, 165, 62, 214, 46, 72, 63, 3, 113, 151, 62, 62, 247, 138, 190, 38, 195, 10, 63, 4, 109, 191, 190, 24, 251, 232, 62, 67, 67, 115, 63, 137, 190, 63, 62, 31, 189, 30, 63, 168, 168, 3, 191, 54, 244, 31, 191, 40, 52, 116, 190, 53, 106, 174, 190, 92, 239, 21, 191, 10, 122, 75, 191, 141, 170, 157, 191, 183, 10, 3, 190, 188, 74, 136, 191, 229, 242, 175, 62, 141, 124, 97, 62, 196, 113, 135, 191, 114, 84, 62, 63, 14, 231, 203, 62, 223, 52, 51, 189, 83, 217, 132, 63, 160, 23, 131, 190, 180, 239, 153, 190, 190, 168, 194, 62, 47, 14, 97, 190, 228, 173, 255, 56, 11, 184, 145, 191, 83, 240, 14, 191, 99, 220, 9, 63, 131, 24, 104, 63, 106, 134, 18, 63, 28, 154, 238, 190, 182, 220, 28, 191, 118, 63, 49, 62, 212, 17, 21, 189, 170, 47, 116, 191, 136, 193, 186, 61, 210, 121, 128, 189, 190, 69, 74, 63, 19, 14, 182, 62, 176, 16, 251, 62, 63, 143, 189, 63, 19, 15, 111, 62, 63, 89, 195, 190, 18, 217, 230, 61, 16, 82, 151, 62, 136, 80, 66, 191, 188, 47, 73, 63, 122, 149, 55, 62, 65, 189, 66, 63, 172, 63, 128, 191, 1, 34, 50, 190, 123, 55, 176, 61, 197, 107, 233, 191, 80, 226, 8, 191, 139, 117, 239, 190, 23, 181, 141, 62, 207, 56, 228, 190, 221, 182, 32, 63, 57, 34, 195, 190, 198, 176, 153, 190, 195, 170, 253, 189, 244, 151, 164, 191, 64, 85, 188, 61, 142, 29, 94, 191, 153, 161, 132, 190, 26, 185, 20, 61, 132, 89, 199, 61, 194, 218, 94, 63, 220, 199, 168, 62, 151, 94, 10, 63, 69, 212, 67, 190, 39, 120, 173, 190, 169, 189, 181, 189, 124, 214, 141, 191, 56, 208, 110, 61, 244, 63, 108, 62, 174, 40, 121, 191, 51, 229, 222, 60, 73, 119, 250, 62, 248, 31, 178, 63, 4, 15, 150, 62};
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
                alignas(float) const unsigned char memory[] = {53, 210, 28, 191, 193, 152, 12, 191, 90, 156, 95, 190, 66, 8, 133, 190, 131, 20, 240, 62, 177, 161, 60, 190, 133, 6, 196, 189, 38, 168, 109, 190, 220, 126, 114, 62, 29, 198, 70, 63, 130, 104, 22, 191, 30, 227, 204, 62, 155, 110, 238, 190, 143, 34, 67, 190, 52, 12, 101, 62, 22, 128, 94, 189, 122, 179, 27, 62, 118, 127, 6, 189, 78, 178, 76, 62, 125, 190, 39, 191, 210, 47, 130, 62, 88, 9, 51, 62, 8, 173, 39, 62, 137, 22, 168, 190, 80, 146, 103, 191, 210, 230, 104, 62, 175, 192, 136, 62, 169, 216, 191, 190, 179, 237, 56, 191, 108, 108, 142, 62, 179, 52, 177, 189, 69, 184, 170, 189};
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
                alignas(float) const unsigned char memory[] = {130, 179, 162, 60, 147, 48, 155, 62, 3, 216, 144, 62, 168, 77, 238, 189, 85, 89, 66, 190, 111, 172, 131, 60, 39, 115, 82, 62, 127, 162, 175, 190, 157, 65, 163, 190, 66, 241, 230, 61, 49, 196, 8, 62, 42, 168, 33, 62, 226, 140, 202, 189, 240, 20, 210, 190, 91, 136, 204, 188, 36, 125, 185, 190, 147, 126, 209, 190, 180, 172, 5, 62, 175, 231, 212, 60, 81, 141, 212, 190, 185, 200, 140, 62, 200, 22, 208, 62, 71, 36, 95, 190, 213, 244, 197, 190, 83, 108, 0, 62, 49, 72, 123, 189, 70, 36, 30, 61, 88, 250, 34, 190, 5, 125, 255, 61, 206, 129, 215, 59, 220, 156, 52, 190, 204, 29, 141, 190, 115, 35, 19, 190, 63, 236, 138, 62, 156, 116, 254, 60, 29, 192, 217, 190, 110, 58, 55, 61, 40, 93, 210, 190, 211, 71, 95, 189, 96, 191, 73, 190, 149, 150, 137, 189, 252, 76, 226, 61, 248, 255, 2, 191, 100, 255, 182, 61, 83, 84, 13, 189, 46, 82, 148, 61, 58, 18, 199, 189, 239, 36, 69, 62, 164, 201, 211, 61, 171, 42, 13, 191, 230, 138, 31, 191, 148, 110, 228, 190, 25, 173, 49, 190, 88, 124, 237, 62, 208, 236, 108, 62, 12, 52, 13, 61, 236, 142, 116, 189, 166, 130, 157, 62, 35, 38, 163, 189, 203, 46, 61, 191, 153, 175, 196, 189, 1, 182, 189, 62, 226, 58, 90, 62, 149, 191, 45, 191, 250, 167, 100, 61, 210, 90, 168, 63, 207, 252, 190, 189, 243, 222, 14, 190, 227, 174, 249, 189, 223, 159, 88, 191, 225, 76, 99, 62, 211, 73, 0, 191, 230, 26, 22, 190, 35, 232, 128, 62, 19, 140, 184, 61, 90, 177, 172, 61, 88, 185, 249, 62, 172, 40, 117, 191, 214, 162, 67, 190, 120, 93, 188, 190, 209, 93, 63, 62, 132, 248, 29, 190, 148, 235, 42, 191, 85, 209, 163, 189, 208, 69, 20, 62, 112, 194, 9, 63, 183, 83, 181, 190, 37, 77, 218, 60, 255, 22, 54, 63, 237, 176, 38, 190, 76, 66, 47, 62, 196, 26, 240, 189, 161, 226, 4, 63, 52, 117, 115, 62, 185, 211, 161, 62, 83, 113, 68, 191, 107, 254, 175, 61, 79, 249, 249, 190, 7, 113, 229, 61, 227, 217, 72, 62, 104, 100, 133, 62, 180, 90, 85, 62, 172, 188, 136, 190, 184, 11, 91, 62, 109, 156, 147, 61, 47, 244, 191, 188, 216, 25, 177, 189, 102, 184, 31, 62, 43, 31, 130, 190, 244, 144, 14, 62, 61, 112, 93, 62, 9, 228, 8, 190, 235, 55, 192, 188, 187, 107, 7, 61, 147, 81, 193, 62, 62, 146, 145, 62, 212, 160, 26, 62, 167, 229, 134, 190, 180, 128, 5, 190, 178, 135, 101, 62, 202, 71, 84, 191, 127, 57, 158, 189, 118, 87, 184, 61, 252, 158, 2, 61, 202, 150, 177, 190, 59, 211, 219, 60, 183, 52, 232, 189, 131, 225, 137, 62, 225, 60, 192, 60, 15, 239, 174, 190, 168, 93, 0, 190, 158, 223, 192, 60, 192, 185, 246, 61, 88, 80, 211, 187, 184, 175, 185, 189, 139, 202, 100, 62, 50, 195, 90, 189, 58, 172, 207, 189, 217, 92, 223, 190, 120, 34, 43, 190, 189, 67, 189, 190, 127, 212, 116, 62, 150, 165, 59, 62, 114, 210, 162, 190, 201, 159, 175, 190, 113, 96, 226, 60, 103, 8, 79, 62, 48, 10, 160, 190, 181, 42, 56, 61, 193, 34, 227, 60, 204, 17, 69, 189, 1, 159, 127, 62, 180, 128, 188, 190, 4, 103, 147, 189, 123, 1, 239, 188, 249, 243, 198, 189, 37, 198, 230, 189, 143, 92, 39, 62, 56, 44, 118, 62, 61, 59, 137, 189, 79, 91, 155, 188, 197, 220, 45, 62, 220, 212, 181, 61, 193, 101, 16, 190, 220, 60, 15, 190, 227, 164, 32, 62, 83, 15, 11, 190, 26, 172, 14, 62, 33, 240, 221, 61, 249, 60, 39, 190, 58, 79, 192, 61, 92, 174, 135, 189, 2, 90, 8, 190, 92, 242, 45, 61, 130, 176, 150, 189, 96, 54, 184, 61, 86, 26, 66, 189, 98, 197, 202, 61, 2, 188, 1, 190, 206, 132, 225, 61, 49, 200, 250, 189, 209, 1, 155, 188, 161, 174, 49, 190, 109, 8, 25, 62, 236, 106, 203, 61, 4, 169, 252, 189, 6, 113, 253, 61, 221, 181, 155, 189, 240, 96, 209, 189, 188, 50, 181, 187, 151, 28, 62, 61, 147, 103, 16, 62, 67, 125, 221, 61, 73, 47, 39, 190, 126, 4, 11, 62, 167, 173, 207, 58, 235, 17, 41, 190, 145, 75, 157, 190, 227, 200, 129, 62, 75, 54, 157, 190, 89, 51, 100, 190, 93, 99, 39, 62, 117, 172, 200, 61, 141, 0, 10, 61, 47, 151, 140, 62, 238, 187, 59, 191, 108, 170, 154, 189, 20, 12, 142, 190, 25, 202, 97, 61, 92, 39, 116, 190, 143, 25, 62, 190, 244, 188, 30, 190, 229, 53, 156, 189, 57, 106, 213, 62, 39, 128, 62, 190, 106, 224, 150, 190, 149, 201, 50, 190, 114, 40, 14, 189, 94, 168, 79, 62, 161, 163, 141, 190, 153, 221, 74, 190, 211, 174, 124, 62, 27, 215, 26, 62, 116, 34, 70, 190, 77, 42, 64, 61, 234, 202, 107, 189, 88, 253, 14, 63, 208, 220, 141, 61, 75, 192, 255, 62, 129, 10, 194, 62, 193, 207, 10, 191, 44, 143, 29, 62, 120, 126, 169, 190, 65, 59, 132, 190, 198, 208, 137, 190, 196, 188, 152, 60, 86, 62, 11, 189, 48, 33, 241, 190, 184, 90, 36, 62, 13, 127, 194, 61, 227, 66, 184, 61, 11, 236, 103, 187, 83, 191, 71, 62, 75, 230, 238, 189, 94, 243, 132, 190, 173, 75, 179, 191, 159, 89, 43, 191, 150, 213, 133, 62, 231, 4, 145, 189, 92, 64, 140, 189, 218, 181, 66, 191, 77, 55, 97, 62, 162, 33, 197, 190, 80, 193, 186, 190, 82, 56, 122, 190, 119, 59, 128, 62, 128, 40, 139, 189, 153, 51, 27, 62, 12, 27, 38, 61, 23, 21, 192, 189, 154, 184, 107, 188, 12, 80, 129, 190, 131, 33, 26, 62, 145, 3, 205, 188, 24, 51, 173, 190, 240, 4, 183, 190, 196, 178, 7, 61, 250, 198, 65, 189, 18, 15, 99, 62, 62, 108, 193, 61, 130, 48, 73, 61, 159, 211, 114, 187, 109, 70, 158, 61, 199, 46, 195, 190, 160, 162, 23, 190, 149, 114, 174, 190, 40, 188, 88, 191, 167, 211, 237, 62, 64, 141, 104, 61, 237, 1, 3, 190, 245, 103, 239, 62, 48, 68, 173, 189, 57, 244, 119, 191, 193, 245, 139, 191, 84, 58, 49, 62, 29, 73, 140, 60, 165, 41, 108, 189, 94, 107, 59, 190, 242, 84, 50, 190, 5, 236, 0, 62, 99, 185, 22, 190, 88, 213, 136, 189, 75, 29, 147, 189, 35, 66, 197, 189, 189, 106, 192, 61, 211, 194, 149, 189, 209, 89, 9, 60, 124, 120, 23, 190, 135, 41, 36, 62, 185, 117, 97, 189, 167, 12, 160, 188, 252, 62, 29, 62, 110, 181, 193, 189, 2, 185, 210, 189, 217, 118, 156, 189, 215, 106, 161, 189, 227, 24, 174, 61, 240, 253, 51, 190, 161, 199, 140, 61, 237, 168, 198, 189, 170, 141, 247, 189, 111, 98, 75, 190, 39, 72, 191, 61, 207, 110, 238, 189, 89, 182, 39, 190, 81, 34, 179, 61, 254, 166, 60, 188, 118, 161, 49, 190, 67, 210, 140, 61, 99, 205, 138, 61, 42, 163, 211, 61, 231, 75, 246, 189, 146, 7, 183, 188, 6, 99, 61, 62, 66, 204, 174, 61, 236, 107, 226, 190, 255, 70, 40, 190, 192, 72, 241, 190, 51, 183, 50, 190, 29, 176, 155, 62, 135, 177, 139, 61, 74, 127, 255, 62, 143, 15, 5, 63, 23, 205, 206, 191, 36, 218, 169, 60, 236, 31, 134, 190, 225, 213, 95, 61, 26, 170, 135, 190, 50, 212, 230, 189, 90, 149, 249, 190, 16, 135, 213, 62, 147, 188, 111, 190, 249, 207, 238, 191, 136, 192, 91, 62, 103, 188, 162, 60, 122, 49, 154, 190, 14, 56, 122, 62, 105, 58, 109, 189, 254, 237, 3, 191, 213, 183, 209, 61, 162, 132, 154, 60, 101, 91, 29, 190, 158, 189, 31, 62, 133, 17, 72, 189, 217, 94, 130, 190, 217, 62, 156, 61, 191, 83, 51, 187, 163, 152, 122, 190, 65, 86, 106, 61, 201, 198, 121, 62, 23, 30, 50, 188, 166, 75, 152, 60, 140, 122, 218, 190, 86, 236, 152, 61, 69, 124, 133, 62, 188, 74, 243, 188, 53, 172, 22, 62, 191, 199, 160, 62, 201, 129, 1, 189, 61, 125, 200, 190, 64, 226, 159, 190, 178, 105, 71, 190, 214, 118, 247, 61, 130, 255, 191, 62, 191, 89, 119, 62, 241, 243, 131, 62, 246, 66, 95, 61, 58, 40, 249, 61, 198, 137, 66, 190, 224, 96, 104, 191, 171, 23, 221, 61, 250, 74, 50, 62, 53, 248, 21, 62, 232, 169, 11, 191, 190, 60, 10, 62, 228, 130, 25, 62, 125, 234, 33, 190, 241, 216, 40, 61, 132, 95, 231, 189, 178, 216, 92, 190, 33, 169, 186, 189, 157, 213, 31, 190, 150, 116, 137, 190, 135, 194, 38, 190, 15, 126, 220, 188, 111, 243, 113, 189, 232, 47, 28, 190, 6, 210, 55, 61, 19, 217, 205, 61, 119, 72, 29, 190, 13, 167, 22, 190, 196, 204, 41, 190, 169, 82, 41, 190, 65, 88, 129, 61, 245, 73, 62, 190, 44, 136, 25, 62, 33, 14, 117, 189, 92, 174, 130, 61, 0, 81, 39, 190, 199, 230, 6, 62, 65, 31, 245, 189, 220, 250, 31, 190, 240, 68, 149, 61, 133, 175, 190, 60, 110, 240, 48, 61, 160, 169, 66, 189, 207, 97, 124, 61, 26, 1, 199, 189, 135, 164, 127, 60, 187, 124, 9, 62, 101, 202, 65, 62, 246, 32, 77, 62, 32, 200, 117, 190, 208, 207, 37, 62, 173, 189, 202, 60, 35, 251, 7, 189, 165, 16, 180, 186, 149, 71, 75, 62, 16, 23, 252, 60, 244, 115, 79, 62, 155, 113, 254, 61, 122, 94, 59, 62, 156, 13, 73, 62, 146, 188, 104, 61, 228, 26, 132, 62, 235, 11, 45, 63, 225, 87, 177, 190, 254, 174, 178, 190, 243, 247, 67, 190, 174, 182, 149, 62, 169, 250, 151, 190, 25, 58, 165, 60, 193, 101, 12, 61, 224, 87, 11, 62, 74, 249, 150, 59, 175, 180, 79, 190, 132, 98, 105, 190, 232, 210, 195, 62, 39, 72, 42, 190, 85, 120, 35, 190, 133, 174, 14, 61, 67, 67, 63, 189, 3, 113, 243, 61, 155, 41, 48, 190, 14, 171, 167, 189, 154, 2, 200, 190, 6, 77, 187, 62, 129, 133, 114, 190, 59, 93, 103, 190, 89, 13, 81, 59, 212, 54, 219, 190, 44, 93, 89, 190, 70, 143, 39, 62, 243, 70, 159, 62, 20, 242, 152, 62, 19, 209, 197, 190, 198, 172, 12, 190, 184, 20, 98, 190, 15, 225, 164, 190, 116, 193, 169, 62, 168, 180, 106, 62, 60, 70, 189, 190, 149, 156, 234, 189, 240, 242, 221, 62, 105, 77, 165, 190, 81, 42, 143, 191, 250, 52, 183, 190, 1, 86, 59, 61, 255, 224, 62, 62, 177, 150, 96, 190, 250, 117, 124, 61, 32, 69, 5, 63, 194, 26, 252, 62, 159, 30, 211, 189, 69, 58, 148, 189, 200, 88, 10, 191, 75, 212, 246, 62, 3, 144, 131, 191, 22, 33, 218, 61, 98, 115, 21, 62, 154, 38, 231, 190, 108, 175, 142, 188, 12, 62, 52, 62, 79, 6, 193, 190, 211, 87, 116, 190, 32, 239, 92, 189, 153, 251, 248, 62, 13, 37, 247, 190, 172, 229, 32, 190, 224, 194, 177, 190, 32, 36, 13, 60, 215, 140, 228, 62, 185, 119, 18, 189, 181, 35, 147, 191, 79, 213, 104, 62, 210, 48, 228, 59, 111, 155, 168, 189, 148, 154, 224, 190, 47, 225, 157, 62, 178, 55, 173, 62, 190, 138, 131, 62, 124, 43, 152, 190, 47, 213, 15, 190, 23, 50, 214, 62, 245, 27, 201, 62, 112, 131, 171, 190, 208, 18, 73, 190, 205, 156, 198, 190, 32, 130, 79, 62, 175, 148, 85, 191, 233, 191, 187, 62, 104, 87, 177, 62, 139, 107, 77, 62, 114, 238, 80, 189, 228, 208, 109, 190, 226, 226, 154, 190, 142, 71, 35, 61, 34, 36, 7, 60, 138, 85, 92, 62, 22, 50, 165, 190, 154, 47, 115, 190, 135, 248, 41, 190, 74, 229, 46, 62, 153, 38, 236, 62, 225, 61, 57, 62, 235, 17, 38, 191, 67, 221, 69, 62, 181, 124, 225, 59, 184, 246, 50, 62, 52, 29, 217, 189, 172, 141, 107, 62, 54, 44, 143, 60, 189, 186, 118, 62, 199, 248, 81, 190, 10, 29, 37, 190, 241, 131, 213, 190, 83, 82, 8, 62, 190, 191, 154, 60, 148, 162, 12, 62, 165, 203, 131, 189, 69, 161, 149, 190, 175, 10, 143, 62, 239, 160, 182, 62, 62, 164, 253, 59, 233, 166, 181, 61, 106, 72, 139, 62, 239, 58, 142, 190, 156, 64, 181, 188, 195, 83, 46, 62, 151, 40, 217, 60, 165, 239, 164, 189, 132, 58, 21, 62, 239, 162, 168, 62, 74, 37, 172, 62, 22, 182, 45, 188, 4, 10, 88, 190, 100, 133, 23, 62, 195, 221, 198, 62, 84, 3, 145, 191, 61, 190, 172, 189, 210, 95, 103, 62, 91, 101, 190, 189, 158, 165, 220, 190, 158, 129, 117, 62, 151, 66, 55, 62, 46, 158, 108, 62, 52, 255, 246, 61, 71, 71, 6, 63, 199, 35, 157, 188, 81, 47, 12, 190, 208, 115, 239, 60, 164, 231, 26, 191, 224, 114, 127, 62, 71, 9, 220, 189, 44, 73, 3, 61, 249, 247, 234, 190, 104, 89, 162, 59, 12, 143, 129, 190, 98, 35, 136, 58, 229, 178, 135, 62, 104, 118, 204, 61, 93, 163, 156, 190, 35, 202, 38, 190, 134, 18, 115, 190, 21, 66, 195, 191, 41, 211, 233, 189, 63, 20, 18, 191, 44, 155, 231, 62, 151, 189, 129, 61, 38, 172, 233, 190, 116, 60, 90, 62, 211, 246, 37, 62, 133, 144, 19, 62, 16, 190, 82, 190, 207, 104, 128, 62, 23, 66, 239, 61, 233, 64, 242, 61, 244, 80, 95, 191, 82, 157, 240, 61, 163, 29, 147, 189, 187, 241, 53, 62, 88, 191, 149, 61, 20, 166, 115, 190, 80, 118, 136, 189, 58, 88, 25, 62, 168, 102, 140, 61, 168, 112, 170, 61, 25, 29, 48, 61, 144, 120, 160, 189, 148, 120, 232, 190, 112, 241, 85, 191, 216, 223, 32, 189, 148, 39, 2, 62, 14, 207, 139, 190, 224, 100, 35, 189, 244, 129, 26, 62, 182, 131, 151, 61, 249, 107, 133, 62, 162, 157, 222, 189, 11, 68, 35, 62, 153, 159, 135, 189, 190, 136, 136, 190, 176, 195, 59, 63, 29, 79, 149, 60, 170, 133, 112, 61, 45, 232, 234, 189, 180, 168, 44, 62, 200, 113, 137, 62, 60, 168, 136, 62, 253, 37, 210, 61, 254, 18, 17, 62, 35, 163, 164, 191, 135, 143, 145, 62, 105, 181, 87, 62, 76, 238, 4, 63, 137, 185, 151, 60, 254, 43, 2, 191, 157, 98, 14, 62, 101, 34, 8, 62, 143, 71, 188, 190, 92, 21, 74, 191, 146, 109, 139, 62, 99, 73, 150, 190, 162, 41, 67, 190, 117, 47, 177, 61, 143, 182, 12, 62, 97, 129, 82, 189, 171, 70, 131, 190, 73, 212, 196, 62, 153, 246, 21, 190, 142, 96, 12, 191, 175, 178, 137, 190, 85, 140, 236, 189, 227, 228, 222, 62, 64, 226, 201, 191, 234, 242, 156, 61, 148, 185, 11, 62, 121, 85, 28, 190, 9, 248, 35, 191, 133, 133, 36, 186, 13, 201, 126, 61, 80, 140, 150, 62, 10, 169, 175, 60, 226, 24, 238, 190, 69, 54, 192, 62, 195, 242, 115, 61, 28, 11, 58, 62, 227, 0, 31, 189, 147, 162, 203, 189, 95, 169, 126, 62, 204, 33, 201, 188, 9, 200, 186, 190, 251, 230, 62, 191, 246, 65, 113, 62, 3, 169, 245, 190, 131, 54, 109, 62, 20, 169, 151, 61, 130, 85, 232, 189, 238, 233, 215, 59, 4, 64, 38, 189, 4, 39, 187, 62, 236, 58, 212, 61, 185, 147, 23, 191, 186, 29, 33, 190, 243, 140, 28, 62, 55, 146, 60, 62, 152, 151, 39, 191, 186, 153, 54, 62, 70, 151, 147, 61, 55, 187, 253, 189, 214, 249, 137, 190, 214, 190, 29, 62, 16, 55, 167, 189, 42, 52, 145, 62, 231, 226, 70, 61, 134, 111, 42, 62, 9, 158, 220, 188, 12, 192, 199, 190, 165, 10, 213, 60, 54, 96, 118, 191, 137, 174, 16, 62, 58, 168, 44, 62, 121, 135, 11, 188, 43, 17, 118, 62, 181, 133, 153, 190, 107, 29, 156, 61, 111, 97, 114, 189, 188, 39, 67, 62, 171, 238, 159, 190, 104, 156, 217, 62, 2, 250, 27, 62, 217, 35, 195, 190, 232, 128, 42, 191, 214, 193, 132, 190, 201, 9, 214, 190, 194, 138, 195, 62, 133, 220, 110, 62, 18, 169, 246, 61, 73, 124, 81, 62, 1, 18, 225, 62, 183, 228, 131, 190, 56, 87, 74, 191, 187, 236, 0, 62, 41, 117, 128, 62, 163, 73, 21, 62, 109, 218, 104, 191, 104, 28, 188, 60, 110, 11, 25, 191, 146, 71, 165, 62, 87, 27, 237, 61, 128, 178, 2, 62, 62, 195, 199, 61, 52, 222, 169, 189, 13, 211, 129, 62, 202, 72, 114, 62, 56, 179, 76, 190, 87, 238, 155, 189, 51, 125, 39, 62, 43, 204, 182, 190, 70, 25, 8, 62, 223, 29, 149, 62, 159, 196, 97, 190, 39, 124, 20, 190, 93, 147, 28, 62, 30, 158, 166, 62, 54, 31, 63, 62, 89, 43, 153, 189, 187, 164, 49, 61, 81, 2, 129, 61, 202, 229, 142, 61, 249, 230, 146, 190, 53, 123, 90, 189, 97, 136, 134, 62, 111, 96, 85, 62, 107, 60, 164, 190, 190, 43, 188, 62, 199, 140, 10, 62, 32, 246, 86, 189, 38, 122, 161, 188, 222, 58, 176, 190, 81, 211, 233, 62, 194, 252, 29, 60, 111, 246, 107, 188, 27, 66, 156, 62, 102, 123, 116, 62, 56, 91, 239, 57, 48, 25, 161, 190, 122, 161, 230, 61, 255, 188, 153, 62, 121, 48, 40, 190, 192, 38, 40, 61, 147, 247, 57, 62, 42, 98, 154, 61, 181, 43, 25, 62, 161, 94, 79, 189, 20, 116, 59, 62, 77, 233, 175, 62, 63, 128, 94, 189, 155, 195, 141, 62, 38, 157, 35, 191, 151, 85, 128, 190, 195, 104, 21, 191, 128, 55, 54, 62, 213, 220, 139, 61, 220, 9, 78, 62, 141, 180, 192, 62, 252, 80, 30, 62, 137, 9, 7, 191, 22, 40, 115, 191, 36, 11, 226, 62, 125, 60, 11, 62, 58, 42, 183, 62, 228, 196, 235, 62, 103, 70, 223, 189, 66, 46, 241, 189, 177, 56, 130, 190, 26, 54, 184, 61, 104, 196, 101, 190, 238, 114, 60, 190, 211, 132, 142, 190, 120, 206, 28, 62, 94, 194, 135, 190, 96, 184, 159, 190, 192, 251, 174, 61, 7, 73, 170, 61, 227, 40, 179, 61, 125, 98, 189, 60, 27, 43, 97, 62, 136, 146, 160, 190, 209, 254, 25, 189, 151, 142, 230, 189, 232, 103, 206, 61, 35, 14, 48, 62, 164, 178, 211, 190, 117, 86, 149, 62, 123, 79, 23, 63, 136, 61, 188, 190, 124, 72, 144, 188, 19, 25, 211, 61, 127, 79, 178, 62, 120, 58, 207, 62, 129, 197, 50, 190, 129, 225, 70, 60, 197, 145, 98, 190, 220, 110, 105, 60, 238, 163, 75, 62, 188, 183, 226, 61, 78, 162, 222, 189, 232, 250, 47, 189, 131, 204, 4, 62, 17, 184, 171, 188, 159, 88, 39, 191, 3, 76, 165, 189, 123, 139, 200, 189, 213, 82, 56, 61, 234, 231, 26, 189, 178, 166, 94, 62, 82, 249, 202, 190, 233, 51, 25, 191, 54, 53, 47, 189, 207, 177, 52, 62, 90, 91, 103, 189, 37, 139, 17, 190, 231, 20, 133, 62, 15, 92, 20, 62, 100, 137, 232, 189, 182, 20, 129, 61, 245, 62, 32, 189, 172, 84, 200, 190, 75, 65, 73, 59, 189, 109, 33, 61, 238, 178, 46, 62, 114, 114, 177, 62, 180, 243, 108, 61, 253, 140, 252, 189, 151, 191, 178, 190, 58, 57, 142, 189, 100, 51, 241, 61, 75, 99, 134, 61, 210, 50, 15, 62, 118, 200, 130, 190, 76, 136, 110, 62, 115, 163, 154, 62, 88, 61, 140, 189, 97, 216, 238, 188, 218, 228, 37, 62, 183, 7, 135, 190, 223, 38, 136, 62, 69, 169, 246, 188, 20, 45, 169, 189, 5, 168, 164, 61, 172, 182, 140, 62, 1, 95, 30, 63, 75, 56, 25, 63, 39, 14, 68, 188, 122, 13, 227, 190, 156, 22, 76, 62, 232, 60, 55, 62, 17, 106, 76, 191, 156, 136, 115, 61, 81, 172, 43, 61, 121, 253, 134, 62, 250, 82, 101, 190, 240, 113, 2, 190, 14, 115, 254, 189, 167, 115, 236, 61, 152, 175, 93, 61, 249, 203, 98, 189, 231, 54, 141, 189, 121, 35, 248, 188, 183, 149, 89, 190, 41, 173, 185, 187, 253, 10, 18, 190, 249, 138, 157, 61, 147, 53, 10, 190, 233, 156, 197, 189, 61, 252, 163, 60, 56, 210, 159, 190, 19, 139, 179, 61, 139, 132, 214, 61, 2, 153, 157, 61, 71, 128, 159, 189, 3, 84, 199, 188, 202, 120, 253, 60, 250, 29, 30, 62, 103, 67, 97, 189, 141, 246, 242, 60, 57, 198, 51, 189, 7, 193, 91, 190, 204, 62, 254, 188, 108, 35, 185, 61, 129, 218, 235, 61, 38, 202, 12, 189, 117, 59, 219, 189, 147, 23, 237, 189, 197, 241, 171, 190, 108, 53, 172, 61, 180, 179, 137, 189, 35, 15, 93, 61, 197, 132, 187, 191, 48, 15, 99, 61, 101, 164, 163, 62, 40, 207, 166, 60, 59, 10, 196, 59, 219, 190, 54, 62, 29, 48, 15, 190, 179, 218, 38, 191, 193, 147, 34, 190, 151, 72, 23, 190, 212, 85, 163, 62, 41, 67, 133, 62, 213, 100, 231, 190, 119, 43, 146, 62, 72, 145, 7, 62, 207, 238, 241, 189, 247, 139, 30, 62, 24, 187, 185, 62, 37, 197, 200, 62, 16, 237, 144, 190, 254, 53, 236, 61, 234, 50, 88, 190, 240, 92, 44, 62, 11, 43, 217, 191, 156, 182, 19, 60, 112, 153, 202, 189, 17, 204, 76, 62, 59, 230, 125, 190, 160, 70, 176, 189, 249, 89, 67, 62, 13, 147, 202, 61, 87, 159, 35, 190, 65, 202, 223, 190, 66, 171, 158, 62, 156, 43, 12, 62, 160, 237, 220, 61, 133, 178, 177, 62, 197, 52, 22, 189, 39, 106, 237, 189, 167, 179, 130, 190, 114, 99, 156, 188, 142, 147, 24, 190, 21, 119, 172, 189, 225, 167, 195, 189, 186, 3, 68, 190, 51, 35, 225, 61, 17, 60, 194, 190, 37, 185, 172, 190, 147, 42, 238, 60, 97, 37, 178, 62, 41, 131, 39, 191, 192, 10, 61, 61, 143, 160, 235, 190, 218, 138, 51, 191, 64, 38, 108, 190, 76, 21, 153, 62, 236, 204, 5, 191, 222, 150, 166, 190, 221, 246, 142, 62, 203, 99, 111, 190, 20, 12, 34, 191, 63, 194, 85, 191, 176, 75, 185, 62, 109, 105, 43, 190, 74, 195, 218, 62, 79, 182, 254, 62, 72, 120, 19, 190, 204, 145, 43, 61, 86, 69, 2, 191, 83, 27, 253, 62, 35, 199, 242, 190, 12, 1, 2, 191, 3, 213, 254, 61, 183, 26, 77, 189, 243, 223, 151, 189, 194, 93, 169, 62, 8, 2, 94, 190, 252, 237, 131, 187, 2, 110, 54, 189, 85, 76, 202, 62, 12, 210, 202, 190, 88, 46, 111, 190, 80, 208, 121, 189, 41, 90, 153, 189, 113, 251, 207, 62, 62, 163, 15, 190, 6, 239, 163, 189, 116, 234, 20, 63, 225, 99, 175, 61, 92, 149, 6, 190, 194, 27, 29, 191, 157, 187, 181, 62, 134, 33, 28, 62, 243, 236, 11, 62, 249, 252, 42, 191};
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
                alignas(float) const unsigned char memory[] = {164, 220, 66, 62, 181, 75, 79, 58, 242, 2, 90, 189, 192, 156, 63, 62, 27, 36, 97, 62, 103, 165, 18, 61, 42, 209, 34, 62, 217, 30, 15, 190, 145, 220, 17, 189, 234, 92, 170, 189, 213, 162, 56, 62, 236, 71, 100, 62, 43, 43, 148, 61, 218, 173, 128, 189, 200, 196, 183, 189, 62, 97, 34, 62, 124, 69, 22, 62, 98, 38, 59, 62, 20, 92, 148, 190, 105, 122, 41, 62, 144, 140, 59, 62, 213, 203, 241, 188, 105, 67, 65, 190, 52, 158, 192, 62, 22, 69, 112, 189, 193, 60, 195, 189, 184, 47, 138, 62, 242, 43, 153, 187, 120, 26, 177, 190, 12, 107, 176, 188, 142, 91, 125, 190, 142, 214, 28, 62};
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
                alignas(float) const unsigned char memory[] = {222, 225, 100, 62, 226, 195, 24, 62, 172, 175, 71, 63, 7, 139, 92, 190, 147, 101, 108, 189, 253, 40, 129, 61, 248, 72, 36, 62, 218, 131, 122, 63, 243, 101, 78, 62, 225, 158, 242, 59, 194, 13, 170, 63, 203, 207, 131, 62, 43, 161, 127, 189, 106, 76, 19, 190, 51, 161, 185, 62, 186, 197, 225, 62, 22, 61, 183, 62, 81, 187, 130, 190, 148, 66, 63, 191, 105, 53, 5, 190, 226, 172, 88, 191, 35, 165, 192, 190, 14, 28, 188, 62, 136, 124, 98, 190, 168, 50, 254, 62, 17, 51, 41, 191, 78, 212, 100, 189, 206, 251, 128, 190, 164, 238, 205, 61, 160, 96, 169, 190, 132, 154, 33, 63, 15, 56, 46, 63, 66, 178, 155, 190, 25, 213, 120, 62, 180, 52, 90, 63, 115, 178, 207, 189, 95, 142, 97, 190, 123, 87, 32, 62, 226, 97, 238, 190, 23, 68, 102, 62, 14, 196, 103, 190, 176, 202, 198, 189, 250, 123, 163, 189, 21, 170, 219, 190, 253, 94, 182, 61, 229, 119, 6, 62, 31, 21, 149, 190, 29, 161, 129, 61, 124, 29, 92, 190, 184, 28, 170, 189, 6, 61, 5, 62, 118, 73, 146, 190, 226, 37, 7, 62, 163, 188, 212, 59, 29, 235, 222, 61, 181, 36, 160, 190, 89, 174, 14, 61, 241, 53, 168, 62, 129, 88, 230, 190, 142, 254, 146, 62, 48, 133, 1, 62, 213, 21, 141, 190, 214, 64, 62, 62, 111, 214, 167, 189};
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
                alignas(float) const unsigned char memory[] = {190, 77, 243, 187, 30, 113, 152, 190};
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
    alignas(float) const unsigned char memory[] = {249, 192, 140, 63, 190, 108, 153, 187, 75, 111, 22, 63};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {210, 23, 209, 191, 32, 163, 253, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0048/steps/000000000018000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}