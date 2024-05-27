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
                alignas(float) const unsigned char memory[] = {46, 93, 44, 190, 103, 195, 2, 191, 40, 208, 197, 62, 119, 6, 246, 61, 177, 21, 22, 63, 36, 40, 214, 62, 73, 220, 145, 62, 107, 69, 169, 59, 127, 78, 230, 62, 210, 174, 149, 62, 95, 72, 90, 191, 109, 254, 66, 190, 25, 87, 185, 190, 168, 55, 172, 190, 163, 11, 14, 189, 19, 146, 94, 191, 184, 104, 218, 190, 229, 135, 151, 61, 191, 51, 98, 190, 129, 145, 250, 190, 171, 4, 31, 190, 167, 170, 75, 190, 46, 65, 52, 190, 229, 13, 90, 59, 168, 155, 0, 63, 181, 207, 143, 63, 139, 78, 52, 191, 10, 57, 135, 189, 117, 249, 7, 63, 184, 144, 29, 63, 43, 39, 91, 62, 37, 221, 96, 63, 171, 37, 34, 191, 217, 66, 133, 190, 166, 160, 194, 191, 144, 148, 16, 63, 12, 123, 26, 190, 208, 46, 117, 62, 227, 191, 7, 191, 89, 38, 148, 190, 115, 23, 91, 63, 68, 166, 93, 191, 144, 148, 43, 191, 192, 29, 67, 191, 3, 5, 145, 188, 254, 190, 220, 61, 6, 175, 38, 63, 25, 191, 33, 191, 32, 42, 113, 190, 126, 251, 1, 189, 226, 113, 153, 62, 240, 92, 61, 188, 116, 12, 0, 190, 177, 126, 146, 190, 106, 68, 223, 190, 205, 177, 19, 191, 99, 199, 33, 63, 5, 15, 58, 63, 175, 83, 24, 62, 218, 230, 56, 62, 56, 77, 5, 190, 122, 58, 49, 191, 39, 54, 173, 190, 185, 77, 36, 63, 116, 206, 41, 63, 70, 165, 185, 62, 14, 251, 149, 62, 40, 134, 154, 190, 74, 122, 2, 63, 98, 130, 37, 63, 125, 1, 10, 191, 119, 55, 242, 190, 31, 15, 41, 63, 52, 52, 34, 191, 38, 138, 222, 62, 177, 3, 36, 63, 90, 136, 0, 191, 157, 60, 33, 190, 172, 209, 181, 62, 93, 103, 157, 61, 12, 201, 145, 61, 182, 228, 77, 190, 26, 236, 31, 191, 30, 143, 150, 190, 176, 133, 16, 63, 131, 146, 179, 62, 106, 204, 42, 63, 67, 78, 202, 190, 176, 184, 128, 190, 23, 26, 41, 189, 197, 207, 148, 190, 19, 109, 69, 190, 111, 176, 21, 63, 25, 246, 22, 61, 75, 253, 62, 63, 98, 86, 177, 190};
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
                alignas(float) const unsigned char memory[] = {137, 201, 132, 190, 8, 105, 56, 191, 217, 101, 1, 63, 205, 116, 235, 62, 58, 209, 175, 62, 197, 123, 156, 62, 74, 188, 45, 191, 154, 198, 25, 63, 187, 163, 17, 63, 5, 220, 21, 191, 88, 176, 133, 62, 103, 70, 136, 61, 215, 197, 187, 190, 10, 241, 231, 189, 232, 58, 57, 188, 244, 156, 188, 190, 83, 183, 217, 62, 45, 100, 64, 191, 147, 159, 17, 190, 237, 42, 182, 62, 128, 15, 223, 62, 208, 9, 131, 60, 234, 192, 11, 63, 85, 159, 196, 61, 55, 179, 5, 63, 20, 214, 21, 185, 40, 242, 15, 63, 187, 171, 7, 191, 12, 89, 66, 189, 83, 81, 42, 191, 80, 88, 133, 62, 153, 85, 227, 61};
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
                alignas(float) const unsigned char memory[] = {200, 70, 4, 190, 50, 193, 44, 62, 224, 83, 9, 190, 202, 21, 152, 61, 195, 243, 110, 62, 23, 244, 160, 61, 189, 218, 129, 190, 150, 136, 169, 61, 231, 250, 153, 62, 33, 253, 109, 189, 35, 57, 47, 190, 47, 172, 49, 191, 158, 1, 149, 190, 114, 97, 141, 62, 107, 43, 36, 62, 181, 38, 22, 190, 82, 121, 143, 61, 100, 164, 21, 190, 88, 35, 216, 190, 211, 52, 134, 62, 151, 25, 232, 188, 227, 244, 133, 62, 143, 167, 130, 190, 182, 188, 94, 190, 162, 9, 132, 62, 192, 227, 161, 189, 132, 85, 61, 62, 2, 224, 136, 190, 184, 30, 48, 62, 217, 93, 8, 190, 239, 225, 127, 190, 185, 107, 226, 62, 64, 234, 63, 188, 83, 23, 79, 62, 12, 136, 16, 187, 34, 13, 160, 189, 10, 18, 10, 190, 69, 30, 250, 61, 24, 11, 178, 190, 155, 190, 55, 62, 226, 107, 114, 62, 195, 226, 48, 62, 202, 106, 57, 62, 155, 124, 216, 190, 147, 158, 13, 190, 13, 85, 204, 62, 48, 205, 61, 61, 59, 95, 103, 190, 184, 106, 86, 61, 167, 144, 94, 190, 189, 0, 69, 190, 105, 72, 65, 62, 30, 17, 184, 61, 159, 126, 90, 62, 122, 252, 228, 189, 33, 232, 56, 190, 149, 70, 121, 62, 16, 141, 102, 189, 255, 9, 204, 61, 9, 130, 31, 190, 39, 35, 149, 62, 227, 200, 8, 190, 170, 66, 50, 190, 138, 199, 105, 62, 185, 249, 182, 189, 249, 164, 170, 190, 115, 145, 159, 189, 135, 163, 179, 189, 32, 183, 90, 60, 134, 175, 177, 187, 50, 27, 220, 188, 117, 236, 40, 62, 70, 108, 186, 190, 254, 243, 150, 190, 98, 9, 45, 190, 103, 75, 249, 61, 215, 18, 56, 62, 29, 192, 240, 189, 170, 124, 225, 59, 112, 204, 95, 62, 124, 172, 79, 62, 141, 23, 68, 189, 9, 13, 175, 62, 81, 243, 136, 61, 177, 62, 148, 189, 241, 11, 117, 190, 160, 253, 17, 62, 23, 45, 144, 60, 188, 138, 57, 189, 242, 54, 212, 62, 95, 10, 152, 62, 186, 169, 81, 62, 0, 93, 95, 190, 61, 240, 122, 189, 12, 63, 179, 61, 254, 246, 214, 190, 190, 91, 83, 60, 113, 55, 184, 189, 89, 248, 228, 188, 241, 211, 58, 62, 108, 6, 79, 189, 146, 207, 1, 62, 140, 63, 96, 189, 153, 17, 17, 62, 30, 10, 66, 190, 133, 51, 159, 189, 253, 140, 133, 61, 224, 235, 189, 60, 183, 171, 28, 189, 156, 191, 212, 189, 124, 181, 123, 62, 199, 191, 167, 190, 72, 60, 225, 61, 181, 188, 155, 190, 122, 11, 67, 61, 247, 14, 74, 62, 41, 186, 88, 62, 13, 207, 194, 61, 0, 55, 47, 190, 125, 123, 158, 190, 157, 251, 18, 62, 230, 224, 40, 190, 205, 27, 47, 190, 209, 105, 188, 61, 101, 136, 24, 62, 95, 168, 66, 62, 199, 91, 43, 61, 16, 109, 18, 62, 212, 119, 8, 187, 82, 31, 49, 61, 24, 23, 102, 60, 242, 195, 12, 190, 181, 89, 203, 189, 126, 253, 1, 190, 247, 40, 43, 190, 252, 179, 2, 60, 175, 66, 190, 61, 2, 243, 91, 190, 102, 24, 58, 190, 160, 169, 0, 190, 183, 13, 137, 190, 125, 8, 131, 190, 75, 82, 11, 191, 41, 2, 52, 60, 108, 39, 163, 61, 67, 164, 83, 190, 164, 139, 22, 190, 150, 6, 9, 62, 109, 56, 147, 190, 24, 177, 138, 61, 110, 200, 145, 61, 236, 60, 196, 61, 101, 239, 57, 61, 1, 96, 19, 62, 73, 210, 101, 61, 255, 75, 243, 189, 149, 58, 155, 189, 191, 253, 173, 61, 109, 217, 237, 61, 42, 165, 105, 62, 5, 117, 178, 188, 29, 20, 28, 62, 18, 208, 239, 189, 52, 110, 31, 190, 175, 190, 199, 189, 179, 150, 16, 190, 63, 129, 196, 189, 19, 145, 140, 189, 106, 241, 159, 61, 126, 73, 40, 190, 82, 209, 26, 190, 119, 226, 65, 189, 214, 75, 135, 189, 127, 118, 32, 190, 216, 23, 147, 189, 237, 142, 194, 189, 143, 63, 129, 187, 241, 177, 51, 62, 217, 217, 12, 60, 95, 166, 237, 189, 160, 32, 171, 189, 160, 96, 79, 189, 88, 191, 157, 61, 177, 237, 26, 190, 113, 227, 201, 189, 166, 126, 97, 189, 220, 225, 138, 188, 90, 91, 231, 60, 247, 50, 38, 190, 77, 133, 51, 190, 180, 138, 206, 60, 167, 169, 37, 190, 132, 250, 16, 190, 23, 249, 244, 61, 91, 196, 149, 189, 8, 129, 198, 61, 7, 71, 242, 189, 233, 21, 115, 61, 50, 147, 156, 59, 238, 128, 177, 189, 188, 191, 158, 190, 148, 226, 118, 189, 236, 135, 91, 190, 55, 189, 10, 190, 120, 115, 9, 62, 193, 146, 19, 190, 250, 245, 162, 61, 98, 108, 7, 62, 252, 129, 104, 62, 72, 121, 184, 61, 116, 154, 133, 62, 126, 71, 140, 61, 127, 194, 95, 61, 164, 192, 51, 190, 202, 18, 219, 61, 36, 47, 97, 62, 128, 218, 158, 189, 235, 226, 159, 62, 247, 192, 13, 61, 65, 42, 9, 62, 127, 95, 206, 61, 177, 159, 110, 189, 47, 104, 1, 62, 71, 230, 189, 190, 4, 7, 185, 61, 147, 176, 164, 189, 118, 195, 232, 189, 136, 225, 221, 189, 4, 232, 148, 189, 118, 189, 96, 189, 154, 251, 33, 190, 200, 92, 100, 189, 142, 126, 43, 61, 199, 39, 40, 190, 211, 138, 246, 189, 74, 81, 81, 61, 4, 80, 252, 59, 93, 207, 107, 189, 190, 141, 41, 190, 147, 206, 196, 188, 50, 60, 21, 189, 4, 158, 147, 189, 190, 25, 33, 190, 39, 48, 159, 189, 59, 211, 197, 61, 104, 66, 204, 189, 113, 30, 158, 189, 156, 210, 133, 189, 89, 59, 184, 189, 250, 193, 23, 190, 130, 22, 11, 189, 214, 104, 213, 59, 18, 88, 17, 190, 11, 55, 244, 189, 95, 136, 217, 61, 89, 155, 250, 189, 199, 108, 48, 189, 254, 96, 193, 58, 98, 45, 58, 62, 101, 126, 188, 189, 45, 227, 146, 189, 166, 178, 57, 61, 83, 34, 141, 190, 237, 206, 179, 60, 174, 229, 203, 62, 209, 33, 236, 61, 167, 78, 175, 61, 96, 252, 150, 190, 136, 111, 5, 190, 196, 74, 189, 62, 90, 43, 144, 190, 115, 171, 191, 190, 240, 165, 193, 61, 121, 5, 188, 190, 64, 0, 153, 188, 40, 196, 168, 62, 248, 195, 22, 62, 156, 29, 213, 61, 92, 32, 30, 190, 63, 251, 24, 190, 241, 42, 157, 186, 172, 88, 129, 189, 147, 104, 155, 61, 113, 216, 103, 61, 27, 174, 54, 61, 37, 147, 150, 189, 156, 137, 77, 61, 213, 97, 152, 62, 89, 233, 46, 190, 117, 188, 58, 189, 23, 25, 152, 189, 211, 160, 151, 188, 174, 140, 87, 62, 40, 193, 39, 61, 247, 26, 132, 190, 208, 163, 48, 62, 111, 244, 46, 191, 31, 243, 157, 190, 211, 141, 54, 191, 199, 173, 203, 61, 11, 108, 164, 189, 108, 222, 16, 191, 180, 83, 250, 61, 164, 107, 55, 190, 68, 212, 129, 62, 129, 115, 157, 190, 160, 38, 42, 62, 185, 190, 121, 189, 105, 73, 64, 190, 72, 100, 10, 190, 195, 72, 155, 61, 11, 160, 3, 62, 89, 151, 5, 190, 175, 4, 133, 62, 196, 68, 178, 61, 172, 68, 58, 190, 94, 160, 14, 189, 77, 88, 78, 189, 47, 155, 233, 61, 135, 190, 132, 190, 88, 37, 189, 190, 130, 50, 46, 61, 24, 37, 1, 190, 89, 93, 172, 61, 78, 74, 183, 61, 72, 243, 71, 62, 70, 31, 182, 188, 206, 215, 129, 188, 118, 246, 16, 62, 151, 86, 152, 189, 49, 149, 39, 62, 45, 23, 136, 191, 49, 177, 237, 189, 220, 0, 46, 189, 19, 40, 205, 61, 185, 164, 136, 190, 109, 10, 74, 189, 239, 39, 20, 190, 241, 158, 92, 191, 70, 236, 136, 61, 229, 205, 62, 62, 42, 45, 205, 61, 182, 165, 20, 190, 70, 194, 139, 189, 47, 239, 20, 62, 117, 216, 7, 190, 204, 148, 249, 61, 83, 127, 166, 60, 57, 26, 84, 62, 84, 249, 20, 62, 193, 170, 4, 190, 117, 71, 138, 62, 137, 185, 192, 61, 196, 131, 35, 62, 244, 193, 47, 189, 170, 73, 138, 61, 85, 134, 44, 189, 69, 196, 208, 189, 31, 43, 137, 61, 203, 20, 17, 189, 21, 28, 156, 61, 97, 19, 32, 190, 7, 167, 165, 189, 166, 96, 173, 188, 249, 91, 6, 189, 22, 135, 251, 189, 172, 16, 3, 190, 91, 52, 40, 190, 137, 172, 18, 62, 19, 142, 225, 60, 249, 136, 54, 189, 21, 183, 40, 190, 5, 163, 217, 189, 129, 32, 217, 61, 127, 93, 65, 189, 193, 85, 102, 189, 1, 52, 161, 189, 57, 21, 156, 61, 144, 23, 188, 188, 98, 181, 45, 190, 24, 210, 29, 189, 24, 230, 3, 62, 219, 192, 113, 61, 169, 250, 186, 189, 100, 24, 252, 59, 255, 224, 181, 61, 244, 223, 110, 189, 202, 121, 15, 62, 94, 218, 198, 189, 172, 199, 203, 189, 172, 206, 213, 189, 176, 18, 231, 189, 228, 8, 196, 62, 174, 8, 239, 189, 87, 226, 210, 62, 251, 233, 67, 189, 12, 229, 242, 60, 185, 89, 4, 61, 191, 62, 129, 190, 91, 26, 101, 62, 180, 105, 27, 61, 21, 97, 40, 62, 133, 52, 152, 190, 32, 144, 247, 188, 140, 162, 67, 185, 184, 221, 149, 61, 181, 17, 58, 62, 126, 221, 9, 62, 131, 111, 117, 187, 133, 158, 105, 62, 24, 42, 218, 60, 28, 174, 112, 60, 84, 90, 147, 61, 164, 213, 22, 189, 58, 177, 19, 60, 228, 128, 203, 61, 40, 96, 63, 61, 189, 101, 170, 60, 242, 145, 206, 60, 167, 102, 49, 190, 253, 91, 28, 62, 38, 249, 57, 188, 247, 0, 45, 62, 227, 36, 28, 190, 160, 226, 220, 189, 221, 74, 45, 190, 237, 191, 136, 61, 127, 121, 3, 189, 55, 20, 62, 61, 132, 196, 9, 188, 90, 102, 51, 190, 199, 236, 163, 189, 135, 220, 55, 60, 208, 131, 170, 61, 41, 192, 218, 188, 56, 224, 12, 190, 120, 244, 137, 189, 53, 207, 30, 190, 49, 12, 37, 190, 105, 240, 58, 61, 74, 141, 24, 190, 51, 220, 143, 60, 208, 32, 141, 189, 90, 98, 135, 60, 147, 30, 9, 190, 182, 233, 43, 62, 45, 133, 195, 189, 44, 105, 73, 187, 117, 120, 17, 61, 221, 249, 140, 59, 170, 233, 130, 61, 54, 58, 99, 62, 25, 124, 70, 61, 229, 207, 158, 188, 137, 37, 14, 189, 64, 252, 63, 190, 1, 113, 131, 190, 220, 253, 203, 61, 177, 32, 17, 61, 213, 121, 141, 62, 239, 115, 202, 58, 196, 176, 199, 190, 164, 231, 101, 62, 30, 89, 139, 61, 142, 41, 26, 190, 13, 214, 80, 62, 159, 230, 231, 61, 19, 12, 239, 189, 164, 222, 187, 61, 249, 183, 107, 189, 181, 170, 127, 62, 134, 129, 108, 61, 237, 251, 19, 189, 79, 84, 226, 188, 235, 215, 128, 189, 148, 187, 63, 61, 25, 255, 6, 62, 102, 174, 201, 61, 208, 82, 207, 60, 66, 184, 126, 190, 82, 119, 42, 62, 226, 29, 38, 62, 170, 114, 47, 189, 86, 34, 106, 190, 93, 116, 210, 189, 250, 94, 117, 190, 124, 167, 58, 189, 48, 245, 156, 190, 65, 104, 240, 189, 48, 109, 41, 62, 175, 10, 241, 61, 125, 233, 37, 190, 86, 174, 29, 190, 213, 129, 213, 60, 192, 138, 82, 62, 59, 228, 161, 61, 110, 8, 8, 62, 84, 229, 25, 190, 209, 145, 200, 61, 185, 87, 248, 61, 166, 57, 86, 190, 157, 20, 11, 62, 123, 210, 207, 189, 69, 74, 115, 59, 238, 181, 69, 190, 132, 68, 206, 189, 219, 198, 13, 61, 18, 16, 14, 62, 245, 208, 60, 62, 55, 2, 99, 59, 93, 30, 47, 190, 65, 41, 87, 62, 177, 163, 79, 189, 242, 178, 3, 62, 133, 148, 106, 189, 181, 166, 18, 62, 166, 80, 18, 62, 89, 222, 100, 190, 52, 177, 56, 190, 149, 70, 150, 61, 144, 81, 154, 62, 145, 9, 19, 62, 155, 106, 147, 62, 42, 106, 188, 189, 207, 206, 181, 61, 74, 74, 43, 62, 137, 189, 2, 190, 44, 198, 9, 190, 105, 47, 191, 190, 70, 150, 195, 190, 162, 205, 189, 190, 36, 221, 159, 61, 140, 144, 35, 61, 40, 163, 70, 62, 183, 242, 224, 188, 90, 162, 142, 189, 36, 195, 247, 60, 229, 25, 121, 189, 45, 34, 199, 188, 225, 11, 89, 189, 92, 160, 6, 189, 225, 152, 15, 190, 213, 229, 221, 190, 170, 13, 131, 62, 177, 222, 31, 190, 71, 96, 76, 190, 91, 14, 38, 61, 99, 154, 99, 62, 224, 103, 246, 189, 76, 67, 119, 189, 231, 233, 8, 190, 77, 230, 254, 61, 238, 27, 14, 62, 27, 201, 172, 189, 118, 184, 210, 60, 242, 68, 198, 60, 133, 77, 169, 189, 173, 241, 154, 61, 13, 85, 181, 188, 107, 131, 108, 190, 41, 135, 218, 61, 236, 93, 12, 190, 63, 99, 86, 61, 122, 89, 10, 62, 14, 46, 94, 62, 248, 47, 83, 62, 108, 21, 219, 189, 140, 183, 37, 61, 67, 178, 12, 62, 196, 25, 145, 190, 114, 224, 239, 188, 128, 36, 176, 188, 40, 27, 102, 189, 1, 197, 217, 61, 14, 136, 139, 60, 168, 143, 221, 61, 115, 22, 32, 60, 86, 181, 85, 189, 75, 18, 108, 190, 74, 192, 48, 62, 73, 157, 128, 189, 208, 79, 16, 191, 150, 87, 233, 61, 3, 112, 53, 190, 123, 159, 151, 189, 57, 37, 242, 58, 130, 23, 157, 188, 230, 127, 134, 62, 174, 150, 87, 189, 128, 134, 26, 62, 67, 88, 114, 60, 73, 107, 116, 62, 116, 251, 227, 189, 171, 27, 173, 62, 165, 50, 29, 62, 210, 171, 116, 60, 204, 73, 213, 61, 52, 226, 172, 190, 211, 129, 86, 189, 182, 139, 71, 62, 144, 168, 17, 190, 27, 230, 157, 62, 53, 145, 133, 189, 199, 95, 21, 60, 138, 114, 193, 61, 179, 169, 152, 61, 250, 207, 65, 188, 176, 157, 75, 190, 10, 104, 24, 59, 56, 221, 190, 189, 122, 186, 229, 61, 13, 223, 102, 189, 40, 7, 152, 189, 196, 34, 71, 190, 24, 5, 166, 60, 202, 92, 239, 61, 190, 137, 54, 189, 161, 1, 83, 188, 1, 71, 76, 61, 56, 16, 160, 189, 133, 222, 197, 188, 212, 26, 156, 189, 254, 209, 34, 190, 0, 94, 13, 62, 157, 50, 16, 190, 107, 94, 251, 61, 45, 126, 27, 190, 97, 137, 9, 189, 243, 201, 209, 188, 71, 188, 180, 189, 228, 246, 8, 62, 17, 39, 149, 189, 17, 54, 61, 190, 17, 154, 43, 190, 197, 159, 62, 190, 201, 32, 243, 61, 244, 178, 223, 61, 123, 95, 194, 189, 223, 93, 141, 61, 56, 168, 39, 190, 206, 228, 236, 188, 128, 216, 2, 62, 11, 213, 155, 190, 227, 19, 174, 189, 253, 31, 223, 61, 111, 224, 62, 62, 161, 219, 143, 190, 123, 143, 123, 62, 34, 69, 11, 62, 107, 214, 45, 62, 175, 109, 187, 189, 50, 28, 76, 191, 119, 65, 252, 189, 65, 191, 207, 62, 170, 13, 144, 61, 217, 69, 129, 190, 212, 224, 6, 190, 84, 148, 50, 190, 102, 3, 35, 191, 205, 88, 147, 62, 19, 222, 99, 62, 88, 139, 138, 62, 214, 12, 232, 190, 193, 189, 198, 190, 120, 175, 150, 62, 60, 237, 38, 61, 160, 24, 4, 61, 153, 149, 220, 190, 126, 202, 144, 62, 133, 108, 201, 189, 172, 190, 93, 190, 201, 116, 227, 62, 141, 172, 61, 62, 108, 15, 9, 61, 28, 132, 204, 188, 163, 17, 140, 62, 127, 103, 33, 62, 247, 193, 198, 189, 243, 215, 25, 62, 102, 184, 128, 59, 139, 83, 175, 59, 150, 66, 81, 61, 44, 132, 72, 190, 39, 34, 40, 190, 136, 159, 248, 61, 27, 152, 166, 189, 59, 12, 206, 189, 48, 33, 17, 190, 65, 251, 96, 190, 166, 108, 217, 189, 118, 112, 138, 190, 240, 96, 40, 61, 252, 107, 45, 62, 54, 15, 143, 190, 228, 99, 56, 62, 34, 41, 4, 62, 53, 184, 46, 62, 219, 180, 84, 62, 235, 45, 5, 62, 29, 178, 151, 62, 17, 79, 65, 189, 201, 139, 47, 62, 130, 125, 49, 190, 54, 201, 0, 191, 166, 253, 209, 189, 182, 71, 107, 189, 244, 127, 221, 189, 226, 237, 13, 60, 168, 81, 25, 189, 231, 165, 91, 190, 165, 128, 250, 61, 153, 178, 45, 60, 112, 7, 42, 61, 67, 172, 70, 190, 72, 167, 60, 189, 224, 80, 71, 189, 152, 53, 154, 61, 195, 124, 81, 189, 143, 243, 125, 189, 75, 253, 197, 61, 169, 110, 144, 61, 211, 33, 36, 61, 201, 67, 9, 61, 212, 82, 32, 59, 130, 103, 1, 62, 19, 32, 190, 188, 7, 225, 255, 189, 244, 65, 236, 189, 172, 177, 48, 62, 174, 201, 67, 190, 101, 230, 247, 188, 87, 125, 185, 189, 20, 233, 209, 61, 2, 117, 140, 62, 124, 251, 237, 61, 255, 230, 252, 189, 163, 173, 3, 190, 140, 175, 205, 60, 68, 34, 26, 190, 126, 237, 12, 190, 194, 219, 229, 189, 252, 24, 11, 190, 206, 146, 1, 190, 39, 212, 156, 189, 182, 205, 178, 189, 153, 128, 230, 189, 110, 1, 239, 189, 225, 39, 214, 61, 32, 20, 16, 189, 86, 147, 86, 189, 224, 4, 233, 189, 157, 58, 183, 61, 198, 206, 97, 60, 232, 147, 118, 61, 188, 95, 193, 189, 120, 132, 45, 62, 146, 215, 172, 61, 213, 216, 165, 188, 97, 148, 14, 190, 245, 110, 196, 186, 196, 216, 175, 189, 102, 110, 227, 61, 202, 85, 129, 60, 7, 79, 46, 190, 207, 246, 39, 60, 172, 176, 245, 61, 179, 200, 69, 189, 205, 26, 32, 190, 117, 97, 134, 189, 196, 166, 56, 190, 112, 254, 62, 62, 188, 3, 246, 188, 217, 255, 55, 61, 252, 29, 199, 59, 45, 98, 122, 190, 146, 3, 47, 62, 134, 192, 70, 188, 65, 14, 154, 61, 32, 112, 14, 190, 210, 39, 221, 60, 167, 94, 73, 60, 78, 213, 177, 61, 70, 95, 132, 188, 23, 163, 165, 189, 222, 224, 37, 190, 112, 81, 177, 189, 143, 124, 200, 189, 173, 246, 84, 62, 51, 197, 184, 61, 125, 52, 12, 62, 239, 125, 32, 190, 186, 214, 26, 62, 59, 96, 176, 60, 25, 81, 47, 190, 120, 226, 28, 62, 214, 84, 251, 60, 63, 12, 23, 190, 62, 244, 63, 190, 144, 79, 11, 61, 178, 203, 200, 61, 88, 83, 167, 61, 40, 226, 174, 62, 239, 207, 132, 189, 25, 162, 7, 190, 17, 86, 149, 190, 152, 31, 65, 190, 140, 117, 170, 187, 55, 32, 51, 189, 243, 93, 128, 190, 24, 221, 132, 62, 255, 154, 178, 190, 74, 76, 62, 190, 13, 145, 102, 61, 77, 240, 55, 189, 107, 154, 225, 60, 24, 48, 128, 61, 174, 31, 150, 189, 149, 181, 30, 62, 192, 26, 171, 189, 123, 166, 42, 189, 218, 127, 1, 190, 226, 134, 54, 62, 49, 152, 164, 60, 122, 36, 241, 188, 18, 195, 144, 188, 146, 111, 210, 189, 65, 225, 163, 189, 252, 53, 243, 189, 148, 38, 104, 61, 74, 120, 0, 190, 129, 51, 241, 187, 241, 126, 5, 190, 76, 39, 243, 190, 39, 134, 181, 190, 173, 217, 129, 188, 159, 70, 205, 61, 179, 244, 207, 61, 197, 34, 157, 189, 234, 18, 202, 189, 56, 159, 105, 62, 160, 85, 172, 190, 48, 135, 47, 190, 75, 97, 160, 189, 186, 55, 45, 61, 171, 0, 162, 61, 25, 182, 38, 190, 134, 140, 107, 190, 35, 127, 185, 187, 167, 115, 240, 61, 139, 239, 169, 61, 50, 195, 53, 62, 179, 240, 191, 188, 22, 10, 77, 61, 184, 39, 69, 184, 144, 37, 58, 62, 217, 79, 155, 62, 89, 149, 138, 189, 28, 220, 145, 62, 1, 60, 6, 62, 54, 89, 218, 61, 172, 98, 100, 190, 119, 127, 124, 190, 23, 172, 77, 62, 251, 161, 177, 190, 11, 94, 21, 62, 1, 208, 35, 61, 58, 138, 127, 61, 93, 129, 183, 189, 40, 102, 36, 190, 130, 74, 194, 60, 19, 180, 35, 62, 67, 156, 2, 190, 121, 143, 0, 190, 78, 78, 137, 189, 7, 141, 2, 189, 188, 90, 86, 189, 233, 212, 176, 61, 165, 196, 35, 190, 252, 223, 0, 62, 77, 195, 152, 189, 133, 3, 56, 61, 116, 201, 6, 190, 202, 238, 175, 189, 64, 221, 229, 61, 122, 58, 46, 190, 148, 255, 176, 189, 114, 221, 22, 190, 55, 86, 2, 62, 162, 123, 251, 189, 18, 77, 234, 189, 84, 79, 51, 62, 106, 53, 77, 61, 90, 122, 12, 190, 15, 139, 30, 190, 102, 40, 247, 188, 164, 128, 168, 189, 133, 161, 189, 190, 104, 121, 69, 190, 37, 96, 123, 62, 49, 183, 240, 61, 71, 181, 181, 189, 159, 246, 51, 61, 47, 86, 129, 59, 23, 101, 74, 62, 30, 11, 215, 190, 144, 214, 218, 188, 161, 142, 148, 190, 188, 247, 238, 61, 36, 32, 139, 61, 191, 165, 37, 191, 150, 54, 23, 190, 209, 222, 129, 190, 229, 213, 66, 62, 81, 36, 148, 190, 88, 235, 181, 61, 56, 254, 184, 61, 141, 134, 29, 60, 193, 130, 143, 61, 23, 100, 202, 61, 53, 125, 101, 62, 26, 153, 8, 190, 85, 11, 70, 62, 229, 106, 197, 186, 6, 14, 128, 188, 242, 81, 130, 190, 91, 59, 67, 189, 115, 206, 97, 62, 150, 15, 177, 190, 22, 7, 72, 190, 241, 201, 124, 190, 233, 49, 250, 61, 127, 149, 55, 62, 192, 175, 144, 61, 59, 229, 63, 60, 119, 29, 248, 189, 229, 19, 107, 62, 240, 54, 141, 190, 200, 130, 200, 59, 208, 70, 227, 190, 233, 27, 110, 62, 84, 146, 48, 61, 18, 71, 225, 190, 80, 254, 138, 61, 6, 115, 44, 190, 253, 171, 86, 189, 173, 136, 92, 190, 244, 50, 160, 61, 207, 142, 188, 189, 32, 64, 52, 190, 195, 167, 2, 190, 82, 99, 155, 62, 132, 116, 19, 62, 184, 254, 20, 190, 169, 104, 85, 62, 220, 169, 202, 189, 101, 85, 9, 62, 51, 149, 162, 190, 208, 75, 62, 190, 23, 163, 29, 62, 163, 71, 2, 191, 27, 127, 31, 190, 215, 246, 246, 189, 63, 70, 30, 190, 57, 44, 3, 62, 243, 132, 35, 190, 250, 93, 66, 189, 128, 27, 194, 189, 195, 217, 32, 62, 202, 190, 64, 61, 201, 91, 199, 59, 158, 251, 149, 61, 96, 187, 31, 62, 132, 211, 182, 61, 90, 140, 190, 189, 5, 10, 174, 61, 198, 11, 249, 189, 116, 167, 41, 190, 37, 41, 173, 189, 136, 229, 93, 189, 12, 246, 208, 189, 164, 255, 253, 189, 126, 117, 51, 190, 171, 185, 179, 188, 141, 118, 126, 60, 138, 139, 169, 189, 67, 7, 22, 190, 204, 196, 148, 189, 30, 15, 122, 189, 84, 236, 55, 189, 140, 122, 25, 62, 155, 134, 13, 188, 33, 215, 5, 62, 194, 102, 214, 189, 227, 247, 94, 190, 129, 209, 101, 61, 179, 230, 120, 61, 6, 199, 239, 61, 12, 195, 169, 61, 124, 171, 58, 189, 199, 66, 32, 62, 47, 178, 137, 190, 213, 5, 172, 190, 206, 97, 219, 190, 155, 179, 189, 61, 124, 162, 136, 189, 119, 200, 2, 191, 18, 114, 13, 189, 132, 58, 177, 61, 118, 172, 246, 60, 69, 104, 35, 189, 240, 148, 127, 62, 189, 253, 95, 189, 53, 162, 188, 60, 8, 90, 121, 189, 97, 25, 37, 62, 96, 34, 94, 62, 52, 53, 72, 190, 9, 224, 33, 63, 80, 174, 40, 62, 56, 53, 205, 60, 187, 135, 134, 190, 111, 151, 78, 190, 124, 251, 140, 62, 166, 75, 6, 191};
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
                alignas(float) const unsigned char memory[] = {244, 144, 220, 61, 213, 133, 65, 189, 97, 253, 73, 61, 181, 112, 78, 62, 153, 165, 88, 61, 42, 210, 11, 62, 212, 185, 64, 62, 72, 211, 241, 61, 176, 239, 252, 60, 179, 17, 79, 62, 159, 95, 141, 62, 177, 80, 191, 189, 206, 86, 163, 61, 62, 27, 30, 61, 46, 119, 92, 190, 142, 221, 114, 189, 53, 86, 142, 62, 150, 147, 100, 62, 202, 167, 69, 60, 69, 234, 63, 190, 174, 252, 148, 62, 140, 25, 112, 61, 199, 39, 50, 190, 8, 52, 92, 61, 186, 157, 151, 62, 105, 154, 245, 188, 135, 132, 79, 61, 222, 133, 69, 61, 68, 75, 230, 61, 161, 145, 99, 62, 201, 195, 51, 190, 169, 140, 25, 62};
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
                alignas(float) const unsigned char memory[] = {190, 136, 14, 191, 111, 4, 195, 190, 15, 104, 138, 62, 6, 182, 168, 189, 24, 189, 4, 190, 134, 19, 183, 61, 227, 80, 157, 62, 207, 109, 138, 188, 158, 197, 152, 190, 119, 75, 17, 63, 157, 118, 2, 191, 163, 103, 55, 189, 181, 58, 190, 62, 197, 57, 252, 61, 129, 83, 113, 190, 49, 125, 40, 62, 76, 170, 168, 62, 191, 178, 173, 189, 242, 162, 141, 190, 206, 169, 74, 188, 155, 145, 29, 191, 3, 121, 179, 62, 255, 73, 42, 190, 141, 111, 174, 61, 96, 124, 177, 188, 166, 145, 178, 62, 18, 50, 73, 62, 188, 219, 33, 190, 114, 127, 158, 62, 109, 153, 184, 62, 247, 55, 181, 61, 102, 38, 218, 62, 21, 140, 241, 61, 153, 153, 138, 186, 141, 218, 59, 61, 190, 242, 254, 189, 133, 121, 140, 190, 63, 40, 68, 59, 107, 238, 143, 61, 140, 114, 129, 61, 48, 223, 113, 188, 241, 148, 247, 61, 115, 151, 180, 190, 253, 43, 117, 189, 119, 26, 55, 61, 78, 245, 240, 60, 189, 161, 116, 61, 247, 10, 189, 62, 253, 154, 145, 190, 176, 42, 14, 190, 59, 245, 167, 62, 247, 183, 125, 61, 225, 27, 141, 62, 8, 212, 88, 62, 226, 100, 143, 189, 221, 172, 83, 61, 173, 152, 14, 190, 47, 7, 60, 62, 75, 54, 47, 61, 95, 217, 40, 61, 107, 82, 246, 190, 17, 135, 8, 190, 231, 127, 225, 189, 200, 13, 39, 62};
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
                alignas(float) const unsigned char memory[] = {16, 215, 16, 62, 254, 15, 46, 190};
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
    alignas(float) const unsigned char memory[] = {52, 129, 52, 189, 66, 204, 65, 63, 60, 137, 222, 190};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {53, 124, 229, 191, 254, 193, 7, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0018/steps/000000000004000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}