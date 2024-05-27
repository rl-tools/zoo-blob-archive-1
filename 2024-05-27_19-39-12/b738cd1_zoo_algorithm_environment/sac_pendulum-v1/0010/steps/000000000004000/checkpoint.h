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
                alignas(float) const unsigned char memory[] = {59, 23, 45, 63, 99, 255, 185, 190, 231, 135, 252, 190, 47, 62, 64, 190, 142, 193, 38, 61, 158, 223, 43, 188, 180, 187, 23, 189, 126, 43, 15, 190, 68, 102, 42, 63, 25, 35, 69, 189, 113, 47, 204, 62, 215, 31, 210, 62, 50, 139, 159, 190, 82, 203, 166, 190, 24, 147, 32, 63, 137, 228, 174, 62, 63, 244, 65, 191, 243, 60, 69, 190, 252, 133, 36, 63, 109, 131, 116, 191, 131, 128, 208, 190, 17, 91, 194, 62, 202, 53, 128, 191, 218, 12, 201, 188, 197, 245, 34, 60, 50, 9, 77, 191, 145, 179, 60, 62, 2, 84, 151, 190, 116, 123, 178, 61, 168, 190, 135, 191, 233, 212, 162, 62, 117, 111, 22, 63, 247, 40, 206, 190, 18, 180, 6, 63, 195, 12, 131, 63, 53, 99, 204, 62, 56, 206, 190, 62, 230, 243, 184, 190, 209, 97, 194, 190, 212, 229, 20, 191, 217, 93, 129, 63, 132, 32, 28, 62, 80, 87, 255, 60, 186, 242, 143, 191, 244, 46, 30, 62, 133, 40, 88, 190, 221, 99, 183, 188, 10, 131, 188, 189, 57, 225, 32, 62, 97, 173, 145, 63, 125, 27, 193, 62, 226, 140, 174, 62, 177, 154, 233, 61, 208, 53, 254, 190, 201, 61, 23, 191, 85, 145, 234, 62, 222, 43, 249, 190, 136, 42, 20, 61, 152, 192, 148, 189, 17, 73, 196, 188, 150, 57, 181, 190, 57, 122, 166, 190, 170, 206, 81, 62, 146, 144, 15, 63, 155, 29, 139, 190, 5, 190, 44, 63, 231, 242, 171, 62, 154, 76, 148, 62, 181, 211, 205, 58, 180, 108, 9, 62, 113, 114, 168, 190, 204, 142, 132, 188, 137, 126, 140, 190, 23, 49, 65, 63, 100, 140, 18, 190, 224, 248, 149, 190, 198, 64, 15, 62, 14, 243, 28, 63, 138, 14, 248, 189, 123, 87, 15, 63, 12, 2, 2, 191, 185, 62, 50, 190, 123, 76, 202, 190, 20, 190, 183, 189, 63, 185, 205, 61, 53, 48, 69, 63, 89, 215, 226, 190, 18, 115, 16, 190, 151, 97, 56, 63, 220, 254, 160, 190, 167, 59, 16, 191, 197, 95, 213, 190, 143, 118, 188, 62, 143, 172, 185, 62, 65, 14, 137, 190, 135, 0, 59, 62};
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
                alignas(float) const unsigned char memory[] = {213, 212, 27, 191, 7, 16, 2, 63, 214, 201, 75, 189, 216, 209, 232, 190, 150, 166, 150, 190, 67, 243, 55, 190, 38, 19, 121, 190, 27, 54, 128, 61, 178, 116, 224, 62, 52, 226, 144, 62, 14, 114, 230, 62, 159, 209, 79, 190, 144, 89, 35, 63, 118, 166, 170, 62, 106, 105, 50, 62, 205, 230, 29, 63, 25, 197, 225, 62, 122, 254, 37, 62, 110, 224, 26, 191, 122, 170, 108, 190, 198, 44, 204, 190, 124, 12, 212, 61, 140, 107, 54, 63, 83, 196, 8, 63, 103, 31, 56, 61, 107, 216, 126, 62, 4, 153, 140, 61, 224, 221, 23, 63, 9, 118, 203, 189, 14, 84, 161, 62, 253, 63, 28, 191, 120, 83, 28, 190};
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
                alignas(float) const unsigned char memory[] = {242, 180, 159, 190, 72, 77, 140, 62, 159, 251, 171, 191, 41, 160, 198, 187, 186, 55, 64, 191, 115, 246, 52, 190, 224, 20, 181, 190, 60, 117, 251, 190, 181, 119, 102, 62, 168, 202, 40, 62, 76, 94, 218, 189, 50, 1, 180, 62, 113, 158, 143, 61, 173, 50, 150, 190, 235, 136, 195, 61, 13, 147, 153, 62, 39, 167, 156, 190, 39, 146, 166, 190, 18, 79, 61, 190, 230, 188, 191, 61, 133, 74, 88, 189, 98, 202, 182, 189, 240, 174, 108, 61, 255, 103, 236, 61, 171, 172, 52, 61, 21, 10, 167, 189, 1, 60, 159, 62, 14, 216, 69, 62, 218, 65, 203, 190, 227, 249, 147, 62, 173, 247, 206, 190, 88, 249, 169, 188, 207, 132, 157, 189, 223, 142, 74, 190, 180, 22, 216, 189, 211, 20, 7, 62, 227, 12, 4, 61, 196, 61, 180, 60, 136, 157, 183, 188, 83, 123, 182, 189, 217, 11, 172, 189, 133, 82, 175, 61, 64, 52, 91, 190, 121, 134, 173, 61, 153, 11, 164, 61, 84, 138, 74, 190, 114, 255, 89, 61, 159, 33, 150, 189, 224, 60, 66, 59, 67, 252, 49, 190, 16, 163, 249, 61, 225, 19, 44, 62, 242, 55, 21, 62, 118, 53, 5, 190, 56, 107, 66, 190, 164, 95, 224, 189, 157, 227, 222, 188, 189, 43, 8, 62, 254, 49, 240, 59, 148, 241, 139, 188, 41, 228, 228, 189, 163, 7, 114, 189, 177, 69, 47, 60, 99, 146, 17, 62, 21, 147, 192, 190, 156, 227, 175, 61, 52, 219, 241, 188, 152, 97, 55, 62, 31, 19, 183, 190, 17, 229, 59, 190, 38, 186, 154, 190, 235, 233, 180, 190, 130, 122, 188, 189, 112, 84, 242, 61, 98, 236, 206, 61, 65, 32, 190, 62, 207, 245, 63, 62, 230, 28, 55, 190, 53, 51, 234, 188, 246, 178, 138, 61, 131, 238, 175, 61, 158, 87, 6, 190, 233, 16, 102, 190, 242, 209, 178, 60, 107, 183, 47, 62, 37, 107, 34, 62, 172, 109, 73, 62, 23, 172, 35, 190, 214, 44, 95, 61, 39, 79, 174, 60, 131, 176, 224, 62, 91, 156, 17, 190, 74, 246, 41, 190, 15, 179, 209, 62, 119, 118, 184, 190, 4, 241, 27, 190, 18, 24, 47, 60, 123, 113, 206, 189, 116, 165, 106, 62, 25, 174, 135, 188, 7, 93, 194, 62, 33, 123, 210, 61, 244, 63, 172, 62, 247, 110, 197, 62, 74, 31, 53, 62, 71, 109, 181, 61, 84, 54, 167, 189, 235, 166, 176, 190, 6, 24, 192, 61, 111, 100, 166, 61, 246, 32, 53, 189, 134, 206, 10, 62, 88, 42, 123, 190, 217, 191, 146, 61, 207, 253, 107, 62, 120, 58, 54, 61, 243, 252, 54, 188, 139, 173, 177, 61, 58, 204, 177, 189, 44, 132, 6, 190, 240, 62, 159, 189, 26, 23, 182, 189, 4, 121, 187, 189, 175, 150, 164, 60, 47, 19, 85, 61, 71, 190, 151, 189, 255, 53, 10, 62, 71, 238, 186, 189, 132, 127, 75, 185, 73, 198, 253, 189, 109, 43, 138, 62, 180, 119, 13, 190, 196, 219, 115, 62, 73, 37, 114, 61, 191, 134, 39, 62, 130, 237, 135, 62, 253, 97, 31, 189, 18, 53, 98, 190, 204, 232, 8, 190, 236, 152, 186, 190, 243, 163, 18, 62, 189, 7, 231, 61, 45, 95, 88, 190, 154, 208, 84, 60, 208, 102, 239, 61, 43, 98, 73, 62, 149, 58, 220, 189, 208, 63, 5, 190, 184, 223, 173, 190, 134, 224, 59, 190, 58, 6, 120, 62, 236, 115, 203, 61, 235, 167, 153, 190, 254, 136, 175, 61, 79, 139, 161, 190, 237, 79, 154, 188, 182, 164, 1, 62, 87, 197, 133, 190, 206, 89, 26, 62, 64, 162, 28, 62, 177, 101, 14, 62, 7, 114, 95, 190, 23, 67, 143, 189, 96, 177, 100, 62, 127, 64, 199, 188, 105, 27, 128, 61, 223, 23, 166, 61, 250, 29, 156, 190, 161, 149, 84, 190, 135, 215, 182, 61, 254, 20, 18, 62, 151, 133, 138, 62, 225, 206, 213, 60, 139, 89, 35, 61, 83, 82, 145, 189, 59, 14, 58, 190, 113, 190, 155, 61, 85, 51, 29, 62, 132, 194, 88, 190, 127, 240, 39, 60, 20, 21, 93, 188, 80, 201, 186, 61, 14, 203, 29, 62, 98, 72, 225, 188, 40, 9, 208, 60, 83, 102, 151, 188, 228, 30, 202, 61, 65, 143, 162, 190, 218, 150, 86, 189, 78, 250, 208, 186, 20, 187, 31, 190, 95, 130, 61, 61, 163, 85, 152, 188, 162, 129, 27, 187, 118, 210, 173, 61, 88, 115, 251, 61, 135, 198, 26, 190, 37, 61, 174, 189, 119, 74, 8, 62, 149, 113, 4, 190, 30, 61, 51, 190, 253, 75, 59, 190, 147, 147, 239, 61, 55, 220, 28, 190, 150, 146, 149, 61, 212, 177, 31, 189, 250, 18, 131, 189, 55, 22, 133, 187, 182, 118, 50, 190, 89, 251, 16, 62, 31, 247, 133, 189, 196, 1, 25, 190, 55, 27, 101, 189, 42, 105, 58, 187, 181, 2, 70, 190, 177, 88, 15, 61, 228, 47, 26, 190, 167, 250, 244, 188, 16, 249, 35, 187, 57, 184, 188, 61, 250, 254, 172, 61, 209, 102, 210, 189, 82, 47, 204, 61, 142, 19, 33, 62, 23, 246, 241, 189, 67, 190, 158, 58, 145, 186, 135, 61, 5, 73, 136, 190, 94, 19, 233, 60, 50, 46, 184, 189, 54, 183, 134, 62, 122, 252, 90, 62, 94, 75, 87, 62, 178, 31, 228, 189, 123, 135, 156, 61, 199, 230, 239, 190, 132, 9, 88, 62, 130, 220, 108, 60, 221, 240, 181, 61, 86, 99, 38, 62, 8, 64, 41, 62, 102, 94, 108, 62, 177, 41, 112, 61, 82, 61, 12, 190, 18, 188, 167, 188, 236, 124, 24, 61, 168, 240, 79, 187, 14, 196, 156, 188, 157, 178, 54, 62, 61, 13, 118, 189, 216, 1, 74, 189, 41, 24, 21, 62, 84, 169, 32, 62, 16, 162, 57, 62, 81, 21, 202, 62, 189, 209, 100, 189, 187, 213, 3, 191, 78, 56, 172, 61, 156, 85, 148, 188, 251, 206, 145, 61, 66, 24, 172, 61, 197, 16, 85, 190, 30, 18, 51, 188, 102, 218, 172, 189, 100, 19, 51, 62, 136, 180, 181, 189, 46, 92, 164, 62, 64, 21, 93, 62, 185, 49, 215, 61, 155, 246, 59, 62, 203, 139, 160, 189, 48, 32, 5, 62, 1, 51, 91, 60, 123, 206, 139, 190, 107, 191, 212, 190, 229, 240, 166, 61, 77, 199, 182, 60, 61, 186, 129, 60, 216, 116, 72, 62, 33, 239, 35, 62, 174, 141, 170, 61, 179, 104, 22, 62, 216, 46, 10, 61, 233, 248, 144, 188, 218, 43, 167, 190, 52, 39, 152, 189, 13, 251, 153, 189, 87, 223, 250, 60, 136, 110, 164, 61, 19, 28, 188, 61, 173, 174, 16, 62, 96, 119, 141, 190, 121, 200, 253, 61, 19, 101, 74, 62, 21, 137, 164, 62, 39, 84, 152, 62, 169, 146, 184, 62, 218, 182, 71, 191, 192, 161, 240, 190, 215, 97, 19, 191, 114, 151, 150, 190, 227, 167, 73, 62, 132, 98, 72, 190, 64, 17, 29, 61, 98, 103, 110, 186, 110, 85, 181, 62, 189, 230, 69, 190, 250, 80, 128, 189, 66, 161, 129, 190, 92, 136, 193, 190, 144, 226, 152, 62, 207, 250, 108, 62, 141, 198, 59, 62, 64, 191, 148, 61, 99, 221, 72, 191, 85, 254, 239, 60, 26, 230, 85, 61, 189, 57, 163, 190, 179, 130, 100, 62, 206, 252, 142, 59, 218, 86, 217, 189, 221, 124, 128, 62, 163, 1, 200, 61, 34, 143, 148, 61, 228, 151, 187, 189, 230, 12, 63, 189, 238, 52, 12, 61, 158, 184, 67, 186, 197, 121, 144, 189, 20, 185, 184, 189, 39, 71, 98, 61, 218, 83, 66, 189, 136, 173, 254, 189, 219, 40, 238, 189, 168, 51, 69, 62, 139, 90, 3, 62, 146, 106, 25, 62, 30, 253, 96, 61, 60, 139, 249, 59, 81, 242, 199, 189, 165, 172, 199, 189, 186, 45, 155, 60, 208, 235, 64, 62, 247, 59, 69, 189, 198, 10, 114, 62, 8, 251, 147, 188, 255, 156, 83, 61, 120, 46, 209, 189, 79, 235, 193, 188, 139, 215, 135, 62, 87, 193, 35, 190, 104, 251, 153, 188, 159, 204, 67, 189, 91, 147, 7, 62, 121, 153, 79, 59, 119, 201, 10, 190, 92, 9, 152, 61, 100, 245, 142, 189, 98, 112, 74, 190, 191, 16, 141, 189, 118, 183, 70, 62, 153, 89, 125, 191, 9, 200, 51, 191, 176, 42, 148, 189, 184, 180, 40, 191, 22, 190, 71, 62, 51, 38, 129, 190, 204, 114, 116, 62, 81, 70, 124, 61, 10, 183, 116, 190, 100, 31, 148, 190, 16, 171, 171, 188, 191, 62, 87, 190, 62, 114, 136, 61, 23, 183, 29, 61, 166, 67, 78, 62, 237, 118, 213, 187, 55, 123, 111, 62, 18, 204, 31, 191, 92, 230, 132, 62, 248, 235, 9, 60, 133, 99, 143, 188, 107, 55, 7, 62, 20, 25, 54, 62, 133, 45, 36, 190, 168, 226, 247, 187, 199, 41, 201, 190, 246, 60, 17, 62, 84, 120, 9, 191, 220, 86, 132, 190, 50, 186, 72, 190, 88, 222, 46, 191, 242, 19, 61, 189, 235, 169, 32, 62, 205, 184, 130, 62, 226, 65, 203, 62, 78, 103, 55, 61, 119, 176, 200, 189, 98, 69, 129, 62, 120, 80, 76, 62, 13, 14, 51, 190, 211, 32, 171, 190, 247, 210, 141, 190, 177, 192, 107, 61, 243, 30, 96, 62, 7, 250, 99, 62, 148, 17, 51, 61, 152, 161, 240, 61, 180, 76, 148, 61, 173, 28, 93, 190, 49, 82, 146, 62, 179, 229, 236, 60, 88, 156, 177, 190, 80, 248, 138, 62, 222, 23, 109, 190, 99, 21, 113, 62, 140, 86, 124, 190, 234, 190, 247, 61, 163, 31, 161, 61, 48, 103, 27, 189, 26, 192, 114, 190, 230, 152, 220, 190, 224, 101, 209, 190, 29, 233, 53, 60, 115, 235, 156, 190, 195, 16, 19, 62, 9, 163, 6, 62, 113, 86, 246, 188, 26, 80, 214, 58, 85, 151, 247, 62, 38, 247, 73, 61, 184, 93, 154, 189, 152, 238, 127, 62, 141, 113, 85, 190, 219, 13, 81, 189, 27, 53, 180, 61, 221, 41, 5, 190, 90, 214, 37, 190, 98, 25, 143, 62, 30, 217, 127, 190, 135, 112, 139, 62, 234, 164, 150, 190, 250, 109, 46, 62, 57, 5, 207, 189, 56, 178, 53, 62, 107, 218, 239, 61, 94, 7, 25, 62, 174, 148, 223, 61, 16, 120, 233, 62, 122, 92, 223, 189, 75, 7, 109, 62, 215, 167, 158, 190, 150, 132, 207, 61, 30, 242, 202, 62, 73, 228, 213, 62, 161, 237, 171, 62, 235, 87, 159, 62, 82, 113, 60, 190, 124, 37, 104, 190, 33, 163, 101, 190, 50, 32, 167, 189, 239, 3, 188, 61, 251, 119, 63, 188, 140, 110, 30, 190, 107, 80, 234, 58, 231, 83, 210, 61, 141, 35, 77, 62, 76, 237, 24, 61, 115, 18, 233, 189, 17, 251, 22, 190, 21, 207, 35, 62, 190, 118, 18, 62, 160, 244, 156, 190, 38, 113, 152, 61, 82, 109, 109, 190, 217, 76, 88, 61, 227, 77, 86, 189, 147, 249, 55, 190, 252, 231, 200, 62, 129, 82, 61, 62, 246, 3, 53, 61, 48, 117, 30, 186, 91, 118, 210, 190, 42, 160, 128, 60, 68, 117, 239, 190, 28, 254, 86, 189, 88, 23, 32, 190, 136, 128, 131, 190, 57, 92, 211, 61, 209, 177, 198, 61, 10, 136, 23, 62, 56, 52, 171, 62, 158, 105, 4, 189, 77, 240, 29, 190, 115, 252, 178, 60, 174, 101, 12, 62, 104, 68, 214, 61, 42, 0, 152, 190, 202, 159, 18, 190, 37, 97, 24, 189, 218, 137, 174, 61, 246, 50, 88, 62, 180, 201, 250, 61, 103, 8, 80, 189, 216, 138, 52, 62, 131, 238, 219, 189, 235, 111, 231, 188, 23, 83, 32, 62, 253, 40, 147, 189, 20, 167, 126, 62, 230, 106, 230, 190, 80, 107, 62, 190, 83, 50, 98, 190, 212, 175, 79, 61, 124, 118, 132, 190, 184, 91, 19, 190, 179, 134, 144, 190, 171, 32, 71, 190, 35, 167, 199, 60, 99, 6, 204, 188, 11, 227, 185, 187, 13, 3, 17, 60, 203, 154, 77, 62, 106, 84, 211, 60, 93, 16, 27, 62, 154, 173, 150, 190, 103, 224, 196, 61, 84, 120, 11, 61, 131, 33, 155, 189, 39, 136, 200, 61, 116, 244, 42, 189, 206, 57, 21, 61, 97, 162, 185, 189, 243, 202, 140, 62, 15, 185, 157, 62, 21, 141, 43, 62, 92, 6, 56, 189, 181, 34, 80, 190, 26, 166, 19, 62, 23, 21, 27, 62, 217, 134, 131, 190, 100, 87, 72, 189, 184, 32, 206, 190, 104, 95, 152, 62, 154, 237, 62, 190, 9, 117, 127, 62, 120, 111, 86, 62, 10, 24, 31, 190, 91, 126, 109, 189, 114, 61, 251, 61, 77, 2, 196, 61, 85, 203, 129, 61, 218, 47, 19, 189, 228, 39, 46, 190, 138, 128, 67, 62, 63, 174, 136, 190, 76, 66, 165, 61, 135, 224, 197, 187, 40, 79, 136, 188, 28, 243, 94, 62, 141, 91, 190, 61, 106, 174, 163, 61, 90, 124, 200, 189, 196, 36, 164, 189, 194, 231, 2, 190, 151, 67, 185, 61, 250, 76, 103, 62, 230, 124, 158, 61, 227, 217, 172, 61, 110, 250, 128, 189, 8, 100, 143, 189, 30, 212, 181, 189, 1, 1, 205, 59, 170, 28, 248, 61, 212, 214, 18, 62, 163, 247, 190, 59, 71, 179, 112, 189, 125, 8, 141, 190, 131, 203, 157, 61, 202, 56, 166, 61, 111, 59, 194, 189, 58, 198, 235, 189, 103, 58, 130, 60, 45, 106, 52, 61, 101, 252, 119, 190, 215, 240, 70, 61, 1, 72, 3, 190, 68, 237, 138, 62, 252, 48, 147, 189, 175, 55, 216, 189, 207, 84, 176, 61, 116, 101, 95, 190, 242, 182, 123, 61, 61, 155, 114, 188, 214, 145, 8, 190, 20, 191, 63, 187, 41, 147, 105, 190, 61, 55, 86, 62, 230, 81, 142, 61, 36, 199, 72, 187, 222, 29, 69, 61, 36, 38, 155, 61, 251, 215, 66, 190, 161, 248, 129, 190, 168, 253, 229, 188, 39, 29, 107, 190, 88, 19, 77, 190, 73, 45, 139, 61, 47, 250, 173, 189, 234, 35, 23, 61, 191, 142, 117, 189, 28, 234, 158, 61, 34, 251, 195, 60, 158, 196, 128, 190, 209, 78, 16, 190, 73, 125, 184, 190, 99, 196, 40, 62, 63, 112, 3, 62, 16, 156, 201, 61, 231, 2, 179, 60, 59, 254, 57, 62, 77, 60, 72, 60, 204, 8, 176, 61, 59, 110, 247, 60, 28, 253, 177, 188, 79, 170, 65, 190, 142, 36, 209, 189, 134, 49, 163, 61, 174, 242, 184, 60, 51, 243, 56, 60, 70, 9, 156, 189, 6, 27, 6, 62, 78, 60, 39, 62, 141, 83, 161, 61, 178, 10, 30, 62, 47, 67, 82, 60, 126, 61, 129, 190, 9, 40, 198, 60, 24, 221, 81, 189, 174, 149, 193, 189, 44, 181, 13, 190, 214, 197, 32, 190, 218, 139, 39, 60, 71, 77, 69, 62, 215, 59, 28, 61, 145, 151, 20, 190, 167, 224, 248, 61, 29, 213, 136, 190, 146, 9, 169, 188, 101, 29, 175, 189, 209, 64, 249, 61, 155, 105, 134, 62, 21, 128, 8, 62, 191, 189, 226, 188, 92, 41, 133, 190, 46, 142, 222, 189, 182, 112, 159, 58, 199, 30, 105, 189, 205, 103, 1, 62, 174, 117, 204, 61, 139, 105, 31, 190, 209, 131, 79, 61, 167, 0, 181, 61, 120, 97, 67, 190, 9, 33, 90, 61, 48, 51, 217, 60, 236, 180, 146, 190, 46, 7, 28, 190, 105, 24, 50, 62, 100, 49, 210, 60, 181, 111, 178, 189, 147, 146, 11, 62, 110, 126, 121, 61, 58, 24, 36, 62, 88, 31, 134, 60, 145, 172, 252, 61, 229, 174, 136, 190, 155, 123, 30, 190, 0, 108, 139, 190, 167, 157, 108, 190, 250, 27, 126, 188, 173, 240, 97, 187, 111, 51, 136, 62, 202, 104, 164, 62, 67, 150, 162, 61, 9, 162, 134, 189, 68, 51, 214, 189, 79, 183, 241, 189, 155, 21, 162, 188, 53, 171, 218, 189, 102, 169, 241, 189, 210, 246, 35, 62, 99, 18, 199, 61, 168, 90, 213, 60, 207, 188, 229, 61, 68, 53, 122, 189, 135, 40, 10, 61, 38, 123, 167, 61, 110, 200, 86, 62, 101, 71, 229, 189, 185, 60, 15, 61, 187, 96, 127, 62, 31, 209, 104, 190, 25, 74, 26, 61, 76, 217, 8, 61, 211, 248, 21, 62, 235, 171, 109, 61, 141, 76, 153, 61, 190, 40, 229, 61, 102, 235, 233, 189, 189, 232, 213, 59, 110, 200, 84, 61, 239, 182, 56, 62, 124, 172, 54, 191, 104, 191, 65, 190, 219, 190, 39, 190, 105, 161, 13, 190, 55, 40, 54, 62, 89, 56, 26, 188, 29, 95, 160, 188, 73, 62, 68, 189, 131, 0, 54, 188, 36, 112, 151, 190, 188, 242, 218, 61, 222, 160, 104, 190, 173, 204, 181, 61, 222, 105, 156, 61, 15, 229, 41, 62, 251, 223, 54, 190, 180, 185, 161, 60, 236, 200, 7, 191, 243, 217, 25, 61, 191, 99, 22, 190, 232, 227, 111, 190, 23, 217, 150, 62, 44, 244, 172, 61, 113, 184, 100, 189, 89, 169, 47, 190, 100, 131, 164, 61, 244, 192, 10, 190, 179, 193, 14, 190, 117, 15, 161, 189, 31, 74, 42, 190, 207, 171, 12, 190, 66, 8, 19, 190, 8, 137, 209, 61, 29, 179, 252, 189, 12, 68, 29, 62, 244, 8, 156, 189, 198, 110, 128, 61, 34, 128, 59, 61, 242, 240, 7, 61, 141, 80, 212, 189, 122, 86, 110, 189, 35, 176, 19, 189, 176, 237, 93, 188, 24, 212, 247, 60, 205, 165, 52, 61, 199, 195, 30, 190, 105, 69, 6, 190, 78, 34, 216, 189, 180, 171, 131, 61, 40, 68, 209, 61, 140, 203, 18, 62, 47, 128, 216, 189, 7, 218, 238, 189, 165, 185, 62, 189, 186, 18, 46, 62, 116, 180, 66, 190, 251, 238, 5, 190, 110, 99, 155, 61, 67, 97, 134, 189, 231, 103, 124, 189, 101, 145, 32, 190, 126, 42, 127, 61, 117, 123, 251, 189, 193, 72, 235, 189, 159, 49, 72, 60, 127, 219, 236, 58, 77, 107, 104, 61, 255, 3, 7, 62, 76, 165, 169, 189, 172, 153, 146, 60, 90, 114, 22, 190, 100, 76, 14, 190, 117, 199, 121, 58, 186, 4, 168, 61, 234, 182, 197, 189, 74, 241, 196, 189, 83, 197, 255, 189, 206, 37, 47, 61, 227, 156, 219, 189, 134, 67, 200, 189, 106, 138, 50, 62, 221, 45, 16, 62, 186, 20, 202, 189, 48, 181, 184, 188, 181, 68, 42, 190, 172, 29, 19, 190, 62, 9, 19, 62, 178, 144, 82, 188, 248, 40, 160, 60, 140, 104, 14, 62, 166, 223, 159, 60, 174, 120, 194, 189, 14, 103, 8, 59, 199, 37, 170, 188, 50, 40, 253, 189, 18, 128, 131, 189, 49, 1, 241, 189, 177, 78, 25, 189, 9, 251, 184, 189, 251, 237, 218, 61, 28, 96, 211, 189, 133, 181, 3, 190, 120, 205, 1, 190, 179, 234, 81, 61, 201, 196, 183, 61, 40, 218, 28, 190, 39, 61, 23, 62, 10, 168, 229, 186, 178, 128, 211, 189, 166, 138, 230, 189, 140, 172, 174, 189, 139, 95, 40, 190, 247, 123, 26, 190, 21, 173, 249, 61, 78, 228, 10, 62, 253, 190, 140, 189, 19, 43, 167, 60, 2, 223, 176, 60, 99, 136, 4, 62, 182, 211, 52, 190, 34, 93, 120, 189, 195, 92, 185, 189, 42, 6, 131, 60, 36, 77, 236, 189, 249, 160, 139, 187, 219, 121, 159, 60, 75, 75, 76, 61, 195, 137, 195, 61, 249, 31, 20, 62, 98, 163, 250, 189, 171, 182, 178, 189, 199, 69, 150, 60, 251, 184, 125, 189, 243, 106, 88, 188, 44, 99, 173, 189, 56, 29, 116, 61, 142, 246, 118, 61, 7, 89, 9, 190, 84, 37, 189, 61, 180, 153, 228, 189, 183, 156, 201, 60, 182, 190, 174, 61, 48, 34, 20, 190, 61, 254, 51, 189, 64, 174, 178, 189, 61, 119, 116, 60, 6, 4, 208, 189, 132, 139, 194, 189, 79, 121, 69, 190, 251, 221, 225, 188, 6, 102, 2, 62, 179, 43, 133, 190, 26, 113, 253, 60, 74, 158, 197, 189, 221, 106, 28, 61, 93, 185, 203, 190, 226, 32, 67, 190, 223, 44, 187, 190, 30, 42, 161, 190, 16, 46, 75, 190, 189, 125, 213, 61, 70, 205, 192, 62, 176, 246, 214, 62, 56, 150, 27, 61, 219, 98, 189, 60, 30, 248, 19, 62, 12, 63, 252, 61, 158, 191, 248, 188, 231, 135, 39, 190, 141, 214, 221, 189, 158, 203, 171, 189, 80, 120, 12, 62, 94, 196, 47, 62, 207, 49, 42, 62, 88, 46, 142, 189, 195, 82, 96, 61, 231, 31, 163, 61, 15, 106, 164, 62, 150, 164, 2, 62, 32, 73, 134, 190, 238, 151, 62, 62, 61, 227, 212, 190, 159, 142, 118, 189, 238, 28, 29, 189, 89, 28, 25, 190, 150, 69, 27, 61, 120, 88, 157, 60, 109, 134, 175, 60, 216, 16, 33, 190, 171, 116, 139, 189, 146, 0, 58, 59, 173, 59, 233, 188, 85, 90, 27, 190, 139, 60, 236, 59, 62, 136, 206, 189, 47, 45, 161, 60, 123, 180, 210, 61, 111, 25, 143, 189, 195, 252, 28, 62, 30, 182, 77, 189, 140, 171, 33, 190, 252, 71, 178, 189, 43, 41, 140, 189, 43, 150, 1, 190, 83, 141, 122, 61, 28, 205, 77, 189, 249, 230, 48, 190, 235, 96, 6, 190, 85, 136, 207, 189, 142, 1, 110, 189, 87, 97, 182, 189, 176, 83, 245, 189, 30, 124, 28, 190, 250, 99, 42, 62, 137, 210, 220, 60, 127, 142, 92, 189, 68, 43, 17, 190, 176, 134, 84, 61, 196, 70, 136, 61, 64, 96, 86, 190, 236, 8, 195, 61, 73, 96, 25, 189, 217, 13, 213, 189, 137, 229, 248, 189, 158, 27, 16, 61, 188, 27, 179, 189, 219, 211, 79, 62, 158, 246, 182, 61, 139, 159, 84, 60, 101, 228, 127, 190, 77, 166, 1, 189, 212, 198, 139, 189, 76, 254, 15, 190, 75, 34, 231, 61, 126, 59, 245, 61, 177, 19, 41, 189, 243, 152, 170, 61, 117, 135, 84, 62, 23, 184, 195, 189, 54, 185, 0, 190, 193, 184, 74, 61, 248, 142, 2, 189, 12, 43, 204, 188, 193, 30, 56, 60, 70, 198, 194, 187, 162, 220, 69, 190, 76, 233, 232, 189, 45, 98, 7, 190, 3, 26, 173, 60, 157, 55, 203, 189, 125, 25, 64, 62, 127, 48, 132, 190, 148, 243, 150, 190, 247, 38, 206, 190, 236, 248, 213, 190, 7, 47, 12, 190, 161, 132, 234, 61, 58, 34, 152, 62, 176, 91, 65, 62, 248, 31, 151, 62, 185, 232, 149, 61, 235, 196, 246, 59, 231, 140, 28, 61, 116, 100, 218, 61, 184, 35, 19, 190, 39, 84, 134, 190, 218, 148, 197, 189, 5, 19, 56, 189, 166, 209, 125, 62, 181, 152, 232, 60, 58, 88, 11, 62, 35, 7, 234, 60, 134, 59, 228, 189, 14, 153, 159, 62, 139, 185, 191, 189, 84, 34, 202, 190, 210, 186, 147, 62, 99, 189, 196, 190, 175, 225, 51, 190, 0, 153, 213, 189, 148, 3, 207, 188, 215, 100, 53, 62, 33, 34, 247, 188, 133, 179, 146, 62, 174, 198, 145, 62, 160, 215, 9, 62, 41, 134, 184, 61, 70, 203, 27, 62, 118, 186, 123, 189, 233, 176, 162, 190, 186, 177, 24, 62, 14, 106, 185, 189, 145, 105, 202, 61, 128, 46, 152, 62, 86, 0, 15, 62, 148, 98, 40, 190, 187, 132, 124, 190, 7, 60, 98, 61, 238, 234, 226, 189, 109, 79, 148, 62, 112, 21, 130, 60, 50, 62, 8, 190, 90, 40, 167, 61, 174, 196, 72, 190, 101, 135, 6, 61, 196, 162, 75, 190, 18, 158, 75, 62, 8, 60, 157, 190, 132, 92, 31, 191, 224, 184, 177, 62, 193, 20, 168, 189};
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
                alignas(float) const unsigned char memory[] = {17, 9, 171, 62, 160, 23, 49, 190, 104, 33, 191, 60, 84, 241, 150, 61, 137, 7, 52, 62, 41, 174, 154, 61, 214, 194, 200, 189, 101, 252, 89, 62, 198, 178, 110, 62, 120, 181, 133, 62, 23, 15, 91, 62, 247, 59, 70, 61, 175, 28, 107, 62, 208, 244, 5, 190, 167, 132, 172, 61, 178, 115, 250, 187, 120, 128, 131, 62, 104, 188, 112, 62, 52, 66, 245, 188, 156, 137, 172, 61, 132, 231, 87, 189, 253, 96, 154, 61, 96, 38, 100, 62, 249, 86, 202, 188, 125, 221, 44, 59, 229, 200, 32, 189, 105, 175, 60, 190, 180, 236, 194, 189, 151, 119, 206, 188, 5, 126, 149, 61, 148, 187, 147, 188, 197, 250, 23, 190};
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
                alignas(float) const unsigned char memory[] = {160, 128, 75, 191, 29, 55, 207, 61, 84, 68, 205, 190, 25, 93, 162, 61, 183, 217, 213, 62, 154, 33, 128, 190, 214, 81, 227, 188, 10, 163, 115, 62, 190, 255, 131, 189, 101, 97, 124, 63, 202, 201, 177, 60, 35, 87, 243, 62, 135, 132, 33, 191, 48, 199, 231, 62, 77, 116, 166, 62, 219, 177, 221, 190, 13, 212, 83, 189, 12, 121, 25, 62, 79, 203, 128, 62, 206, 142, 129, 189, 105, 182, 106, 61, 131, 214, 23, 190, 60, 58, 137, 62, 43, 109, 253, 61, 195, 141, 12, 62, 146, 1, 143, 60, 9, 44, 60, 189, 44, 155, 162, 190, 26, 172, 158, 61, 42, 253, 107, 189, 155, 145, 171, 190, 171, 23, 177, 190, 179, 95, 88, 62, 248, 3, 20, 60, 142, 19, 131, 189, 111, 164, 194, 61, 167, 100, 239, 189, 214, 55, 137, 62, 242, 82, 219, 185, 96, 174, 196, 189, 171, 80, 33, 190, 7, 100, 98, 62, 210, 11, 75, 190, 144, 198, 148, 188, 154, 249, 122, 188, 127, 8, 55, 62, 124, 223, 71, 62, 68, 233, 151, 61, 58, 61, 200, 190, 149, 156, 144, 190, 39, 26, 182, 62, 66, 161, 207, 189, 157, 229, 67, 62, 158, 193, 224, 189, 247, 214, 131, 190, 170, 153, 243, 189, 69, 53, 246, 189, 42, 170, 121, 189, 122, 241, 6, 62, 83, 78, 15, 188, 207, 196, 162, 188, 76, 14, 68, 62, 63, 126, 191, 189, 49, 110, 146, 61};
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
                alignas(float) const unsigned char memory[] = {123, 90, 173, 189, 46, 186, 245, 189};
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
    alignas(float) const unsigned char memory[] = {214, 108, 143, 191, 94, 138, 76, 190, 96, 41, 7, 192};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {138, 3, 40, 192, 174, 32, 23, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0010/steps/000000000004000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}