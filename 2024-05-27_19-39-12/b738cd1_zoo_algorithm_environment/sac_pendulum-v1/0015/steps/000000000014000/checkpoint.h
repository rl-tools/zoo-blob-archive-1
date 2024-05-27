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
                alignas(float) const unsigned char memory[] = {154, 123, 129, 191, 105, 71, 91, 190, 156, 13, 218, 62, 86, 105, 236, 62, 241, 136, 86, 63, 160, 57, 236, 62, 12, 39, 118, 63, 153, 97, 54, 191, 40, 240, 206, 189, 219, 156, 172, 190, 86, 106, 35, 63, 14, 125, 24, 190, 243, 151, 84, 190, 61, 250, 199, 191, 31, 3, 147, 190, 143, 207, 74, 63, 85, 146, 125, 62, 242, 252, 20, 63, 67, 124, 12, 191, 15, 26, 110, 62, 114, 88, 177, 61, 193, 30, 111, 190, 189, 233, 177, 188, 137, 135, 149, 190, 126, 23, 226, 189, 74, 161, 23, 62, 233, 78, 234, 190, 142, 134, 95, 63, 89, 86, 91, 63, 213, 54, 199, 62, 59, 188, 45, 61, 60, 168, 227, 188, 80, 116, 38, 191, 21, 238, 248, 190, 149, 219, 161, 191, 222, 79, 212, 189, 22, 80, 136, 62, 7, 122, 6, 191, 138, 123, 212, 62, 60, 14, 175, 190, 132, 183, 39, 63, 119, 145, 223, 61, 44, 187, 139, 190, 115, 227, 145, 63, 179, 237, 191, 62, 39, 10, 69, 191, 169, 82, 216, 191, 126, 159, 156, 190, 134, 232, 148, 62, 13, 14, 213, 190, 113, 17, 205, 59, 94, 3, 227, 62, 140, 118, 119, 191, 158, 202, 0, 191, 164, 31, 57, 62, 25, 143, 99, 191, 77, 21, 47, 190, 234, 188, 56, 63, 100, 202, 129, 191, 34, 227, 156, 190, 102, 183, 89, 191, 50, 183, 143, 191, 84, 134, 10, 191, 240, 11, 177, 190, 221, 37, 78, 63, 150, 92, 175, 61, 65, 11, 232, 190, 155, 40, 162, 63, 218, 145, 154, 62, 6, 60, 58, 191, 217, 59, 48, 190, 13, 199, 138, 189, 73, 148, 9, 62, 116, 187, 56, 191, 67, 137, 129, 62, 2, 139, 155, 190, 140, 165, 49, 63, 161, 42, 34, 63, 248, 222, 226, 60, 119, 29, 69, 63, 211, 106, 66, 190, 43, 164, 20, 63, 143, 249, 157, 190, 121, 5, 23, 63, 125, 126, 221, 189, 34, 230, 156, 63, 54, 146, 27, 190, 14, 196, 8, 63, 170, 187, 56, 191, 186, 231, 56, 190, 130, 143, 35, 188, 147, 106, 179, 190, 56, 125, 39, 63, 174, 172, 176, 190, 63, 208, 199, 61, 150, 87, 60, 63};
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
                alignas(float) const unsigned char memory[] = {6, 184, 182, 189, 198, 117, 75, 190, 149, 157, 230, 62, 170, 83, 148, 190, 4, 11, 119, 62, 98, 104, 60, 62, 131, 212, 44, 62, 192, 65, 139, 62, 65, 34, 166, 190, 247, 2, 122, 191, 180, 147, 170, 62, 154, 83, 4, 63, 16, 127, 206, 189, 163, 244, 22, 63, 204, 246, 44, 62, 238, 26, 56, 188, 119, 82, 38, 63, 234, 95, 32, 191, 97, 75, 150, 61, 133, 232, 220, 190, 169, 219, 25, 191, 209, 83, 1, 63, 72, 147, 5, 63, 252, 7, 132, 190, 125, 184, 5, 61, 197, 175, 146, 187, 247, 151, 197, 189, 149, 255, 21, 189, 69, 112, 235, 62, 67, 12, 249, 61, 84, 172, 181, 189, 13, 181, 127, 190};
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
                alignas(float) const unsigned char memory[] = {206, 71, 246, 62, 28, 248, 151, 190, 252, 177, 42, 190, 167, 244, 201, 190, 8, 189, 245, 61, 167, 188, 6, 190, 161, 97, 0, 61, 158, 77, 91, 62, 60, 193, 248, 189, 173, 185, 196, 186, 176, 98, 10, 61, 85, 137, 222, 61, 196, 118, 145, 62, 207, 31, 243, 62, 26, 39, 151, 191, 171, 70, 82, 62, 33, 39, 35, 189, 238, 232, 135, 190, 78, 98, 182, 190, 87, 130, 227, 190, 200, 76, 45, 62, 183, 53, 15, 62, 189, 214, 48, 190, 228, 43, 123, 62, 101, 165, 24, 190, 181, 172, 161, 191, 76, 97, 107, 61, 160, 195, 100, 190, 246, 95, 158, 61, 84, 70, 133, 61, 46, 16, 90, 190, 213, 80, 84, 191, 112, 73, 245, 189, 72, 205, 154, 189, 150, 30, 44, 189, 63, 244, 222, 188, 52, 157, 181, 61, 104, 137, 136, 189, 214, 19, 27, 190, 254, 143, 133, 185, 90, 142, 15, 190, 152, 172, 223, 189, 161, 60, 241, 188, 208, 160, 43, 60, 243, 105, 3, 190, 214, 152, 212, 61, 206, 156, 29, 190, 22, 122, 20, 190, 64, 30, 10, 189, 168, 209, 189, 189, 96, 212, 236, 60, 59, 145, 190, 189, 107, 209, 12, 62, 130, 3, 252, 61, 251, 154, 39, 189, 238, 182, 86, 189, 188, 103, 246, 61, 189, 184, 247, 60, 245, 222, 70, 190, 184, 170, 221, 61, 9, 241, 184, 187, 240, 156, 33, 190, 76, 168, 226, 60, 199, 180, 15, 190, 114, 185, 22, 189, 135, 97, 201, 189, 39, 49, 8, 190, 191, 106, 42, 190, 163, 186, 220, 189, 227, 112, 44, 190, 157, 168, 191, 189, 192, 29, 213, 61, 85, 19, 166, 189, 252, 59, 46, 61, 212, 229, 58, 61, 73, 24, 15, 61, 68, 207, 194, 189, 153, 97, 96, 61, 46, 59, 52, 61, 228, 85, 197, 189, 33, 243, 43, 190, 88, 80, 38, 190, 74, 210, 126, 61, 150, 202, 19, 62, 28, 3, 144, 188, 128, 145, 225, 61, 25, 130, 141, 189, 94, 8, 5, 62, 65, 217, 140, 189, 149, 61, 234, 189, 120, 27, 17, 189, 48, 129, 251, 188, 45, 106, 37, 190, 196, 227, 246, 188, 75, 241, 233, 61, 142, 104, 132, 61, 207, 87, 41, 61, 178, 180, 0, 190, 142, 188, 123, 62, 238, 92, 74, 62, 54, 22, 19, 191, 165, 187, 122, 189, 72, 111, 42, 190, 157, 250, 133, 188, 235, 104, 144, 61, 130, 220, 113, 191, 68, 246, 246, 189, 104, 179, 71, 191, 251, 186, 87, 188, 163, 49, 115, 62, 172, 124, 193, 189, 167, 223, 3, 191, 3, 100, 153, 62, 8, 168, 39, 191, 2, 63, 185, 190, 166, 181, 66, 191, 60, 102, 206, 190, 198, 35, 202, 62, 2, 10, 229, 189, 239, 64, 4, 191, 65, 119, 40, 190, 77, 33, 12, 62, 35, 210, 47, 61, 10, 74, 133, 61, 58, 186, 209, 62, 173, 249, 16, 62, 53, 18, 48, 188, 229, 227, 38, 62, 5, 68, 174, 189, 178, 17, 148, 59, 153, 42, 139, 189, 3, 202, 199, 189, 83, 137, 26, 190, 63, 248, 226, 188, 10, 31, 241, 188, 231, 1, 147, 189, 167, 228, 201, 189, 243, 51, 192, 189, 12, 170, 245, 189, 212, 244, 189, 189, 107, 110, 139, 189, 69, 249, 25, 190, 178, 15, 129, 60, 193, 42, 203, 188, 197, 97, 114, 60, 106, 203, 187, 61, 36, 235, 167, 59, 68, 142, 15, 190, 0, 240, 230, 189, 22, 249, 27, 190, 72, 210, 167, 61, 238, 147, 18, 62, 77, 41, 11, 190, 155, 84, 229, 189, 185, 211, 59, 189, 89, 56, 40, 61, 249, 1, 239, 61, 167, 91, 178, 189, 75, 71, 9, 60, 52, 73, 222, 61, 153, 116, 78, 61, 196, 140, 86, 60, 226, 217, 105, 188, 183, 117, 249, 189, 97, 189, 3, 190, 155, 227, 184, 60, 17, 235, 3, 190, 149, 252, 35, 190, 89, 190, 153, 61, 71, 247, 7, 190, 127, 235, 17, 62, 64, 189, 122, 60, 81, 242, 82, 58, 177, 239, 20, 190, 101, 110, 25, 190, 154, 53, 9, 62, 248, 131, 4, 190, 199, 147, 237, 188, 161, 149, 0, 62, 180, 124, 5, 189, 119, 41, 163, 189, 72, 41, 195, 189, 38, 169, 229, 189, 75, 101, 228, 60, 22, 159, 66, 61, 12, 227, 39, 61, 119, 149, 48, 190, 9, 105, 182, 61, 209, 143, 234, 61, 226, 179, 32, 190, 104, 111, 48, 190, 131, 127, 143, 189, 180, 112, 96, 61, 1, 254, 128, 190, 17, 82, 160, 62, 168, 184, 128, 62, 118, 253, 21, 189, 49, 145, 165, 190, 189, 125, 3, 62, 44, 27, 87, 61, 174, 95, 40, 62, 35, 24, 214, 190, 14, 16, 136, 190, 216, 252, 92, 62, 79, 109, 11, 191, 220, 47, 115, 62, 56, 11, 140, 62, 26, 91, 46, 191, 189, 163, 26, 62, 252, 198, 243, 61, 174, 141, 2, 62, 217, 36, 149, 61, 117, 173, 146, 191, 219, 241, 201, 61, 173, 49, 239, 61, 31, 238, 74, 62, 97, 203, 95, 62, 119, 147, 192, 61, 60, 15, 117, 190, 248, 57, 76, 190, 75, 23, 48, 62, 82, 6, 2, 62, 94, 164, 144, 62, 48, 162, 108, 62, 211, 239, 204, 189, 49, 213, 188, 189, 111, 99, 164, 189, 253, 95, 212, 189, 181, 200, 70, 61, 193, 92, 134, 61, 222, 245, 216, 189, 33, 237, 224, 188, 217, 187, 255, 61, 215, 25, 167, 58, 16, 187, 50, 190, 36, 173, 215, 189, 150, 93, 26, 190, 7, 64, 83, 189, 216, 123, 208, 60, 49, 216, 208, 189, 224, 106, 138, 189, 146, 178, 9, 62, 34, 80, 175, 189, 249, 255, 79, 190, 199, 19, 190, 61, 136, 67, 11, 190, 227, 26, 33, 188, 13, 72, 44, 190, 135, 244, 172, 61, 195, 96, 28, 190, 41, 120, 234, 61, 138, 66, 160, 189, 78, 39, 14, 60, 45, 73, 87, 189, 229, 115, 33, 60, 108, 200, 33, 62, 233, 166, 186, 189, 252, 206, 246, 189, 220, 126, 222, 59, 76, 197, 116, 190, 121, 85, 253, 188, 157, 220, 225, 189, 120, 99, 248, 60, 198, 16, 140, 189, 124, 232, 171, 190, 243, 118, 247, 189, 9, 66, 225, 60, 240, 128, 85, 62, 145, 15, 131, 189, 121, 28, 130, 190, 137, 215, 8, 62, 172, 220, 27, 62, 39, 77, 201, 62, 255, 247, 2, 189, 48, 245, 149, 189, 0, 97, 164, 190, 208, 39, 139, 189, 123, 223, 106, 189, 211, 120, 185, 61, 213, 68, 72, 190, 56, 250, 204, 61, 207, 128, 128, 61, 161, 143, 184, 189, 130, 184, 170, 61, 104, 102, 85, 62, 179, 188, 205, 61, 131, 113, 144, 61, 139, 16, 50, 189, 15, 252, 83, 61, 159, 72, 156, 189, 74, 33, 233, 189, 28, 199, 128, 60, 156, 50, 212, 188, 239, 84, 130, 60, 166, 222, 143, 62, 182, 146, 190, 61, 118, 170, 139, 189, 118, 125, 141, 190, 144, 240, 158, 61, 191, 12, 146, 60, 118, 65, 123, 190, 108, 102, 4, 62, 111, 111, 124, 189, 22, 151, 205, 61, 149, 220, 144, 62, 245, 84, 17, 190, 54, 77, 178, 190, 246, 68, 250, 190, 205, 245, 239, 60, 94, 69, 45, 190, 112, 196, 13, 61, 132, 87, 131, 62, 156, 222, 89, 62, 57, 36, 95, 189, 221, 4, 210, 61, 66, 120, 64, 189, 113, 116, 119, 62, 228, 46, 17, 61, 87, 34, 41, 62, 52, 29, 154, 187, 57, 55, 146, 188, 185, 111, 94, 190, 96, 35, 246, 187, 205, 168, 21, 62, 179, 100, 224, 189, 46, 224, 56, 190, 52, 217, 94, 190, 41, 177, 201, 189, 8, 108, 19, 61, 110, 197, 205, 61, 1, 245, 91, 188, 186, 228, 124, 61, 72, 206, 236, 61, 11, 121, 62, 190, 14, 184, 120, 61, 14, 141, 229, 59, 196, 7, 39, 62, 65, 68, 181, 189, 196, 202, 38, 62, 196, 130, 60, 190, 210, 93, 136, 189, 135, 213, 235, 61, 34, 53, 232, 188, 20, 174, 152, 189, 13, 250, 40, 190, 67, 33, 169, 61, 63, 153, 177, 189, 79, 15, 223, 61, 6, 1, 78, 190, 151, 2, 181, 61, 60, 162, 36, 190, 82, 199, 222, 61, 209, 39, 225, 60, 119, 196, 140, 188, 1, 104, 74, 188, 201, 97, 151, 190, 30, 212, 88, 62, 118, 226, 201, 187, 152, 112, 213, 190, 234, 90, 196, 189, 254, 254, 118, 189, 22, 147, 6, 191, 181, 129, 47, 190, 225, 74, 15, 63, 57, 216, 37, 62, 25, 155, 2, 191, 248, 170, 167, 188, 202, 140, 186, 187, 75, 7, 129, 62, 252, 106, 4, 189, 19, 211, 230, 62, 198, 237, 138, 189, 240, 95, 150, 61, 216, 108, 168, 190, 11, 145, 43, 190, 21, 178, 149, 190, 46, 123, 95, 61, 81, 20, 163, 189, 24, 159, 47, 191, 26, 120, 55, 62, 43, 194, 54, 191, 226, 149, 128, 189, 170, 240, 43, 189, 133, 31, 92, 190, 245, 84, 67, 61, 22, 247, 186, 187, 119, 59, 170, 189, 54, 48, 4, 190, 150, 33, 4, 62, 198, 87, 155, 189, 218, 210, 168, 61, 33, 185, 28, 62, 224, 32, 40, 190, 253, 171, 180, 188, 252, 58, 34, 190, 114, 21, 9, 190, 201, 89, 46, 62, 5, 89, 25, 189, 56, 167, 134, 60, 102, 38, 171, 189, 174, 121, 132, 61, 134, 124, 73, 188, 46, 186, 15, 62, 125, 94, 204, 61, 196, 91, 198, 189, 89, 73, 32, 189, 64, 130, 216, 189, 144, 23, 27, 62, 56, 65, 5, 190, 22, 184, 37, 189, 136, 118, 239, 189, 201, 37, 199, 189, 218, 1, 30, 62, 193, 56, 120, 61, 63, 102, 212, 61, 195, 67, 63, 61, 79, 169, 189, 190, 209, 39, 129, 62, 195, 133, 42, 190, 188, 98, 81, 61, 81, 221, 220, 189, 226, 118, 19, 62, 120, 157, 53, 191, 128, 61, 134, 189, 18, 125, 172, 61, 149, 138, 158, 62, 214, 155, 18, 61, 221, 77, 236, 190, 55, 213, 146, 62, 206, 217, 85, 190, 53, 241, 7, 190, 152, 0, 40, 190, 125, 115, 86, 190, 104, 230, 169, 189, 34, 232, 96, 191, 216, 170, 56, 61, 8, 144, 195, 61, 108, 102, 191, 190, 58, 78, 86, 190, 149, 145, 58, 190, 123, 3, 210, 59, 208, 172, 70, 62, 199, 96, 6, 190, 0, 118, 150, 188, 108, 170, 203, 190, 230, 243, 121, 190, 234, 190, 195, 188, 178, 150, 125, 61, 205, 151, 181, 190, 206, 92, 174, 62, 216, 27, 22, 191, 35, 228, 129, 190, 97, 23, 84, 62, 135, 61, 130, 62, 76, 2, 210, 189, 13, 175, 134, 62, 121, 241, 174, 190, 174, 245, 20, 63, 133, 16, 187, 61, 63, 179, 244, 189, 20, 14, 107, 61, 251, 161, 216, 62, 232, 150, 111, 61, 182, 45, 19, 63, 47, 221, 51, 190, 17, 255, 188, 190, 159, 23, 172, 61, 148, 127, 112, 190, 154, 212, 74, 189, 212, 189, 186, 62, 162, 144, 101, 60, 33, 210, 36, 62, 202, 95, 249, 190, 55, 188, 233, 188, 179, 5, 249, 189, 138, 9, 149, 62, 76, 175, 55, 62, 145, 34, 233, 190, 156, 53, 89, 189, 240, 251, 1, 190, 227, 93, 50, 191, 39, 37, 248, 62, 20, 246, 223, 190, 192, 118, 131, 190, 232, 99, 13, 62, 17, 162, 18, 62, 215, 242, 89, 61, 153, 45, 68, 62, 251, 217, 113, 190, 89, 180, 45, 62, 167, 47, 151, 61, 53, 192, 139, 62, 211, 194, 195, 61, 89, 242, 148, 62, 185, 194, 29, 61, 235, 17, 185, 62, 20, 40, 73, 62, 162, 135, 23, 191, 32, 103, 93, 191, 38, 221, 134, 191, 11, 124, 152, 61, 87, 80, 25, 189, 117, 111, 139, 188, 230, 37, 54, 189, 36, 35, 147, 61, 179, 108, 181, 190, 203, 4, 169, 62, 81, 178, 237, 61, 156, 201, 200, 62, 129, 80, 1, 190, 95, 176, 107, 190, 225, 101, 49, 191, 238, 85, 1, 191, 228, 97, 195, 62, 202, 18, 217, 61, 14, 247, 8, 190, 213, 56, 184, 190, 199, 215, 188, 62, 249, 176, 187, 190, 130, 174, 233, 61, 231, 94, 193, 190, 50, 75, 180, 62, 1, 154, 131, 62, 201, 173, 82, 191, 109, 182, 218, 61, 218, 197, 13, 60, 170, 87, 4, 59, 124, 109, 54, 61, 176, 214, 163, 61, 146, 255, 0, 191, 143, 182, 110, 191, 126, 216, 62, 191, 61, 5, 157, 188, 49, 137, 226, 189, 175, 221, 10, 190, 110, 43, 129, 62, 237, 142, 4, 62, 193, 205, 3, 62, 57, 142, 242, 62, 18, 17, 235, 61, 85, 48, 220, 61, 118, 237, 28, 62, 65, 124, 172, 189, 33, 101, 34, 189, 247, 107, 70, 62, 162, 58, 195, 188, 200, 46, 10, 60, 176, 111, 188, 62, 56, 216, 159, 190, 118, 12, 233, 189, 129, 50, 133, 61, 5, 116, 69, 62, 162, 14, 59, 62, 121, 68, 235, 188, 100, 82, 24, 62, 59, 219, 253, 61, 228, 174, 59, 189, 169, 8, 188, 60, 50, 129, 202, 61, 118, 62, 8, 191, 4, 27, 17, 189, 136, 118, 1, 190, 175, 17, 43, 190, 37, 55, 132, 190, 18, 143, 172, 189, 160, 247, 21, 62, 122, 222, 125, 186, 211, 148, 34, 62, 129, 59, 186, 62, 132, 204, 85, 62, 18, 164, 141, 189, 61, 87, 162, 188, 76, 34, 160, 62, 248, 92, 170, 61, 200, 33, 236, 62, 243, 223, 10, 62, 16, 61, 15, 191, 98, 203, 90, 61, 157, 188, 220, 61, 107, 227, 27, 190, 198, 57, 58, 62, 179, 189, 157, 62, 6, 78, 89, 190, 76, 46, 5, 62, 176, 94, 64, 190, 143, 50, 177, 191, 100, 152, 26, 62, 29, 249, 164, 59, 73, 86, 150, 61, 7, 222, 235, 190, 122, 228, 82, 191, 108, 32, 200, 61, 250, 150, 159, 62, 46, 29, 105, 59, 129, 61, 238, 188, 37, 251, 115, 190, 61, 116, 252, 189, 55, 148, 111, 190, 190, 2, 194, 191, 249, 226, 109, 190, 162, 254, 109, 190, 100, 99, 72, 191, 127, 5, 116, 190, 123, 179, 81, 61, 170, 29, 23, 62, 17, 169, 188, 61, 211, 107, 16, 190, 231, 21, 249, 190, 114, 140, 21, 191, 235, 210, 210, 62, 191, 201, 132, 61, 232, 67, 25, 190, 227, 147, 151, 190, 4, 135, 194, 62, 220, 75, 159, 190, 201, 67, 237, 61, 238, 192, 235, 190, 99, 191, 142, 62, 226, 149, 146, 62, 147, 89, 68, 191, 180, 248, 95, 62, 73, 190, 66, 189, 112, 210, 18, 62, 63, 97, 68, 189, 76, 63, 88, 62, 150, 224, 44, 191, 195, 253, 95, 191, 162, 74, 50, 191, 103, 157, 34, 62, 109, 222, 240, 61, 248, 10, 4, 62, 200, 165, 136, 62, 101, 67, 115, 59, 151, 101, 15, 61, 249, 2, 223, 62, 118, 75, 122, 62, 139, 104, 63, 62, 74, 82, 24, 190, 45, 26, 140, 190, 18, 180, 37, 61, 249, 91, 105, 62, 96, 94, 105, 62, 28, 159, 32, 62, 156, 233, 7, 190, 239, 26, 210, 61, 169, 218, 65, 62, 210, 115, 73, 189, 105, 222, 118, 190, 210, 212, 204, 190, 130, 17, 168, 60, 101, 126, 201, 189, 32, 95, 0, 190, 235, 88, 100, 62, 131, 238, 122, 189, 152, 79, 142, 60, 157, 213, 23, 61, 246, 103, 170, 60, 94, 191, 198, 190, 183, 108, 64, 191, 14, 45, 96, 191, 197, 128, 115, 190, 29, 23, 132, 189, 225, 93, 203, 189, 207, 151, 181, 188, 188, 188, 65, 61, 148, 105, 87, 61, 179, 95, 160, 189, 96, 151, 159, 62, 189, 150, 244, 190, 171, 7, 23, 191, 76, 32, 180, 61, 221, 56, 187, 61, 19, 68, 37, 189, 2, 242, 188, 59, 105, 147, 178, 62, 249, 55, 153, 62, 181, 147, 146, 191, 150, 151, 66, 62, 211, 168, 215, 189, 134, 165, 157, 190, 34, 205, 25, 62, 72, 177, 0, 189, 38, 197, 205, 61, 22, 214, 104, 191, 199, 181, 107, 190, 213, 187, 108, 62, 187, 218, 42, 62, 147, 53, 157, 190, 186, 225, 25, 62, 182, 77, 22, 191, 215, 228, 44, 191, 50, 225, 62, 191, 135, 132, 40, 190, 204, 82, 13, 62, 210, 171, 21, 59, 132, 15, 249, 62, 9, 230, 194, 59, 6, 86, 4, 62, 245, 231, 209, 60, 147, 254, 80, 62, 88, 133, 154, 62, 242, 154, 163, 62, 159, 193, 241, 61, 26, 89, 3, 62, 142, 78, 16, 62, 173, 188, 188, 188, 30, 254, 149, 62, 125, 148, 4, 63, 172, 246, 130, 188, 210, 191, 222, 61, 207, 254, 32, 189, 176, 240, 70, 62, 50, 198, 251, 61, 62, 163, 168, 191, 0, 159, 208, 61, 246, 138, 203, 189, 145, 111, 216, 61, 119, 127, 174, 190, 32, 40, 223, 190, 235, 131, 55, 191, 227, 236, 191, 61, 187, 207, 53, 190, 76, 51, 143, 190, 94, 123, 201, 190, 80, 226, 10, 187, 172, 176, 51, 191, 166, 28, 135, 191, 91, 189, 154, 189, 242, 51, 113, 62, 18, 243, 170, 190, 195, 46, 50, 62, 90, 52, 244, 61, 168, 255, 7, 188, 105, 156, 27, 62, 210, 227, 171, 62, 95, 41, 7, 189, 151, 23, 0, 61, 68, 80, 12, 190, 219, 141, 140, 61, 223, 171, 48, 62, 160, 186, 250, 189, 189, 137, 127, 61, 159, 44, 199, 189, 243, 5, 98, 189, 73, 132, 131, 189, 113, 10, 206, 61, 68, 83, 39, 190, 125, 73, 161, 61, 31, 12, 194, 189, 246, 205, 90, 189, 253, 191, 17, 190, 157, 133, 131, 189, 204, 21, 110, 61, 242, 192, 117, 61, 36, 245, 117, 61, 52, 72, 40, 190, 206, 68, 140, 189, 93, 239, 68, 61, 39, 166, 20, 190, 70, 232, 168, 61, 105, 187, 12, 190, 131, 132, 170, 189, 189, 199, 130, 59, 154, 76, 198, 189, 81, 232, 97, 61, 149, 16, 106, 189, 108, 125, 49, 62, 104, 152, 250, 189, 14, 174, 207, 58, 125, 78, 166, 190, 152, 192, 117, 61, 250, 78, 131, 62, 189, 4, 211, 189, 217, 170, 137, 190, 64, 244, 49, 62, 74, 135, 143, 62, 40, 235, 50, 62, 100, 49, 96, 190, 74, 107, 80, 189, 75, 84, 214, 188, 55, 91, 38, 190, 220, 64, 158, 61, 12, 153, 16, 62, 156, 30, 189, 190, 250, 138, 109, 62, 65, 225, 40, 62, 128, 157, 74, 190, 105, 191, 168, 190, 147, 158, 165, 190, 188, 225, 98, 61, 128, 248, 249, 61, 1, 90, 99, 61, 63, 5, 25, 62, 106, 196, 78, 62, 214, 211, 228, 61, 155, 44, 107, 188, 227, 106, 144, 62, 120, 213, 60, 62, 151, 34, 69, 62, 28, 49, 19, 189, 51, 71, 34, 190, 240, 4, 62, 62, 120, 209, 4, 191, 236, 28, 202, 59, 18, 41, 223, 61, 162, 241, 40, 62, 160, 111, 57, 191, 69, 42, 218, 60, 177, 136, 81, 61, 204, 96, 239, 61, 66, 10, 201, 189, 66, 117, 8, 62, 172, 201, 37, 62, 186, 9, 28, 190, 153, 27, 88, 61, 219, 45, 25, 190, 209, 32, 93, 190, 65, 122, 61, 189, 64, 253, 251, 189, 217, 168, 193, 59, 154, 219, 149, 188, 229, 89, 21, 190, 83, 226, 4, 190, 66, 62, 28, 190, 16, 181, 156, 189, 54, 174, 164, 189, 52, 173, 82, 59, 139, 51, 153, 61, 112, 86, 247, 189, 31, 178, 230, 189, 93, 188, 157, 60, 111, 246, 69, 190, 188, 54, 54, 190, 1, 9, 136, 189, 144, 87, 213, 62, 213, 156, 5, 62, 13, 200, 217, 191, 88, 66, 162, 61, 176, 35, 213, 190, 246, 110, 203, 190, 244, 75, 142, 61, 165, 248, 221, 189, 140, 196, 62, 62, 38, 145, 1, 191, 104, 244, 229, 61, 84, 137, 134, 190, 95, 182, 38, 60, 92, 177, 152, 191, 229, 83, 240, 62, 39, 163, 195, 190, 141, 54, 40, 191, 61, 156, 14, 191, 252, 7, 231, 189, 70, 236, 227, 189, 136, 182, 150, 61, 125, 125, 137, 190, 164, 31, 70, 62, 88, 206, 155, 188, 25, 246, 205, 61, 114, 170, 20, 62, 238, 139, 130, 62, 213, 10, 21, 189, 96, 87, 49, 62, 125, 16, 192, 189, 184, 117, 155, 189, 114, 69, 65, 190, 80, 118, 85, 62, 72, 44, 148, 62, 126, 237, 94, 62, 186, 85, 170, 60, 229, 118, 50, 61, 195, 0, 159, 62, 61, 142, 23, 62, 231, 174, 132, 191, 92, 64, 95, 61, 40, 0, 0, 63, 198, 36, 49, 62, 230, 125, 12, 191, 78, 53, 60, 189, 139, 14, 1, 190, 171, 198, 108, 62, 33, 139, 4, 190, 20, 178, 21, 62, 17, 250, 139, 190, 150, 64, 48, 189, 198, 223, 139, 190, 43, 206, 2, 191, 81, 55, 202, 190, 110, 29, 39, 62, 6, 86, 18, 190, 51, 105, 42, 190, 50, 25, 69, 62, 104, 33, 247, 189, 24, 22, 52, 62, 44, 90, 55, 189, 72, 51, 233, 188, 34, 95, 61, 190, 178, 172, 48, 190, 73, 193, 4, 187, 50, 255, 0, 62, 217, 159, 80, 190, 207, 105, 137, 189, 88, 1, 75, 61, 208, 126, 100, 188, 183, 57, 113, 190, 33, 139, 56, 190, 206, 5, 110, 189, 65, 226, 183, 188, 209, 30, 169, 190, 149, 241, 13, 61, 99, 129, 7, 62, 162, 187, 75, 188, 202, 202, 16, 62, 128, 137, 1, 190, 170, 158, 63, 191, 33, 169, 137, 191, 61, 242, 19, 188, 194, 237, 94, 62, 126, 177, 57, 62, 200, 71, 214, 61, 255, 47, 89, 190, 201, 137, 185, 189, 28, 208, 227, 61, 82, 1, 216, 189, 54, 80, 169, 62, 92, 113, 134, 188, 46, 61, 11, 188, 136, 34, 125, 189, 191, 144, 181, 61, 32, 67, 156, 190, 242, 241, 151, 62, 219, 64, 221, 62, 242, 131, 245, 188, 48, 91, 109, 190, 35, 23, 103, 62, 129, 1, 241, 61, 216, 103, 184, 62, 224, 203, 25, 191, 102, 245, 43, 190, 74, 232, 110, 189, 229, 16, 133, 190, 212, 114, 145, 61, 111, 30, 252, 61, 252, 233, 28, 191, 236, 118, 29, 62, 41, 122, 20, 62, 31, 109, 50, 62, 66, 23, 199, 62, 161, 91, 35, 191, 123, 217, 243, 61, 57, 45, 175, 62, 243, 235, 30, 190, 166, 212, 170, 62, 111, 132, 49, 62, 34, 45, 52, 60, 254, 154, 201, 190, 103, 221, 93, 62, 7, 70, 137, 62, 13, 244, 98, 62, 233, 166, 135, 62, 99, 36, 180, 190, 177, 53, 190, 61, 246, 76, 20, 62, 130, 16, 56, 62, 25, 18, 192, 61, 54, 197, 195, 189, 117, 184, 252, 190, 45, 210, 39, 188, 245, 211, 151, 62, 49, 159, 139, 191, 29, 246, 73, 62, 91, 63, 7, 189, 11, 157, 172, 62, 55, 16, 187, 190, 182, 79, 207, 189, 71, 51, 78, 61, 210, 147, 160, 60, 220, 79, 56, 189, 11, 112, 13, 62, 124, 223, 219, 62, 231, 249, 71, 62, 218, 3, 182, 190, 15, 102, 213, 190, 191, 24, 236, 190, 127, 5, 222, 61, 162, 213, 77, 190, 246, 29, 60, 188, 171, 200, 101, 62, 88, 104, 176, 60, 126, 96, 0, 62, 175, 132, 100, 62, 72, 188, 138, 61, 184, 155, 130, 62, 202, 6, 116, 190, 96, 3, 202, 189, 151, 159, 213, 190, 113, 37, 138, 62, 143, 157, 97, 61, 196, 166, 3, 62, 7, 104, 200, 188, 151, 8, 68, 190, 62, 44, 0, 63, 225, 153, 130, 62, 195, 181, 4, 62, 245, 89, 18, 62, 167, 146, 122, 62, 58, 28, 31, 191, 49, 166, 158, 62, 7, 8, 137, 188, 36, 152, 160, 189, 164, 15, 193, 190, 190, 41, 168, 190, 64, 95, 91, 62, 226, 253, 205, 56, 111, 152, 178, 190, 112, 109, 220, 62, 47, 167, 165, 61, 54, 111, 51, 191, 24, 3, 89, 62, 151, 91, 174, 189, 103, 62, 135, 62, 137, 134, 18, 190, 18, 225, 156, 190, 107, 131, 38, 191};
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
                alignas(float) const unsigned char memory[] = {1, 26, 104, 62, 82, 80, 119, 60, 132, 43, 19, 190, 109, 209, 190, 62, 105, 192, 99, 189, 5, 17, 36, 190, 206, 125, 169, 62, 83, 235, 163, 189, 109, 75, 174, 62, 211, 75, 46, 62, 161, 101, 101, 190, 138, 24, 177, 61, 239, 77, 32, 190, 134, 10, 254, 190, 15, 191, 87, 190, 237, 254, 19, 62, 13, 87, 125, 60, 57, 82, 177, 61, 138, 12, 207, 61, 198, 239, 135, 188, 96, 76, 9, 190, 113, 17, 174, 61, 201, 214, 31, 62, 121, 169, 162, 188, 27, 158, 120, 62, 76, 253, 221, 190, 150, 95, 55, 62, 118, 88, 221, 60, 75, 135, 141, 62, 225, 232, 62, 62, 255, 217, 53, 61, 175, 46, 255, 60};
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
                alignas(float) const unsigned char memory[] = {9, 210, 62, 191, 215, 49, 199, 189, 41, 233, 99, 189, 247, 213, 81, 191, 79, 129, 184, 61, 78, 53, 245, 189, 33, 239, 51, 63, 50, 136, 148, 186, 189, 150, 144, 188, 102, 222, 125, 189, 103, 202, 20, 62, 162, 118, 223, 62, 170, 60, 14, 190, 4, 246, 104, 63, 128, 173, 130, 63, 232, 74, 130, 191, 189, 199, 241, 190, 79, 131, 61, 62, 183, 40, 111, 62, 16, 100, 206, 190, 190, 19, 132, 190, 152, 195, 128, 190, 53, 46, 208, 62, 167, 14, 204, 61, 38, 105, 56, 62, 57, 149, 161, 62, 44, 240, 137, 190, 209, 67, 162, 62, 66, 207, 112, 190, 127, 88, 242, 62, 192, 40, 147, 62, 28, 115, 12, 191, 10, 233, 136, 61, 89, 147, 80, 189, 105, 160, 175, 60, 133, 9, 216, 60, 106, 231, 43, 190, 152, 41, 242, 189, 71, 164, 129, 61, 111, 84, 205, 61, 86, 238, 19, 190, 158, 218, 5, 190, 12, 184, 29, 190, 22, 108, 56, 62, 65, 61, 146, 61, 128, 184, 234, 62, 190, 200, 91, 190, 35, 179, 11, 62, 30, 122, 12, 62, 111, 88, 130, 190, 138, 201, 8, 191, 94, 209, 241, 61, 120, 171, 3, 62, 100, 123, 197, 189, 198, 30, 81, 191, 38, 107, 40, 62, 84, 33, 92, 190, 34, 166, 162, 62, 144, 174, 188, 190, 157, 127, 40, 190, 101, 85, 128, 190, 92, 61, 111, 62, 96, 84, 2, 62, 222, 60, 13, 190};
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
                alignas(float) const unsigned char memory[] = {227, 168, 59, 189, 195, 31, 79, 190};
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
    alignas(float) const unsigned char memory[] = {17, 120, 33, 191, 170, 25, 255, 191, 14, 192, 143, 63};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {54, 127, 195, 63, 174, 33, 89, 190};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0015/steps/000000000014000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}