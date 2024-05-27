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
                alignas(float) const unsigned char memory[] = {172, 192, 176, 61, 78, 92, 169, 62, 15, 117, 196, 190, 28, 28, 108, 190, 208, 72, 84, 63, 209, 11, 46, 190, 145, 190, 202, 190, 103, 65, 87, 191, 161, 180, 207, 62, 142, 161, 68, 190, 15, 163, 247, 190, 252, 182, 101, 190, 70, 57, 1, 191, 49, 105, 32, 191, 47, 147, 140, 62, 240, 158, 18, 63, 228, 64, 179, 62, 127, 166, 236, 190, 178, 65, 53, 190, 237, 31, 66, 63, 16, 227, 103, 190, 245, 64, 17, 62, 0, 251, 193, 190, 192, 81, 18, 191, 37, 70, 38, 63, 185, 247, 193, 62, 35, 106, 244, 62, 115, 183, 222, 62, 29, 100, 21, 62, 26, 200, 76, 190, 74, 237, 170, 190, 4, 141, 49, 190, 93, 81, 10, 62, 207, 54, 226, 190, 252, 89, 90, 190, 159, 219, 190, 190, 149, 11, 156, 189, 124, 200, 11, 191, 68, 210, 243, 190, 251, 174, 212, 187, 143, 105, 11, 190, 177, 197, 17, 63, 12, 44, 136, 62, 183, 180, 242, 190, 186, 6, 31, 62, 7, 216, 160, 190, 125, 128, 125, 62, 131, 25, 8, 190, 71, 210, 249, 62, 14, 209, 229, 190, 57, 12, 5, 63, 62, 216, 188, 190, 210, 110, 83, 191, 101, 5, 165, 190, 2, 34, 144, 189, 235, 217, 220, 190, 224, 4, 19, 62, 140, 164, 173, 190, 218, 101, 89, 63, 177, 219, 176, 190, 243, 48, 109, 190, 51, 157, 38, 63, 7, 221, 235, 62, 179, 227, 248, 189, 115, 25, 70, 63, 230, 213, 61, 190, 98, 23, 121, 190, 176, 191, 23, 63, 21, 245, 179, 62, 166, 172, 39, 62, 53, 88, 32, 63, 133, 20, 49, 190, 79, 177, 70, 190, 196, 211, 25, 191, 79, 206, 243, 61, 171, 51, 160, 61, 122, 198, 63, 191, 24, 65, 231, 61, 35, 103, 222, 190, 1, 177, 229, 62, 21, 17, 99, 190, 141, 185, 29, 63, 179, 17, 198, 190, 140, 12, 154, 189, 133, 222, 220, 60, 85, 73, 219, 190, 18, 200, 85, 189, 243, 248, 166, 62, 110, 76, 31, 191, 198, 26, 8, 62, 137, 247, 190, 189, 240, 151, 248, 190, 253, 205, 33, 188, 207, 136, 232, 62, 75, 194, 63, 190, 198, 245, 11, 191};
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
                alignas(float) const unsigned char memory[] = {240, 131, 244, 190, 131, 86, 221, 188, 64, 108, 145, 61, 168, 133, 252, 62, 141, 118, 76, 190, 217, 196, 252, 61, 251, 12, 176, 61, 117, 124, 194, 189, 211, 134, 211, 190, 11, 31, 46, 62, 131, 50, 40, 190, 4, 25, 228, 189, 224, 21, 136, 190, 11, 177, 10, 63, 132, 198, 156, 61, 253, 207, 54, 63, 19, 253, 32, 188, 225, 196, 142, 62, 255, 17, 251, 61, 87, 154, 222, 59, 115, 12, 229, 62, 234, 35, 7, 62, 98, 36, 29, 63, 54, 160, 175, 62, 143, 209, 145, 189, 162, 187, 96, 62, 24, 78, 63, 190, 139, 162, 76, 189, 61, 44, 184, 190, 28, 208, 224, 62, 117, 143, 215, 62, 39, 112, 180, 190};
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
                alignas(float) const unsigned char memory[] = {233, 236, 148, 189, 31, 225, 200, 189, 115, 223, 66, 189, 34, 190, 190, 189, 244, 196, 40, 61, 34, 208, 254, 189, 122, 187, 203, 189, 246, 110, 24, 62, 4, 215, 219, 189, 89, 149, 32, 61, 156, 214, 149, 59, 43, 112, 155, 61, 204, 111, 32, 190, 222, 34, 118, 189, 158, 22, 226, 189, 220, 205, 206, 189, 127, 63, 240, 189, 182, 23, 9, 62, 171, 54, 41, 61, 189, 151, 25, 60, 123, 87, 183, 59, 251, 206, 144, 188, 3, 108, 69, 189, 76, 66, 175, 189, 44, 253, 125, 189, 151, 176, 131, 189, 132, 239, 79, 189, 210, 117, 173, 189, 254, 47, 148, 189, 241, 202, 38, 190, 147, 125, 80, 61, 195, 178, 85, 189, 160, 217, 106, 61, 3, 176, 0, 62, 51, 53, 16, 190, 15, 162, 220, 61, 43, 221, 9, 62, 104, 41, 117, 62, 249, 161, 43, 62, 145, 144, 118, 189, 135, 237, 130, 61, 54, 56, 208, 188, 45, 75, 218, 61, 185, 16, 249, 61, 102, 151, 75, 62, 231, 44, 182, 189, 238, 151, 159, 188, 195, 68, 9, 61, 1, 88, 255, 61, 175, 33, 28, 190, 2, 153, 64, 189, 97, 254, 109, 62, 112, 193, 19, 62, 178, 224, 59, 189, 122, 254, 148, 189, 178, 195, 130, 189, 211, 40, 22, 190, 72, 253, 123, 190, 174, 60, 68, 61, 115, 200, 84, 190, 148, 179, 121, 61, 243, 231, 62, 190, 87, 203, 101, 190, 4, 135, 13, 60, 67, 23, 67, 189, 213, 93, 33, 62, 59, 161, 205, 61, 122, 31, 184, 189, 144, 128, 221, 61, 123, 14, 251, 61, 157, 63, 34, 60, 228, 141, 104, 189, 0, 162, 142, 58, 205, 238, 145, 61, 7, 254, 151, 189, 25, 232, 96, 188, 29, 23, 167, 186, 162, 88, 180, 60, 121, 102, 187, 61, 164, 230, 71, 190, 50, 227, 99, 62, 149, 132, 92, 189, 172, 7, 203, 61, 42, 32, 14, 189, 84, 157, 213, 189, 247, 38, 80, 61, 249, 72, 207, 61, 63, 181, 168, 189, 184, 76, 99, 62, 244, 75, 45, 189, 158, 185, 111, 190, 46, 97, 140, 189, 82, 108, 131, 61, 70, 136, 104, 62, 85, 143, 22, 189, 202, 204, 73, 190, 186, 148, 163, 189, 128, 56, 10, 191, 16, 42, 9, 62, 3, 50, 166, 60, 178, 163, 141, 62, 184, 21, 142, 61, 176, 202, 87, 190, 247, 132, 48, 189, 198, 125, 12, 191, 228, 97, 131, 61, 103, 165, 181, 60, 127, 184, 156, 189, 228, 199, 103, 190, 41, 182, 217, 61, 104, 213, 101, 189, 174, 100, 100, 62, 124, 236, 67, 190, 29, 243, 53, 62, 248, 110, 175, 62, 66, 201, 163, 190, 237, 141, 72, 61, 90, 98, 136, 190, 90, 122, 233, 189, 215, 244, 24, 191, 144, 66, 94, 62, 188, 208, 92, 62, 196, 153, 116, 190, 219, 37, 133, 61, 239, 211, 59, 189, 74, 232, 45, 62, 212, 234, 105, 62, 170, 168, 71, 190, 174, 200, 22, 62, 90, 220, 151, 61, 125, 17, 158, 61, 252, 129, 203, 189, 46, 232, 6, 62, 30, 161, 104, 62, 91, 155, 196, 61, 98, 209, 56, 188, 219, 84, 90, 190, 168, 44, 132, 62, 90, 193, 220, 61, 150, 70, 133, 189, 227, 34, 73, 189, 98, 56, 17, 190, 52, 56, 116, 62, 7, 115, 130, 61, 131, 137, 35, 62, 59, 10, 229, 61, 45, 46, 109, 62, 57, 44, 40, 190, 46, 133, 253, 189, 154, 185, 99, 190, 209, 214, 0, 190, 211, 68, 144, 189, 16, 167, 211, 61, 173, 127, 140, 62, 106, 40, 84, 60, 41, 190, 6, 189, 254, 110, 235, 189, 166, 108, 141, 62, 134, 122, 251, 61, 7, 40, 199, 60, 157, 191, 209, 61, 14, 254, 255, 189, 175, 111, 211, 189, 178, 220, 232, 60, 161, 212, 193, 189, 64, 123, 150, 189, 114, 160, 0, 190, 117, 168, 1, 61, 81, 152, 26, 190, 228, 4, 121, 184, 81, 134, 59, 189, 144, 155, 16, 190, 222, 199, 111, 59, 240, 0, 94, 189, 157, 226, 26, 189, 194, 173, 230, 61, 84, 140, 53, 190, 163, 249, 25, 190, 153, 174, 170, 189, 235, 155, 29, 61, 42, 13, 208, 61, 116, 106, 244, 188, 76, 194, 88, 190, 11, 186, 104, 61, 109, 123, 40, 189, 146, 36, 6, 190, 252, 157, 5, 190, 94, 37, 38, 189, 233, 142, 40, 190, 198, 179, 193, 189, 15, 70, 70, 61, 41, 43, 241, 189, 192, 215, 222, 61, 175, 2, 191, 61, 81, 84, 184, 188, 63, 179, 35, 62, 200, 5, 112, 62, 196, 55, 52, 61, 22, 105, 190, 61, 195, 183, 59, 62, 119, 213, 116, 190, 226, 91, 24, 62, 217, 75, 135, 189, 195, 4, 168, 187, 46, 146, 134, 61, 156, 123, 40, 190, 74, 117, 90, 61, 63, 40, 103, 61, 177, 244, 168, 189, 217, 253, 133, 189, 171, 140, 4, 62, 244, 163, 115, 189, 65, 199, 20, 190, 155, 174, 28, 188, 23, 0, 166, 189, 72, 145, 29, 62, 182, 251, 4, 62, 129, 40, 120, 62, 8, 92, 29, 189, 105, 31, 193, 186, 66, 31, 13, 190, 88, 90, 64, 188, 95, 206, 155, 60, 54, 235, 220, 61, 7, 25, 26, 59, 186, 174, 177, 62, 142, 194, 118, 189, 158, 41, 106, 190, 103, 165, 135, 61, 184, 214, 66, 61, 19, 102, 98, 62, 5, 116, 208, 189, 203, 196, 167, 61, 83, 150, 208, 61, 248, 58, 58, 190, 154, 17, 111, 190, 10, 171, 153, 190, 239, 213, 33, 62, 117, 44, 86, 62, 165, 196, 141, 62, 101, 150, 19, 62, 251, 202, 53, 190, 156, 162, 163, 189, 62, 31, 156, 62, 86, 85, 209, 61, 252, 103, 148, 62, 242, 251, 35, 62, 132, 99, 201, 62, 226, 195, 208, 190, 193, 8, 131, 190, 190, 43, 143, 62, 198, 219, 240, 189, 53, 239, 87, 61, 252, 152, 184, 61, 210, 255, 130, 61, 27, 90, 56, 190, 98, 100, 47, 189, 179, 56, 67, 190, 87, 44, 142, 62, 43, 247, 14, 62, 171, 244, 198, 62, 73, 97, 34, 189, 226, 169, 148, 190, 136, 141, 190, 189, 48, 19, 177, 190, 101, 217, 135, 61, 157, 143, 100, 62, 254, 180, 10, 60, 55, 107, 236, 61, 0, 91, 235, 188, 247, 145, 8, 60, 211, 17, 245, 61, 70, 203, 170, 190, 187, 199, 149, 187, 131, 45, 12, 62, 79, 169, 154, 60, 34, 109, 181, 189, 193, 176, 133, 190, 135, 58, 29, 190, 160, 57, 104, 188, 19, 253, 138, 62, 187, 195, 44, 62, 182, 71, 162, 189, 170, 191, 189, 189, 66, 113, 101, 190, 66, 181, 83, 61, 18, 203, 106, 62, 11, 181, 216, 61, 174, 194, 147, 190, 180, 103, 138, 61, 247, 36, 137, 190, 248, 174, 181, 188, 61, 160, 36, 190, 120, 177, 212, 61, 170, 208, 59, 62, 198, 247, 146, 188, 164, 24, 46, 62, 235, 99, 64, 190, 83, 157, 25, 61, 167, 232, 230, 188, 208, 48, 3, 62, 135, 150, 71, 189, 204, 210, 242, 189, 128, 23, 64, 56, 232, 146, 227, 188, 201, 110, 131, 61, 135, 220, 50, 189, 144, 109, 228, 187, 56, 202, 16, 62, 195, 72, 181, 62, 106, 146, 4, 62, 52, 161, 161, 62, 21, 94, 61, 190, 98, 50, 113, 190, 181, 199, 124, 60, 247, 31, 195, 189, 231, 83, 131, 62, 140, 134, 112, 190, 19, 36, 57, 62, 188, 128, 172, 61, 96, 200, 220, 61, 16, 176, 85, 190, 31, 156, 207, 61, 180, 172, 163, 189, 70, 35, 67, 62, 112, 42, 207, 189, 49, 126, 225, 61, 80, 61, 13, 190, 69, 203, 102, 62, 164, 67, 39, 62, 56, 107, 245, 61, 145, 190, 194, 61, 183, 35, 53, 62, 196, 134, 112, 189, 3, 218, 7, 62, 222, 199, 44, 190, 106, 153, 223, 188, 236, 168, 255, 187, 207, 56, 62, 62, 237, 70, 95, 61, 15, 253, 21, 190, 149, 212, 46, 190, 226, 59, 207, 61, 20, 135, 42, 190, 83, 140, 237, 61, 58, 156, 79, 62, 116, 218, 229, 189, 33, 190, 179, 59, 75, 4, 161, 61, 137, 10, 133, 188, 58, 49, 84, 189, 52, 125, 74, 62, 40, 229, 64, 189, 29, 198, 167, 189, 152, 254, 227, 61, 32, 62, 32, 61, 167, 204, 177, 61, 68, 76, 153, 188, 49, 221, 46, 189, 198, 85, 125, 188, 99, 150, 166, 61, 166, 227, 225, 61, 212, 96, 44, 189, 69, 12, 182, 61, 224, 214, 79, 188, 222, 246, 227, 61, 211, 110, 21, 190, 13, 71, 94, 61, 145, 170, 152, 190, 43, 31, 254, 61, 118, 11, 151, 189, 82, 51, 172, 61, 111, 243, 50, 190, 47, 213, 102, 190, 102, 215, 34, 190, 250, 186, 115, 61, 210, 11, 128, 62, 49, 140, 98, 61, 75, 191, 130, 61, 35, 235, 137, 189, 38, 135, 106, 189, 139, 246, 70, 62, 45, 13, 21, 188, 116, 35, 232, 61, 169, 155, 15, 190, 71, 38, 1, 189, 1, 30, 12, 62, 137, 233, 243, 61, 41, 88, 14, 188, 147, 103, 175, 61, 111, 171, 34, 190, 197, 230, 131, 61, 129, 26, 253, 189, 227, 238, 162, 61, 81, 146, 50, 189, 215, 44, 15, 62, 185, 143, 194, 189, 32, 34, 97, 190, 219, 87, 117, 62, 19, 137, 187, 61, 240, 170, 143, 189, 84, 12, 8, 189, 89, 180, 154, 61, 138, 249, 160, 61, 2, 0, 28, 190, 62, 67, 224, 61, 232, 212, 141, 190, 244, 129, 124, 61, 101, 91, 72, 62, 179, 15, 79, 61, 39, 172, 173, 189, 69, 49, 117, 60, 99, 126, 49, 190, 151, 195, 78, 62, 152, 71, 26, 189, 137, 79, 132, 61, 155, 87, 6, 62, 184, 46, 8, 190, 169, 146, 11, 189, 159, 134, 123, 61, 37, 3, 189, 61, 142, 206, 238, 189, 181, 97, 164, 188, 42, 109, 21, 190, 95, 120, 71, 61, 77, 115, 252, 189, 129, 178, 45, 190, 101, 94, 164, 189, 137, 15, 190, 189, 10, 215, 217, 61, 6, 193, 69, 190, 134, 155, 19, 190, 137, 241, 138, 189, 13, 196, 151, 189, 185, 168, 105, 61, 173, 217, 9, 189, 154, 34, 195, 60, 252, 219, 239, 189, 11, 201, 12, 190, 203, 131, 25, 62, 203, 183, 225, 61, 51, 49, 165, 61, 27, 25, 69, 188, 77, 110, 218, 60, 239, 129, 214, 188, 144, 0, 45, 61, 77, 75, 23, 190, 112, 221, 138, 188, 53, 131, 155, 188, 54, 148, 98, 189, 42, 25, 186, 189, 66, 166, 220, 61, 100, 172, 96, 190, 141, 72, 241, 188, 36, 214, 15, 62, 241, 35, 163, 61, 174, 227, 69, 186, 251, 54, 168, 61, 253, 15, 82, 61, 46, 175, 140, 60, 169, 246, 168, 189, 211, 114, 34, 188, 125, 87, 77, 61, 105, 186, 6, 190, 97, 162, 3, 190, 81, 229, 158, 61, 51, 107, 202, 61, 20, 37, 227, 188, 180, 157, 40, 61, 249, 202, 215, 61, 162, 250, 32, 62, 103, 49, 166, 61, 47, 138, 157, 61, 67, 18, 134, 189, 211, 23, 24, 62, 232, 124, 212, 188, 250, 106, 252, 61, 50, 205, 39, 190, 168, 2, 215, 189, 188, 148, 52, 61, 230, 113, 110, 62, 68, 53, 98, 190, 143, 232, 50, 62, 128, 19, 38, 62, 199, 242, 14, 62, 30, 93, 14, 62, 146, 183, 102, 188, 240, 201, 179, 60, 148, 118, 227, 190, 108, 98, 65, 62, 40, 31, 3, 61, 233, 182, 129, 60, 37, 60, 187, 61, 16, 227, 50, 61, 23, 231, 232, 189, 15, 204, 131, 189, 11, 248, 159, 61, 214, 178, 34, 62, 32, 229, 59, 62, 116, 102, 75, 190, 60, 179, 53, 190, 167, 26, 94, 190, 160, 133, 206, 61, 124, 196, 128, 190, 254, 166, 72, 62, 175, 158, 125, 62, 196, 185, 104, 189, 204, 207, 42, 61, 235, 157, 6, 188, 250, 84, 9, 62, 221, 221, 19, 62, 34, 224, 8, 190, 199, 148, 100, 62, 209, 202, 194, 189, 159, 34, 172, 62, 145, 226, 239, 61, 147, 181, 35, 62, 128, 232, 98, 62, 248, 113, 17, 190, 61, 159, 72, 62, 42, 38, 219, 190, 7, 48, 30, 189, 234, 70, 231, 61, 87, 221, 155, 61, 95, 174, 52, 62, 252, 199, 208, 61, 74, 171, 59, 189, 170, 48, 65, 62, 59, 205, 9, 188, 126, 151, 10, 190, 47, 8, 190, 60, 173, 41, 109, 190, 119, 25, 129, 190, 70, 95, 135, 61, 107, 158, 15, 190, 134, 110, 39, 61, 72, 46, 146, 62, 0, 114, 29, 61, 25, 232, 83, 190, 237, 167, 30, 189, 49, 1, 130, 61, 30, 15, 77, 62, 225, 44, 102, 60, 35, 45, 240, 59, 115, 139, 37, 61, 149, 118, 202, 61, 93, 225, 51, 62, 220, 112, 8, 190, 46, 219, 7, 188, 107, 95, 130, 189, 247, 130, 104, 189, 136, 51, 47, 190, 194, 166, 19, 190, 243, 7, 36, 190, 52, 165, 90, 61, 76, 69, 33, 190, 77, 203, 213, 61, 87, 173, 50, 190, 246, 236, 168, 61, 205, 163, 75, 60, 220, 157, 87, 189, 64, 110, 18, 190, 229, 83, 157, 61, 58, 205, 118, 189, 249, 118, 240, 189, 43, 120, 26, 62, 8, 75, 63, 188, 15, 77, 31, 188, 77, 186, 147, 189, 102, 154, 18, 58, 222, 92, 22, 190, 236, 254, 233, 189, 140, 170, 23, 190, 105, 83, 113, 61, 165, 227, 158, 189, 53, 111, 216, 188, 51, 4, 172, 188, 60, 238, 140, 189, 82, 197, 163, 189, 156, 207, 10, 190, 63, 137, 151, 188, 57, 202, 252, 189, 69, 100, 245, 61, 183, 94, 184, 188, 138, 148, 44, 61, 156, 51, 195, 188, 37, 106, 191, 61, 95, 126, 112, 60, 217, 227, 158, 189, 92, 40, 7, 189, 241, 19, 12, 62, 168, 244, 64, 189, 178, 252, 18, 190, 78, 200, 11, 62, 81, 23, 90, 61, 39, 149, 49, 61, 38, 127, 116, 187, 214, 115, 252, 189, 147, 28, 120, 61, 181, 113, 40, 190, 233, 168, 202, 61, 81, 254, 172, 60, 86, 131, 69, 189, 10, 151, 215, 189, 29, 19, 138, 189, 56, 195, 187, 60, 237, 86, 28, 190, 48, 173, 155, 61, 169, 162, 154, 189, 181, 94, 243, 189, 177, 15, 195, 188, 94, 56, 176, 187, 217, 161, 156, 189, 70, 253, 16, 60, 117, 46, 232, 189, 108, 79, 221, 189, 231, 20, 84, 58, 64, 246, 32, 188, 173, 219, 170, 188, 182, 196, 231, 61, 66, 159, 204, 189, 230, 208, 245, 61, 52, 64, 160, 189, 184, 115, 28, 190, 29, 24, 130, 189, 161, 147, 143, 58, 181, 13, 184, 61, 87, 0, 25, 62, 40, 70, 171, 189, 160, 207, 99, 61, 165, 188, 42, 189, 247, 242, 207, 61, 88, 176, 208, 61, 232, 163, 68, 61, 117, 17, 219, 188, 146, 174, 193, 189, 180, 20, 104, 61, 167, 168, 20, 62, 18, 237, 32, 190, 160, 19, 227, 61, 22, 47, 169, 189, 198, 220, 49, 61, 243, 190, 113, 189, 116, 186, 173, 189, 69, 6, 77, 61, 67, 218, 38, 61, 165, 109, 105, 61, 235, 237, 50, 189, 0, 116, 236, 189, 122, 200, 30, 190, 109, 173, 132, 189, 243, 98, 182, 61, 98, 13, 41, 62, 236, 195, 237, 189, 145, 165, 30, 61, 166, 218, 193, 187, 156, 217, 65, 61, 168, 5, 19, 189, 235, 66, 179, 189, 70, 234, 68, 190, 109, 126, 207, 188, 83, 93, 163, 188, 207, 251, 187, 189, 27, 65, 198, 189, 24, 161, 159, 62, 133, 50, 247, 188, 216, 19, 229, 61, 234, 20, 184, 188, 109, 88, 172, 188, 219, 148, 60, 62, 79, 162, 225, 189, 17, 136, 253, 61, 250, 251, 250, 189, 50, 249, 91, 190, 241, 72, 143, 62, 0, 181, 6, 61, 222, 187, 223, 61, 94, 73, 171, 189, 254, 92, 14, 190, 235, 17, 16, 190, 26, 174, 183, 189, 24, 140, 207, 189, 137, 144, 90, 62, 94, 116, 42, 60, 171, 188, 9, 62, 252, 98, 251, 60, 219, 8, 113, 188, 167, 60, 244, 61, 49, 64, 171, 190, 180, 110, 46, 62, 189, 252, 71, 61, 87, 201, 121, 190, 204, 93, 95, 190, 250, 221, 206, 190, 45, 178, 246, 60, 169, 150, 211, 189, 62, 169, 55, 62, 181, 139, 174, 62, 176, 164, 240, 189, 185, 79, 243, 60, 112, 208, 81, 190, 19, 20, 159, 187, 196, 103, 1, 189, 157, 213, 133, 189, 250, 90, 21, 190, 58, 50, 32, 62, 150, 104, 128, 189, 11, 253, 27, 62, 16, 207, 47, 62, 188, 132, 12, 190, 230, 30, 232, 189, 111, 56, 24, 61, 104, 65, 2, 190, 204, 230, 46, 61, 145, 39, 55, 189, 138, 21, 249, 61, 118, 21, 1, 190, 61, 58, 48, 190, 200, 233, 136, 188, 65, 225, 50, 190, 158, 204, 130, 189, 129, 235, 178, 188, 1, 180, 184, 189, 164, 21, 186, 189, 151, 197, 232, 189, 153, 133, 74, 187, 182, 102, 14, 61, 193, 23, 231, 189, 36, 145, 77, 188, 95, 69, 32, 190, 105, 48, 213, 189, 93, 80, 39, 190, 5, 177, 181, 189, 218, 175, 254, 189, 93, 42, 222, 61, 166, 53, 131, 189, 114, 187, 117, 61, 85, 75, 231, 188, 57, 217, 128, 189, 73, 49, 158, 61, 155, 179, 11, 189, 75, 235, 252, 189, 230, 127, 246, 61, 147, 102, 251, 189, 3, 253, 21, 190, 35, 55, 172, 60, 199, 233, 252, 61, 17, 250, 44, 190, 91, 41, 76, 189, 199, 55, 38, 190, 41, 177, 5, 190, 192, 254, 21, 190, 0, 81, 185, 189, 167, 34, 50, 190, 64, 200, 10, 62, 128, 168, 204, 189, 177, 121, 33, 190, 248, 208, 148, 189, 57, 24, 192, 189, 40, 50, 125, 61, 98, 198, 37, 190, 59, 180, 140, 61, 196, 99, 62, 188, 114, 33, 19, 190, 176, 76, 201, 189, 127, 59, 48, 190, 118, 140, 199, 189, 242, 9, 95, 61, 169, 108, 98, 190, 243, 177, 212, 62, 99, 38, 230, 188, 115, 159, 31, 62, 3, 51, 166, 61, 34, 21, 170, 189, 175, 255, 151, 62, 52, 233, 194, 189, 51, 27, 228, 187, 175, 1, 108, 189, 46, 185, 111, 189, 210, 150, 92, 189, 96, 54, 135, 190, 38, 135, 6, 189, 182, 103, 86, 62, 121, 209, 144, 62, 173, 190, 2, 62, 190, 118, 1, 190, 239, 40, 194, 189, 200, 158, 117, 62, 171, 204, 32, 62, 71, 206, 248, 62, 41, 173, 46, 62, 76, 166, 75, 62, 118, 193, 205, 190, 18, 202, 139, 189, 223, 206, 215, 61, 20, 197, 233, 189, 136, 90, 58, 189, 60, 50, 22, 189, 157, 152, 165, 61, 196, 229, 63, 190, 43, 227, 99, 190, 213, 61, 2, 61, 185, 255, 187, 60, 3, 92, 46, 190, 23, 37, 161, 189, 227, 241, 8, 61, 168, 120, 97, 62, 90, 167, 39, 190, 28, 112, 135, 62, 220, 160, 138, 61, 3, 250, 142, 189, 57, 213, 84, 188, 203, 160, 124, 190, 214, 34, 228, 61, 145, 203, 104, 62, 20, 86, 76, 60, 159, 167, 5, 62, 71, 86, 2, 62, 11, 25, 50, 61, 0, 31, 85, 62, 91, 49, 1, 62, 147, 181, 60, 62, 107, 170, 253, 189, 72, 215, 147, 62, 47, 196, 4, 190, 89, 155, 94, 190, 126, 141, 82, 62, 97, 218, 230, 187, 193, 65, 215, 61, 204, 185, 54, 61, 213, 161, 141, 188, 119, 44, 57, 189, 29, 190, 44, 61, 189, 76, 27, 62, 11, 128, 25, 62, 226, 68, 231, 188, 1, 195, 6, 190, 204, 21, 49, 189, 186, 63, 27, 62, 160, 119, 30, 190, 92, 141, 107, 59, 216, 180, 102, 189, 215, 247, 32, 190, 177, 52, 209, 61, 202, 7, 231, 189, 73, 205, 103, 60, 39, 112, 30, 190, 219, 155, 187, 189, 107, 17, 56, 189, 29, 126, 225, 189, 172, 35, 192, 189, 140, 112, 211, 61, 79, 187, 15, 190, 4, 10, 171, 189, 10, 192, 0, 190, 130, 136, 233, 189, 38, 139, 210, 189, 82, 90, 158, 188, 174, 50, 135, 60, 72, 169, 42, 190, 72, 178, 0, 62, 94, 104, 52, 190, 45, 98, 38, 189, 135, 222, 10, 189, 119, 47, 28, 190, 109, 229, 221, 189, 59, 231, 214, 61, 216, 125, 14, 62, 46, 70, 212, 60, 222, 195, 143, 61, 246, 67, 20, 190, 187, 130, 72, 188, 14, 163, 50, 190, 169, 218, 24, 61, 127, 160, 21, 61, 132, 165, 107, 189, 83, 78, 222, 61, 120, 33, 111, 61, 93, 39, 98, 189, 87, 137, 42, 62, 9, 52, 242, 189, 22, 221, 53, 190, 103, 93, 222, 60, 66, 160, 194, 61, 51, 96, 24, 61, 156, 147, 28, 190, 47, 70, 13, 62, 83, 30, 172, 189, 45, 181, 204, 189, 169, 52, 7, 189, 140, 155, 195, 61, 172, 11, 179, 189, 244, 205, 45, 190, 173, 104, 67, 190, 24, 244, 147, 188, 30, 91, 134, 189, 209, 125, 45, 190, 180, 137, 34, 59, 168, 202, 22, 61, 6, 200, 11, 190, 197, 66, 12, 190, 20, 233, 86, 62, 52, 11, 160, 189, 192, 67, 129, 61, 206, 241, 2, 190, 107, 57, 44, 62, 125, 76, 77, 190, 144, 173, 208, 189, 62, 31, 40, 190, 222, 138, 199, 189, 221, 17, 174, 62, 216, 74, 49, 62, 233, 104, 223, 189, 49, 232, 104, 60, 160, 164, 209, 189, 22, 198, 147, 60, 209, 130, 4, 62, 43, 4, 14, 189, 136, 70, 222, 189, 163, 102, 154, 62, 113, 146, 133, 190, 58, 45, 46, 61, 216, 151, 175, 61, 127, 86, 157, 62, 252, 228, 35, 190, 105, 111, 135, 62, 122, 57, 192, 189, 229, 106, 175, 61, 15, 107, 48, 62, 236, 217, 21, 189, 20, 118, 172, 61, 183, 130, 17, 61, 139, 169, 175, 189, 206, 223, 15, 190, 164, 170, 28, 189, 29, 145, 219, 189, 136, 86, 57, 190, 153, 3, 193, 189, 159, 162, 128, 189, 159, 51, 78, 189, 217, 206, 68, 189, 88, 247, 54, 189, 162, 112, 42, 190, 37, 110, 175, 189, 63, 176, 88, 61, 184, 194, 255, 61, 180, 99, 14, 190, 135, 237, 2, 190, 191, 240, 21, 189, 204, 84, 26, 190, 168, 106, 29, 62, 50, 210, 0, 187, 253, 196, 4, 190, 142, 250, 19, 62, 36, 87, 0, 62, 249, 177, 19, 188, 89, 26, 42, 62, 144, 33, 199, 189, 37, 100, 32, 189, 73, 157, 41, 190, 92, 227, 108, 190, 10, 30, 213, 61, 223, 14, 132, 190, 78, 1, 8, 62, 138, 78, 104, 189, 176, 10, 91, 61, 216, 183, 163, 62, 105, 35, 59, 61, 212, 143, 102, 62, 100, 21, 93, 190, 197, 170, 224, 59, 223, 94, 141, 189, 77, 234, 6, 62, 43, 117, 58, 190, 173, 73, 19, 190, 143, 211, 76, 62, 252, 165, 36, 190, 255, 113, 43, 189, 159, 48, 140, 189, 216, 2, 97, 61, 129, 10, 31, 62, 63, 136, 82, 62, 202, 98, 142, 61, 84, 251, 60, 62, 250, 31, 211, 190, 87, 174, 207, 190, 255, 97, 84, 62, 75, 193, 58, 61, 90, 27, 190, 60, 153, 71, 91, 189, 1, 226, 69, 188, 202, 20, 183, 188, 240, 172, 21, 59, 94, 192, 38, 62, 154, 234, 174, 189, 178, 195, 241, 188, 152, 244, 54, 190, 66, 93, 57, 60, 165, 116, 255, 61, 40, 246, 121, 190, 38, 173, 33, 62, 66, 69, 191, 189, 85, 2, 248, 60, 200, 188, 109, 189, 63, 222, 213, 61, 216, 177, 113, 189, 171, 5, 103, 62, 162, 174, 195, 61, 236, 20, 71, 62, 76, 16, 78, 188, 163, 252, 34, 190, 134, 104, 73, 60, 108, 99, 193, 61, 216, 72, 96, 62, 126, 12, 197, 61, 52, 112, 129, 62, 207, 0, 148, 189, 91, 112, 131, 190, 59, 217, 168, 61, 166, 211, 5, 190, 19, 110, 144, 61, 249, 33, 85, 189, 126, 34, 207, 61, 107, 90, 63, 190};
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
                alignas(float) const unsigned char memory[] = {221, 65, 50, 186, 241, 227, 121, 190, 139, 174, 125, 61, 77, 213, 52, 62, 229, 30, 57, 62, 203, 8, 124, 61, 134, 243, 176, 189, 67, 94, 165, 62, 76, 131, 182, 188, 4, 216, 152, 61, 53, 146, 207, 188, 97, 179, 193, 188, 228, 2, 202, 61, 228, 58, 45, 190, 105, 94, 129, 61, 99, 225, 137, 61, 20, 61, 51, 62, 54, 3, 226, 61, 28, 75, 151, 60, 0, 194, 73, 190, 112, 206, 147, 189, 132, 79, 22, 62, 226, 109, 48, 190, 246, 69, 22, 62, 85, 22, 105, 61, 134, 224, 31, 62, 221, 206, 211, 57, 243, 55, 39, 190, 63, 209, 156, 189, 63, 96, 221, 189, 182, 91, 116, 61, 24, 232, 85, 62};
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
                alignas(float) const unsigned char memory[] = {159, 252, 1, 187, 8, 126, 132, 62, 125, 184, 31, 190, 19, 40, 162, 62, 32, 109, 130, 62, 236, 142, 79, 189, 6, 250, 224, 61, 47, 94, 100, 190, 121, 46, 155, 62, 81, 123, 4, 190, 180, 14, 85, 190, 35, 251, 85, 62, 165, 129, 190, 61, 54, 85, 1, 62, 85, 151, 141, 189, 148, 57, 122, 62, 172, 91, 115, 62, 78, 216, 87, 61, 228, 229, 157, 60, 20, 236, 171, 61, 186, 116, 159, 189, 195, 41, 97, 62, 82, 75, 176, 189, 123, 166, 210, 188, 230, 138, 175, 190, 113, 95, 63, 190, 6, 142, 119, 189, 40, 70, 98, 61, 231, 56, 197, 62, 231, 217, 174, 188, 17, 36, 101, 190, 201, 59, 147, 190, 198, 50, 241, 189, 151, 93, 207, 61, 17, 41, 196, 189, 18, 101, 222, 59, 147, 201, 94, 190, 231, 177, 200, 61, 185, 92, 192, 189, 191, 132, 9, 190, 72, 67, 32, 62, 203, 246, 165, 60, 138, 170, 176, 61, 151, 87, 8, 190, 186, 48, 235, 189, 221, 22, 21, 61, 161, 70, 218, 61, 129, 67, 181, 189, 194, 89, 183, 188, 237, 182, 29, 190, 252, 171, 10, 62, 22, 209, 10, 190, 248, 211, 101, 188, 226, 190, 145, 61, 114, 238, 44, 62, 27, 216, 66, 60, 184, 154, 238, 61, 119, 243, 33, 190, 221, 206, 1, 62, 214, 5, 193, 61, 87, 208, 66, 187, 239, 35, 200, 61, 226, 154, 24, 189, 153, 37, 220, 189};
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
                alignas(float) const unsigned char memory[] = {148, 239, 251, 188, 122, 176, 109, 190};
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
    alignas(float) const unsigned char memory[] = {255, 93, 159, 63, 115, 60, 185, 190, 228, 255, 10, 63};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {78, 12, 45, 62, 106, 241, 74, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0041/steps/000000000002000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}