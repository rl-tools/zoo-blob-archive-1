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
                alignas(float) const unsigned char memory[] = {18, 116, 165, 62, 215, 200, 40, 191, 44, 193, 38, 63, 210, 57, 74, 189, 109, 163, 255, 61, 31, 188, 92, 60, 141, 86, 61, 63, 167, 22, 46, 63, 14, 183, 184, 62, 116, 84, 49, 62, 208, 218, 153, 62, 102, 2, 227, 62, 3, 175, 40, 63, 126, 164, 195, 62, 255, 175, 146, 61, 46, 194, 26, 61, 158, 6, 60, 62, 219, 26, 187, 190, 65, 139, 185, 62, 32, 181, 136, 191, 192, 99, 192, 190, 254, 229, 130, 62, 199, 171, 239, 62, 146, 128, 135, 62, 51, 184, 69, 63, 0, 151, 96, 191, 160, 193, 79, 190, 199, 86, 11, 191, 114, 6, 180, 190, 150, 6, 184, 62, 40, 179, 58, 63, 41, 171, 188, 62, 223, 3, 158, 62, 122, 163, 14, 191, 47, 220, 140, 62, 36, 93, 148, 60, 165, 40, 136, 61, 122, 60, 58, 191, 162, 119, 202, 62, 52, 48, 72, 63, 144, 91, 90, 191, 160, 76, 135, 190, 125, 20, 57, 62, 237, 226, 25, 62, 218, 159, 39, 63, 98, 108, 226, 189, 159, 74, 135, 189, 197, 131, 174, 190, 121, 216, 163, 190, 156, 22, 46, 63, 30, 200, 28, 63, 187, 179, 51, 191, 44, 217, 202, 190, 40, 121, 14, 62, 28, 53, 8, 62, 134, 68, 59, 63, 160, 222, 224, 188, 254, 236, 88, 63, 48, 226, 228, 189, 88, 242, 151, 61, 208, 3, 94, 190, 39, 33, 147, 191, 107, 37, 145, 190, 58, 89, 235, 62, 148, 222, 114, 191, 5, 55, 5, 191, 54, 25, 232, 190, 51, 213, 129, 191, 127, 250, 38, 191, 141, 92, 14, 63, 217, 186, 89, 63, 32, 6, 183, 62, 139, 53, 16, 63, 64, 234, 184, 62, 153, 215, 92, 62, 50, 160, 214, 62, 251, 113, 14, 191, 142, 224, 250, 61, 226, 13, 56, 191, 226, 215, 15, 191, 248, 232, 174, 190, 183, 172, 105, 62, 84, 193, 137, 189, 88, 68, 232, 190, 153, 149, 199, 190, 48, 25, 45, 190, 136, 138, 195, 62, 149, 99, 57, 62, 61, 194, 70, 191, 152, 159, 9, 63, 24, 47, 180, 62, 23, 170, 69, 190, 145, 58, 172, 62, 51, 105, 143, 62, 82, 162, 96, 63, 63, 83, 50, 190};
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
                alignas(float) const unsigned char memory[] = {181, 215, 240, 190, 172, 41, 172, 190, 14, 85, 90, 61, 96, 12, 153, 60, 19, 191, 223, 61, 184, 74, 44, 62, 94, 79, 214, 62, 142, 154, 169, 62, 191, 35, 128, 61, 155, 204, 2, 63, 193, 242, 84, 191, 223, 244, 31, 63, 208, 38, 197, 62, 77, 22, 218, 190, 16, 60, 10, 63, 164, 103, 219, 188, 239, 136, 27, 61, 170, 96, 34, 63, 186, 57, 1, 191, 21, 218, 231, 61, 9, 59, 145, 190, 147, 86, 28, 191, 43, 76, 34, 61, 2, 9, 15, 191, 122, 38, 198, 190, 14, 224, 33, 62, 56, 249, 36, 191, 113, 161, 5, 189, 152, 240, 27, 190, 176, 175, 218, 62, 252, 235, 46, 63, 150, 71, 192, 61};
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
                alignas(float) const unsigned char memory[] = {167, 117, 151, 190, 227, 229, 25, 62, 27, 117, 167, 61, 224, 110, 16, 190, 128, 121, 185, 62, 12, 44, 243, 61, 6, 82, 20, 62, 57, 16, 196, 61, 78, 205, 173, 61, 228, 87, 44, 190, 228, 45, 166, 189, 195, 128, 31, 190, 24, 9, 253, 189, 13, 200, 235, 190, 144, 104, 5, 190, 161, 167, 16, 189, 224, 84, 206, 190, 61, 145, 250, 188, 65, 108, 10, 189, 120, 16, 10, 63, 94, 208, 182, 189, 218, 30, 253, 190, 111, 102, 82, 190, 47, 131, 25, 191, 146, 205, 216, 189, 158, 214, 162, 190, 139, 134, 203, 189, 6, 141, 50, 189, 202, 60, 81, 190, 174, 67, 166, 61, 45, 68, 161, 60, 45, 34, 210, 189, 89, 38, 146, 190, 106, 134, 23, 62, 4, 213, 253, 189, 142, 61, 223, 189, 63, 31, 21, 190, 87, 87, 10, 62, 226, 186, 92, 62, 107, 139, 188, 189, 181, 62, 172, 62, 170, 217, 41, 62, 32, 141, 33, 191, 16, 220, 18, 62, 84, 30, 128, 62, 235, 77, 35, 63, 166, 37, 118, 61, 74, 116, 178, 189, 210, 80, 55, 62, 151, 107, 251, 61, 84, 182, 220, 190, 225, 141, 3, 190, 28, 255, 132, 190, 56, 236, 17, 62, 15, 218, 159, 61, 81, 0, 220, 190, 78, 167, 150, 190, 64, 239, 212, 61, 94, 152, 78, 189, 108, 61, 3, 62, 196, 140, 82, 62, 104, 225, 3, 190, 115, 106, 112, 62, 111, 154, 96, 190, 255, 45, 152, 189, 228, 152, 192, 189, 221, 139, 60, 190, 171, 80, 45, 190, 38, 87, 114, 61, 4, 21, 216, 188, 236, 145, 152, 61, 201, 66, 77, 61, 229, 59, 241, 188, 54, 100, 71, 189, 191, 89, 91, 189, 132, 19, 79, 61, 26, 147, 129, 189, 154, 71, 43, 190, 187, 39, 23, 188, 71, 125, 153, 188, 62, 54, 253, 61, 174, 170, 31, 190, 6, 240, 176, 59, 140, 29, 241, 189, 1, 227, 4, 190, 140, 237, 199, 188, 107, 253, 240, 189, 106, 246, 135, 61, 40, 67, 2, 62, 98, 110, 156, 61, 235, 99, 148, 188, 145, 244, 110, 189, 113, 52, 111, 189, 244, 186, 232, 61, 255, 199, 208, 61, 186, 146, 253, 188, 22, 79, 86, 62, 225, 253, 238, 61, 62, 7, 206, 62, 180, 202, 122, 187, 211, 229, 138, 62, 157, 35, 59, 62, 125, 20, 61, 190, 195, 22, 55, 62, 168, 201, 7, 190, 93, 199, 14, 190, 61, 6, 216, 62, 153, 207, 136, 190, 212, 35, 3, 190, 115, 151, 68, 191, 248, 17, 200, 61, 123, 244, 139, 189, 242, 82, 194, 189, 37, 35, 168, 190, 70, 127, 11, 63, 204, 161, 217, 62, 181, 62, 57, 62, 130, 105, 231, 190, 4, 157, 164, 189, 128, 28, 217, 187, 17, 157, 191, 62, 167, 152, 163, 190, 27, 182, 51, 60, 97, 58, 150, 61, 82, 65, 234, 190, 153, 184, 137, 62, 188, 83, 7, 190, 211, 111, 191, 62, 52, 136, 248, 190, 104, 151, 169, 189, 104, 130, 48, 191, 143, 104, 217, 190, 89, 247, 132, 190, 13, 207, 52, 62, 205, 26, 1, 189, 109, 246, 213, 61, 88, 34, 33, 190, 28, 173, 89, 61, 166, 186, 49, 189, 246, 182, 173, 188, 114, 82, 123, 189, 117, 207, 8, 62, 210, 146, 48, 190, 109, 16, 161, 190, 124, 160, 134, 62, 30, 37, 230, 61, 64, 141, 166, 190, 205, 142, 5, 191, 129, 227, 24, 191, 204, 104, 50, 62, 22, 76, 82, 190, 101, 254, 253, 189, 225, 106, 230, 190, 243, 33, 138, 189, 26, 28, 221, 190, 165, 106, 33, 62, 55, 113, 245, 61, 117, 227, 23, 191, 191, 6, 210, 189, 5, 53, 135, 189, 74, 112, 176, 62, 252, 168, 38, 62, 148, 143, 246, 61, 61, 227, 47, 188, 121, 154, 38, 62, 201, 194, 175, 62, 9, 126, 202, 190, 98, 170, 24, 60, 254, 151, 75, 190, 217, 126, 65, 190, 79, 243, 175, 62, 24, 13, 34, 189, 38, 54, 31, 190, 192, 19, 136, 191, 94, 110, 116, 189, 184, 233, 55, 62, 239, 106, 172, 187, 116, 193, 23, 190, 48, 162, 123, 62, 28, 22, 205, 62, 251, 3, 39, 62, 137, 69, 101, 190, 235, 16, 22, 188, 21, 228, 188, 62, 201, 171, 112, 62, 24, 33, 234, 189, 251, 167, 227, 62, 18, 216, 57, 190, 151, 102, 45, 190, 193, 87, 116, 62, 38, 231, 123, 190, 10, 36, 9, 63, 178, 72, 28, 61, 78, 235, 196, 61, 5, 36, 13, 190, 48, 255, 186, 189, 117, 143, 187, 188, 52, 198, 66, 189, 109, 96, 49, 62, 108, 10, 203, 61, 140, 0, 168, 190, 160, 11, 158, 61, 82, 198, 116, 62, 20, 187, 232, 188, 6, 122, 99, 62, 52, 180, 89, 190, 174, 156, 80, 59, 150, 178, 34, 189, 171, 8, 243, 60, 140, 151, 104, 62, 131, 238, 185, 62, 53, 44, 16, 191, 48, 130, 99, 62, 150, 86, 23, 189, 18, 114, 108, 61, 137, 187, 35, 62, 65, 53, 37, 62, 188, 193, 244, 61, 221, 153, 7, 62, 121, 23, 149, 190, 252, 210, 191, 62, 212, 61, 118, 61, 255, 15, 16, 62, 193, 181, 222, 190, 170, 92, 183, 189, 230, 214, 73, 188, 78, 12, 237, 61, 60, 20, 66, 190, 120, 249, 28, 188, 252, 187, 9, 62, 23, 122, 11, 190, 221, 221, 54, 190, 139, 208, 231, 189, 194, 233, 229, 60, 169, 130, 63, 190, 7, 67, 158, 60, 150, 204, 52, 190, 174, 36, 243, 189, 24, 202, 121, 61, 192, 152, 181, 189, 128, 16, 178, 189, 180, 103, 82, 61, 53, 249, 31, 190, 234, 177, 114, 61, 22, 198, 238, 189, 163, 50, 234, 189, 36, 120, 104, 189, 142, 170, 240, 61, 158, 246, 175, 61, 49, 123, 18, 189, 27, 136, 168, 60, 217, 73, 240, 61, 92, 194, 33, 62, 79, 215, 194, 187, 232, 78, 117, 61, 0, 217, 7, 190, 242, 130, 216, 60, 223, 30, 138, 189, 98, 68, 203, 61, 60, 30, 89, 60, 184, 125, 77, 188, 90, 54, 72, 60, 117, 240, 231, 60, 25, 227, 62, 62, 72, 154, 76, 62, 145, 217, 37, 59, 167, 251, 111, 190, 44, 23, 11, 61, 122, 45, 77, 61, 34, 146, 186, 62, 189, 117, 86, 188, 171, 104, 56, 61, 55, 39, 8, 60, 213, 33, 57, 62, 241, 128, 2, 190, 163, 106, 65, 190, 177, 137, 90, 190, 57, 135, 68, 62, 58, 12, 98, 61, 163, 207, 144, 189, 197, 198, 181, 59, 15, 182, 190, 62, 57, 57, 227, 189, 10, 206, 172, 62, 42, 84, 155, 62, 89, 96, 144, 61, 203, 105, 176, 62, 9, 23, 167, 61, 26, 236, 226, 190, 42, 110, 145, 61, 247, 246, 42, 191, 117, 207, 234, 190, 139, 190, 151, 61, 137, 253, 7, 62, 136, 39, 29, 190, 184, 201, 148, 190, 22, 157, 81, 190, 45, 217, 243, 189, 118, 67, 60, 188, 211, 205, 130, 62, 22, 173, 11, 62, 27, 115, 90, 62, 83, 228, 178, 190, 5, 14, 142, 189, 89, 229, 174, 189, 225, 94, 198, 62, 71, 161, 49, 190, 218, 29, 136, 62, 228, 113, 138, 190, 177, 24, 230, 189, 242, 124, 128, 60, 68, 237, 158, 190, 251, 108, 155, 190, 45, 96, 97, 190, 238, 219, 102, 190, 35, 36, 100, 62, 219, 89, 55, 61, 116, 109, 20, 191, 154, 16, 240, 190, 1, 69, 48, 189, 192, 194, 129, 62, 148, 118, 129, 61, 143, 126, 168, 62, 204, 140, 124, 62, 227, 114, 91, 62, 181, 218, 48, 190, 170, 62, 147, 190, 179, 5, 253, 61, 193, 6, 174, 190, 46, 37, 84, 190, 2, 170, 108, 62, 66, 192, 101, 190, 210, 172, 107, 189, 40, 28, 103, 189, 215, 252, 245, 189, 84, 83, 80, 62, 163, 186, 233, 189, 147, 158, 30, 191, 139, 3, 136, 62, 191, 24, 16, 62, 254, 71, 34, 62, 113, 83, 83, 190, 247, 177, 80, 62, 113, 67, 148, 62, 73, 156, 188, 62, 115, 129, 64, 190, 53, 81, 162, 189, 20, 110, 120, 190, 68, 112, 165, 190, 223, 70, 139, 189, 205, 242, 25, 189, 46, 189, 177, 62, 227, 204, 20, 61, 161, 138, 219, 61, 224, 132, 75, 189, 118, 117, 29, 189, 168, 101, 175, 62, 116, 83, 33, 62, 89, 252, 219, 189, 33, 127, 41, 62, 128, 86, 231, 188, 151, 187, 167, 189, 201, 72, 195, 189, 160, 225, 54, 62, 69, 90, 154, 61, 74, 199, 48, 191, 106, 199, 249, 61, 53, 154, 208, 61, 252, 62, 83, 189, 166, 231, 36, 62, 127, 199, 149, 62, 141, 74, 134, 62, 108, 105, 232, 61, 7, 82, 201, 189, 55, 85, 157, 61, 164, 47, 203, 60, 143, 167, 96, 189, 47, 104, 8, 190, 151, 18, 252, 61, 76, 96, 33, 190, 207, 127, 243, 190, 214, 136, 39, 62, 230, 205, 94, 60, 117, 142, 251, 61, 52, 165, 149, 62, 20, 54, 245, 61, 253, 234, 98, 62, 4, 253, 64, 62, 229, 51, 215, 62, 159, 15, 0, 188, 7, 13, 25, 62, 210, 76, 30, 189, 75, 86, 138, 190, 195, 209, 60, 189, 195, 219, 4, 63, 185, 28, 23, 62, 166, 57, 129, 190, 178, 202, 75, 191, 209, 176, 34, 189, 204, 153, 54, 62, 115, 243, 128, 190, 85, 135, 228, 60, 181, 129, 12, 62, 223, 130, 7, 63, 1, 246, 159, 61, 139, 217, 119, 190, 49, 124, 52, 62, 158, 212, 141, 62, 233, 54, 154, 62, 40, 251, 170, 189, 162, 126, 185, 62, 47, 180, 241, 190, 8, 110, 253, 190, 199, 160, 22, 62, 225, 223, 52, 190, 54, 214, 154, 62, 79, 207, 141, 189, 67, 243, 182, 60, 235, 106, 206, 190, 106, 156, 53, 190, 86, 223, 96, 189, 201, 154, 39, 62, 88, 121, 40, 191, 159, 56, 90, 190, 16, 23, 129, 190, 153, 22, 182, 61, 55, 159, 27, 187, 55, 183, 127, 62, 60, 219, 30, 61, 134, 142, 192, 190, 88, 47, 186, 60, 182, 125, 84, 62, 186, 40, 23, 62, 217, 233, 252, 189, 215, 239, 253, 62, 1, 78, 127, 189, 71, 67, 206, 190, 249, 0, 243, 188, 115, 202, 230, 190, 211, 255, 170, 190, 8, 127, 85, 190, 36, 139, 145, 190, 107, 29, 252, 189, 233, 118, 174, 62, 177, 184, 201, 61, 87, 152, 83, 189, 24, 214, 176, 189, 215, 128, 195, 62, 123, 232, 68, 190, 108, 103, 106, 61, 29, 194, 197, 61, 69, 244, 224, 61, 150, 201, 213, 60, 190, 6, 245, 189, 113, 48, 239, 189, 205, 73, 20, 189, 63, 194, 209, 61, 183, 77, 112, 189, 81, 160, 49, 190, 51, 59, 67, 190, 36, 137, 55, 190, 94, 52, 47, 190, 134, 83, 120, 61, 181, 222, 29, 190, 48, 215, 149, 187, 233, 159, 60, 190, 225, 253, 147, 61, 81, 8, 75, 188, 42, 46, 193, 189, 77, 118, 195, 187, 146, 164, 103, 61, 30, 87, 114, 61, 200, 157, 66, 190, 21, 31, 155, 59, 124, 255, 213, 61, 247, 86, 164, 61, 116, 138, 50, 190, 40, 237, 196, 189, 87, 224, 127, 60, 31, 140, 118, 186, 131, 179, 208, 61, 115, 159, 16, 190, 251, 251, 173, 62, 65, 105, 116, 62, 77, 160, 161, 62, 114, 89, 188, 61, 24, 248, 35, 62, 236, 233, 114, 188, 144, 15, 24, 190, 61, 84, 231, 189, 147, 221, 135, 62, 86, 18, 183, 188, 12, 160, 17, 190, 28, 248, 132, 191, 120, 152, 20, 189, 220, 147, 5, 62, 66, 2, 247, 189, 207, 9, 117, 60, 158, 239, 249, 62, 157, 47, 169, 62, 40, 124, 128, 62, 107, 37, 63, 190, 10, 44, 41, 61, 159, 92, 74, 189, 76, 49, 144, 62, 11, 235, 32, 190, 129, 197, 45, 62, 12, 136, 123, 190, 236, 67, 38, 191, 163, 172, 76, 62, 117, 99, 110, 61, 183, 145, 24, 62, 61, 50, 1, 190, 252, 197, 43, 190, 112, 45, 8, 62, 197, 174, 65, 61, 37, 80, 233, 189, 32, 201, 124, 189, 78, 247, 55, 60, 245, 185, 92, 188, 240, 246, 155, 62, 175, 53, 82, 61, 36, 126, 16, 190, 245, 186, 80, 190, 184, 8, 33, 62, 238, 246, 43, 62, 151, 14, 181, 61, 159, 16, 167, 189, 126, 51, 17, 61, 151, 133, 31, 190, 245, 88, 182, 187, 179, 41, 22, 61, 12, 203, 77, 190, 170, 36, 184, 62, 194, 101, 58, 189, 25, 77, 228, 189, 217, 208, 17, 189, 207, 138, 145, 61, 178, 148, 127, 190, 188, 133, 90, 62, 49, 249, 50, 62, 15, 141, 71, 190, 224, 27, 174, 62, 249, 60, 5, 62, 127, 190, 95, 190, 39, 18, 231, 61, 203, 11, 31, 62, 76, 57, 234, 189, 184, 27, 221, 62, 19, 49, 247, 60, 15, 134, 226, 61, 89, 12, 99, 61, 164, 13, 10, 62, 22, 235, 127, 61, 165, 151, 251, 61, 34, 19, 166, 187, 114, 232, 199, 188, 68, 105, 22, 191, 151, 138, 210, 61, 211, 248, 246, 60, 61, 150, 93, 61, 15, 229, 156, 188, 34, 4, 209, 62, 10, 133, 21, 62, 64, 86, 11, 62, 89, 95, 141, 190, 222, 61, 4, 62, 127, 216, 39, 190, 14, 243, 203, 189, 154, 249, 23, 189, 137, 33, 22, 62, 222, 12, 156, 189, 55, 233, 55, 190, 82, 226, 47, 62, 212, 12, 28, 62, 92, 11, 21, 62, 253, 167, 121, 62, 81, 225, 153, 61, 87, 37, 251, 61, 166, 192, 175, 62, 181, 234, 175, 62, 17, 250, 177, 189, 15, 2, 100, 62, 53, 181, 185, 190, 18, 2, 11, 190, 217, 91, 73, 60, 231, 145, 187, 62, 225, 0, 125, 62, 56, 255, 238, 61, 58, 111, 3, 191, 61, 7, 143, 190, 170, 219, 150, 61, 10, 185, 19, 190, 116, 57, 71, 62, 94, 216, 44, 63, 155, 79, 71, 191, 170, 195, 89, 61, 117, 193, 50, 190, 106, 250, 25, 62, 56, 70, 104, 62, 112, 215, 34, 60, 231, 56, 92, 190, 76, 86, 49, 62, 59, 127, 197, 190, 162, 207, 74, 190, 37, 9, 203, 62, 198, 104, 251, 190, 76, 16, 41, 62, 233, 49, 105, 189, 134, 64, 35, 190, 119, 130, 198, 62, 29, 233, 121, 62, 18, 36, 235, 62, 146, 213, 141, 62, 52, 136, 145, 190, 153, 74, 161, 61, 181, 104, 132, 190, 135, 214, 168, 61, 198, 170, 205, 190, 111, 132, 30, 62, 78, 243, 153, 190, 139, 255, 116, 191, 234, 234, 193, 189, 211, 174, 165, 61, 7, 161, 101, 190, 233, 198, 231, 188, 35, 83, 145, 62, 254, 194, 133, 62, 162, 40, 143, 60, 161, 82, 152, 190, 180, 57, 206, 187, 189, 72, 187, 62, 50, 55, 174, 61, 50, 12, 97, 190, 101, 72, 225, 62, 23, 208, 155, 190, 58, 84, 154, 190, 41, 66, 193, 189, 197, 171, 56, 190, 18, 140, 209, 62, 0, 174, 236, 61, 223, 145, 205, 189, 147, 105, 248, 61, 117, 128, 226, 61, 63, 247, 6, 62, 97, 230, 41, 190, 198, 58, 156, 189, 58, 27, 142, 188, 181, 124, 158, 61, 237, 131, 31, 190, 49, 71, 29, 190, 109, 195, 50, 61, 160, 244, 233, 189, 163, 221, 176, 188, 145, 156, 242, 189, 9, 8, 5, 190, 35, 145, 142, 59, 213, 1, 6, 190, 201, 132, 20, 60, 5, 181, 181, 59, 104, 34, 14, 190, 26, 124, 243, 189, 43, 11, 183, 61, 15, 160, 96, 189, 53, 159, 132, 189, 21, 31, 5, 190, 131, 209, 170, 60, 140, 4, 198, 61, 105, 236, 132, 188, 128, 188, 247, 189, 110, 85, 29, 190, 160, 36, 56, 187, 239, 88, 101, 190, 220, 71, 221, 61, 144, 216, 4, 62, 54, 13, 156, 61, 185, 204, 14, 62, 119, 59, 28, 61, 145, 205, 22, 189, 241, 45, 193, 190, 185, 106, 154, 190, 75, 197, 96, 189, 174, 212, 177, 185, 12, 221, 154, 62, 83, 191, 98, 191, 169, 25, 15, 191, 147, 16, 39, 191, 192, 208, 144, 62, 26, 133, 27, 191, 208, 249, 246, 61, 189, 50, 240, 62, 222, 1, 15, 62, 59, 137, 1, 190, 175, 21, 75, 190, 218, 167, 20, 62, 192, 17, 172, 189, 189, 211, 118, 189, 83, 16, 7, 191, 56, 160, 91, 62, 183, 85, 160, 190, 140, 231, 115, 191, 94, 188, 214, 190, 93, 27, 79, 191, 98, 64, 115, 62, 8, 70, 214, 189, 152, 110, 4, 62, 27, 11, 233, 188, 137, 125, 237, 189, 140, 220, 40, 62, 19, 166, 8, 61, 67, 150, 235, 188, 26, 19, 255, 188, 15, 72, 122, 189, 69, 13, 204, 61, 218, 132, 6, 62, 139, 225, 142, 189, 28, 132, 52, 190, 159, 162, 68, 189, 108, 187, 31, 189, 224, 169, 130, 61, 92, 91, 255, 188, 55, 253, 136, 61, 104, 157, 189, 189, 144, 214, 192, 189, 8, 170, 241, 188, 43, 16, 0, 190, 222, 114, 22, 189, 61, 254, 225, 188, 120, 168, 22, 190, 197, 212, 62, 188, 215, 162, 226, 61, 65, 10, 21, 190, 242, 21, 235, 60, 208, 206, 129, 61, 247, 171, 142, 60, 208, 151, 1, 189, 172, 69, 228, 189, 240, 235, 134, 189, 133, 204, 127, 61, 115, 49, 90, 61, 113, 104, 6, 62, 71, 29, 52, 190, 144, 154, 175, 60, 110, 54, 162, 189, 202, 151, 254, 189, 224, 184, 176, 189, 195, 247, 41, 62, 38, 163, 40, 190, 39, 38, 22, 190, 98, 214, 173, 61, 95, 64, 1, 62, 94, 60, 220, 189, 107, 176, 10, 60, 83, 61, 123, 189, 126, 170, 164, 61, 219, 150, 207, 61, 174, 106, 7, 190, 118, 158, 45, 190, 253, 0, 128, 60, 23, 126, 201, 189, 168, 204, 255, 188, 158, 160, 157, 60, 42, 212, 185, 61, 132, 5, 5, 62, 207, 78, 208, 59, 106, 11, 2, 61, 130, 33, 29, 190, 162, 249, 232, 189, 59, 151, 156, 61, 242, 245, 26, 62, 16, 59, 250, 189, 139, 4, 72, 190, 88, 215, 183, 190, 81, 114, 132, 62, 237, 75, 200, 190, 123, 28, 123, 62, 222, 15, 118, 60, 220, 128, 245, 61, 231, 74, 3, 191, 239, 238, 71, 62, 164, 110, 29, 60, 128, 188, 45, 61, 44, 167, 132, 61, 161, 219, 144, 189, 183, 67, 145, 61, 35, 159, 80, 62, 109, 193, 215, 190, 27, 196, 27, 189, 131, 82, 204, 191, 226, 130, 175, 190, 31, 124, 251, 190, 61, 233, 192, 190, 86, 126, 18, 190, 250, 67, 69, 62, 92, 253, 55, 191, 19, 119, 217, 61, 23, 28, 118, 62, 250, 150, 113, 190, 148, 58, 178, 59, 95, 238, 144, 62, 103, 64, 149, 62, 223, 213, 33, 62, 177, 139, 181, 61, 210, 155, 86, 60, 152, 58, 39, 188, 184, 232, 139, 61, 202, 56, 184, 62, 252, 81, 50, 191, 25, 246, 1, 190, 120, 93, 57, 62, 31, 139, 145, 62, 35, 78, 2, 61, 181, 162, 217, 58, 63, 199, 23, 191, 116, 35, 112, 190, 183, 234, 198, 189, 139, 229, 137, 190, 111, 62, 57, 62, 90, 99, 222, 61, 253, 243, 109, 190, 189, 22, 135, 62, 161, 147, 245, 190, 114, 179, 116, 62, 168, 221, 49, 62, 246, 244, 26, 61, 75, 46, 34, 190, 175, 162, 42, 62, 114, 215, 4, 191, 47, 5, 133, 190, 156, 173, 239, 62, 47, 205, 222, 190, 44, 181, 19, 190, 143, 163, 116, 188, 50, 56, 165, 189, 159, 92, 86, 62, 50, 67, 14, 62, 33, 56, 178, 62, 166, 81, 79, 61, 201, 108, 179, 61, 9, 164, 233, 188, 50, 190, 3, 190, 17, 28, 78, 190, 13, 191, 197, 189, 22, 174, 82, 62, 35, 40, 189, 61, 78, 35, 127, 191, 147, 193, 3, 188, 16, 63, 9, 61, 254, 0, 198, 190, 237, 103, 122, 62, 27, 7, 39, 62, 199, 88, 5, 63, 93, 114, 11, 63, 195, 221, 250, 190, 62, 170, 156, 60, 132, 184, 234, 189, 155, 54, 135, 62, 252, 44, 166, 190, 99, 165, 34, 62, 28, 204, 253, 189, 80, 185, 23, 191, 93, 202, 150, 61, 171, 31, 47, 190, 159, 123, 57, 62, 214, 50, 220, 190, 11, 115, 244, 189, 0, 214, 181, 190, 255, 18, 128, 60, 43, 100, 178, 190, 228, 79, 151, 62, 213, 161, 230, 189, 188, 40, 118, 62, 141, 142, 189, 62, 154, 21, 78, 62, 249, 55, 34, 191, 130, 13, 148, 61, 110, 60, 134, 62, 21, 226, 8, 63, 184, 164, 45, 190, 40, 95, 116, 190, 228, 111, 208, 61, 182, 124, 142, 62, 182, 162, 93, 190, 190, 87, 10, 62, 151, 98, 10, 192, 237, 137, 248, 62, 111, 218, 232, 190, 32, 17, 134, 190, 137, 67, 9, 191, 44, 49, 220, 62, 74, 138, 88, 191, 34, 189, 210, 62, 143, 29, 210, 62, 174, 212, 78, 190, 217, 114, 95, 62, 207, 144, 136, 190, 232, 85, 145, 189, 237, 61, 135, 61, 16, 102, 129, 61, 206, 126, 28, 62, 165, 58, 22, 190, 34, 102, 0, 62, 82, 76, 222, 189, 103, 51, 213, 188, 54, 154, 83, 61, 42, 41, 212, 61, 208, 135, 230, 189, 205, 49, 167, 189, 76, 10, 235, 187, 89, 254, 5, 61, 147, 115, 247, 60, 167, 78, 47, 185, 15, 16, 89, 60, 179, 246, 224, 189, 222, 127, 16, 62, 69, 135, 65, 189, 112, 28, 152, 188, 124, 116, 227, 61, 167, 180, 17, 190, 24, 92, 56, 189, 151, 252, 117, 59, 21, 72, 151, 61, 200, 100, 237, 189, 158, 153, 209, 189, 214, 231, 110, 189, 154, 40, 253, 188, 139, 26, 68, 189, 103, 93, 7, 189, 205, 183, 136, 189, 56, 140, 29, 62, 174, 206, 49, 60, 20, 16, 153, 58, 255, 25, 62, 62, 121, 70, 19, 61, 142, 136, 83, 62, 255, 12, 113, 62, 224, 51, 65, 62, 55, 55, 30, 62, 88, 92, 173, 189, 160, 127, 54, 188, 173, 98, 106, 62, 69, 45, 65, 62, 29, 52, 8, 62, 180, 165, 55, 61, 129, 137, 15, 188, 111, 149, 7, 62, 51, 250, 151, 62, 249, 173, 132, 189, 145, 148, 58, 190, 172, 95, 124, 189, 83, 23, 187, 61, 232, 16, 46, 190, 106, 125, 25, 62, 241, 139, 209, 61, 115, 252, 45, 59, 222, 156, 119, 62, 100, 70, 192, 62, 23, 5, 130, 59, 157, 165, 11, 62, 174, 86, 225, 189, 215, 106, 96, 190, 19, 179, 187, 189, 70, 90, 15, 61, 169, 85, 21, 190, 249, 129, 247, 61, 118, 29, 58, 61, 84, 194, 218, 189, 220, 192, 132, 189, 190, 103, 12, 62, 39, 255, 141, 61, 208, 134, 150, 189, 249, 49, 69, 189, 254, 227, 196, 61, 110, 9, 221, 61, 22, 128, 156, 189, 19, 94, 5, 190, 57, 41, 27, 189, 102, 213, 167, 189, 57, 241, 133, 61, 112, 245, 140, 189, 197, 168, 246, 189, 191, 22, 29, 61, 108, 162, 48, 190, 158, 10, 200, 61, 26, 220, 15, 189, 221, 72, 91, 190, 35, 204, 130, 188, 111, 138, 162, 61, 242, 201, 57, 188, 75, 84, 242, 61, 145, 101, 183, 188, 228, 107, 158, 188, 52, 250, 40, 190, 232, 13, 146, 61, 210, 152, 87, 61, 145, 26, 124, 189, 103, 166, 209, 188, 159, 126, 131, 188, 122, 97, 235, 61, 190, 161, 64, 190, 102, 19, 53, 190, 35, 203, 123, 61, 51, 222, 98, 189, 241, 33, 22, 190, 50, 71, 22, 62, 247, 165, 10, 61, 128, 134, 29, 188, 142, 154, 230, 189, 115, 28, 202, 60, 210, 40, 52, 190, 66, 122, 106, 189, 136, 249, 35, 62, 255, 224, 176, 188, 50, 151, 34, 190, 166, 44, 89, 61, 143, 53, 45, 62, 226, 25, 187, 61, 98, 225, 156, 61, 56, 102, 13, 61, 2, 196, 148, 189, 204, 246, 154, 60, 75, 29, 52, 190, 53, 89, 50, 60, 92, 244, 134, 189};
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
                alignas(float) const unsigned char memory[] = {219, 23, 174, 61, 130, 121, 91, 61, 136, 104, 63, 190, 162, 138, 209, 61, 28, 46, 250, 60, 69, 148, 95, 190, 31, 71, 80, 61, 233, 57, 7, 190, 47, 152, 42, 62, 21, 117, 76, 62, 147, 203, 174, 189, 70, 31, 38, 62, 97, 211, 159, 61, 122, 185, 24, 61, 226, 104, 34, 190, 166, 119, 135, 61, 27, 49, 205, 61, 40, 19, 203, 62, 99, 48, 45, 61, 169, 17, 10, 62, 166, 61, 138, 189, 119, 255, 11, 62, 32, 79, 42, 190, 255, 131, 75, 189, 234, 118, 160, 62, 105, 10, 47, 62, 87, 254, 148, 62, 20, 178, 100, 62, 166, 97, 56, 190, 233, 140, 192, 61, 150, 68, 144, 189, 255, 223, 15, 189};
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
                alignas(float) const unsigned char memory[] = {250, 165, 140, 189, 71, 231, 171, 62, 156, 67, 15, 62, 69, 207, 176, 190, 223, 245, 14, 63, 178, 230, 7, 191, 237, 167, 185, 190, 140, 69, 26, 62, 233, 90, 238, 61, 191, 169, 18, 63, 0, 80, 96, 63, 67, 118, 212, 188, 105, 157, 0, 191, 219, 153, 163, 190, 165, 77, 233, 61, 224, 76, 204, 190, 90, 249, 45, 62, 111, 79, 150, 188, 118, 141, 206, 190, 6, 181, 239, 190, 28, 91, 133, 61, 57, 188, 47, 191, 125, 254, 169, 189, 208, 15, 62, 61, 25, 80, 12, 63, 123, 16, 12, 191, 105, 17, 2, 191, 112, 252, 63, 63, 105, 250, 132, 187, 249, 116, 33, 62, 74, 222, 247, 60, 146, 207, 149, 61, 57, 95, 187, 190, 245, 139, 46, 62, 7, 36, 220, 61, 164, 41, 98, 190, 160, 10, 102, 62, 145, 46, 156, 62, 244, 31, 118, 61, 74, 90, 167, 188, 119, 86, 174, 189, 187, 21, 72, 190, 86, 59, 21, 63, 178, 117, 91, 190, 39, 26, 142, 62, 217, 128, 145, 188, 156, 221, 48, 188, 144, 37, 29, 190, 46, 154, 206, 188, 214, 38, 197, 190, 241, 31, 0, 62, 14, 155, 209, 62, 191, 36, 175, 61, 171, 109, 189, 189, 198, 37, 34, 62, 236, 182, 21, 62, 83, 85, 81, 62, 110, 119, 219, 62, 148, 151, 198, 189, 206, 91, 126, 61, 99, 75, 236, 188, 101, 49, 36, 190, 15, 155, 11, 60, 255, 94, 18, 62};
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
                alignas(float) const unsigned char memory[] = {98, 167, 240, 61, 231, 196, 182, 190};
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
    alignas(float) const unsigned char memory[] = {210, 235, 220, 62, 54, 180, 241, 191, 25, 251, 40, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {26, 178, 204, 63, 57, 161, 224, 190};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0097/steps/000000000010000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}