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
                alignas(float) const unsigned char memory[] = {207, 21, 94, 63, 243, 98, 207, 190, 246, 221, 186, 190, 46, 58, 140, 190, 227, 77, 10, 62, 166, 31, 70, 188, 72, 77, 170, 60, 74, 168, 65, 63, 165, 104, 22, 63, 142, 168, 252, 62, 212, 221, 58, 63, 22, 109, 180, 62, 228, 212, 128, 190, 231, 31, 222, 62, 222, 81, 5, 63, 168, 128, 133, 62, 109, 7, 144, 191, 39, 113, 129, 190, 163, 49, 45, 63, 67, 58, 161, 191, 209, 103, 162, 190, 151, 69, 77, 62, 240, 0, 162, 191, 43, 64, 159, 59, 116, 191, 102, 189, 32, 130, 62, 191, 18, 108, 84, 62, 18, 142, 158, 190, 217, 105, 124, 191, 103, 151, 137, 191, 232, 96, 230, 62, 229, 238, 15, 63, 41, 152, 165, 190, 184, 107, 24, 63, 28, 5, 208, 63, 193, 60, 184, 62, 236, 52, 112, 62, 31, 60, 121, 191, 140, 133, 193, 190, 60, 170, 28, 191, 249, 61, 160, 63, 213, 160, 147, 62, 44, 19, 113, 189, 221, 107, 191, 191, 118, 0, 89, 61, 251, 14, 207, 190, 226, 242, 152, 189, 46, 171, 205, 189, 94, 247, 127, 62, 120, 124, 230, 63, 123, 213, 11, 63, 7, 81, 165, 62, 133, 139, 155, 61, 140, 31, 234, 190, 5, 46, 34, 191, 213, 178, 247, 62, 174, 185, 229, 190, 79, 127, 21, 63, 239, 29, 100, 190, 54, 165, 31, 190, 157, 34, 6, 191, 106, 138, 128, 190, 166, 225, 101, 62, 35, 123, 19, 63, 56, 25, 151, 61, 81, 193, 45, 63, 14, 54, 218, 62, 148, 83, 45, 63, 142, 204, 62, 61, 121, 180, 216, 189, 216, 1, 168, 190, 80, 220, 109, 189, 199, 101, 17, 190, 191, 60, 162, 63, 243, 112, 88, 61, 181, 145, 78, 190, 20, 163, 138, 63, 96, 75, 244, 62, 26, 167, 212, 189, 201, 33, 38, 62, 247, 124, 2, 191, 103, 234, 18, 191, 45, 38, 24, 191, 144, 40, 26, 190, 236, 214, 159, 61, 25, 166, 84, 63, 39, 191, 213, 190, 45, 165, 138, 190, 179, 19, 192, 62, 153, 122, 136, 190, 150, 224, 54, 191, 104, 24, 12, 190, 160, 12, 140, 62, 180, 26, 193, 62, 96, 1, 149, 190, 100, 222, 125, 62};
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
                alignas(float) const unsigned char memory[] = {248, 108, 84, 191, 170, 208, 199, 62, 123, 61, 145, 189, 3, 234, 15, 191, 50, 71, 237, 190, 180, 211, 19, 61, 206, 137, 85, 190, 9, 168, 218, 60, 28, 187, 165, 62, 114, 43, 236, 60, 120, 206, 137, 62, 61, 28, 113, 188, 250, 48, 251, 62, 87, 248, 19, 62, 185, 17, 119, 62, 238, 52, 23, 63, 186, 249, 39, 62, 1, 225, 81, 62, 174, 255, 43, 191, 173, 18, 200, 190, 118, 105, 213, 190, 240, 240, 99, 62, 110, 96, 61, 63, 204, 88, 139, 62, 149, 240, 209, 189, 93, 211, 31, 62, 111, 128, 98, 190, 152, 76, 17, 63, 79, 178, 66, 190, 48, 90, 211, 62, 180, 112, 71, 191, 237, 15, 138, 190};
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
                alignas(float) const unsigned char memory[] = {107, 248, 8, 191, 182, 224, 85, 62, 203, 24, 214, 191, 185, 56, 229, 188, 171, 94, 63, 191, 80, 69, 36, 190, 244, 111, 170, 190, 203, 223, 9, 191, 138, 39, 247, 62, 106, 57, 66, 62, 25, 229, 241, 189, 226, 48, 123, 63, 232, 80, 182, 61, 214, 60, 200, 190, 86, 210, 174, 62, 220, 253, 134, 62, 106, 172, 144, 191, 250, 118, 152, 190, 232, 225, 199, 189, 165, 81, 130, 191, 166, 5, 192, 62, 56, 166, 50, 190, 108, 59, 252, 59, 126, 52, 175, 61, 71, 160, 13, 189, 88, 2, 29, 190, 223, 13, 166, 62, 40, 202, 66, 62, 192, 58, 183, 190, 183, 19, 125, 62, 160, 79, 154, 190, 26, 1, 5, 62, 207, 132, 157, 189, 223, 142, 74, 190, 180, 22, 216, 189, 211, 20, 7, 62, 227, 12, 4, 61, 196, 61, 180, 60, 136, 157, 183, 188, 83, 123, 182, 189, 217, 11, 172, 189, 133, 82, 175, 61, 64, 52, 91, 190, 121, 134, 173, 61, 153, 11, 164, 61, 84, 138, 74, 190, 114, 255, 89, 61, 159, 33, 150, 189, 224, 60, 66, 59, 67, 252, 49, 190, 16, 163, 249, 61, 225, 19, 44, 62, 242, 55, 21, 62, 118, 53, 5, 190, 56, 107, 66, 190, 164, 95, 224, 189, 157, 227, 222, 188, 189, 43, 8, 62, 254, 49, 240, 59, 148, 241, 139, 188, 41, 228, 228, 189, 163, 7, 114, 189, 177, 69, 47, 60, 99, 146, 17, 62, 136, 75, 44, 191, 124, 67, 43, 60, 141, 97, 47, 60, 39, 142, 141, 62, 206, 84, 150, 190, 31, 234, 226, 190, 133, 117, 6, 191, 237, 203, 51, 190, 242, 123, 162, 59, 237, 93, 177, 60, 204, 7, 193, 61, 67, 19, 26, 63, 94, 231, 193, 61, 144, 150, 160, 190, 110, 128, 29, 189, 72, 10, 217, 189, 12, 193, 87, 62, 230, 1, 25, 190, 77, 136, 14, 190, 252, 218, 254, 190, 246, 51, 237, 61, 76, 99, 165, 62, 240, 73, 134, 62, 10, 201, 52, 190, 130, 148, 66, 62, 176, 58, 86, 60, 42, 83, 195, 62, 10, 124, 240, 190, 158, 151, 34, 190, 192, 247, 206, 62, 115, 32, 139, 190, 208, 160, 36, 62, 117, 37, 35, 62, 156, 120, 154, 189, 113, 101, 209, 61, 10, 8, 191, 190, 33, 194, 92, 62, 246, 100, 172, 60, 68, 174, 93, 62, 147, 45, 187, 62, 117, 162, 75, 62, 242, 118, 19, 61, 44, 44, 93, 187, 79, 45, 101, 191, 197, 249, 30, 62, 41, 125, 189, 190, 179, 54, 241, 61, 61, 176, 21, 62, 213, 70, 63, 191, 27, 41, 102, 61, 1, 89, 131, 61, 186, 106, 66, 63, 162, 160, 144, 62, 130, 67, 130, 60, 217, 86, 129, 60, 128, 21, 137, 189, 5, 248, 74, 190, 8, 85, 163, 190, 31, 120, 3, 190, 218, 18, 80, 59, 144, 206, 148, 61, 98, 181, 129, 189, 76, 164, 140, 61, 55, 208, 49, 190, 199, 8, 246, 61, 208, 189, 3, 190, 33, 87, 153, 62, 154, 31, 21, 190, 237, 226, 119, 62, 226, 220, 205, 61, 162, 199, 99, 62, 94, 168, 40, 62, 6, 237, 45, 190, 124, 26, 164, 190, 58, 158, 177, 61, 218, 121, 248, 190, 73, 106, 19, 62, 133, 69, 124, 62, 144, 46, 220, 190, 240, 37, 205, 187, 127, 28, 12, 62, 123, 132, 153, 62, 247, 7, 40, 191, 30, 206, 65, 190, 47, 171, 224, 190, 247, 115, 12, 190, 17, 173, 211, 62, 45, 30, 46, 61, 155, 71, 39, 188, 214, 167, 248, 61, 227, 60, 127, 190, 48, 169, 140, 190, 224, 39, 98, 62, 115, 181, 173, 188, 219, 162, 2, 62, 157, 131, 14, 62, 35, 239, 189, 61, 40, 23, 212, 190, 0, 56, 46, 57, 204, 170, 145, 62, 106, 118, 33, 61, 120, 74, 106, 189, 129, 155, 136, 189, 165, 235, 55, 190, 196, 33, 244, 189, 11, 61, 137, 61, 244, 76, 12, 61, 134, 40, 156, 62, 106, 241, 235, 189, 53, 148, 248, 189, 122, 151, 17, 189, 100, 17, 215, 190, 86, 228, 0, 62, 111, 229, 151, 61, 165, 120, 11, 190, 3, 122, 240, 189, 238, 74, 149, 61, 184, 194, 78, 62, 174, 220, 172, 60, 184, 99, 214, 189, 255, 131, 174, 189, 136, 59, 78, 188, 242, 136, 179, 61, 118, 233, 25, 191, 15, 211, 220, 189, 121, 232, 165, 189, 110, 21, 97, 189, 184, 97, 155, 62, 163, 85, 152, 188, 162, 129, 27, 187, 118, 210, 173, 61, 88, 115, 251, 61, 135, 198, 26, 190, 37, 61, 174, 189, 119, 74, 8, 62, 149, 113, 4, 190, 30, 61, 51, 190, 253, 75, 59, 190, 147, 147, 239, 61, 55, 220, 28, 190, 150, 146, 149, 61, 212, 177, 31, 189, 250, 18, 131, 189, 55, 22, 133, 187, 182, 118, 50, 190, 89, 251, 16, 62, 31, 247, 133, 189, 196, 1, 25, 190, 55, 27, 101, 189, 42, 105, 58, 187, 181, 2, 70, 190, 177, 88, 15, 61, 228, 47, 26, 190, 167, 250, 244, 188, 16, 249, 35, 187, 57, 184, 188, 61, 250, 254, 172, 61, 209, 102, 210, 189, 82, 47, 204, 61, 142, 19, 33, 62, 232, 217, 46, 189, 233, 242, 6, 188, 218, 43, 155, 189, 210, 107, 44, 191, 230, 142, 194, 188, 203, 141, 50, 190, 3, 121, 78, 62, 100, 58, 131, 62, 196, 40, 133, 62, 233, 99, 76, 190, 100, 162, 21, 62, 83, 168, 138, 191, 27, 135, 101, 62, 114, 232, 91, 190, 151, 69, 75, 62, 115, 194, 30, 62, 52, 178, 22, 190, 243, 38, 82, 62, 189, 158, 159, 189, 149, 68, 7, 62, 58, 197, 118, 62, 253, 210, 80, 61, 214, 45, 154, 61, 38, 89, 210, 60, 58, 17, 5, 62, 124, 217, 90, 190, 76, 252, 198, 189, 50, 233, 240, 61, 198, 186, 252, 61, 6, 215, 49, 62, 21, 233, 6, 63, 148, 162, 79, 60, 59, 150, 143, 191, 161, 27, 8, 61, 206, 119, 74, 189, 5, 53, 182, 61, 36, 28, 182, 61, 14, 34, 31, 191, 45, 75, 33, 190, 165, 41, 235, 189, 41, 224, 65, 62, 40, 142, 27, 191, 225, 70, 146, 62, 168, 82, 151, 62, 127, 202, 146, 60, 104, 171, 47, 62, 163, 94, 249, 189, 251, 95, 244, 186, 139, 39, 232, 60, 38, 133, 174, 190, 98, 31, 251, 190, 73, 41, 132, 62, 222, 249, 24, 188, 174, 160, 165, 61, 91, 82, 143, 62, 68, 135, 54, 62, 114, 188, 103, 61, 50, 157, 11, 62, 73, 196, 50, 190, 175, 110, 48, 190, 11, 175, 253, 190, 32, 250, 120, 190, 211, 81, 14, 190, 126, 245, 44, 62, 178, 161, 48, 62, 29, 237, 162, 61, 40, 134, 68, 62, 200, 191, 197, 190, 45, 222, 41, 62, 3, 109, 44, 63, 74, 67, 191, 62, 222, 8, 225, 62, 56, 192, 135, 62, 35, 61, 122, 191, 226, 80, 15, 191, 62, 114, 94, 191, 64, 214, 146, 190, 96, 151, 185, 62, 218, 61, 128, 190, 221, 237, 11, 60, 197, 213, 184, 61, 79, 48, 63, 62, 60, 230, 26, 190, 160, 238, 204, 189, 218, 183, 151, 190, 193, 225, 169, 190, 239, 116, 134, 62, 220, 15, 1, 62, 234, 55, 71, 63, 9, 162, 217, 61, 232, 68, 236, 190, 128, 199, 135, 189, 117, 100, 180, 190, 252, 51, 1, 191, 180, 5, 112, 62, 174, 201, 27, 190, 43, 232, 1, 190, 175, 247, 122, 62, 79, 7, 178, 61, 138, 21, 66, 61, 172, 104, 196, 189, 3, 30, 53, 190, 163, 45, 36, 189, 5, 86, 143, 61, 64, 244, 191, 59, 180, 88, 21, 190, 177, 10, 196, 61, 171, 99, 163, 189, 182, 220, 30, 190, 169, 130, 235, 189, 31, 172, 166, 62, 200, 57, 219, 61, 86, 151, 37, 62, 253, 123, 229, 60, 80, 223, 167, 61, 251, 5, 135, 190, 233, 214, 153, 189, 178, 21, 229, 61, 164, 212, 151, 62, 139, 244, 103, 189, 78, 170, 209, 62, 96, 233, 250, 188, 103, 252, 111, 61, 58, 205, 32, 190, 165, 236, 136, 60, 124, 99, 125, 62, 82, 215, 90, 190, 28, 108, 65, 61, 159, 204, 67, 189, 64, 42, 155, 61, 41, 204, 181, 61, 165, 36, 129, 189, 254, 155, 13, 62, 189, 82, 156, 61, 5, 242, 59, 190, 45, 72, 236, 190, 164, 72, 27, 60, 78, 85, 36, 191, 253, 22, 230, 190, 99, 218, 64, 188, 153, 12, 212, 191, 77, 177, 151, 62, 117, 36, 33, 191, 116, 227, 42, 62, 246, 52, 83, 62, 200, 63, 216, 188, 2, 37, 31, 191, 123, 82, 154, 188, 95, 214, 164, 190, 11, 236, 35, 62, 101, 39, 34, 62, 169, 248, 184, 189, 228, 103, 2, 62, 221, 214, 151, 62, 156, 34, 0, 191, 77, 46, 37, 61, 100, 144, 1, 191, 83, 29, 245, 61, 204, 204, 39, 62, 252, 210, 184, 61, 71, 233, 200, 190, 173, 166, 20, 189, 51, 181, 23, 191, 164, 129, 98, 190, 119, 220, 203, 190, 42, 87, 139, 190, 131, 40, 104, 190, 122, 248, 57, 191, 106, 247, 96, 61, 78, 224, 68, 62, 0, 205, 81, 62, 184, 148, 47, 63, 43, 216, 63, 61, 195, 251, 145, 190, 6, 184, 197, 62, 38, 59, 67, 62, 220, 126, 144, 190, 222, 16, 160, 190, 129, 37, 38, 190, 231, 64, 39, 191, 37, 98, 55, 63, 45, 26, 136, 62, 80, 43, 61, 189, 236, 245, 255, 61, 14, 115, 184, 189, 210, 81, 193, 190, 34, 25, 146, 62, 203, 72, 176, 61, 61, 53, 194, 190, 150, 6, 72, 62, 222, 102, 207, 61, 66, 173, 63, 62, 202, 125, 33, 190, 135, 176, 36, 62, 213, 209, 18, 62, 175, 220, 207, 189, 16, 71, 144, 190, 40, 171, 199, 190, 118, 179, 166, 190, 35, 44, 20, 190, 50, 8, 15, 191, 191, 152, 21, 62, 208, 174, 82, 62, 104, 159, 85, 190, 40, 30, 135, 61, 155, 187, 230, 62, 112, 254, 143, 189, 144, 28, 19, 189, 149, 19, 137, 62, 180, 167, 46, 190, 244, 90, 128, 190, 212, 201, 130, 63, 156, 201, 50, 191, 119, 133, 199, 190, 156, 14, 0, 63, 155, 85, 208, 189, 160, 107, 126, 62, 33, 157, 128, 190, 217, 42, 24, 62, 63, 116, 244, 189, 161, 67, 19, 62, 228, 220, 26, 62, 161, 226, 73, 189, 32, 19, 232, 190, 64, 195, 19, 63, 140, 180, 188, 189, 73, 126, 4, 62, 215, 140, 30, 191, 163, 32, 232, 60, 45, 159, 225, 62, 137, 6, 162, 62, 210, 151, 192, 62, 211, 86, 145, 62, 73, 182, 72, 191, 48, 232, 197, 189, 182, 20, 50, 191, 79, 127, 180, 189, 160, 17, 220, 61, 155, 155, 19, 189, 228, 65, 34, 190, 168, 171, 148, 190, 200, 149, 87, 61, 199, 255, 4, 60, 19, 33, 156, 189, 177, 56, 185, 61, 38, 107, 92, 190, 129, 219, 63, 62, 253, 84, 198, 61, 207, 106, 243, 189, 60, 146, 34, 189, 177, 11, 61, 191, 51, 235, 153, 187, 1, 203, 7, 189, 247, 241, 218, 190, 160, 199, 239, 62, 26, 164, 46, 61, 169, 16, 86, 190, 154, 82, 0, 62, 232, 253, 7, 191, 88, 114, 159, 190, 128, 179, 246, 190, 49, 223, 179, 189, 50, 99, 81, 190, 73, 142, 154, 190, 182, 234, 90, 62, 220, 47, 213, 61, 77, 68, 212, 61, 111, 12, 20, 63, 37, 200, 41, 189, 226, 14, 22, 189, 183, 37, 18, 62, 50, 239, 125, 62, 186, 248, 119, 61, 21, 100, 149, 190, 135, 52, 130, 189, 174, 79, 52, 191, 255, 247, 38, 63, 159, 61, 86, 62, 228, 47, 161, 61, 252, 234, 79, 60, 199, 116, 245, 61, 142, 230, 141, 189, 75, 2, 72, 189, 27, 164, 161, 62, 222, 203, 217, 189, 49, 251, 115, 62, 129, 9, 215, 189, 15, 43, 115, 190, 65, 56, 141, 190, 200, 27, 170, 61, 101, 44, 4, 191, 155, 18, 7, 191, 59, 233, 148, 190, 59, 77, 148, 190, 216, 124, 246, 187, 170, 71, 231, 59, 92, 226, 2, 62, 188, 126, 181, 60, 103, 65, 64, 62, 213, 238, 160, 189, 65, 164, 23, 62, 115, 231, 142, 190, 65, 86, 34, 62, 242, 238, 163, 61, 106, 93, 6, 190, 41, 58, 174, 61, 149, 204, 172, 61, 89, 227, 190, 190, 178, 240, 83, 189, 45, 108, 245, 62, 210, 50, 141, 62, 143, 125, 42, 62, 103, 129, 67, 61, 233, 115, 165, 190, 145, 106, 62, 62, 249, 238, 69, 62, 198, 47, 109, 190, 129, 154, 42, 189, 82, 86, 212, 190, 210, 72, 17, 63, 71, 124, 17, 190, 154, 12, 146, 62, 71, 84, 75, 62, 48, 76, 86, 190, 140, 102, 155, 189, 229, 63, 18, 61, 139, 185, 44, 61, 108, 207, 16, 61, 58, 53, 0, 189, 167, 253, 92, 190, 152, 121, 152, 62, 225, 96, 197, 190, 150, 95, 204, 61, 3, 4, 148, 188, 154, 8, 56, 61, 94, 65, 128, 62, 140, 93, 177, 61, 196, 191, 176, 61, 5, 55, 237, 189, 233, 192, 102, 60, 98, 3, 150, 189, 38, 158, 43, 62, 211, 146, 195, 62, 52, 142, 197, 61, 37, 195, 51, 62, 95, 95, 166, 189, 87, 219, 135, 189, 162, 62, 237, 189, 213, 28, 178, 60, 114, 40, 25, 62, 46, 72, 215, 61, 103, 231, 157, 60, 89, 196, 167, 61, 137, 74, 2, 191, 97, 97, 205, 61, 97, 72, 115, 62, 245, 80, 151, 189, 251, 56, 41, 62, 221, 104, 138, 62, 204, 47, 156, 62, 182, 119, 217, 189, 88, 168, 121, 62, 136, 181, 174, 190, 67, 73, 118, 62, 237, 167, 17, 61, 100, 48, 132, 190, 51, 226, 172, 62, 174, 16, 245, 190, 112, 90, 33, 188, 231, 48, 140, 189, 245, 247, 174, 190, 166, 252, 1, 190, 58, 4, 9, 190, 110, 224, 66, 62, 205, 153, 4, 190, 254, 114, 136, 61, 49, 217, 33, 190, 239, 93, 141, 61, 168, 125, 158, 189, 105, 78, 87, 190, 102, 251, 95, 190, 78, 18, 2, 191, 99, 172, 194, 189, 250, 193, 117, 62, 45, 116, 12, 190, 247, 184, 143, 188, 148, 157, 231, 189, 225, 251, 173, 61, 100, 166, 12, 188, 3, 137, 65, 190, 58, 49, 68, 189, 75, 84, 148, 189, 92, 190, 148, 62, 188, 133, 34, 62, 11, 176, 9, 61, 27, 190, 237, 61, 231, 105, 83, 62, 150, 34, 30, 188, 150, 106, 153, 62, 105, 225, 141, 187, 202, 194, 12, 189, 139, 35, 67, 190, 105, 159, 38, 189, 98, 68, 204, 190, 186, 200, 189, 189, 64, 2, 28, 60, 118, 235, 2, 190, 114, 166, 44, 62, 71, 9, 125, 62, 111, 238, 43, 61, 17, 127, 40, 62, 49, 172, 11, 61, 99, 248, 122, 190, 20, 181, 199, 188, 175, 139, 44, 190, 55, 172, 133, 187, 198, 244, 196, 190, 142, 22, 68, 190, 4, 224, 56, 61, 238, 192, 78, 62, 109, 218, 5, 61, 95, 111, 10, 191, 104, 254, 14, 190, 141, 186, 34, 191, 32, 127, 162, 61, 177, 146, 167, 190, 163, 192, 103, 62, 11, 25, 186, 62, 195, 250, 150, 61, 166, 37, 17, 190, 213, 75, 176, 190, 213, 155, 23, 190, 195, 67, 128, 61, 116, 0, 136, 189, 159, 121, 101, 57, 74, 103, 253, 189, 81, 13, 163, 188, 89, 120, 34, 62, 72, 140, 58, 62, 64, 4, 13, 190, 89, 182, 172, 190, 236, 156, 40, 61, 210, 83, 233, 190, 58, 7, 2, 191, 217, 223, 51, 61, 20, 43, 109, 58, 210, 243, 104, 189, 75, 233, 137, 62, 103, 175, 128, 190, 187, 237, 30, 188, 213, 180, 234, 60, 148, 157, 84, 62, 193, 91, 103, 190, 21, 38, 222, 190, 20, 39, 2, 191, 200, 37, 138, 60, 28, 224, 163, 61, 188, 144, 168, 189, 164, 208, 134, 62, 94, 222, 3, 63, 31, 82, 39, 187, 43, 255, 148, 190, 222, 255, 25, 189, 0, 207, 188, 190, 197, 126, 150, 61, 193, 70, 238, 189, 242, 179, 0, 189, 38, 140, 117, 190, 212, 22, 162, 188, 163, 245, 69, 62, 82, 32, 31, 62, 114, 174, 214, 189, 156, 2, 36, 62, 235, 209, 0, 60, 160, 2, 63, 62, 174, 217, 26, 191, 123, 78, 117, 61, 49, 51, 106, 62, 133, 224, 35, 190, 45, 155, 204, 62, 95, 45, 100, 189, 87, 112, 146, 61, 54, 49, 71, 61, 78, 244, 64, 60, 18, 12, 178, 61, 31, 65, 105, 61, 198, 192, 217, 61, 40, 106, 24, 61, 236, 162, 194, 61, 9, 153, 85, 191, 234, 130, 43, 190, 156, 77, 138, 190, 189, 110, 43, 190, 147, 204, 86, 62, 167, 161, 88, 189, 193, 164, 160, 189, 97, 111, 17, 189, 59, 136, 64, 189, 159, 177, 151, 190, 123, 182, 197, 61, 248, 177, 140, 190, 254, 31, 204, 61, 5, 174, 155, 61, 166, 244, 157, 61, 15, 55, 105, 60, 218, 58, 174, 59, 38, 96, 155, 190, 82, 229, 67, 189, 32, 48, 254, 190, 25, 255, 163, 190, 45, 196, 124, 62, 212, 19, 161, 59, 113, 184, 100, 189, 202, 186, 47, 190, 32, 103, 162, 61, 204, 91, 11, 190, 162, 151, 15, 190, 117, 15, 161, 189, 31, 74, 42, 190, 207, 171, 12, 190, 227, 81, 19, 190, 8, 137, 209, 61, 29, 179, 252, 189, 138, 103, 28, 62, 244, 8, 156, 189, 53, 118, 127, 61, 143, 255, 58, 61, 242, 240, 7, 61, 138, 15, 214, 189, 122, 86, 110, 189, 35, 176, 19, 189, 176, 237, 93, 188, 177, 231, 246, 60, 162, 202, 47, 61, 28, 13, 31, 190, 127, 90, 6, 190, 78, 34, 216, 189, 120, 170, 129, 61, 40, 68, 209, 61, 140, 203, 18, 62, 47, 128, 216, 189, 7, 218, 238, 189, 246, 209, 63, 189, 218, 199, 45, 62, 116, 180, 66, 190, 251, 238, 5, 190, 110, 99, 155, 61, 67, 97, 134, 189, 231, 103, 124, 189, 101, 145, 32, 190, 126, 42, 127, 61, 117, 123, 251, 189, 193, 72, 235, 189, 159, 49, 72, 60, 127, 219, 236, 58, 77, 107, 104, 61, 255, 3, 7, 62, 76, 165, 169, 189, 172, 153, 146, 60, 90, 114, 22, 190, 100, 76, 14, 190, 117, 199, 121, 58, 186, 4, 168, 61, 234, 182, 197, 189, 74, 241, 196, 189, 83, 197, 255, 189, 206, 37, 47, 61, 227, 156, 219, 189, 134, 67, 200, 189, 106, 138, 50, 62, 221, 45, 16, 62, 186, 20, 202, 189, 48, 181, 184, 188, 181, 68, 42, 190, 172, 29, 19, 190, 62, 9, 19, 62, 178, 144, 82, 188, 248, 40, 160, 60, 140, 104, 14, 62, 166, 223, 159, 60, 174, 120, 194, 189, 14, 103, 8, 59, 199, 37, 170, 188, 50, 40, 253, 189, 18, 128, 131, 189, 49, 1, 241, 189, 177, 78, 25, 189, 9, 251, 184, 189, 251, 237, 218, 61, 28, 96, 211, 189, 133, 181, 3, 190, 120, 205, 1, 190, 179, 234, 81, 61, 201, 196, 183, 61, 40, 218, 28, 190, 39, 61, 23, 62, 10, 168, 229, 186, 178, 128, 211, 189, 166, 138, 230, 189, 140, 172, 174, 189, 139, 95, 40, 190, 247, 123, 26, 190, 21, 173, 249, 61, 78, 228, 10, 62, 253, 190, 140, 189, 19, 43, 167, 60, 2, 223, 176, 60, 99, 136, 4, 62, 244, 28, 63, 190, 101, 70, 188, 189, 75, 12, 227, 189, 168, 118, 114, 60, 75, 183, 236, 189, 234, 132, 145, 188, 158, 172, 241, 59, 177, 229, 252, 60, 39, 148, 140, 61, 194, 106, 12, 62, 211, 255, 21, 190, 108, 108, 240, 189, 217, 219, 102, 59, 251, 184, 125, 189, 74, 239, 241, 188, 185, 57, 225, 189, 178, 96, 233, 60, 97, 102, 65, 61, 39, 173, 246, 189, 99, 10, 166, 61, 180, 153, 228, 189, 168, 25, 193, 59, 0, 162, 122, 61, 17, 0, 50, 190, 61, 254, 51, 189, 75, 206, 192, 189, 194, 104, 184, 59, 61, 57, 238, 189, 247, 165, 178, 189, 5, 217, 85, 190, 251, 221, 225, 188, 134, 190, 218, 61, 2, 18, 251, 190, 128, 185, 38, 62, 141, 246, 17, 190, 74, 188, 186, 189, 6, 16, 223, 190, 236, 174, 122, 190, 69, 155, 207, 190, 44, 231, 167, 190, 6, 254, 234, 189, 40, 223, 225, 61, 105, 114, 167, 62, 185, 161, 15, 63, 81, 19, 154, 60, 80, 89, 15, 62, 136, 59, 76, 62, 190, 59, 99, 62, 231, 158, 164, 187, 0, 15, 37, 190, 98, 187, 55, 59, 98, 101, 67, 191, 26, 165, 92, 62, 22, 191, 40, 62, 17, 191, 35, 62, 98, 170, 233, 59, 9, 236, 119, 61, 50, 130, 223, 61, 98, 148, 153, 62, 126, 244, 136, 62, 75, 193, 155, 190, 230, 66, 47, 62, 84, 234, 223, 190, 175, 159, 211, 189, 238, 28, 29, 189, 152, 51, 30, 190, 78, 163, 201, 59, 183, 142, 212, 184, 25, 53, 41, 188, 216, 16, 33, 190, 171, 116, 139, 189, 146, 0, 58, 59, 184, 149, 53, 189, 85, 90, 27, 190, 139, 60, 236, 59, 2, 206, 246, 189, 47, 45, 161, 60, 158, 71, 154, 61, 110, 180, 159, 189, 29, 56, 28, 62, 79, 227, 167, 189, 140, 171, 33, 190, 252, 71, 178, 189, 43, 41, 140, 189, 223, 193, 16, 190, 176, 246, 240, 60, 34, 148, 100, 189, 198, 207, 49, 190, 235, 96, 6, 190, 117, 72, 8, 190, 142, 1, 110, 189, 87, 97, 182, 189, 176, 83, 245, 189, 30, 124, 28, 190, 79, 29, 20, 62, 2, 238, 133, 60, 220, 45, 30, 191, 158, 215, 166, 60, 102, 189, 22, 190, 78, 249, 91, 190, 55, 165, 205, 190, 27, 148, 15, 191, 191, 198, 28, 191, 148, 21, 50, 189, 79, 160, 12, 190, 12, 77, 129, 189, 23, 212, 232, 60, 133, 164, 169, 62, 214, 26, 143, 61, 77, 93, 32, 189, 14, 10, 207, 190, 25, 165, 97, 61, 95, 171, 167, 189, 49, 73, 214, 189, 76, 70, 8, 62, 131, 150, 163, 190, 194, 225, 87, 190, 150, 104, 141, 61, 62, 75, 223, 62, 102, 96, 140, 60, 53, 44, 237, 61, 109, 147, 53, 190, 104, 112, 112, 189, 87, 120, 197, 189, 146, 49, 45, 62, 64, 162, 29, 62, 75, 88, 162, 190, 145, 202, 180, 189, 228, 135, 146, 190, 179, 120, 22, 61, 182, 172, 126, 189, 7, 68, 129, 62, 195, 209, 84, 190, 220, 116, 184, 190, 64, 115, 230, 190, 10, 57, 167, 190, 41, 230, 27, 189, 180, 164, 34, 62, 252, 191, 126, 62, 44, 189, 191, 62, 182, 132, 129, 62, 5, 12, 172, 61, 162, 228, 207, 61, 206, 61, 246, 60, 124, 165, 64, 62, 97, 15, 8, 190, 248, 174, 183, 189, 179, 32, 67, 191, 38, 202, 97, 189, 215, 208, 174, 62, 25, 201, 155, 188, 141, 91, 24, 62, 229, 205, 153, 61, 224, 225, 133, 189, 148, 238, 176, 62, 241, 52, 137, 189, 53, 123, 198, 190, 108, 249, 152, 62, 55, 75, 193, 190, 185, 146, 152, 60, 226, 151, 85, 190, 70, 105, 130, 60, 13, 228, 21, 62, 185, 74, 42, 188, 195, 171, 142, 62, 196, 81, 241, 190, 132, 174, 117, 190, 73, 214, 162, 189, 115, 28, 16, 62, 241, 150, 156, 190, 133, 181, 221, 190, 152, 90, 36, 62, 217, 172, 4, 191, 8, 113, 239, 61, 206, 207, 72, 62, 55, 68, 223, 61, 133, 236, 125, 190, 172, 114, 193, 190, 78, 156, 76, 190, 123, 61, 40, 61, 132, 116, 98, 62, 55, 240, 222, 188, 144, 151, 231, 189, 197, 104, 146, 61, 37, 12, 129, 190, 238, 159, 44, 61, 22, 249, 218, 190, 28, 40, 247, 61, 208, 167, 162, 190, 27, 32, 167, 190, 98, 211, 177, 62, 198, 223, 73, 59};
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
                alignas(float) const unsigned char memory[] = {149, 70, 159, 62, 160, 23, 49, 190, 51, 163, 119, 59, 192, 213, 20, 62, 138, 50, 128, 62, 39, 165, 95, 189, 214, 194, 200, 189, 207, 69, 134, 62, 173, 169, 115, 62, 78, 53, 114, 62, 146, 110, 140, 62, 30, 193, 65, 61, 71, 8, 66, 62, 88, 215, 14, 59, 90, 113, 216, 61, 69, 119, 5, 61, 72, 192, 147, 62, 240, 97, 170, 62, 24, 93, 63, 190, 171, 128, 123, 61, 200, 169, 137, 188, 205, 160, 207, 60, 54, 65, 63, 62, 206, 69, 204, 188, 125, 221, 44, 59, 229, 200, 32, 189, 188, 61, 89, 190, 197, 125, 38, 189, 28, 1, 10, 189, 170, 23, 127, 62, 6, 183, 31, 189, 200, 219, 31, 190};
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
                alignas(float) const unsigned char memory[] = {185, 132, 139, 191, 29, 55, 207, 61, 228, 80, 30, 191, 225, 93, 154, 62, 13, 44, 32, 63, 137, 134, 115, 190, 214, 81, 227, 188, 103, 59, 203, 62, 23, 182, 246, 189, 65, 233, 175, 63, 34, 76, 68, 61, 62, 4, 52, 63, 106, 131, 64, 191, 155, 123, 8, 63, 15, 135, 60, 63, 20, 204, 0, 191, 179, 140, 55, 61, 74, 123, 113, 62, 219, 180, 210, 190, 239, 92, 1, 189, 164, 135, 155, 61, 74, 96, 197, 190, 149, 42, 24, 62, 104, 113, 253, 61, 195, 141, 12, 62, 146, 1, 143, 60, 234, 124, 159, 60, 27, 127, 190, 190, 93, 126, 156, 61, 5, 134, 69, 191, 48, 77, 149, 190, 205, 131, 161, 190, 28, 236, 147, 62, 248, 3, 20, 60, 248, 130, 78, 189, 151, 201, 62, 62, 188, 33, 147, 60, 211, 204, 111, 62, 242, 82, 219, 185, 241, 143, 97, 190, 18, 196, 142, 190, 210, 111, 38, 63, 5, 235, 149, 190, 27, 139, 172, 61, 238, 219, 113, 62, 153, 134, 245, 61, 219, 161, 212, 62, 229, 90, 94, 62, 251, 124, 1, 191, 216, 1, 152, 190, 9, 159, 171, 62, 226, 40, 204, 189, 99, 72, 212, 62, 20, 116, 69, 190, 13, 227, 118, 190, 217, 148, 243, 189, 69, 53, 246, 189, 42, 170, 121, 189, 131, 15, 207, 61, 161, 129, 234, 60, 78, 18, 165, 188, 201, 168, 232, 62, 160, 232, 151, 189, 93, 225, 43, 61};
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
                alignas(float) const unsigned char memory[] = {57, 37, 102, 59, 246, 15, 90, 190};
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
    alignas(float) const unsigned char memory[] = {220, 152, 155, 63, 71, 89, 4, 62, 159, 237, 241, 63};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {35, 57, 98, 192, 192, 183, 210, 190};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0010/steps/000000000012000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}