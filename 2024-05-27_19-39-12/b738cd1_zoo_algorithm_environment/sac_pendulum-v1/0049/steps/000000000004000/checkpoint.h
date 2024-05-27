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
                alignas(float) const unsigned char memory[] = {84, 99, 186, 62, 88, 230, 6, 63, 248, 42, 247, 62, 244, 213, 59, 63, 197, 5, 221, 187, 58, 150, 23, 63, 70, 22, 181, 62, 39, 93, 49, 62, 204, 13, 37, 63, 8, 82, 134, 62, 45, 6, 227, 62, 91, 44, 214, 189, 244, 159, 142, 187, 215, 192, 47, 191, 5, 201, 205, 60, 133, 151, 25, 190, 145, 183, 12, 61, 59, 13, 34, 61, 200, 59, 37, 61, 216, 247, 15, 63, 17, 98, 224, 61, 215, 251, 7, 191, 52, 249, 35, 191, 106, 48, 223, 190, 49, 153, 169, 190, 164, 235, 59, 63, 101, 12, 130, 190, 111, 204, 246, 62, 94, 171, 42, 61, 153, 168, 173, 190, 111, 173, 189, 190, 253, 121, 98, 190, 167, 254, 22, 63, 194, 102, 152, 62, 11, 23, 111, 62, 152, 169, 158, 190, 75, 69, 26, 63, 86, 190, 250, 189, 179, 39, 1, 63, 77, 122, 217, 62, 215, 249, 55, 63, 62, 0, 236, 190, 91, 187, 75, 63, 76, 7, 251, 190, 119, 34, 13, 191, 240, 9, 3, 62, 141, 20, 44, 63, 145, 55, 210, 62, 108, 130, 47, 190, 248, 254, 231, 190, 217, 225, 85, 62, 54, 217, 44, 63, 198, 185, 78, 191, 101, 74, 177, 190, 229, 209, 11, 63, 105, 9, 91, 190, 240, 138, 139, 190, 22, 183, 139, 190, 243, 143, 101, 191, 30, 4, 255, 61, 1, 186, 76, 190, 1, 178, 137, 62, 94, 230, 148, 190, 15, 250, 39, 190, 150, 88, 96, 62, 59, 243, 11, 191, 110, 5, 99, 189, 18, 120, 184, 61, 59, 192, 133, 190, 23, 129, 68, 189, 237, 228, 98, 60, 65, 148, 16, 191, 137, 127, 45, 191, 199, 2, 28, 189, 22, 122, 187, 61, 210, 140, 23, 189, 16, 0, 150, 190, 246, 15, 48, 63, 26, 70, 119, 62, 99, 80, 128, 191, 0, 69, 104, 62, 64, 233, 223, 62, 181, 230, 148, 62, 50, 15, 176, 190, 253, 252, 217, 62, 187, 102, 40, 191, 197, 220, 210, 190, 39, 107, 137, 62, 191, 228, 220, 62, 19, 244, 60, 188, 107, 60, 128, 61, 167, 50, 5, 191, 195, 127, 20, 63, 0, 233, 189, 62, 182, 226, 38, 63, 242, 212, 18, 63};
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
                alignas(float) const unsigned char memory[] = {211, 44, 64, 191, 107, 145, 101, 62, 173, 51, 28, 63, 197, 41, 224, 61, 196, 218, 144, 62, 185, 119, 31, 63, 70, 46, 216, 190, 191, 137, 243, 61, 102, 26, 113, 190, 196, 66, 125, 62, 91, 130, 18, 190, 253, 48, 78, 62, 162, 237, 131, 62, 189, 42, 149, 62, 78, 11, 164, 190, 227, 113, 50, 191, 88, 246, 51, 189, 122, 222, 229, 190, 132, 202, 126, 62, 80, 68, 131, 190, 91, 154, 131, 190, 86, 7, 14, 190, 231, 59, 18, 63, 138, 138, 50, 188, 61, 70, 203, 61, 31, 218, 225, 62, 210, 243, 121, 62, 121, 164, 185, 62, 172, 3, 30, 62, 132, 144, 17, 63, 64, 182, 94, 62, 255, 31, 113, 190};
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
                alignas(float) const unsigned char memory[] = {176, 4, 52, 62, 206, 156, 11, 189, 216, 81, 236, 60, 219, 195, 169, 61, 155, 110, 99, 190, 197, 234, 253, 189, 66, 6, 144, 188, 34, 179, 39, 62, 94, 78, 51, 189, 199, 12, 163, 189, 194, 88, 8, 190, 245, 194, 195, 188, 62, 254, 224, 61, 189, 32, 60, 62, 88, 215, 5, 189, 236, 123, 193, 189, 160, 147, 112, 189, 245, 19, 20, 190, 113, 9, 252, 189, 228, 115, 8, 189, 148, 118, 248, 188, 104, 195, 215, 189, 31, 40, 70, 190, 110, 115, 155, 189, 127, 86, 21, 62, 224, 239, 15, 62, 36, 76, 164, 189, 159, 158, 63, 61, 173, 143, 181, 60, 120, 60, 13, 190, 221, 111, 44, 190, 175, 2, 119, 188, 18, 130, 165, 188, 209, 224, 203, 189, 119, 75, 1, 191, 122, 164, 176, 190, 225, 218, 109, 62, 169, 254, 224, 188, 76, 252, 20, 188, 189, 76, 97, 62, 130, 194, 53, 191, 42, 104, 218, 190, 244, 132, 89, 191, 239, 112, 22, 191, 128, 86, 228, 60, 4, 20, 64, 190, 60, 239, 73, 190, 115, 0, 252, 61, 152, 93, 84, 62, 214, 46, 8, 190, 3, 202, 124, 190, 182, 128, 167, 62, 171, 245, 81, 189, 229, 214, 168, 61, 155, 205, 19, 62, 245, 157, 244, 61, 118, 36, 144, 62, 204, 112, 84, 190, 133, 98, 136, 190, 125, 213, 147, 190, 102, 26, 137, 188, 16, 85, 240, 189, 159, 27, 137, 191, 130, 99, 16, 62, 184, 31, 146, 190, 252, 166, 48, 190, 87, 84, 203, 61, 158, 251, 191, 60, 173, 179, 161, 190, 55, 110, 55, 62, 89, 209, 66, 190, 149, 78, 108, 189, 246, 190, 216, 62, 143, 183, 170, 189, 197, 94, 180, 61, 77, 64, 191, 188, 178, 209, 255, 189, 98, 66, 228, 190, 125, 216, 132, 61, 105, 198, 99, 61, 152, 194, 75, 190, 35, 134, 50, 190, 213, 107, 191, 189, 136, 32, 218, 190, 156, 122, 52, 190, 159, 250, 142, 191, 235, 15, 21, 62, 29, 230, 171, 191, 36, 152, 193, 62, 18, 36, 144, 60, 249, 105, 6, 190, 17, 103, 37, 191, 49, 152, 167, 190, 239, 182, 98, 62, 94, 57, 211, 188, 253, 152, 172, 189, 107, 107, 129, 62, 163, 216, 117, 62, 206, 64, 179, 189, 248, 176, 2, 62, 139, 164, 114, 190, 50, 117, 98, 62, 227, 24, 255, 61, 71, 126, 119, 60, 94, 35, 94, 190, 166, 120, 83, 189, 126, 48, 117, 189, 109, 20, 68, 61, 185, 172, 24, 189, 10, 176, 180, 62, 246, 113, 100, 190, 47, 251, 83, 61, 139, 230, 82, 189, 162, 123, 187, 190, 203, 85, 97, 62, 214, 159, 24, 62, 55, 164, 35, 62, 162, 5, 28, 62, 167, 220, 102, 189, 77, 234, 22, 190, 101, 153, 82, 61, 130, 177, 201, 189, 234, 250, 4, 189, 67, 52, 143, 62, 189, 92, 89, 190, 42, 113, 20, 189, 115, 52, 120, 190, 132, 14, 93, 62, 135, 33, 5, 190, 248, 80, 244, 59, 31, 43, 0, 190, 104, 227, 50, 190, 228, 92, 145, 61, 52, 234, 48, 62, 217, 232, 95, 61, 170, 64, 225, 189, 111, 74, 14, 189, 85, 84, 26, 62, 35, 113, 129, 189, 135, 144, 184, 61, 8, 29, 164, 189, 254, 162, 234, 187, 118, 49, 83, 189, 2, 102, 186, 61, 98, 51, 160, 190, 36, 6, 236, 186, 44, 213, 74, 60, 244, 68, 81, 190, 201, 132, 235, 188, 141, 245, 10, 189, 140, 68, 58, 60, 105, 195, 2, 190, 2, 237, 110, 62, 158, 98, 241, 61, 238, 96, 110, 62, 86, 144, 10, 190, 91, 52, 129, 62, 160, 242, 172, 61, 125, 202, 53, 62, 115, 240, 151, 189, 221, 189, 66, 189, 206, 164, 168, 190, 91, 222, 34, 62, 16, 27, 133, 60, 243, 156, 184, 61, 183, 107, 246, 61, 144, 220, 148, 61, 208, 2, 252, 57, 125, 56, 145, 61, 203, 147, 230, 61, 93, 20, 6, 62, 22, 234, 57, 62, 167, 199, 116, 190, 139, 240, 49, 61, 44, 250, 119, 62, 65, 42, 137, 61, 143, 120, 0, 191, 102, 43, 165, 61, 52, 159, 233, 61, 90, 159, 249, 190, 158, 60, 13, 190, 114, 149, 80, 190, 141, 199, 225, 189, 28, 48, 64, 190, 229, 29, 40, 189, 162, 38, 67, 190, 220, 145, 49, 62, 140, 152, 207, 61, 164, 177, 68, 62, 98, 250, 23, 62, 30, 80, 242, 61, 208, 45, 248, 189, 30, 29, 171, 61, 35, 189, 161, 62, 76, 58, 37, 62, 183, 69, 183, 62, 102, 144, 131, 190, 13, 161, 158, 61, 151, 27, 212, 61, 29, 93, 143, 189, 65, 56, 12, 190, 161, 117, 50, 62, 212, 243, 231, 60, 17, 26, 73, 60, 127, 141, 91, 62, 87, 199, 255, 61, 54, 192, 240, 60, 196, 180, 58, 62, 57, 35, 2, 190, 229, 100, 178, 190, 128, 168, 210, 189, 253, 180, 59, 190, 166, 90, 160, 190, 202, 105, 123, 190, 212, 63, 106, 190, 112, 245, 109, 61, 253, 228, 49, 190, 55, 214, 222, 189, 71, 44, 215, 190, 25, 72, 111, 61, 123, 218, 254, 189, 184, 176, 21, 62, 192, 126, 176, 190, 108, 99, 66, 61, 236, 32, 143, 61, 188, 84, 191, 62, 221, 180, 99, 59, 221, 214, 191, 188, 223, 208, 176, 189, 246, 192, 84, 62, 191, 107, 49, 189, 106, 16, 204, 61, 157, 19, 173, 190, 177, 8, 196, 189, 58, 33, 254, 190, 159, 171, 169, 61, 68, 73, 204, 62, 81, 204, 110, 61, 87, 201, 223, 190, 5, 2, 37, 188, 193, 148, 222, 61, 213, 137, 182, 190, 231, 212, 110, 189, 29, 217, 153, 62, 188, 175, 52, 62, 69, 254, 31, 62, 179, 184, 168, 62, 193, 240, 147, 61, 156, 215, 153, 189, 58, 34, 142, 190, 157, 216, 34, 189, 119, 37, 163, 62, 123, 151, 83, 190, 24, 188, 112, 61, 115, 144, 233, 190, 80, 80, 130, 61, 184, 222, 91, 190, 145, 189, 52, 190, 102, 132, 117, 62, 71, 169, 234, 189, 240, 252, 223, 189, 197, 131, 31, 62, 70, 250, 182, 61, 248, 230, 223, 189, 100, 74, 22, 189, 203, 79, 78, 62, 14, 124, 245, 60, 252, 86, 51, 62, 215, 113, 118, 190, 169, 41, 188, 60, 181, 199, 50, 61, 49, 136, 176, 189, 244, 165, 34, 190, 103, 75, 164, 61, 173, 147, 49, 189, 36, 161, 215, 190, 91, 37, 157, 60, 217, 115, 120, 190, 72, 137, 13, 62, 205, 106, 40, 189, 63, 97, 170, 189, 26, 79, 41, 189, 75, 38, 168, 62, 112, 197, 129, 59, 19, 205, 50, 62, 210, 117, 126, 62, 72, 9, 168, 62, 171, 6, 156, 189, 12, 218, 71, 61, 129, 48, 179, 61, 122, 47, 230, 60, 145, 248, 111, 60, 138, 164, 133, 189, 32, 194, 152, 190, 117, 184, 50, 62, 126, 146, 122, 189, 223, 142, 9, 190, 6, 58, 200, 189, 124, 26, 147, 189, 188, 4, 33, 60, 4, 168, 19, 62, 57, 27, 199, 189, 78, 132, 142, 62, 48, 247, 80, 62, 218, 123, 68, 61, 11, 217, 188, 62, 61, 47, 16, 62, 70, 193, 207, 190, 130, 119, 38, 189, 160, 5, 232, 188, 64, 154, 101, 189, 203, 204, 175, 61, 178, 153, 214, 190, 119, 112, 62, 190, 78, 74, 65, 59, 81, 119, 103, 60, 200, 185, 104, 62, 120, 45, 59, 59, 149, 70, 94, 60, 106, 130, 57, 62, 1, 69, 194, 59, 160, 79, 22, 62, 84, 166, 131, 61, 92, 222, 66, 188, 194, 146, 164, 190, 50, 14, 136, 61, 108, 215, 4, 62, 207, 54, 13, 61, 161, 244, 136, 190, 144, 181, 156, 61, 36, 248, 61, 190, 24, 118, 187, 60, 246, 55, 202, 60, 216, 248, 156, 61, 253, 180, 140, 189, 178, 199, 131, 62, 102, 213, 237, 60, 162, 172, 15, 191, 148, 109, 66, 189, 189, 1, 53, 62, 234, 208, 138, 62, 229, 19, 53, 188, 8, 103, 15, 62, 57, 9, 41, 61, 35, 66, 116, 190, 107, 103, 228, 188, 57, 81, 117, 190, 74, 131, 31, 62, 209, 108, 116, 189, 231, 38, 98, 62, 21, 150, 105, 190, 56, 251, 128, 62, 255, 48, 236, 188, 167, 214, 134, 190, 88, 132, 214, 189, 107, 64, 43, 62, 66, 116, 198, 190, 233, 198, 137, 190, 8, 219, 77, 190, 156, 194, 236, 60, 12, 92, 141, 62, 168, 14, 240, 59, 75, 183, 33, 190, 182, 254, 190, 61, 80, 141, 110, 189, 169, 121, 128, 188, 101, 189, 27, 190, 196, 5, 210, 61, 206, 158, 73, 189, 7, 80, 30, 190, 165, 160, 218, 189, 107, 172, 125, 188, 144, 168, 150, 60, 204, 130, 140, 189, 167, 231, 131, 61, 131, 97, 97, 62, 214, 133, 144, 189, 134, 191, 180, 190, 40, 242, 109, 60, 43, 114, 208, 61, 212, 131, 89, 190, 15, 82, 230, 61, 47, 248, 105, 59, 131, 136, 38, 190, 13, 142, 136, 62, 179, 109, 4, 61, 214, 222, 160, 189, 197, 100, 143, 190, 106, 94, 203, 60, 27, 180, 165, 189, 137, 218, 33, 62, 30, 15, 131, 62, 26, 85, 35, 61, 197, 205, 73, 190, 193, 201, 24, 189, 53, 241, 197, 189, 185, 99, 50, 189, 253, 98, 146, 189, 193, 92, 118, 190, 76, 231, 138, 62, 239, 19, 15, 60, 122, 226, 117, 190, 109, 237, 149, 189, 10, 93, 210, 60, 233, 56, 4, 62, 252, 33, 57, 62, 52, 43, 25, 62, 33, 142, 208, 61, 87, 200, 49, 62, 23, 22, 121, 61, 93, 156, 70, 188, 48, 240, 95, 190, 80, 200, 44, 62, 59, 98, 86, 190, 199, 248, 167, 190, 62, 163, 135, 62, 68, 248, 140, 189, 152, 28, 38, 190, 102, 169, 58, 191, 38, 199, 192, 190, 120, 225, 103, 62, 172, 73, 27, 62, 99, 55, 68, 61, 226, 196, 152, 62, 19, 1, 196, 190, 226, 128, 128, 190, 79, 156, 103, 191, 144, 6, 165, 190, 225, 103, 223, 189, 151, 51, 139, 189, 59, 167, 155, 190, 43, 33, 171, 59, 21, 91, 97, 62, 240, 116, 138, 189, 209, 152, 201, 189, 107, 211, 206, 62, 205, 244, 33, 62, 218, 27, 76, 189, 79, 164, 95, 59, 226, 191, 173, 189, 80, 202, 142, 62, 239, 84, 52, 190, 231, 94, 30, 191, 39, 50, 4, 190, 89, 58, 117, 61, 74, 16, 38, 190, 252, 114, 148, 191, 183, 252, 181, 188, 99, 159, 53, 189, 198, 179, 50, 61, 179, 249, 197, 187, 244, 187, 150, 189, 163, 17, 157, 61, 227, 197, 128, 189, 0, 217, 35, 188, 217, 73, 15, 190, 106, 89, 255, 60, 32, 175, 168, 189, 128, 78, 27, 190, 36, 10, 112, 61, 247, 131, 84, 189, 146, 173, 21, 190, 252, 103, 40, 62, 71, 63, 118, 188, 236, 175, 43, 190, 228, 215, 196, 189, 195, 224, 145, 188, 247, 108, 47, 62, 150, 29, 128, 189, 51, 168, 167, 61, 31, 211, 20, 190, 94, 139, 227, 60, 190, 113, 23, 62, 35, 90, 41, 190, 167, 207, 60, 61, 26, 181, 220, 61, 114, 64, 17, 188, 66, 134, 31, 190, 22, 7, 3, 62, 17, 109, 198, 189, 45, 82, 143, 189, 224, 204, 17, 62, 23, 80, 149, 61, 251, 242, 220, 61, 190, 91, 102, 190, 143, 138, 138, 61, 220, 226, 29, 62, 234, 212, 6, 62, 17, 128, 87, 190, 167, 55, 212, 189, 250, 44, 69, 190, 179, 136, 155, 189, 74, 73, 250, 61, 211, 44, 185, 61, 136, 109, 154, 189, 103, 231, 147, 61, 170, 184, 30, 62, 20, 66, 78, 188, 180, 131, 164, 60, 26, 90, 178, 61, 70, 124, 28, 62, 250, 30, 13, 62, 117, 138, 167, 189, 194, 155, 120, 61, 26, 18, 62, 62, 0, 26, 222, 189, 132, 236, 170, 190, 23, 38, 63, 62, 188, 79, 35, 190, 144, 34, 45, 59, 113, 193, 1, 190, 85, 131, 99, 62, 254, 186, 78, 189, 154, 56, 130, 189, 80, 48, 109, 190, 20, 189, 71, 62, 79, 29, 177, 61, 211, 147, 48, 62, 7, 229, 160, 62, 184, 141, 2, 61, 58, 66, 56, 190, 19, 14, 151, 188, 108, 195, 85, 191, 215, 140, 166, 189, 88, 118, 200, 189, 250, 135, 169, 60, 84, 196, 171, 190, 93, 99, 70, 187, 120, 102, 122, 62, 243, 182, 209, 190, 178, 85, 127, 189, 29, 151, 137, 62, 100, 194, 211, 61, 180, 3, 72, 62, 83, 46, 134, 62, 244, 208, 88, 61, 156, 72, 110, 189, 24, 229, 178, 190, 81, 119, 247, 190, 39, 240, 100, 59, 93, 35, 91, 188, 148, 60, 135, 62, 214, 100, 138, 191, 59, 202, 29, 60, 237, 55, 104, 60, 94, 180, 174, 189, 33, 86, 251, 61, 46, 254, 16, 62, 26, 106, 74, 61, 111, 54, 254, 61, 62, 85, 132, 62, 204, 201, 158, 187, 19, 64, 213, 188, 72, 224, 152, 189, 231, 108, 133, 189, 95, 132, 159, 189, 183, 132, 36, 62, 84, 72, 9, 62, 55, 171, 40, 190, 127, 47, 186, 189, 153, 182, 7, 62, 242, 102, 195, 190, 142, 233, 212, 59, 125, 77, 148, 62, 124, 27, 57, 62, 94, 112, 136, 189, 237, 108, 5, 190, 194, 95, 247, 61, 30, 236, 255, 188, 9, 154, 73, 189, 143, 162, 131, 190, 44, 15, 145, 61, 127, 152, 211, 61, 160, 157, 212, 61, 233, 50, 46, 60, 137, 35, 210, 61, 156, 31, 137, 61, 141, 185, 197, 61, 221, 240, 21, 61, 171, 115, 128, 61, 66, 229, 24, 189, 133, 106, 39, 61, 152, 95, 72, 61, 57, 74, 80, 62, 27, 248, 173, 187, 150, 72, 163, 189, 254, 178, 180, 190, 0, 55, 2, 190, 75, 96, 176, 61, 135, 252, 142, 62, 62, 213, 54, 189, 102, 164, 247, 61, 75, 180, 34, 62, 71, 117, 229, 190, 207, 255, 247, 189, 129, 60, 10, 189, 30, 132, 24, 190, 228, 104, 80, 61, 202, 114, 25, 60, 39, 169, 146, 189, 122, 146, 113, 187, 67, 138, 198, 189, 122, 107, 136, 189, 85, 163, 10, 61, 47, 96, 219, 61, 223, 0, 172, 61, 208, 81, 235, 59, 194, 114, 71, 62, 42, 24, 69, 190, 177, 202, 102, 190, 222, 29, 76, 62, 38, 195, 21, 191, 176, 145, 23, 62, 224, 220, 237, 61, 39, 193, 42, 190, 176, 97, 57, 61, 253, 168, 185, 61, 31, 110, 207, 60, 51, 49, 90, 62, 74, 129, 63, 62, 8, 190, 79, 61, 182, 52, 220, 190, 17, 3, 121, 62, 161, 87, 65, 189, 164, 112, 153, 190, 181, 171, 9, 61, 123, 98, 17, 62, 224, 166, 145, 190, 100, 27, 26, 191, 99, 44, 235, 190, 49, 133, 90, 60, 142, 56, 6, 191, 130, 195, 134, 189, 151, 174, 127, 62, 199, 88, 166, 62, 172, 70, 180, 190, 155, 22, 80, 187, 124, 213, 248, 187, 215, 92, 247, 59, 157, 185, 63, 190, 199, 70, 172, 190, 175, 161, 50, 190, 190, 133, 84, 60, 168, 205, 48, 189, 182, 19, 62, 62, 80, 64, 142, 62, 43, 117, 207, 190, 167, 222, 8, 190, 62, 3, 26, 61, 70, 253, 125, 62, 224, 79, 88, 62, 62, 68, 180, 60, 222, 169, 133, 190, 51, 28, 146, 190, 127, 13, 167, 62, 73, 229, 152, 190, 9, 226, 69, 190, 220, 40, 74, 62, 219, 21, 58, 62, 201, 111, 147, 190, 92, 75, 110, 190, 187, 209, 202, 190, 139, 56, 61, 62, 221, 230, 40, 190, 58, 200, 51, 190, 101, 29, 139, 62, 219, 244, 185, 62, 0, 6, 38, 190, 111, 215, 137, 62, 34, 130, 140, 62, 65, 158, 183, 62, 196, 39, 103, 190, 29, 61, 179, 61, 253, 151, 125, 189, 220, 5, 197, 189, 231, 177, 171, 189, 152, 28, 57, 61, 105, 244, 34, 62, 126, 199, 92, 190, 108, 16, 19, 190, 9, 248, 220, 62, 41, 109, 118, 61, 86, 156, 247, 61, 80, 118, 0, 62, 237, 243, 172, 61, 12, 250, 242, 190, 212, 208, 212, 61, 3, 120, 136, 61, 90, 210, 193, 190, 12, 231, 64, 60, 192, 14, 9, 190, 109, 81, 137, 190, 128, 134, 31, 191, 111, 91, 240, 190, 61, 64, 3, 188, 208, 245, 250, 190, 153, 226, 150, 61, 246, 111, 30, 62, 178, 236, 64, 61, 35, 123, 244, 190, 92, 56, 178, 189, 126, 87, 132, 59, 226, 8, 90, 62, 25, 141, 233, 60, 6, 172, 29, 61, 55, 222, 235, 61, 110, 48, 15, 190, 101, 64, 164, 188, 35, 128, 65, 62, 89, 8, 57, 190, 108, 202, 171, 60, 186, 221, 49, 190, 33, 63, 206, 189, 148, 149, 86, 187, 5, 198, 82, 190, 167, 196, 17, 61, 27, 63, 143, 189, 53, 1, 12, 62, 45, 91, 254, 189, 148, 200, 38, 61, 69, 87, 43, 62, 163, 117, 75, 59, 45, 90, 242, 61, 249, 98, 24, 62, 168, 172, 206, 61, 79, 203, 62, 190, 183, 37, 139, 189, 120, 39, 58, 61, 162, 145, 106, 189, 255, 76, 37, 190, 17, 20, 50, 190, 188, 138, 224, 188, 205, 37, 171, 187, 80, 223, 233, 187, 98, 189, 161, 61, 203, 76, 241, 61, 62, 114, 43, 189, 27, 209, 71, 62, 3, 71, 207, 61, 216, 240, 107, 62, 98, 226, 203, 190, 205, 172, 99, 62, 224, 138, 135, 62, 92, 165, 116, 190, 201, 17, 17, 190, 223, 207, 92, 62, 199, 81, 172, 61, 200, 126, 60, 62, 166, 228, 149, 60, 228, 169, 84, 62, 229, 77, 155, 60, 65, 21, 41, 189, 89, 5, 179, 188, 19, 109, 135, 190, 116, 215, 209, 61, 216, 72, 132, 61, 75, 219, 32, 188, 234, 215, 3, 190, 52, 51, 2, 190, 217, 124, 37, 190, 112, 64, 164, 189, 198, 31, 2, 62, 252, 122, 120, 190, 175, 9, 133, 60, 223, 217, 168, 189, 95, 51, 81, 62, 168, 125, 21, 190, 96, 167, 7, 62, 98, 155, 58, 62, 136, 94, 238, 61, 50, 250, 140, 61, 207, 219, 5, 61, 246, 31, 15, 190, 174, 191, 159, 189, 71, 227, 193, 61, 135, 236, 49, 190, 37, 152, 201, 188, 172, 3, 200, 188, 162, 223, 90, 190, 38, 34, 49, 189, 191, 101, 29, 62, 193, 3, 126, 190, 133, 242, 172, 59, 201, 111, 143, 189, 118, 106, 1, 60, 195, 96, 23, 189, 210, 200, 122, 189, 216, 75, 77, 190, 199, 170, 15, 190, 96, 161, 143, 60, 15, 142, 158, 190, 45, 116, 17, 62, 41, 93, 225, 187, 231, 245, 68, 190, 159, 246, 145, 61, 3, 116, 201, 188, 147, 184, 128, 189, 73, 134, 190, 189, 199, 83, 33, 190, 250, 196, 249, 188, 173, 189, 203, 189, 146, 157, 1, 190, 97, 133, 138, 190, 70, 156, 184, 61, 146, 133, 132, 60, 84, 141, 199, 60, 117, 96, 89, 62, 21, 155, 243, 188, 247, 43, 27, 190, 55, 16, 52, 58, 182, 247, 17, 191, 107, 15, 224, 61, 70, 125, 138, 190, 72, 26, 37, 62, 117, 108, 116, 190, 150, 142, 67, 62, 124, 233, 196, 188, 183, 99, 137, 190, 75, 237, 187, 61, 193, 193, 77, 62, 76, 59, 133, 61, 151, 171, 24, 62, 237, 189, 9, 62, 198, 6, 55, 62, 78, 109, 127, 62, 119, 212, 84, 190, 79, 187, 217, 190, 86, 63, 143, 61, 57, 246, 12, 190, 13, 184, 174, 189, 209, 76, 48, 191, 203, 51, 220, 188, 177, 65, 48, 190, 25, 56, 43, 190, 27, 181, 72, 62, 125, 90, 86, 190, 113, 105, 113, 62, 108, 142, 7, 62, 148, 204, 86, 190, 192, 184, 61, 190, 124, 35, 170, 62, 182, 208, 186, 62, 137, 115, 243, 61, 207, 14, 192, 60, 228, 24, 157, 190, 247, 84, 13, 191, 201, 95, 168, 62, 120, 169, 157, 190, 231, 168, 132, 190, 249, 187, 50, 62, 87, 131, 137, 62, 72, 237, 217, 190, 97, 147, 242, 190, 40, 208, 48, 191, 51, 200, 95, 61, 147, 110, 168, 190, 95, 0, 33, 62, 89, 171, 232, 61, 235, 190, 159, 62, 235, 214, 150, 190, 218, 74, 61, 62, 165, 169, 49, 61, 186, 146, 133, 62, 207, 59, 94, 190, 230, 162, 114, 61, 122, 157, 160, 59, 191, 246, 200, 188, 218, 229, 193, 188, 72, 62, 145, 187, 84, 233, 219, 190, 194, 222, 193, 61, 66, 177, 250, 61, 71, 77, 21, 190, 65, 37, 74, 62, 156, 111, 93, 190, 127, 35, 4, 62, 156, 65, 241, 186, 46, 94, 79, 61, 243, 230, 3, 62, 79, 34, 85, 61, 96, 88, 139, 60, 223, 100, 227, 61, 145, 93, 57, 189, 232, 123, 68, 190, 223, 215, 51, 188, 226, 13, 31, 61, 141, 139, 250, 189, 46, 171, 28, 190, 169, 135, 219, 190, 255, 167, 151, 188, 5, 67, 118, 190, 209, 227, 51, 190, 101, 134, 144, 61, 181, 214, 1, 188, 208, 19, 226, 189, 158, 58, 60, 190, 219, 33, 6, 62, 238, 165, 88, 189, 122, 57, 8, 190, 163, 209, 227, 59, 221, 89, 60, 190, 103, 234, 35, 190, 82, 51, 118, 61, 147, 34, 239, 61, 216, 119, 227, 188, 199, 142, 211, 189, 133, 118, 19, 190, 241, 170, 195, 61, 54, 226, 178, 189, 230, 64, 146, 189, 233, 80, 15, 62, 156, 98, 251, 189, 251, 165, 158, 188, 50, 17, 1, 62, 196, 29, 136, 189, 212, 71, 216, 60, 141, 182, 251, 59, 195, 55, 9, 190, 32, 175, 254, 189, 131, 98, 29, 189, 92, 93, 11, 189, 192, 254, 30, 190, 220, 161, 186, 188, 229, 208, 14, 190, 206, 170, 177, 189, 203, 134, 46, 189, 197, 129, 35, 190, 19, 214, 46, 62, 45, 121, 179, 189, 237, 117, 220, 189, 244, 94, 93, 61, 203, 188, 38, 62, 172, 174, 252, 61, 35, 148, 243, 61, 31, 79, 189, 186, 172, 135, 63, 61, 20, 51, 146, 190, 150, 62, 191, 189, 40, 106, 148, 61, 90, 0, 65, 190, 126, 102, 63, 62, 189, 25, 97, 62, 146, 134, 11, 189, 239, 224, 200, 61, 55, 121, 214, 60, 48, 116, 130, 190, 185, 49, 151, 189, 171, 136, 43, 62, 140, 253, 4, 62, 64, 233, 127, 61, 224, 186, 50, 62, 174, 119, 178, 187, 205, 11, 143, 189, 133, 56, 173, 189, 159, 144, 19, 190, 47, 160, 152, 61, 52, 64, 174, 61, 231, 141, 43, 62, 38, 158, 189, 59, 46, 35, 97, 61, 205, 85, 81, 190, 73, 110, 113, 190, 222, 164, 205, 61, 84, 71, 86, 61, 249, 155, 150, 61, 131, 22, 214, 59, 72, 123, 107, 190, 231, 26, 236, 189, 237, 26, 247, 189, 103, 187, 110, 189, 238, 50, 7, 62, 88, 149, 217, 61, 235, 36, 203, 60, 227, 47, 25, 190, 83, 244, 36, 62, 104, 250, 164, 59, 19, 189, 27, 190, 143, 229, 104, 62, 93, 161, 88, 62, 108, 10, 149, 190, 220, 49, 42, 190, 237, 9, 180, 189, 163, 181, 247, 61, 64, 108, 96, 190, 15, 25, 42, 189, 101, 118, 7, 62, 94, 101, 36, 62, 81, 85, 195, 61, 144, 177, 206, 61, 69, 66, 131, 61, 195, 105, 12, 62, 187, 143, 102, 189, 20, 255, 179, 189, 246, 86, 59, 190, 122, 253, 67, 61, 43, 243, 39, 190, 78, 254, 79, 190, 189, 90, 18, 62, 108, 117, 177, 190, 47, 110, 67, 189, 83, 92, 74, 62, 108, 133, 111, 189, 174, 155, 91, 62, 167, 186, 32, 62, 226, 217, 143, 190, 38, 117, 198, 187, 135, 197, 208, 61, 69, 150, 48, 190, 116, 69, 181, 190, 77, 111, 155, 62, 40, 26, 29, 189, 30, 39, 201, 190, 100, 14, 188, 60, 1, 25, 169, 60, 98, 184, 10, 61, 64, 227, 163, 188, 132, 141, 4, 62, 24, 152, 55, 62, 66, 106, 164, 62, 182, 56, 156, 189, 114, 78, 119, 61, 40, 237, 4, 62, 185, 91, 39, 62, 133, 226, 64, 190};
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
                alignas(float) const unsigned char memory[] = {147, 20, 94, 190, 9, 238, 102, 62, 203, 168, 138, 62, 127, 82, 6, 189, 16, 34, 230, 61, 213, 186, 34, 62, 90, 144, 84, 61, 10, 228, 126, 60, 214, 75, 132, 62, 184, 161, 109, 190, 156, 39, 16, 61, 133, 150, 11, 190, 156, 44, 24, 190, 13, 58, 56, 62, 51, 85, 224, 189, 136, 20, 68, 62, 228, 166, 120, 62, 62, 133, 138, 62, 43, 37, 10, 189, 76, 233, 75, 62, 215, 202, 23, 62, 76, 169, 117, 62, 56, 150, 165, 188, 5, 186, 124, 189, 171, 15, 18, 190, 146, 145, 226, 187, 192, 114, 214, 62, 67, 210, 211, 189, 89, 228, 243, 61, 16, 219, 154, 62, 146, 149, 161, 61, 93, 226, 216, 61};
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
                alignas(float) const unsigned char memory[] = {1, 212, 7, 189, 125, 240, 88, 191, 179, 34, 90, 63, 50, 13, 124, 190, 148, 122, 172, 61, 2, 2, 110, 62, 195, 29, 231, 190, 201, 180, 23, 191, 94, 23, 80, 62, 234, 17, 73, 62, 246, 60, 160, 190, 132, 137, 36, 62, 127, 251, 163, 190, 50, 126, 85, 191, 21, 69, 48, 190, 171, 134, 46, 190, 12, 220, 41, 191, 4, 58, 98, 190, 61, 200, 28, 190, 245, 120, 228, 62, 223, 19, 10, 63, 76, 75, 76, 62, 18, 23, 3, 61, 88, 237, 43, 190, 75, 119, 234, 61, 227, 56, 180, 189, 194, 235, 13, 63, 249, 130, 1, 189, 48, 182, 146, 61, 152, 11, 212, 189, 2, 162, 12, 62, 115, 223, 107, 62, 65, 36, 24, 62, 152, 81, 253, 188, 239, 224, 238, 189, 193, 250, 3, 189, 62, 244, 65, 190, 214, 217, 186, 189, 144, 100, 108, 60, 74, 185, 139, 61, 122, 51, 114, 190, 133, 50, 131, 62, 193, 158, 135, 61, 144, 23, 117, 62, 80, 119, 107, 61, 8, 31, 1, 190, 52, 153, 2, 61, 185, 56, 25, 190, 37, 100, 13, 189, 65, 54, 70, 190, 197, 110, 255, 61, 94, 190, 19, 189, 168, 37, 42, 60, 236, 174, 25, 187, 55, 216, 35, 190, 186, 183, 108, 190, 59, 81, 92, 62, 68, 170, 157, 190, 181, 41, 22, 60, 228, 80, 74, 62, 67, 64, 139, 189, 210, 124, 71, 190, 62, 54, 228, 189, 98, 172, 110, 60};
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
                alignas(float) const unsigned char memory[] = {4, 186, 17, 190, 29, 218, 59, 189};
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
    alignas(float) const unsigned char memory[] = {120, 74, 235, 63, 189, 197, 185, 191, 8, 242, 238, 190};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {77, 93, 165, 64, 12, 145, 255, 190};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0049/steps/000000000004000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}