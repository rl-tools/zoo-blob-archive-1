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
                alignas(float) const unsigned char memory[] = {82, 12, 115, 63, 143, 204, 110, 63, 190, 247, 195, 62, 40, 66, 2, 190, 25, 169, 70, 190, 189, 228, 138, 190, 124, 22, 190, 190, 203, 43, 130, 191, 186, 125, 95, 190, 252, 164, 4, 190, 201, 76, 173, 62, 20, 47, 21, 191, 176, 253, 134, 190, 129, 150, 179, 62, 143, 197, 8, 63, 79, 52, 143, 62, 102, 23, 42, 62, 112, 11, 142, 62, 52, 60, 229, 61, 0, 42, 123, 63, 189, 124, 213, 189, 136, 78, 37, 63, 142, 247, 147, 190, 178, 183, 173, 189, 223, 125, 111, 62, 99, 106, 51, 191, 36, 98, 26, 190, 77, 10, 64, 63, 158, 243, 52, 191, 251, 122, 9, 191, 119, 217, 64, 188, 2, 34, 253, 190, 172, 226, 184, 62, 239, 240, 55, 191, 233, 145, 11, 191, 163, 167, 133, 190, 199, 107, 251, 190, 83, 36, 63, 63, 103, 137, 150, 190, 216, 247, 177, 190, 143, 106, 32, 191, 130, 13, 182, 190, 27, 169, 173, 189, 242, 60, 129, 190, 25, 137, 172, 188, 152, 221, 236, 190, 105, 26, 62, 191, 22, 168, 183, 61, 233, 56, 28, 63, 193, 107, 34, 63, 10, 248, 121, 62, 65, 194, 9, 63, 77, 191, 123, 191, 118, 158, 3, 190, 66, 70, 247, 62, 242, 92, 106, 191, 48, 203, 116, 190, 251, 68, 38, 63, 116, 147, 238, 60, 39, 89, 231, 62, 110, 162, 216, 190, 63, 29, 140, 190, 19, 130, 35, 63, 149, 37, 11, 62, 156, 78, 174, 62, 127, 178, 147, 62, 147, 46, 78, 62, 80, 215, 89, 191, 71, 119, 139, 62, 252, 168, 80, 63, 184, 86, 255, 62, 149, 4, 166, 61, 153, 146, 33, 191, 191, 121, 128, 63, 81, 198, 5, 62, 145, 190, 204, 61, 13, 66, 166, 191, 35, 172, 244, 190, 96, 176, 180, 189, 150, 254, 6, 190, 27, 217, 33, 60, 193, 44, 55, 62, 211, 47, 122, 62, 204, 164, 231, 190, 110, 118, 90, 63, 241, 146, 55, 191, 160, 152, 154, 190, 149, 69, 188, 62, 98, 128, 113, 63, 81, 41, 9, 62, 12, 36, 250, 190, 65, 33, 204, 62, 43, 22, 38, 62, 166, 94, 144, 190, 186, 242, 36, 63, 224, 95, 15, 62};
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
                alignas(float) const unsigned char memory[] = {182, 24, 54, 191, 52, 56, 152, 190, 126, 239, 114, 190, 79, 2, 63, 190, 23, 58, 42, 189, 56, 231, 225, 62, 135, 34, 180, 61, 56, 65, 158, 62, 130, 9, 235, 187, 149, 169, 135, 62, 115, 12, 72, 189, 57, 30, 170, 190, 73, 255, 71, 190, 171, 177, 114, 188, 53, 32, 19, 191, 93, 29, 243, 62, 121, 99, 59, 191, 30, 219, 57, 190, 179, 175, 232, 189, 205, 44, 221, 61, 211, 213, 179, 190, 101, 187, 92, 190, 18, 239, 100, 62, 86, 81, 216, 62, 251, 45, 252, 62, 231, 74, 220, 62, 12, 226, 130, 190, 130, 184, 72, 62, 19, 247, 19, 191, 124, 54, 145, 62, 159, 52, 150, 62, 58, 233, 148, 62};
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
                alignas(float) const unsigned char memory[] = {254, 1, 127, 190, 208, 178, 13, 190, 191, 100, 127, 191, 34, 108, 219, 190, 65, 36, 140, 61, 54, 215, 0, 62, 5, 236, 25, 190, 109, 103, 163, 62, 50, 195, 1, 61, 216, 44, 213, 188, 219, 31, 72, 190, 23, 66, 157, 191, 124, 47, 166, 62, 218, 145, 130, 191, 179, 179, 39, 62, 102, 133, 109, 62, 237, 13, 112, 191, 137, 230, 52, 62, 241, 232, 179, 62, 43, 207, 174, 61, 41, 149, 156, 189, 189, 91, 84, 190, 155, 137, 65, 188, 24, 18, 17, 189, 99, 247, 45, 62, 185, 165, 134, 190, 217, 76, 195, 60, 145, 219, 209, 190, 198, 194, 132, 190, 7, 126, 199, 189, 165, 213, 249, 61, 165, 76, 250, 61, 120, 202, 190, 62, 43, 220, 171, 190, 40, 35, 70, 188, 236, 84, 216, 62, 35, 96, 179, 189, 45, 11, 64, 189, 210, 161, 28, 62, 79, 17, 166, 60, 16, 155, 42, 191, 47, 156, 45, 189, 241, 245, 84, 62, 137, 123, 178, 189, 136, 198, 239, 189, 97, 82, 77, 60, 158, 209, 163, 61, 198, 103, 54, 62, 246, 110, 170, 62, 97, 4, 129, 191, 232, 236, 240, 191, 217, 244, 54, 61, 110, 85, 155, 59, 154, 233, 126, 62, 209, 11, 46, 190, 156, 197, 192, 62, 180, 110, 61, 190, 5, 161, 226, 190, 205, 48, 212, 187, 21, 112, 210, 62, 145, 141, 67, 191, 172, 231, 242, 61, 47, 168, 128, 190, 192, 185, 180, 189, 228, 103, 217, 190, 32, 108, 204, 189, 64, 117, 63, 188, 65, 226, 205, 189, 9, 221, 4, 190, 126, 44, 17, 62, 196, 199, 115, 62, 49, 159, 83, 189, 190, 207, 10, 62, 30, 239, 147, 62, 94, 44, 87, 190, 154, 0, 39, 190, 53, 60, 217, 190, 10, 172, 4, 189, 93, 0, 72, 61, 79, 114, 49, 61, 5, 233, 141, 191, 52, 70, 173, 189, 110, 19, 18, 61, 50, 72, 240, 189, 105, 75, 145, 62, 103, 126, 131, 190, 69, 223, 31, 189, 41, 188, 180, 61, 71, 24, 20, 191, 2, 193, 223, 61, 130, 89, 21, 62, 37, 212, 3, 189, 99, 90, 118, 62, 73, 216, 132, 61, 217, 255, 247, 189, 215, 233, 14, 190, 224, 197, 7, 62, 98, 31, 132, 62, 173, 232, 96, 190, 97, 163, 69, 62, 244, 235, 135, 189, 40, 79, 188, 61, 37, 203, 19, 191, 21, 50, 18, 62, 175, 57, 172, 62, 49, 246, 9, 60, 58, 233, 228, 189, 8, 238, 151, 190, 204, 130, 49, 190, 55, 155, 151, 61, 4, 251, 12, 61, 30, 212, 137, 190, 249, 45, 39, 190, 224, 165, 242, 62, 17, 128, 9, 63, 146, 245, 172, 189, 29, 158, 85, 61, 71, 203, 134, 190, 233, 102, 10, 189, 1, 66, 153, 190, 195, 253, 125, 191, 172, 127, 121, 62, 132, 40, 97, 61, 171, 232, 97, 62, 195, 103, 247, 62, 176, 66, 218, 191, 196, 177, 30, 189, 181, 210, 172, 189, 234, 118, 4, 191, 169, 119, 80, 62, 232, 72, 138, 191, 178, 140, 254, 61, 199, 178, 161, 61, 31, 149, 26, 62, 30, 80, 88, 62, 152, 77, 199, 62, 145, 86, 29, 191, 204, 47, 128, 190, 196, 51, 186, 190, 52, 218, 146, 191, 253, 149, 50, 63, 53, 149, 63, 191, 189, 73, 46, 190, 183, 135, 23, 62, 2, 242, 140, 191, 136, 108, 91, 62, 134, 40, 169, 62, 83, 190, 193, 189, 234, 244, 22, 62, 54, 97, 167, 190, 100, 165, 81, 62, 180, 124, 212, 189, 230, 104, 46, 62, 181, 27, 127, 191, 195, 103, 44, 189, 63, 183, 1, 190, 9, 185, 79, 191, 211, 72, 33, 60, 9, 7, 25, 62, 12, 80, 102, 188, 111, 125, 144, 190, 148, 46, 220, 189, 242, 134, 224, 60, 63, 11, 23, 189, 239, 47, 203, 61, 61, 122, 30, 62, 221, 62, 178, 60, 211, 32, 100, 62, 72, 253, 60, 61, 236, 169, 82, 62, 153, 92, 26, 189, 241, 157, 31, 190, 253, 56, 229, 190, 7, 240, 148, 188, 43, 90, 208, 61, 97, 253, 110, 62, 226, 7, 151, 191, 45, 8, 241, 60, 148, 205, 117, 62, 9, 89, 217, 61, 35, 204, 255, 61, 116, 35, 123, 189, 118, 155, 1, 62, 130, 235, 141, 62, 249, 1, 69, 191, 233, 64, 8, 62, 56, 17, 221, 189, 16, 75, 157, 189, 237, 128, 14, 188, 106, 134, 145, 189, 230, 107, 56, 190, 174, 152, 93, 190, 217, 185, 167, 190, 225, 210, 146, 190, 11, 97, 162, 189, 158, 124, 97, 190, 140, 65, 0, 191, 196, 5, 253, 190, 165, 154, 71, 190, 140, 171, 247, 58, 116, 105, 169, 59, 32, 177, 23, 61, 24, 100, 171, 62, 159, 168, 220, 190, 146, 96, 141, 61, 116, 175, 88, 188, 171, 251, 37, 190, 238, 184, 137, 62, 107, 212, 9, 62, 118, 118, 47, 188, 160, 84, 252, 61, 173, 6, 10, 191, 72, 152, 51, 190, 213, 159, 80, 190, 193, 180, 90, 61, 24, 132, 128, 62, 239, 106, 135, 188, 153, 174, 247, 61, 146, 100, 218, 61, 240, 253, 109, 190, 108, 245, 82, 189, 41, 14, 74, 190, 14, 131, 218, 61, 159, 118, 151, 189, 81, 169, 33, 188, 242, 59, 143, 190, 25, 157, 68, 189, 121, 65, 76, 61, 36, 146, 134, 189, 22, 196, 118, 62, 72, 178, 28, 62, 156, 108, 93, 62, 180, 226, 177, 190, 86, 101, 200, 189, 0, 75, 98, 61, 216, 199, 43, 62, 197, 199, 247, 189, 121, 1, 171, 61, 57, 40, 15, 62, 19, 162, 69, 62, 58, 112, 53, 190, 56, 52, 64, 191, 169, 93, 130, 191, 184, 92, 216, 61, 108, 255, 173, 189, 57, 182, 18, 189, 230, 228, 20, 62, 168, 99, 156, 62, 172, 16, 220, 61, 115, 147, 21, 190, 1, 232, 201, 61, 143, 157, 112, 62, 28, 26, 82, 191, 226, 223, 125, 62, 207, 35, 250, 61, 143, 24, 125, 188, 179, 165, 21, 190, 86, 52, 48, 190, 215, 228, 157, 62, 184, 190, 20, 62, 228, 103, 182, 190, 217, 43, 146, 190, 160, 188, 93, 188, 124, 220, 47, 188, 103, 18, 97, 189, 209, 49, 86, 60, 153, 147, 161, 62, 65, 166, 173, 62, 112, 35, 68, 60, 36, 140, 194, 59, 227, 245, 246, 59, 79, 151, 19, 63, 210, 51, 105, 62, 39, 211, 150, 189, 28, 18, 188, 190, 16, 76, 71, 190, 122, 249, 136, 190, 198, 87, 188, 190, 67, 211, 195, 190, 205, 154, 14, 190, 220, 133, 180, 62, 241, 45, 147, 61, 224, 86, 51, 62, 119, 169, 188, 60, 43, 122, 234, 190, 124, 239, 255, 61, 95, 87, 26, 62, 71, 164, 164, 189, 133, 96, 246, 189, 113, 94, 139, 61, 112, 66, 4, 188, 42, 85, 165, 61, 51, 225, 7, 189, 136, 50, 28, 59, 106, 105, 185, 189, 142, 101, 42, 190, 232, 98, 3, 190, 160, 157, 8, 190, 55, 69, 77, 189, 173, 82, 239, 189, 80, 115, 18, 62, 15, 193, 199, 189, 57, 27, 70, 61, 163, 190, 126, 61, 169, 29, 166, 189, 234, 10, 133, 61, 106, 80, 65, 61, 89, 77, 29, 190, 110, 196, 42, 190, 124, 140, 28, 62, 79, 37, 52, 62, 252, 246, 177, 188, 108, 34, 17, 62, 213, 223, 132, 189, 69, 22, 21, 62, 33, 38, 220, 60, 161, 147, 253, 188, 179, 212, 53, 190, 242, 249, 27, 190, 171, 205, 3, 190, 238, 69, 130, 61, 15, 202, 31, 190, 110, 149, 67, 191, 185, 178, 130, 190, 177, 211, 78, 190, 150, 81, 28, 189, 124, 214, 63, 61, 4, 238, 29, 190, 149, 122, 171, 189, 204, 88, 162, 190, 207, 58, 227, 190, 89, 39, 118, 191, 46, 158, 6, 63, 118, 24, 86, 191, 34, 5, 45, 190, 23, 33, 20, 190, 137, 215, 147, 62, 197, 149, 30, 191, 230, 115, 121, 61, 142, 120, 147, 189, 74, 168, 140, 189, 183, 7, 196, 190, 62, 201, 78, 190, 44, 89, 30, 62, 208, 19, 156, 62, 85, 109, 135, 191, 79, 252, 107, 61, 213, 8, 174, 190, 129, 59, 108, 60, 218, 190, 90, 62, 202, 78, 5, 62, 31, 62, 65, 62, 179, 47, 99, 189, 189, 146, 23, 190, 213, 198, 136, 191, 207, 102, 137, 190, 36, 32, 126, 189, 186, 110, 28, 189, 81, 226, 139, 191, 28, 21, 44, 190, 210, 208, 27, 190, 181, 244, 106, 190, 9, 226, 170, 189, 8, 101, 110, 191, 68, 129, 31, 190, 36, 73, 101, 191, 236, 243, 29, 190, 217, 49, 100, 62, 177, 145, 182, 190, 156, 72, 177, 62, 66, 19, 10, 191, 4, 244, 50, 190, 31, 248, 122, 62, 14, 229, 17, 62, 187, 63, 129, 60, 22, 128, 14, 191, 220, 126, 204, 62, 5, 105, 139, 191, 16, 97, 181, 61, 60, 248, 252, 189, 46, 126, 188, 189, 37, 59, 113, 190, 52, 154, 223, 60, 105, 167, 99, 62, 19, 240, 13, 191, 148, 126, 150, 188, 126, 131, 230, 189, 206, 112, 128, 62, 127, 247, 100, 190, 208, 86, 167, 190, 187, 118, 83, 62, 72, 137, 34, 61, 78, 218, 243, 59, 170, 231, 112, 60, 121, 238, 27, 62, 91, 128, 176, 189, 58, 164, 149, 190, 48, 87, 94, 62, 106, 164, 250, 61, 136, 205, 233, 58, 26, 180, 173, 191, 39, 68, 185, 190, 251, 151, 80, 61, 20, 23, 142, 190, 153, 15, 150, 62, 185, 8, 155, 190, 86, 151, 188, 189, 124, 55, 51, 60, 7, 238, 205, 190, 9, 92, 110, 62, 216, 163, 11, 62, 235, 232, 102, 62, 87, 242, 202, 60, 169, 214, 3, 62, 99, 63, 182, 62, 219, 205, 173, 60, 127, 54, 122, 61, 166, 55, 20, 62, 203, 12, 14, 62, 151, 178, 141, 60, 184, 5, 174, 61, 242, 146, 8, 61, 99, 242, 173, 61, 171, 230, 201, 59, 204, 230, 234, 189, 135, 202, 239, 189, 126, 226, 133, 60, 79, 200, 196, 62, 73, 49, 78, 190, 121, 105, 133, 62, 230, 23, 128, 59, 150, 194, 46, 62, 11, 25, 13, 189, 17, 147, 194, 189, 101, 63, 1, 191, 119, 210, 20, 62, 144, 157, 4, 190, 171, 97, 60, 190, 231, 12, 161, 61, 203, 222, 106, 60, 58, 88, 102, 189, 107, 145, 103, 62, 180, 255, 48, 61, 2, 147, 123, 62, 155, 220, 98, 190, 24, 74, 42, 190, 24, 62, 89, 188, 196, 152, 24, 62, 75, 12, 109, 62, 136, 72, 204, 189, 116, 109, 156, 62, 54, 169, 23, 189, 54, 40, 140, 190, 3, 131, 102, 189, 183, 83, 35, 61, 94, 4, 81, 190, 161, 29, 182, 190, 87, 134, 124, 190, 68, 27, 18, 188, 87, 163, 97, 62, 153, 101, 157, 61, 95, 244, 105, 62, 8, 68, 207, 188, 244, 210, 131, 62, 112, 126, 161, 190, 67, 47, 73, 191, 231, 202, 139, 191, 79, 124, 66, 62, 205, 184, 33, 191, 83, 45, 250, 61, 186, 242, 135, 190, 94, 88, 86, 62, 87, 81, 156, 62, 59, 233, 120, 189, 46, 89, 55, 190, 244, 119, 89, 61, 142, 72, 52, 191, 126, 128, 65, 62, 129, 34, 170, 190, 42, 223, 154, 60, 224, 183, 165, 61, 116, 94, 135, 189, 247, 53, 34, 62, 235, 21, 88, 61, 251, 169, 131, 61, 192, 112, 93, 61, 177, 144, 250, 188, 156, 168, 169, 62, 142, 128, 144, 61, 92, 128, 42, 62, 184, 116, 180, 190, 220, 71, 136, 188, 73, 182, 23, 60, 168, 22, 224, 189, 191, 188, 31, 190, 88, 193, 156, 62, 148, 141, 49, 190, 142, 13, 99, 190, 152, 218, 123, 190, 254, 71, 36, 62, 156, 97, 150, 190, 127, 8, 77, 190, 51, 12, 155, 190, 30, 89, 71, 62, 176, 12, 72, 62, 15, 75, 56, 62, 27, 205, 187, 61, 88, 152, 52, 61, 117, 71, 222, 190, 246, 124, 3, 62, 116, 168, 152, 189, 133, 43, 32, 61, 141, 183, 85, 62, 162, 224, 13, 61, 18, 234, 149, 191, 31, 194, 159, 190, 233, 153, 59, 62, 129, 8, 217, 60, 48, 31, 165, 61, 4, 70, 53, 190, 38, 99, 220, 189, 34, 243, 78, 190, 10, 145, 68, 190, 239, 200, 153, 191, 150, 236, 4, 63, 93, 63, 109, 191, 6, 21, 13, 189, 168, 1, 38, 190, 72, 26, 174, 61, 144, 143, 68, 62, 200, 49, 54, 63, 150, 237, 36, 190, 164, 12, 0, 189, 105, 103, 241, 61, 125, 156, 8, 61, 37, 50, 251, 61, 173, 191, 130, 62, 4, 12, 184, 190, 243, 133, 223, 61, 238, 221, 30, 191, 146, 85, 49, 189, 217, 54, 254, 60, 72, 50, 4, 62, 46, 245, 29, 62, 129, 0, 130, 189, 139, 66, 242, 61, 252, 21, 227, 189, 149, 100, 96, 189, 109, 80, 205, 189, 123, 75, 154, 189, 84, 17, 21, 61, 63, 11, 145, 189, 100, 189, 10, 190, 171, 117, 210, 187, 116, 36, 221, 189, 22, 186, 147, 189, 25, 232, 51, 58, 224, 227, 237, 189, 56, 22, 225, 60, 34, 236, 0, 61, 136, 109, 224, 189, 131, 143, 246, 189, 174, 190, 26, 190, 68, 117, 107, 189, 16, 113, 231, 61, 49, 42, 64, 61, 175, 186, 147, 61, 98, 94, 8, 61, 194, 209, 34, 190, 223, 114, 228, 61, 152, 199, 161, 189, 94, 242, 150, 61, 75, 220, 244, 189, 202, 189, 183, 189, 82, 192, 233, 189, 38, 99, 28, 190, 68, 207, 227, 190, 13, 65, 1, 190, 190, 78, 137, 190, 157, 47, 154, 189, 177, 61, 13, 189, 26, 48, 130, 61, 47, 232, 167, 61, 26, 126, 129, 62, 18, 135, 16, 62, 200, 207, 147, 62, 95, 98, 50, 61, 24, 211, 17, 191, 158, 12, 139, 190, 12, 85, 157, 188, 214, 71, 232, 188, 200, 229, 241, 61, 92, 42, 160, 191, 51, 140, 20, 61, 92, 0, 228, 61, 246, 46, 5, 61, 51, 21, 148, 62, 141, 73, 70, 190, 92, 68, 222, 188, 229, 248, 229, 61, 100, 198, 2, 191, 133, 198, 36, 62, 165, 179, 166, 189, 120, 225, 164, 59, 175, 41, 49, 61, 78, 167, 184, 189, 166, 1, 101, 60, 200, 169, 135, 189, 221, 4, 216, 190, 63, 219, 66, 190, 13, 188, 40, 190, 147, 153, 84, 62, 30, 144, 9, 190, 113, 117, 20, 62, 51, 9, 252, 61, 181, 211, 153, 62, 237, 196, 194, 61, 60, 36, 14, 62, 234, 178, 117, 62, 164, 203, 208, 190, 104, 204, 180, 190, 120, 112, 100, 189, 181, 111, 11, 190, 58, 206, 191, 61, 254, 111, 77, 191, 179, 159, 50, 62, 87, 108, 223, 62, 13, 140, 246, 189, 224, 89, 113, 61, 179, 168, 117, 190, 80, 238, 46, 62, 52, 179, 220, 61, 224, 179, 142, 191, 135, 138, 108, 62, 199, 150, 173, 189, 194, 191, 210, 189, 60, 91, 187, 62, 56, 141, 102, 190, 210, 161, 129, 189, 180, 244, 243, 189, 100, 192, 120, 189, 184, 72, 147, 61, 157, 254, 92, 61, 98, 182, 219, 189, 216, 202, 161, 189, 84, 28, 121, 189, 141, 43, 215, 61, 56, 255, 201, 62, 124, 44, 78, 59, 136, 63, 142, 188, 124, 186, 206, 189, 199, 154, 208, 60, 19, 186, 212, 189, 248, 181, 250, 61, 220, 182, 146, 59, 129, 49, 10, 62, 17, 57, 131, 190, 181, 101, 24, 61, 210, 245, 252, 190, 199, 201, 57, 62, 28, 84, 98, 189, 167, 230, 107, 190, 183, 252, 9, 62, 17, 203, 86, 62, 63, 92, 108, 188, 158, 66, 16, 190, 68, 200, 69, 190, 76, 79, 96, 62, 97, 19, 219, 190, 203, 15, 8, 188, 244, 131, 138, 189, 208, 93, 245, 61, 237, 160, 133, 62, 34, 190, 36, 186, 201, 15, 45, 62, 67, 99, 25, 62, 239, 125, 239, 190, 33, 112, 15, 62, 218, 152, 190, 61, 195, 156, 24, 60, 167, 71, 138, 189, 92, 168, 226, 61, 248, 105, 249, 189, 187, 52, 54, 61, 108, 149, 166, 190, 189, 47, 62, 62, 185, 71, 64, 189, 143, 234, 88, 62, 211, 2, 153, 187, 251, 7, 223, 189, 132, 87, 71, 191, 31, 76, 70, 62, 129, 248, 146, 190, 138, 129, 18, 190, 137, 112, 51, 190, 137, 54, 128, 62, 112, 2, 20, 62, 48, 214, 36, 190, 207, 79, 86, 187, 92, 95, 143, 60, 184, 83, 65, 191, 55, 4, 131, 62, 171, 135, 11, 191, 62, 213, 183, 60, 52, 138, 144, 61, 101, 212, 15, 62, 110, 156, 129, 191, 52, 247, 164, 190, 98, 33, 51, 62, 144, 65, 240, 61, 19, 158, 182, 59, 132, 227, 60, 190, 252, 64, 53, 62, 71, 255, 183, 190, 104, 34, 193, 189, 119, 222, 125, 191, 201, 173, 236, 62, 85, 13, 137, 191, 36, 191, 163, 189, 103, 191, 65, 189, 101, 159, 19, 62, 71, 255, 189, 62, 194, 156, 90, 63, 151, 34, 69, 190, 129, 117, 61, 188, 91, 72, 33, 189, 141, 174, 24, 190, 208, 230, 240, 60, 91, 20, 121, 62, 36, 194, 88, 191, 133, 84, 224, 189, 179, 191, 168, 190, 186, 106, 225, 190, 82, 107, 183, 62, 33, 245, 6, 62, 44, 107, 57, 62, 250, 129, 21, 191, 151, 183, 104, 189, 5, 131, 218, 189, 71, 61, 82, 190, 40, 112, 195, 61, 236, 141, 5, 189, 171, 118, 6, 59, 204, 235, 19, 62, 245, 195, 227, 61, 147, 17, 142, 188, 82, 142, 137, 61, 231, 130, 191, 190, 114, 80, 90, 190, 198, 78, 60, 190, 240, 156, 124, 189, 156, 112, 85, 62, 14, 6, 101, 191, 25, 3, 145, 62, 140, 167, 106, 62, 216, 35, 25, 190, 84, 202, 238, 61, 124, 133, 39, 190, 63, 187, 246, 60, 183, 215, 60, 191, 156, 39, 131, 190, 45, 130, 131, 60, 162, 138, 54, 61, 164, 227, 180, 190, 105, 29, 137, 190, 113, 9, 239, 190, 126, 13, 204, 189, 146, 148, 5, 62, 65, 36, 211, 61, 6, 126, 250, 61, 0, 136, 169, 190, 236, 216, 236, 61, 206, 129, 152, 189, 108, 147, 58, 62, 161, 16, 192, 62, 111, 90, 102, 61, 11, 6, 143, 190, 17, 211, 137, 61, 241, 131, 18, 62, 197, 118, 45, 191, 45, 180, 126, 61, 157, 85, 32, 190, 95, 0, 246, 189, 168, 213, 221, 59, 7, 121, 219, 60, 123, 88, 10, 62, 54, 246, 4, 191, 10, 119, 39, 62, 9, 183, 49, 62, 200, 112, 32, 189, 207, 53, 52, 60, 117, 198, 5, 189, 209, 227, 14, 190, 65, 95, 96, 190, 222, 158, 162, 188, 108, 21, 147, 61, 117, 68, 129, 190, 154, 116, 93, 189, 174, 204, 51, 190, 142, 192, 151, 188, 175, 8, 43, 191, 182, 130, 18, 189, 235, 67, 218, 190, 2, 61, 72, 190, 183, 89, 133, 61, 152, 206, 237, 61, 252, 188, 139, 189, 177, 182, 178, 62, 153, 187, 168, 61, 130, 166, 76, 62, 198, 36, 103, 190, 99, 96, 48, 191, 235, 238, 68, 190, 54, 23, 20, 190, 110, 49, 225, 189, 1, 38, 58, 62, 13, 38, 79, 191, 149, 174, 84, 62, 187, 57, 2, 63, 118, 181, 237, 189, 20, 158, 108, 62, 213, 28, 30, 60, 220, 10, 107, 62, 56, 122, 163, 189, 112, 37, 216, 190, 131, 203, 231, 61, 54, 94, 211, 61, 6, 229, 173, 189, 123, 86, 79, 62, 210, 60, 138, 189, 38, 17, 80, 61, 245, 214, 37, 61, 216, 84, 170, 187, 8, 69, 221, 189, 168, 151, 147, 61, 182, 32, 190, 188, 51, 85, 129, 61, 26, 126, 117, 61, 206, 57, 10, 62, 65, 75, 187, 62, 115, 177, 117, 189, 38, 44, 234, 186, 192, 229, 22, 61, 188, 48, 173, 190, 7, 82, 19, 189, 125, 181, 17, 188, 162, 252, 247, 189, 241, 10, 67, 62, 186, 200, 212, 190, 51, 148, 29, 190, 23, 115, 160, 190, 186, 244, 161, 189, 71, 223, 40, 187, 225, 91, 80, 189, 210, 102, 214, 189, 46, 33, 5, 62, 131, 37, 11, 189, 60, 108, 243, 61, 2, 18, 35, 188, 240, 23, 123, 189, 193, 243, 163, 190, 28, 95, 78, 189, 93, 135, 70, 190, 128, 193, 241, 61, 174, 168, 8, 191, 218, 52, 25, 60, 15, 223, 145, 191, 193, 158, 238, 61, 248, 192, 227, 61, 163, 78, 10, 62, 81, 173, 94, 62, 66, 19, 50, 62, 139, 209, 246, 189, 50, 28, 132, 62, 165, 169, 166, 188, 238, 31, 96, 191, 107, 214, 102, 62, 230, 175, 219, 188, 28, 142, 176, 188, 52, 97, 134, 62, 68, 97, 142, 191, 250, 190, 92, 191, 131, 90, 26, 188, 112, 121, 77, 190, 42, 240, 154, 61, 163, 213, 131, 190, 136, 60, 95, 62, 253, 189, 7, 190, 36, 59, 27, 189, 54, 35, 44, 189, 37, 27, 75, 189, 40, 190, 254, 188, 65, 253, 86, 62, 125, 68, 242, 189, 50, 147, 71, 62, 115, 148, 189, 189, 13, 221, 25, 188, 224, 154, 172, 189, 41, 234, 223, 62, 17, 121, 6, 62, 196, 17, 16, 191, 109, 239, 21, 189, 66, 21, 197, 60, 253, 11, 22, 189, 250, 226, 132, 190, 177, 163, 135, 190, 118, 10, 109, 61, 35, 17, 139, 62, 176, 127, 37, 190, 98, 33, 151, 62, 215, 69, 189, 61, 77, 170, 250, 62, 126, 244, 190, 189, 134, 200, 69, 190, 101, 71, 46, 191, 210, 41, 108, 62, 254, 164, 215, 190, 230, 252, 42, 189, 217, 253, 96, 190, 190, 244, 181, 62, 11, 241, 130, 62, 228, 75, 240, 61, 226, 159, 117, 61, 128, 253, 249, 61, 35, 100, 27, 191, 154, 66, 164, 62, 37, 251, 130, 190, 111, 29, 206, 187, 123, 214, 165, 188, 220, 97, 4, 62, 37, 211, 191, 190, 22, 246, 84, 188, 122, 58, 12, 62, 184, 34, 193, 61, 221, 129, 168, 188, 40, 179, 211, 61, 228, 68, 41, 62, 181, 162, 212, 189, 30, 250, 134, 62, 79, 125, 178, 190, 192, 190, 185, 189, 115, 69, 112, 189, 131, 142, 171, 61, 74, 56, 36, 62, 91, 8, 98, 62, 118, 160, 236, 189, 0, 29, 4, 191, 223, 120, 199, 61, 178, 75, 36, 62, 50, 204, 134, 187, 227, 153, 165, 62, 90, 205, 246, 60, 37, 140, 64, 191, 166, 65, 113, 190, 183, 98, 40, 189, 33, 196, 76, 190, 91, 78, 29, 57, 46, 14, 7, 191, 158, 51, 61, 189, 238, 248, 31, 61, 174, 206, 199, 189, 5, 154, 198, 61, 62, 7, 11, 190, 196, 191, 136, 60, 35, 59, 176, 61, 83, 57, 149, 61, 248, 0, 78, 189, 241, 72, 86, 62, 80, 192, 26, 62, 65, 156, 40, 62, 2, 112, 131, 62, 40, 220, 29, 189, 227, 171, 194, 189, 245, 98, 27, 189, 150, 117, 81, 61, 6, 196, 41, 60, 34, 202, 58, 191, 33, 218, 92, 189, 253, 223, 158, 62, 233, 19, 158, 188, 167, 193, 15, 190, 233, 35, 31, 190, 177, 228, 23, 62, 156, 164, 217, 61, 223, 177, 86, 191, 39, 40, 162, 62, 129, 139, 48, 189, 228, 116, 191, 61, 49, 51, 153, 62, 185, 109, 122, 190, 249, 36, 164, 190, 51, 93, 250, 190, 24, 166, 157, 187, 67, 255, 15, 190, 63, 116, 45, 189, 191, 31, 157, 61, 79, 40, 162, 188, 25, 118, 83, 190, 132, 36, 96, 62, 65, 84, 116, 189, 143, 186, 235, 189, 229, 58, 137, 189, 220, 78, 67, 189, 228, 24, 26, 190, 187, 157, 96, 61, 36, 229, 149, 190, 127, 55, 27, 190, 119, 50, 22, 60, 8, 209, 206, 58, 244, 172, 94, 190, 67, 154, 26, 190, 21, 64, 152, 190, 86, 21, 242, 188, 67, 238, 28, 190, 100, 84, 225, 187, 128, 101, 222, 59, 65, 50, 59, 188, 104, 215, 137, 190, 93, 227, 43, 190, 189, 130, 36, 189, 244, 251, 108, 189, 45, 123, 85, 62, 127, 34, 228, 58, 223, 207, 61, 60};
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
                alignas(float) const unsigned char memory[] = {152, 149, 227, 61, 106, 109, 189, 189, 199, 194, 44, 62, 227, 205, 42, 190, 124, 131, 71, 62, 169, 229, 82, 189, 242, 94, 180, 62, 62, 102, 166, 62, 93, 121, 219, 61, 180, 26, 24, 190, 76, 197, 43, 62, 181, 115, 31, 61, 63, 87, 230, 61, 232, 237, 145, 62, 149, 212, 93, 62, 198, 18, 149, 62, 51, 26, 196, 188, 115, 123, 123, 189, 209, 55, 104, 62, 31, 35, 239, 61, 64, 98, 134, 62, 19, 182, 153, 188, 225, 222, 1, 62, 61, 144, 208, 61, 36, 200, 125, 60, 217, 142, 43, 62, 192, 158, 213, 62, 231, 62, 0, 62, 232, 18, 82, 62, 81, 228, 77, 190, 186, 85, 38, 62, 153, 18, 91, 61};
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
                alignas(float) const unsigned char memory[] = {38, 143, 7, 63, 31, 138, 81, 191, 37, 93, 9, 62, 2, 0, 92, 191, 178, 240, 89, 63, 99, 230, 12, 61, 244, 234, 148, 190, 164, 235, 191, 190, 147, 93, 218, 190, 254, 54, 152, 189, 237, 160, 84, 63, 212, 27, 75, 63, 238, 252, 140, 62, 148, 6, 158, 189, 246, 172, 202, 190, 191, 78, 227, 189, 128, 120, 146, 62, 201, 200, 24, 188, 163, 138, 186, 62, 99, 31, 224, 62, 119, 65, 202, 189, 36, 53, 167, 190, 21, 6, 206, 62, 1, 25, 209, 62, 52, 246, 14, 190, 200, 55, 236, 62, 121, 249, 105, 189, 146, 134, 49, 63, 128, 68, 15, 191, 116, 8, 219, 190, 192, 73, 169, 62, 11, 31, 117, 62, 127, 72, 47, 61, 20, 67, 240, 62, 53, 224, 226, 190, 239, 80, 136, 62, 55, 22, 129, 62, 227, 233, 211, 190, 8, 171, 9, 60, 9, 86, 170, 190, 157, 165, 249, 61, 97, 142, 52, 62, 183, 169, 32, 190, 209, 172, 231, 61, 254, 93, 45, 190, 246, 234, 27, 190, 39, 13, 63, 62, 253, 7, 152, 190, 65, 70, 139, 189, 91, 45, 138, 61, 209, 120, 218, 190, 220, 99, 234, 61, 191, 71, 100, 190, 247, 99, 163, 61, 38, 111, 88, 188, 89, 25, 8, 63, 94, 76, 145, 61, 4, 196, 159, 62, 68, 234, 77, 190, 56, 51, 191, 187, 249, 1, 163, 61, 97, 98, 62, 190, 144, 0, 222, 188, 89, 152, 52, 62};
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
                alignas(float) const unsigned char memory[] = {64, 34, 141, 190, 164, 22, 143, 190};
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
    alignas(float) const unsigned char memory[] = {91, 38, 234, 189, 74, 181, 213, 63, 155, 17, 6, 62};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {206, 163, 102, 63, 133, 146, 87, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0073/steps/000000000014000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}