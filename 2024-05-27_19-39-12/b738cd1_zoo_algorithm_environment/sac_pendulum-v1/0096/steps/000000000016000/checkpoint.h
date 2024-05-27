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
                alignas(float) const unsigned char memory[] = {105, 56, 153, 62, 164, 233, 115, 190, 187, 234, 78, 188, 15, 204, 171, 190, 148, 146, 181, 63, 163, 60, 155, 62, 200, 145, 101, 62, 101, 132, 4, 191, 48, 50, 184, 61, 135, 179, 10, 191, 93, 180, 121, 191, 107, 118, 66, 190, 138, 55, 33, 63, 70, 158, 141, 191, 51, 15, 128, 190, 116, 182, 255, 62, 226, 107, 146, 191, 143, 85, 118, 190, 151, 183, 175, 190, 93, 55, 46, 63, 2, 126, 8, 191, 150, 247, 203, 190, 16, 191, 184, 62, 3, 42, 35, 63, 43, 3, 142, 188, 4, 229, 164, 63, 15, 196, 242, 62, 160, 250, 50, 62, 33, 118, 98, 191, 159, 125, 14, 61, 234, 66, 208, 190, 90, 178, 165, 191, 241, 70, 148, 190, 5, 59, 242, 190, 55, 88, 148, 63, 199, 81, 234, 62, 139, 209, 97, 191, 52, 32, 213, 190, 26, 222, 123, 189, 186, 159, 164, 190, 245, 72, 229, 62, 152, 12, 1, 191, 164, 235, 47, 190, 21, 147, 89, 61, 119, 216, 87, 63, 212, 105, 225, 61, 40, 173, 80, 191, 17, 30, 37, 63, 101, 219, 18, 63, 21, 110, 129, 63, 16, 87, 172, 62, 70, 181, 19, 191, 11, 104, 18, 63, 98, 241, 39, 190, 37, 187, 163, 62, 213, 222, 159, 191, 75, 181, 7, 191, 55, 250, 16, 63, 38, 212, 128, 63, 112, 28, 178, 62, 187, 95, 187, 190, 68, 199, 171, 63, 68, 58, 142, 62, 167, 223, 147, 191, 61, 140, 145, 190, 209, 210, 18, 60, 73, 245, 22, 191, 176, 18, 5, 63, 172, 232, 233, 61, 5, 235, 95, 63, 202, 21, 79, 191, 74, 224, 180, 190, 101, 158, 244, 187, 59, 28, 36, 191, 53, 46, 31, 189, 167, 215, 5, 191, 124, 12, 18, 63, 185, 240, 101, 190, 203, 66, 229, 189, 28, 8, 42, 63, 218, 171, 13, 191, 50, 229, 179, 190, 232, 231, 16, 63, 3, 102, 37, 61, 195, 110, 164, 61, 102, 89, 33, 63, 5, 212, 3, 62, 195, 247, 138, 62, 30, 123, 10, 191, 93, 136, 149, 62, 4, 210, 31, 62, 121, 165, 206, 191, 180, 246, 202, 190, 241, 193, 97, 63, 54, 42, 91, 63, 175, 19, 111, 189};
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
                alignas(float) const unsigned char memory[] = {199, 147, 19, 191, 153, 122, 134, 188, 96, 14, 174, 62, 137, 94, 164, 62, 101, 141, 153, 190, 151, 58, 208, 189, 206, 83, 219, 190, 55, 93, 149, 190, 66, 129, 16, 62, 158, 239, 153, 188, 65, 22, 4, 63, 160, 146, 161, 190, 116, 56, 175, 61, 242, 227, 136, 190, 66, 60, 121, 191, 114, 96, 98, 62, 12, 64, 115, 62, 202, 153, 6, 63, 109, 5, 172, 62, 175, 91, 213, 190, 191, 62, 37, 190, 119, 82, 225, 189, 52, 203, 34, 63, 84, 89, 77, 191, 154, 54, 246, 62, 168, 120, 179, 190, 39, 186, 254, 60, 244, 4, 167, 62, 119, 204, 173, 62, 68, 7, 157, 189, 100, 191, 44, 62, 125, 190, 8, 190};
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
                alignas(float) const unsigned char memory[] = {155, 48, 218, 61, 254, 166, 17, 191, 48, 65, 39, 189, 115, 13, 1, 62, 163, 254, 28, 191, 31, 249, 250, 189, 212, 106, 53, 62, 26, 149, 2, 191, 55, 84, 181, 190, 92, 191, 238, 62, 50, 32, 110, 189, 86, 114, 132, 190, 250, 29, 71, 62, 20, 203, 127, 62, 85, 142, 188, 190, 250, 85, 97, 60, 43, 176, 93, 191, 179, 15, 109, 62, 117, 81, 22, 62, 200, 43, 153, 188, 251, 133, 1, 191, 157, 104, 124, 190, 133, 227, 21, 189, 130, 32, 121, 189, 175, 201, 83, 189, 212, 220, 147, 62, 242, 152, 148, 189, 42, 47, 11, 61, 159, 140, 110, 190, 8, 171, 204, 190, 230, 74, 55, 62, 1, 159, 64, 189, 161, 198, 190, 61, 94, 199, 164, 62, 168, 98, 170, 62, 60, 226, 249, 190, 235, 153, 132, 190, 93, 225, 163, 61, 36, 81, 251, 61, 178, 19, 175, 188, 208, 70, 117, 61, 3, 111, 151, 61, 2, 62, 190, 61, 214, 115, 65, 190, 159, 83, 60, 190, 163, 250, 159, 60, 224, 214, 139, 189, 213, 131, 175, 189, 42, 161, 248, 62, 8, 197, 247, 189, 86, 149, 61, 62, 95, 30, 242, 61, 69, 64, 71, 62, 116, 142, 140, 191, 207, 21, 174, 190, 52, 6, 98, 62, 136, 43, 227, 61, 88, 187, 134, 61, 183, 74, 122, 61, 216, 67, 213, 61, 66, 191, 191, 62, 49, 140, 24, 190, 229, 253, 205, 189, 69, 9, 157, 62, 9, 145, 244, 61, 87, 40, 145, 61, 33, 104, 3, 62, 191, 196, 234, 61, 122, 121, 218, 62, 20, 209, 159, 62, 239, 163, 174, 191, 148, 90, 104, 62, 202, 137, 68, 190, 131, 140, 107, 62, 73, 128, 193, 190, 247, 94, 4, 190, 206, 179, 56, 62, 200, 125, 20, 191, 129, 153, 158, 189, 252, 253, 57, 62, 54, 227, 9, 191, 50, 14, 129, 190, 187, 32, 114, 190, 107, 1, 97, 191, 148, 144, 253, 188, 68, 147, 4, 62, 69, 255, 162, 189, 16, 244, 46, 61, 222, 13, 183, 61, 99, 147, 50, 61, 91, 217, 228, 61, 119, 60, 65, 189, 86, 1, 192, 189, 57, 194, 3, 189, 95, 181, 145, 190, 164, 79, 19, 62, 81, 92, 79, 189, 59, 177, 106, 62, 67, 106, 218, 62, 36, 48, 37, 62, 8, 212, 149, 62, 193, 77, 130, 62, 113, 82, 234, 61, 192, 73, 43, 62, 96, 170, 33, 62, 108, 88, 151, 190, 232, 38, 98, 62, 181, 134, 230, 61, 11, 0, 2, 62, 165, 67, 15, 190, 108, 34, 61, 190, 132, 138, 5, 190, 226, 78, 136, 190, 149, 62, 112, 60, 36, 138, 145, 62, 108, 190, 84, 61, 210, 224, 72, 189, 80, 33, 180, 62, 226, 61, 131, 189, 181, 201, 83, 190, 180, 227, 166, 61, 48, 249, 71, 190, 140, 59, 169, 61, 18, 174, 62, 60, 0, 31, 178, 190, 74, 1, 133, 190, 245, 84, 232, 62, 193, 31, 100, 191, 133, 3, 39, 189, 64, 233, 93, 189, 6, 229, 173, 62, 226, 54, 25, 190, 68, 108, 240, 190, 165, 134, 173, 188, 42, 118, 145, 60, 66, 217, 98, 62, 55, 150, 44, 62, 252, 168, 140, 59, 175, 188, 251, 61, 239, 95, 254, 61, 129, 47, 155, 60, 212, 26, 249, 189, 27, 201, 204, 61, 218, 227, 215, 61, 116, 212, 90, 188, 250, 145, 121, 62, 90, 198, 190, 189, 206, 74, 210, 189, 187, 17, 14, 190, 254, 183, 232, 61, 161, 233, 25, 62, 224, 78, 151, 61, 161, 104, 173, 61, 158, 93, 82, 60, 174, 215, 230, 61, 102, 111, 121, 62, 186, 155, 117, 62, 28, 25, 185, 61, 178, 177, 134, 190, 229, 246, 187, 62, 211, 110, 102, 61, 51, 62, 143, 189, 48, 12, 168, 61, 75, 171, 1, 192, 253, 154, 202, 190, 208, 95, 77, 191, 125, 73, 152, 188, 113, 239, 177, 189, 65, 215, 84, 62, 164, 122, 173, 61, 193, 71, 5, 191, 71, 166, 239, 189, 49, 173, 196, 191, 122, 87, 55, 62, 109, 237, 65, 62, 111, 27, 12, 62, 38, 156, 184, 62, 32, 97, 147, 190, 28, 244, 180, 61, 29, 70, 109, 61, 221, 136, 160, 61, 102, 32, 146, 191, 102, 185, 168, 60, 217, 91, 216, 190, 32, 119, 89, 190, 190, 117, 214, 59, 35, 107, 142, 62, 88, 71, 123, 190, 187, 38, 54, 62, 23, 133, 79, 62, 63, 19, 2, 191, 100, 243, 111, 62, 122, 205, 35, 190, 70, 20, 109, 189, 31, 202, 200, 188, 237, 104, 129, 191, 183, 51, 75, 191, 65, 43, 160, 191, 172, 195, 150, 189, 42, 242, 156, 60, 219, 140, 199, 61, 187, 142, 250, 189, 29, 32, 102, 190, 19, 156, 137, 62, 237, 74, 135, 61, 67, 179, 135, 61, 173, 127, 235, 61, 4, 90, 62, 62, 58, 198, 83, 60, 69, 243, 211, 62, 5, 165, 136, 189, 109, 238, 238, 61, 38, 80, 215, 186, 114, 114, 162, 190, 150, 131, 169, 62, 182, 47, 239, 190, 105, 128, 118, 190, 172, 138, 201, 62, 84, 6, 53, 62, 143, 39, 158, 62, 238, 3, 252, 61, 215, 2, 137, 62, 111, 229, 15, 191, 45, 57, 22, 62, 128, 234, 184, 188, 49, 161, 25, 191, 236, 7, 134, 62, 130, 61, 168, 190, 180, 22, 20, 62, 159, 217, 18, 190, 166, 103, 181, 189, 149, 105, 18, 188, 6, 158, 160, 61, 232, 75, 131, 62, 186, 7, 25, 190, 87, 34, 44, 190, 124, 68, 91, 189, 138, 108, 134, 190, 177, 101, 43, 62, 214, 127, 3, 62, 13, 163, 7, 62, 57, 179, 27, 190, 121, 246, 165, 61, 159, 148, 254, 189, 79, 133, 250, 190, 25, 34, 217, 189, 115, 75, 6, 191, 152, 11, 239, 189, 82, 213, 49, 62, 177, 131, 6, 190, 239, 227, 69, 189, 57, 59, 73, 190, 42, 57, 206, 61, 218, 27, 241, 61, 72, 254, 227, 61, 135, 253, 210, 61, 11, 191, 38, 61, 210, 150, 18, 189, 47, 64, 149, 189, 188, 74, 18, 61, 55, 134, 181, 188, 107, 187, 162, 61, 15, 220, 53, 60, 161, 62, 158, 189, 45, 5, 180, 59, 174, 70, 152, 62, 61, 156, 216, 61, 243, 92, 235, 189, 21, 50, 181, 189, 35, 50, 142, 190, 118, 162, 68, 190, 104, 8, 71, 190, 146, 232, 150, 190, 142, 161, 243, 61, 165, 182, 63, 190, 165, 37, 129, 189, 10, 12, 15, 190, 201, 40, 94, 189, 207, 101, 185, 189, 148, 135, 240, 187, 13, 229, 6, 61, 66, 9, 85, 190, 126, 8, 177, 60, 120, 119, 149, 61, 110, 212, 57, 190, 34, 206, 101, 190, 101, 170, 46, 189, 147, 188, 67, 190, 32, 46, 171, 61, 41, 177, 100, 62, 165, 139, 66, 189, 32, 198, 30, 63, 227, 247, 6, 190, 245, 33, 209, 61, 74, 223, 248, 190, 87, 117, 9, 189, 73, 131, 14, 62, 5, 254, 209, 190, 204, 101, 248, 60, 254, 163, 67, 188, 252, 229, 159, 62, 135, 248, 157, 190, 226, 184, 156, 61, 105, 54, 143, 187, 0, 178, 151, 62, 108, 82, 207, 189, 201, 134, 27, 191, 111, 224, 152, 62, 64, 79, 196, 59, 247, 9, 119, 61, 129, 254, 180, 189, 144, 140, 137, 190, 21, 169, 129, 61, 205, 163, 218, 190, 50, 51, 127, 62, 142, 115, 34, 62, 101, 149, 66, 62, 3, 81, 11, 190, 193, 219, 19, 59, 229, 163, 129, 190, 53, 196, 245, 189, 78, 166, 56, 190, 52, 69, 221, 61, 37, 251, 185, 190, 85, 9, 30, 62, 199, 5, 90, 62, 189, 116, 244, 61, 32, 93, 101, 190, 16, 28, 10, 191, 163, 228, 144, 189, 127, 128, 183, 189, 253, 113, 188, 190, 243, 87, 206, 190, 61, 16, 39, 61, 4, 165, 4, 191, 99, 182, 23, 190, 100, 226, 70, 61, 184, 22, 149, 190, 66, 58, 61, 62, 215, 93, 66, 191, 32, 215, 34, 190, 130, 37, 143, 190, 242, 30, 105, 191, 148, 109, 218, 62, 58, 185, 238, 61, 118, 106, 76, 62, 61, 7, 157, 61, 226, 212, 253, 190, 109, 195, 135, 190, 99, 115, 229, 61, 107, 253, 10, 62, 188, 37, 140, 62, 140, 150, 235, 189, 0, 144, 12, 191, 73, 162, 71, 189, 10, 63, 247, 60, 197, 243, 171, 191, 251, 129, 133, 191, 117, 192, 169, 62, 158, 148, 171, 190, 64, 162, 127, 190, 10, 100, 195, 190, 112, 54, 142, 60, 65, 63, 154, 191, 141, 138, 183, 61, 226, 96, 109, 190, 59, 78, 145, 190, 232, 144, 120, 61, 197, 232, 239, 61, 131, 14, 35, 62, 50, 49, 84, 190, 12, 28, 187, 188, 198, 30, 40, 191, 45, 222, 79, 189, 95, 132, 128, 62, 128, 35, 246, 190, 39, 170, 196, 189, 232, 135, 152, 190, 12, 147, 58, 62, 91, 189, 182, 61, 30, 22, 98, 62, 229, 30, 21, 190, 179, 164, 1, 190, 190, 116, 68, 61, 9, 111, 207, 61, 19, 94, 142, 191, 44, 68, 187, 62, 127, 190, 46, 191, 106, 210, 50, 191, 169, 222, 141, 190, 125, 3, 171, 61, 170, 181, 216, 190, 105, 6, 123, 60, 103, 20, 17, 190, 145, 158, 196, 189, 83, 8, 218, 190, 130, 209, 95, 190, 130, 226, 105, 190, 165, 37, 99, 190, 232, 148, 163, 60, 232, 131, 62, 62, 31, 30, 15, 62, 69, 104, 19, 62, 92, 143, 118, 61, 226, 9, 104, 191, 215, 198, 95, 190, 52, 236, 37, 188, 40, 138, 160, 190, 245, 196, 200, 61, 12, 171, 64, 190, 121, 83, 108, 62, 85, 224, 0, 61, 137, 172, 26, 62, 250, 35, 20, 62, 182, 52, 165, 190, 124, 84, 2, 62, 127, 9, 40, 62, 3, 208, 198, 189, 25, 227, 45, 190, 156, 73, 226, 61, 7, 190, 231, 61, 84, 126, 27, 190, 139, 31, 239, 189, 86, 47, 2, 62, 217, 210, 120, 61, 106, 181, 33, 190, 252, 197, 233, 61, 216, 205, 43, 61, 188, 156, 15, 61, 74, 209, 46, 190, 24, 35, 3, 189, 100, 241, 39, 190, 73, 86, 199, 61, 193, 55, 9, 61, 243, 1, 83, 60, 15, 215, 34, 190, 117, 10, 50, 60, 143, 51, 166, 189, 90, 90, 164, 61, 132, 113, 155, 188, 219, 241, 189, 189, 103, 255, 8, 190, 190, 25, 4, 188, 14, 158, 73, 190, 126, 136, 7, 190, 127, 112, 54, 61, 71, 194, 148, 60, 68, 154, 217, 61, 45, 169, 149, 61, 146, 67, 59, 189, 69, 161, 252, 188, 111, 204, 45, 190, 65, 249, 27, 62, 211, 38, 50, 189, 63, 37, 240, 61, 178, 205, 218, 61, 183, 139, 158, 189, 221, 163, 19, 189, 221, 219, 117, 190, 108, 133, 6, 62, 17, 240, 108, 189, 107, 47, 255, 61, 106, 196, 56, 189, 67, 217, 6, 190, 94, 44, 31, 189, 190, 124, 105, 61, 89, 229, 129, 188, 182, 246, 5, 62, 89, 234, 26, 60, 174, 69, 21, 62, 161, 132, 131, 189, 95, 243, 91, 190, 246, 111, 36, 61, 102, 195, 92, 189, 240, 43, 29, 189, 54, 254, 201, 189, 230, 159, 14, 59, 177, 202, 75, 60, 99, 233, 73, 61, 137, 98, 54, 190, 38, 119, 221, 61, 89, 237, 27, 190, 35, 60, 61, 190, 8, 76, 69, 189, 142, 70, 198, 61, 98, 159, 19, 62, 29, 222, 1, 188, 48, 93, 37, 190, 219, 240, 195, 61, 132, 4, 12, 190, 42, 144, 101, 61, 77, 39, 210, 61, 195, 15, 23, 187, 219, 99, 3, 190, 178, 156, 198, 189, 185, 59, 60, 189, 38, 75, 183, 61, 50, 198, 55, 190, 89, 147, 162, 189, 123, 83, 22, 189, 41, 59, 51, 190, 117, 89, 21, 190, 161, 199, 34, 60, 82, 21, 172, 59, 41, 246, 78, 189, 157, 149, 129, 61, 219, 215, 18, 61, 162, 16, 28, 190, 228, 152, 37, 62, 119, 77, 131, 189, 105, 82, 210, 60, 234, 194, 135, 189, 112, 144, 236, 189, 99, 70, 201, 61, 15, 24, 184, 61, 210, 254, 58, 191, 67, 109, 229, 189, 159, 157, 252, 61, 225, 169, 22, 62, 116, 153, 157, 187, 142, 1, 114, 190, 182, 194, 216, 59, 107, 44, 39, 60, 190, 165, 7, 191, 254, 196, 177, 190, 178, 215, 71, 61, 173, 131, 206, 61, 81, 127, 89, 62, 206, 91, 51, 62, 138, 111, 47, 190, 236, 5, 54, 62, 76, 215, 21, 191, 58, 14, 0, 190, 183, 63, 131, 191, 64, 22, 33, 191, 39, 184, 54, 62, 123, 205, 228, 61, 76, 228, 53, 61, 221, 9, 140, 62, 106, 133, 186, 190, 172, 68, 26, 62, 120, 238, 24, 189, 83, 193, 192, 61, 143, 215, 125, 62, 215, 53, 30, 61, 152, 61, 143, 62, 224, 237, 64, 62, 250, 61, 241, 189, 32, 209, 64, 62, 99, 136, 14, 62, 192, 142, 7, 191, 59, 111, 122, 62, 71, 54, 13, 61, 37, 30, 83, 189, 179, 6, 202, 190, 67, 244, 33, 62, 113, 129, 161, 190, 73, 118, 11, 190, 94, 113, 80, 187, 127, 193, 126, 62, 133, 189, 154, 60, 116, 80, 149, 190, 216, 119, 31, 61, 253, 36, 5, 191, 208, 225, 167, 60, 168, 25, 228, 189, 19, 121, 26, 190, 60, 115, 174, 62, 25, 105, 154, 61, 183, 39, 77, 191, 209, 228, 86, 189, 3, 181, 232, 60, 157, 176, 168, 62, 217, 55, 190, 61, 65, 185, 36, 190, 183, 207, 153, 62, 236, 96, 211, 189, 122, 214, 114, 190, 111, 152, 42, 62, 212, 228, 108, 191, 238, 190, 29, 191, 106, 223, 74, 191, 10, 96, 114, 62, 96, 210, 10, 62, 43, 132, 14, 62, 225, 112, 237, 61, 47, 173, 190, 190, 33, 126, 56, 189, 195, 44, 171, 189, 235, 167, 47, 190, 118, 248, 137, 61, 6, 237, 207, 189, 4, 212, 97, 62, 37, 120, 238, 62, 5, 65, 14, 189, 77, 141, 13, 190, 253, 231, 12, 61, 89, 99, 177, 190, 17, 226, 4, 62, 17, 139, 223, 190, 142, 91, 164, 187, 52, 51, 151, 60, 38, 253, 217, 61, 160, 189, 59, 62, 115, 26, 135, 62, 128, 89, 181, 61, 17, 236, 192, 190, 213, 71, 83, 62, 19, 19, 245, 189, 88, 215, 164, 62, 213, 71, 91, 62, 220, 163, 191, 189, 75, 225, 159, 62, 82, 158, 128, 62, 137, 41, 157, 191, 151, 95, 240, 61, 144, 45, 191, 61, 153, 255, 122, 189, 99, 3, 1, 189, 3, 255, 112, 60, 70, 26, 67, 62, 210, 148, 103, 190, 191, 66, 17, 60, 39, 201, 130, 61, 6, 10, 19, 190, 102, 147, 103, 189, 148, 135, 134, 190, 92, 177, 22, 190, 158, 61, 134, 62, 42, 59, 98, 62, 51, 100, 229, 61, 169, 249, 75, 62, 118, 30, 183, 61, 235, 213, 211, 189, 199, 129, 131, 61, 74, 66, 194, 61, 95, 133, 33, 62, 147, 38, 83, 62, 5, 190, 202, 189, 158, 99, 207, 62, 113, 232, 234, 189, 67, 74, 26, 190, 16, 52, 165, 61, 49, 41, 98, 191, 128, 199, 169, 191, 8, 240, 168, 191, 35, 88, 29, 62, 48, 237, 200, 61, 251, 161, 58, 188, 123, 100, 226, 61, 143, 68, 231, 190, 110, 251, 166, 61, 10, 69, 31, 191, 156, 161, 166, 61, 41, 212, 66, 62, 127, 16, 26, 61, 2, 156, 148, 62, 252, 207, 157, 59, 78, 154, 212, 188, 92, 42, 24, 63, 84, 117, 160, 190, 75, 251, 136, 190, 171, 165, 158, 190, 251, 170, 94, 190, 31, 170, 249, 189, 117, 110, 155, 60, 251, 223, 36, 62, 77, 200, 208, 190, 74, 150, 195, 189, 80, 11, 153, 60, 131, 188, 54, 191, 70, 13, 121, 61, 67, 67, 2, 62, 22, 12, 135, 62, 218, 55, 154, 190, 214, 99, 126, 61, 139, 113, 191, 190, 122, 87, 235, 189, 118, 183, 142, 191, 105, 145, 0, 62, 240, 190, 13, 190, 88, 181, 15, 60, 236, 98, 123, 190, 119, 46, 243, 61, 118, 58, 73, 62, 152, 93, 192, 189, 199, 136, 132, 61, 201, 176, 112, 189, 52, 84, 153, 190, 242, 118, 129, 62, 75, 167, 228, 191, 133, 122, 175, 190, 22, 248, 110, 62, 234, 254, 190, 62, 12, 112, 193, 62, 41, 13, 61, 190, 243, 149, 134, 61, 29, 214, 98, 61, 93, 114, 13, 190, 113, 101, 94, 62, 88, 211, 181, 61, 151, 198, 137, 190, 104, 155, 9, 192, 171, 187, 245, 189, 39, 192, 5, 190, 220, 60, 10, 191, 103, 31, 129, 62, 167, 29, 177, 190, 114, 222, 78, 191, 221, 97, 22, 191, 202, 119, 132, 62, 138, 208, 55, 190, 104, 33, 186, 187, 174, 81, 219, 60, 35, 88, 82, 189, 151, 133, 132, 190, 143, 70, 212, 60, 96, 58, 10, 190, 151, 90, 197, 58, 102, 117, 160, 62, 123, 59, 85, 62, 155, 206, 24, 62, 150, 47, 9, 190, 68, 17, 34, 63, 85, 71, 146, 190, 208, 34, 205, 61, 222, 217, 213, 61, 153, 106, 59, 190, 203, 188, 190, 61, 131, 217, 81, 190, 239, 75, 211, 61, 180, 232, 110, 61, 53, 158, 213, 187, 223, 42, 3, 185, 177, 57, 58, 190, 246, 160, 102, 62, 248, 202, 45, 189, 2, 77, 169, 188, 140, 29, 31, 62, 81, 233, 149, 189, 44, 11, 23, 62, 157, 58, 234, 59, 89, 67, 32, 62, 36, 202, 85, 61, 35, 35, 24, 187, 115, 203, 128, 186, 85, 5, 138, 60, 244, 53, 65, 61, 239, 27, 196, 61, 139, 154, 53, 189, 208, 218, 201, 189, 32, 196, 48, 190, 45, 122, 188, 189, 161, 135, 44, 61, 35, 124, 222, 61, 173, 10, 46, 57, 142, 86, 29, 62, 99, 29, 11, 189, 225, 192, 162, 187, 196, 9, 156, 189, 216, 104, 44, 190, 56, 204, 25, 190, 117, 171, 119, 189, 184, 24, 250, 60, 254, 16, 221, 189, 201, 180, 241, 61, 17, 214, 42, 190, 53, 245, 8, 60, 48, 113, 201, 188, 103, 33, 27, 62, 188, 105, 41, 191, 136, 155, 15, 62, 5, 198, 252, 189, 229, 12, 97, 190, 163, 231, 148, 191, 4, 28, 163, 189, 13, 56, 248, 61, 181, 174, 80, 188, 60, 211, 21, 190, 62, 13, 179, 61, 11, 77, 234, 61, 92, 8, 21, 62, 90, 143, 243, 189, 92, 12, 151, 190, 151, 164, 127, 190, 253, 115, 153, 62, 129, 63, 2, 192, 162, 252, 10, 189, 120, 108, 91, 62, 82, 36, 77, 62, 49, 103, 147, 62, 187, 50, 63, 188, 174, 67, 15, 190, 140, 71, 141, 61, 197, 236, 18, 190, 205, 141, 79, 62, 219, 209, 200, 60, 207, 93, 144, 189, 46, 70, 237, 191, 14, 126, 153, 62, 87, 230, 72, 189, 72, 28, 67, 190, 61, 220, 41, 188, 241, 118, 160, 190, 212, 233, 5, 191, 42, 164, 224, 190, 245, 2, 211, 61, 13, 131, 246, 190, 203, 34, 149, 61, 21, 154, 25, 62, 60, 12, 143, 190, 175, 210, 138, 190, 116, 56, 75, 61, 116, 223, 205, 188, 60, 61, 217, 190, 21, 155, 65, 62, 34, 213, 212, 62, 230, 60, 87, 62, 90, 141, 49, 190, 99, 110, 198, 62, 26, 139, 230, 190, 54, 69, 40, 190, 214, 0, 131, 62, 142, 164, 95, 191, 250, 247, 34, 62, 201, 31, 9, 190, 1, 160, 134, 62, 62, 105, 102, 62, 31, 55, 228, 61, 237, 62, 97, 189, 170, 96, 180, 190, 63, 212, 122, 62, 243, 213, 243, 61, 234, 137, 48, 190, 61, 73, 183, 188, 146, 73, 85, 189, 41, 2, 18, 190, 201, 72, 129, 189, 219, 105, 158, 189, 27, 34, 81, 190, 62, 6, 213, 61, 105, 240, 79, 189, 126, 180, 217, 189, 207, 177, 2, 190, 184, 234, 6, 61, 161, 156, 121, 189, 220, 21, 227, 61, 159, 225, 18, 190, 219, 78, 22, 62, 31, 185, 59, 190, 179, 4, 66, 190, 214, 238, 99, 61, 240, 140, 133, 190, 227, 47, 193, 188, 170, 45, 147, 189, 202, 109, 90, 189, 210, 97, 203, 189, 31, 24, 46, 62, 220, 112, 50, 61, 221, 107, 8, 61, 115, 58, 255, 189, 163, 68, 66, 190, 144, 230, 191, 60, 200, 49, 74, 62, 234, 46, 153, 61, 227, 77, 123, 191, 92, 227, 17, 61, 74, 122, 195, 62, 36, 79, 11, 190, 158, 42, 238, 190, 144, 186, 26, 62, 193, 112, 26, 189, 225, 130, 30, 192, 85, 99, 229, 190, 59, 131, 181, 62, 47, 39, 192, 191, 97, 168, 185, 62, 190, 233, 183, 190, 58, 172, 206, 190, 166, 73, 231, 190, 188, 85, 169, 61, 127, 57, 95, 189, 113, 126, 109, 59, 211, 204, 159, 190, 131, 240, 207, 191, 191, 160, 41, 62, 145, 81, 91, 61, 226, 33, 110, 190, 58, 61, 163, 62, 165, 125, 155, 190, 84, 156, 125, 62, 104, 0, 56, 60, 15, 186, 92, 62, 32, 229, 1, 191, 162, 177, 245, 60, 231, 233, 173, 190, 28, 227, 20, 190, 172, 212, 144, 62, 231, 92, 34, 62, 184, 155, 211, 62, 180, 97, 10, 62, 144, 128, 1, 188, 33, 132, 217, 190, 135, 204, 191, 188, 200, 154, 251, 61, 47, 159, 168, 61, 121, 210, 162, 190, 231, 42, 25, 61, 83, 202, 198, 61, 93, 148, 151, 189, 192, 216, 24, 61, 201, 108, 111, 61, 59, 215, 47, 62, 130, 143, 162, 61, 37, 244, 7, 191, 28, 50, 88, 62, 67, 22, 69, 62, 131, 8, 76, 188, 81, 197, 113, 62, 99, 72, 138, 190, 214, 109, 38, 188, 34, 47, 53, 61, 213, 188, 107, 189, 144, 43, 128, 60, 3, 246, 200, 61, 168, 239, 222, 188, 177, 150, 113, 191, 134, 10, 224, 61, 121, 218, 70, 61, 58, 144, 130, 189, 89, 121, 81, 190, 114, 149, 217, 189, 63, 148, 114, 189, 204, 66, 81, 189, 244, 102, 75, 61, 33, 8, 50, 190, 154, 79, 5, 190, 147, 91, 11, 62, 195, 19, 33, 190, 208, 5, 15, 190, 146, 42, 24, 189, 61, 153, 226, 61, 232, 167, 229, 61, 112, 65, 136, 61, 57, 134, 213, 189, 110, 82, 143, 189, 208, 98, 158, 60, 106, 119, 98, 189, 250, 156, 159, 61, 124, 38, 31, 190, 122, 205, 198, 61, 49, 212, 142, 61, 10, 136, 132, 61, 21, 136, 18, 62, 32, 193, 222, 189, 14, 204, 86, 190, 71, 155, 11, 61, 209, 248, 67, 190, 189, 161, 27, 190, 249, 124, 30, 190, 101, 208, 238, 61, 83, 27, 196, 190, 189, 171, 14, 62, 34, 250, 133, 62, 136, 45, 215, 190, 177, 124, 185, 190, 188, 225, 131, 62, 230, 91, 102, 190, 137, 203, 145, 190, 199, 220, 87, 191, 253, 207, 15, 61, 124, 201, 163, 191, 111, 232, 166, 61, 170, 199, 103, 190, 241, 27, 5, 191, 213, 158, 20, 191, 144, 105, 196, 62, 168, 192, 47, 62, 70, 112, 3, 62, 126, 223, 231, 62, 18, 96, 151, 191, 40, 26, 107, 62, 36, 65, 199, 188, 5, 233, 119, 190, 10, 37, 1, 190, 141, 254, 53, 189, 153, 163, 184, 188, 189, 67, 108, 61, 17, 117, 78, 62, 245, 241, 15, 191, 188, 147, 18, 190, 213, 64, 39, 60, 51, 15, 0, 190, 49, 225, 139, 187, 42, 218, 8, 61, 113, 193, 86, 62, 226, 166, 50, 190, 130, 113, 211, 61, 188, 118, 151, 191, 113, 139, 186, 61, 53, 153, 71, 190, 51, 43, 177, 62, 4, 108, 227, 189, 95, 15, 184, 189, 68, 21, 151, 61, 6, 85, 165, 190, 253, 26, 32, 189, 108, 90, 74, 62, 54, 36, 163, 190, 48, 222, 172, 190, 156, 105, 137, 190, 43, 191, 117, 191, 102, 193, 63, 190, 154, 163, 189, 61, 199, 165, 5, 61, 132, 214, 55, 191, 127, 145, 41, 62, 250, 88, 240, 189, 134, 57, 23, 191, 255, 125, 50, 190, 16, 170, 0, 190, 137, 221, 104, 62, 219, 45, 102, 190, 187, 221, 229, 190};
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
                alignas(float) const unsigned char memory[] = {190, 8, 89, 61, 172, 74, 144, 188, 96, 190, 169, 188, 43, 149, 87, 189, 162, 120, 205, 62, 107, 54, 127, 62, 176, 248, 119, 189, 26, 242, 1, 62, 102, 226, 128, 189, 121, 192, 10, 61, 108, 100, 136, 189, 8, 163, 137, 62, 91, 231, 152, 62, 250, 137, 17, 190, 104, 221, 37, 190, 90, 224, 189, 189, 204, 34, 46, 189, 1, 172, 194, 61, 15, 132, 174, 62, 246, 40, 150, 61, 12, 66, 129, 189, 15, 127, 219, 61, 2, 51, 181, 61, 187, 238, 50, 190, 33, 4, 53, 62, 69, 148, 23, 62, 158, 131, 23, 190, 196, 67, 203, 60, 164, 51, 249, 189, 240, 236, 223, 60, 122, 29, 56, 189, 222, 45, 42, 62};
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
                alignas(float) const unsigned char memory[] = {231, 163, 117, 62, 206, 171, 175, 62, 183, 87, 5, 63, 249, 152, 217, 190, 182, 216, 39, 62, 168, 95, 40, 191, 77, 240, 193, 190, 175, 210, 197, 61, 22, 206, 127, 62, 47, 103, 78, 62, 112, 126, 192, 62, 133, 189, 133, 191, 99, 173, 191, 190, 58, 48, 66, 188, 86, 70, 253, 61, 103, 169, 197, 187, 236, 116, 228, 62, 119, 120, 95, 62, 237, 114, 163, 190, 0, 255, 88, 62, 169, 91, 56, 191, 109, 8, 52, 63, 231, 167, 183, 190, 39, 254, 127, 61, 136, 83, 98, 63, 174, 44, 39, 191, 93, 253, 77, 190, 239, 48, 145, 191, 222, 5, 132, 62, 90, 136, 148, 189, 104, 68, 50, 191, 3, 186, 133, 63, 37, 62, 121, 189, 189, 97, 152, 190, 181, 161, 138, 62, 96, 57, 213, 189, 222, 158, 167, 190, 62, 180, 6, 61, 243, 143, 34, 62, 46, 167, 204, 190, 194, 188, 240, 185, 139, 47, 218, 61, 105, 251, 164, 62, 95, 9, 160, 62, 40, 185, 246, 190, 255, 115, 178, 189, 52, 97, 198, 189, 82, 212, 23, 61, 28, 84, 47, 190, 110, 106, 99, 190, 1, 156, 37, 190, 196, 126, 179, 189, 60, 54, 217, 62, 155, 167, 145, 62, 236, 240, 105, 189, 16, 229, 81, 189, 55, 244, 146, 61, 53, 22, 142, 62, 90, 214, 204, 60, 2, 123, 123, 62, 226, 36, 89, 61, 17, 246, 52, 61, 247, 67, 24, 62, 131, 49, 143, 62};
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
                alignas(float) const unsigned char memory[] = {236, 251, 85, 62, 121, 190, 14, 191};
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
    alignas(float) const unsigned char memory[] = {168, 112, 18, 191, 50, 168, 69, 191, 227, 5, 104, 190};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {160, 163, 201, 191, 160, 193, 35, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0096/steps/000000000016000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}