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
                alignas(float) const unsigned char memory[] = {45, 202, 38, 63, 145, 188, 42, 63, 14, 151, 20, 63, 26, 201, 98, 190, 19, 64, 12, 62, 160, 187, 252, 190, 254, 215, 218, 61, 130, 45, 194, 190, 200, 144, 129, 190, 110, 102, 73, 190, 243, 163, 106, 63, 23, 137, 208, 189, 193, 149, 134, 190, 254, 42, 21, 191, 141, 222, 119, 61, 27, 192, 48, 190, 139, 199, 73, 63, 214, 15, 12, 190, 210, 67, 89, 62, 175, 93, 11, 190, 161, 150, 192, 190, 16, 194, 11, 63, 220, 207, 141, 62, 86, 9, 205, 190, 196, 160, 192, 62, 9, 249, 12, 191, 38, 240, 191, 190, 44, 106, 57, 63, 98, 105, 206, 189, 38, 113, 133, 61, 67, 130, 159, 61, 222, 145, 194, 62, 19, 216, 215, 62, 0, 54, 87, 62, 147, 97, 113, 190, 93, 146, 156, 62, 223, 181, 29, 191, 78, 4, 69, 190, 9, 59, 59, 62, 40, 196, 195, 190, 3, 245, 32, 191, 59, 249, 53, 190, 147, 138, 63, 190, 228, 173, 172, 61, 21, 24, 163, 190, 198, 201, 66, 190, 97, 80, 42, 191, 255, 140, 157, 62, 122, 20, 80, 190, 85, 137, 50, 63, 93, 80, 99, 190, 127, 38, 129, 62, 103, 189, 134, 188, 118, 186, 206, 190, 248, 20, 207, 62, 9, 168, 128, 62, 208, 53, 244, 190, 113, 227, 203, 62, 103, 74, 22, 191, 22, 210, 226, 60, 141, 1, 45, 62, 148, 23, 165, 62, 250, 159, 207, 60, 227, 7, 83, 189, 25, 203, 150, 190, 101, 41, 189, 62, 185, 126, 217, 62, 62, 140, 133, 62, 32, 181, 27, 190, 82, 179, 2, 63, 196, 229, 21, 63, 16, 114, 130, 190, 50, 249, 0, 191, 146, 186, 107, 63, 27, 217, 19, 190, 6, 162, 66, 190, 138, 128, 80, 188, 13, 237, 167, 61, 142, 79, 141, 190, 67, 194, 3, 63, 184, 16, 216, 190, 13, 211, 175, 61, 0, 57, 94, 62, 158, 10, 250, 61, 187, 25, 1, 63, 110, 213, 69, 191, 231, 230, 172, 190, 210, 105, 14, 63, 95, 100, 153, 62, 43, 242, 203, 62, 172, 41, 4, 191, 59, 99, 93, 191, 93, 117, 56, 189, 128, 23, 169, 190, 56, 149, 247, 62, 233, 163, 140, 62};
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
                alignas(float) const unsigned char memory[] = {11, 157, 17, 191, 218, 6, 6, 62, 140, 163, 17, 191, 77, 52, 128, 62, 183, 32, 240, 62, 191, 234, 68, 61, 206, 98, 85, 190, 75, 71, 240, 189, 52, 247, 179, 62, 10, 34, 156, 61, 17, 212, 206, 190, 219, 233, 235, 190, 109, 165, 199, 190, 114, 76, 8, 63, 124, 59, 43, 191, 208, 241, 61, 62, 45, 240, 236, 59, 222, 197, 2, 191, 66, 77, 151, 190, 21, 147, 3, 63, 65, 86, 102, 62, 107, 216, 10, 191, 73, 210, 33, 63, 199, 196, 58, 63, 85, 237, 101, 190, 133, 194, 235, 62, 8, 138, 37, 62, 40, 201, 166, 62, 225, 42, 124, 62, 132, 143, 251, 62, 86, 65, 77, 61, 4, 198, 36, 63};
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
                alignas(float) const unsigned char memory[] = {96, 3, 133, 190, 180, 81, 248, 61, 201, 231, 251, 189, 238, 251, 210, 189, 148, 11, 35, 61, 254, 142, 51, 190, 151, 173, 26, 60, 11, 138, 243, 61, 241, 231, 182, 61, 137, 254, 201, 60, 36, 43, 136, 190, 134, 85, 129, 60, 77, 58, 89, 62, 221, 21, 208, 61, 114, 180, 230, 59, 138, 172, 167, 62, 238, 200, 56, 190, 252, 107, 36, 189, 168, 49, 111, 62, 246, 75, 125, 62, 50, 111, 11, 190, 212, 65, 246, 188, 207, 188, 234, 61, 154, 25, 198, 61, 206, 111, 23, 190, 109, 248, 8, 62, 148, 81, 189, 189, 77, 193, 199, 61, 83, 235, 105, 188, 81, 125, 78, 190, 74, 84, 49, 62, 183, 156, 89, 190, 228, 17, 98, 189, 52, 81, 43, 188, 183, 108, 48, 190, 201, 48, 141, 189, 38, 99, 21, 61, 216, 106, 208, 189, 161, 148, 43, 190, 74, 168, 254, 189, 8, 60, 171, 61, 254, 192, 240, 187, 146, 168, 89, 189, 87, 20, 86, 190, 16, 237, 165, 60, 197, 155, 222, 188, 143, 13, 103, 189, 246, 174, 1, 62, 235, 76, 31, 62, 232, 128, 231, 61, 181, 151, 22, 62, 122, 172, 14, 188, 151, 241, 173, 61, 162, 32, 42, 189, 159, 174, 83, 190, 230, 4, 220, 61, 249, 161, 11, 190, 84, 63, 129, 59, 231, 60, 218, 189, 98, 224, 159, 61, 189, 197, 144, 189, 89, 129, 200, 60, 215, 139, 11, 190, 23, 177, 1, 190, 186, 135, 134, 190, 140, 250, 224, 189, 109, 43, 93, 189, 166, 102, 118, 190, 101, 109, 38, 62, 122, 221, 125, 190, 20, 233, 62, 62, 202, 207, 38, 61, 45, 224, 117, 60, 115, 144, 236, 188, 2, 101, 170, 60, 78, 28, 22, 61, 164, 209, 196, 189, 113, 9, 61, 62, 225, 242, 206, 189, 190, 35, 250, 60, 46, 161, 197, 189, 168, 183, 237, 189, 165, 130, 51, 190, 195, 132, 174, 61, 247, 205, 231, 189, 239, 7, 31, 61, 112, 144, 169, 189, 78, 65, 1, 189, 197, 17, 252, 189, 108, 249, 243, 61, 93, 21, 106, 189, 181, 217, 238, 189, 132, 197, 122, 61, 193, 23, 99, 189, 199, 188, 48, 189, 241, 172, 70, 61, 30, 52, 210, 189, 227, 224, 45, 62, 186, 191, 41, 190, 168, 21, 165, 61, 37, 249, 16, 187, 225, 204, 116, 190, 196, 148, 214, 61, 61, 106, 5, 62, 43, 175, 135, 62, 158, 160, 44, 189, 197, 182, 90, 61, 64, 190, 115, 190, 97, 233, 214, 61, 81, 18, 87, 188, 73, 247, 131, 189, 58, 192, 59, 62, 7, 84, 119, 188, 68, 255, 16, 62, 131, 229, 106, 62, 88, 110, 116, 62, 188, 137, 22, 189, 251, 169, 229, 61, 154, 197, 181, 189, 9, 70, 239, 189, 245, 194, 158, 189, 154, 123, 47, 62, 163, 146, 228, 61, 125, 117, 29, 60, 32, 146, 161, 60, 29, 210, 225, 189, 251, 248, 241, 61, 49, 119, 27, 62, 227, 225, 106, 61, 110, 165, 46, 188, 162, 21, 54, 190, 67, 208, 177, 189, 178, 107, 167, 189, 219, 113, 12, 62, 179, 109, 6, 62, 215, 182, 41, 62, 221, 238, 78, 189, 85, 145, 195, 189, 55, 153, 31, 190, 148, 110, 218, 188, 76, 225, 38, 62, 224, 185, 238, 60, 204, 177, 229, 187, 85, 179, 176, 61, 63, 217, 61, 190, 17, 30, 18, 61, 4, 129, 2, 189, 206, 48, 4, 190, 147, 71, 9, 189, 34, 186, 17, 190, 110, 254, 88, 189, 104, 7, 53, 190, 11, 3, 141, 189, 173, 190, 37, 190, 23, 248, 146, 61, 91, 41, 190, 189, 238, 169, 180, 59, 151, 244, 87, 61, 85, 60, 223, 61, 47, 113, 155, 60, 39, 248, 55, 189, 117, 19, 5, 61, 72, 90, 137, 189, 50, 21, 106, 190, 150, 110, 238, 61, 134, 82, 78, 190, 36, 147, 239, 61, 188, 182, 44, 62, 134, 34, 249, 61, 119, 71, 179, 189, 216, 56, 27, 190, 119, 202, 16, 190, 2, 140, 154, 60, 212, 212, 189, 61, 27, 81, 11, 62, 14, 37, 93, 61, 108, 71, 78, 190, 159, 111, 38, 61, 85, 41, 248, 60, 139, 1, 70, 62, 68, 254, 101, 190, 106, 71, 185, 189, 177, 2, 14, 190, 17, 105, 217, 61, 43, 39, 16, 61, 153, 127, 251, 60, 165, 106, 112, 190, 216, 151, 136, 188, 93, 203, 158, 60, 220, 132, 2, 61, 249, 188, 228, 189, 174, 39, 39, 189, 33, 126, 233, 61, 47, 99, 181, 189, 96, 111, 164, 61, 4, 88, 248, 61, 88, 218, 177, 61, 7, 194, 114, 62, 151, 72, 43, 189, 44, 11, 145, 189, 38, 38, 152, 189, 237, 189, 91, 189, 61, 211, 49, 62, 166, 176, 204, 61, 248, 30, 72, 188, 8, 71, 210, 60, 81, 188, 121, 190, 79, 252, 22, 190, 140, 2, 121, 62, 151, 220, 145, 189, 28, 2, 43, 61, 231, 8, 151, 189, 84, 66, 49, 62, 92, 219, 62, 62, 109, 29, 228, 189, 167, 183, 238, 188, 150, 174, 61, 62, 66, 67, 59, 62, 98, 229, 252, 58, 85, 8, 40, 61, 207, 89, 43, 189, 111, 2, 35, 62, 67, 128, 157, 189, 113, 13, 241, 189, 23, 136, 12, 62, 137, 45, 179, 61, 128, 70, 196, 190, 239, 236, 141, 62, 1, 1, 32, 190, 188, 138, 248, 62, 251, 49, 247, 188, 88, 172, 202, 189, 109, 141, 137, 190, 219, 151, 144, 61, 68, 244, 182, 61, 59, 237, 87, 62, 206, 62, 25, 190, 31, 35, 9, 61, 253, 167, 172, 188, 133, 147, 40, 190, 227, 191, 180, 60, 195, 161, 219, 190, 199, 111, 130, 190, 2, 170, 44, 62, 18, 212, 142, 62, 94, 191, 207, 61, 232, 10, 210, 61, 191, 191, 162, 62, 150, 184, 124, 62, 153, 69, 134, 189, 163, 192, 147, 61, 66, 148, 63, 62, 236, 106, 205, 190, 92, 198, 230, 60, 166, 161, 94, 189, 7, 145, 176, 61, 178, 236, 188, 189, 163, 9, 132, 61, 48, 199, 150, 189, 43, 92, 149, 60, 135, 35, 110, 190, 32, 126, 112, 61, 247, 179, 81, 62, 94, 67, 190, 187, 34, 96, 190, 189, 170, 90, 201, 189, 165, 68, 183, 189, 144, 77, 46, 62, 249, 0, 220, 189, 224, 26, 13, 190, 225, 102, 2, 62, 128, 19, 187, 189, 162, 214, 42, 61, 210, 68, 223, 59, 195, 206, 60, 62, 238, 171, 33, 190, 23, 169, 40, 62, 72, 76, 182, 189, 13, 23, 245, 189, 102, 161, 185, 61, 207, 158, 96, 62, 115, 232, 2, 60, 118, 193, 79, 62, 216, 96, 250, 61, 239, 248, 148, 61, 16, 76, 39, 62, 204, 65, 26, 190, 237, 74, 32, 189, 41, 92, 136, 60, 37, 27, 226, 61, 205, 192, 172, 61, 10, 104, 103, 189, 128, 233, 240, 189, 158, 110, 204, 189, 207, 48, 7, 190, 229, 181, 45, 59, 8, 212, 33, 190, 74, 209, 30, 190, 213, 168, 83, 61, 113, 113, 33, 190, 34, 25, 30, 62, 244, 249, 22, 190, 38, 126, 131, 189, 168, 82, 138, 189, 92, 7, 17, 190, 103, 138, 247, 61, 217, 176, 132, 189, 147, 202, 224, 59, 110, 190, 60, 190, 229, 244, 28, 62, 255, 14, 39, 62, 57, 204, 133, 61, 163, 117, 155, 188, 32, 240, 49, 61, 180, 123, 228, 188, 137, 251, 169, 189, 103, 183, 212, 189, 240, 189, 61, 190, 184, 225, 35, 190, 109, 38, 140, 60, 250, 31, 145, 61, 20, 13, 23, 190, 225, 177, 200, 189, 146, 7, 35, 190, 72, 78, 1, 190, 122, 212, 151, 61, 39, 53, 158, 61, 251, 224, 183, 61, 65, 8, 51, 61, 45, 79, 135, 189, 82, 198, 183, 61, 0, 225, 212, 189, 137, 168, 189, 189, 199, 42, 199, 189, 15, 250, 127, 59, 75, 99, 234, 189, 132, 255, 45, 62, 185, 236, 33, 190, 221, 46, 190, 188, 252, 234, 11, 62, 235, 42, 31, 62, 209, 3, 216, 60, 15, 5, 48, 190, 156, 20, 18, 190, 120, 68, 43, 62, 1, 49, 154, 189, 207, 130, 50, 188, 102, 64, 171, 60, 6, 220, 176, 189, 66, 128, 139, 189, 191, 206, 119, 188, 5, 46, 25, 186, 176, 133, 159, 61, 119, 175, 87, 189, 212, 130, 92, 190, 246, 226, 98, 189, 46, 126, 194, 189, 85, 193, 184, 186, 104, 83, 48, 62, 89, 70, 0, 61, 63, 59, 33, 62, 179, 100, 9, 189, 232, 251, 204, 189, 244, 203, 9, 60, 234, 242, 49, 190, 250, 221, 3, 190, 73, 197, 7, 61, 112, 204, 198, 61, 13, 239, 43, 62, 50, 146, 137, 61, 97, 196, 47, 62, 121, 254, 76, 190, 103, 239, 26, 62, 102, 59, 253, 61, 6, 249, 6, 62, 230, 24, 194, 61, 103, 46, 141, 62, 108, 253, 93, 188, 85, 52, 160, 59, 189, 230, 235, 61, 220, 19, 46, 189, 157, 174, 55, 190, 31, 121, 195, 189, 67, 61, 199, 189, 4, 202, 133, 190, 147, 81, 109, 189, 222, 201, 214, 189, 87, 132, 15, 190, 221, 236, 29, 62, 109, 33, 49, 190, 92, 210, 131, 58, 199, 144, 89, 62, 41, 240, 69, 62, 223, 170, 77, 60, 55, 101, 154, 189, 14, 26, 145, 189, 139, 71, 248, 61, 119, 12, 133, 61, 59, 248, 43, 62, 33, 226, 141, 188, 193, 173, 181, 61, 226, 171, 162, 189, 58, 226, 7, 62, 235, 211, 128, 62, 246, 217, 136, 190, 1, 209, 4, 189, 161, 192, 44, 188, 165, 12, 168, 189, 140, 36, 164, 190, 6, 43, 53, 62, 8, 80, 245, 61, 29, 31, 228, 188, 19, 31, 27, 62, 180, 64, 104, 189, 98, 50, 140, 61, 66, 186, 12, 62, 120, 181, 150, 61, 14, 111, 27, 62, 12, 19, 22, 190, 32, 90, 204, 189, 202, 16, 7, 188, 227, 73, 12, 189, 15, 156, 65, 62, 23, 185, 132, 189, 102, 169, 21, 62, 70, 176, 55, 189, 97, 153, 60, 61, 71, 79, 247, 61, 221, 177, 57, 190, 199, 175, 59, 189, 179, 141, 206, 61, 43, 62, 210, 189, 15, 201, 30, 62, 220, 111, 9, 190, 167, 52, 249, 61, 208, 218, 208, 61, 183, 86, 20, 190, 36, 110, 28, 190, 74, 6, 36, 62, 176, 200, 78, 61, 105, 111, 235, 59, 229, 154, 30, 61, 9, 202, 32, 61, 225, 191, 164, 61, 166, 141, 159, 61, 36, 222, 128, 190, 124, 179, 100, 189, 201, 91, 35, 190, 77, 245, 49, 62, 94, 69, 53, 62, 23, 101, 134, 189, 251, 164, 55, 62, 8, 186, 21, 62, 15, 140, 218, 62, 172, 70, 120, 190, 170, 234, 230, 189, 214, 221, 213, 189, 127, 213, 121, 62, 167, 56, 79, 61, 48, 137, 254, 61, 166, 203, 18, 189, 228, 27, 81, 190, 73, 73, 121, 190, 101, 172, 167, 188, 105, 158, 168, 60, 191, 47, 101, 190, 167, 59, 150, 190, 227, 71, 139, 62, 19, 5, 168, 61, 10, 149, 192, 188, 148, 179, 90, 62, 49, 17, 8, 62, 20, 78, 240, 62, 136, 49, 115, 61, 217, 21, 7, 62, 28, 254, 123, 189, 134, 120, 52, 190, 221, 41, 103, 62, 40, 18, 192, 190, 241, 20, 88, 61, 72, 59, 144, 189, 13, 128, 147, 189, 216, 186, 51, 61, 187, 218, 7, 62, 64, 100, 191, 61, 103, 147, 78, 189, 36, 173, 3, 61, 96, 48, 38, 62, 78, 148, 115, 62, 177, 124, 30, 62, 187, 195, 7, 61, 72, 75, 167, 61, 209, 54, 98, 61, 0, 233, 207, 189, 86, 140, 55, 186, 27, 159, 96, 61, 218, 24, 75, 62, 171, 222, 137, 60, 31, 201, 111, 189, 200, 245, 30, 62, 10, 221, 145, 61, 156, 255, 145, 189, 89, 162, 138, 189, 156, 65, 136, 188, 79, 137, 54, 62, 202, 233, 87, 62, 247, 219, 221, 187, 78, 210, 249, 61, 22, 44, 132, 61, 18, 124, 227, 61, 226, 104, 20, 190, 245, 181, 51, 61, 6, 227, 89, 61, 118, 128, 220, 61, 107, 141, 22, 61, 60, 83, 40, 189, 141, 250, 62, 62, 30, 201, 136, 61, 83, 189, 167, 61, 108, 14, 246, 60, 118, 50, 23, 190, 0, 201, 103, 62, 244, 134, 139, 61, 75, 157, 147, 189, 124, 97, 31, 190, 191, 120, 66, 190, 7, 65, 28, 190, 43, 184, 67, 190, 91, 181, 198, 61, 130, 221, 74, 190, 83, 246, 143, 61, 142, 27, 25, 62, 47, 223, 22, 186, 171, 132, 142, 189, 7, 28, 58, 62, 235, 172, 64, 62, 74, 25, 2, 61, 177, 29, 226, 60, 100, 226, 40, 62, 187, 122, 241, 61, 114, 104, 155, 61, 85, 180, 247, 189, 187, 136, 23, 190, 60, 56, 14, 62, 52, 5, 246, 189, 135, 85, 39, 62, 68, 236, 10, 190, 94, 98, 191, 189, 246, 22, 13, 190, 129, 200, 100, 61, 189, 0, 251, 61, 36, 234, 123, 61, 247, 116, 19, 61, 165, 141, 146, 189, 115, 229, 12, 61, 138, 121, 155, 61, 170, 152, 130, 189, 219, 41, 0, 190, 186, 39, 209, 61, 202, 58, 120, 189, 223, 164, 250, 60, 143, 196, 243, 60, 75, 33, 31, 190, 36, 43, 240, 189, 141, 135, 18, 62, 103, 250, 132, 189, 12, 187, 249, 61, 181, 221, 165, 189, 91, 168, 28, 190, 92, 46, 36, 62, 99, 73, 246, 189, 215, 73, 243, 188, 104, 138, 18, 190, 50, 159, 18, 61, 249, 12, 23, 61, 243, 169, 143, 60, 101, 105, 50, 190, 202, 52, 33, 190, 250, 36, 209, 61, 172, 116, 24, 190, 11, 40, 48, 190, 79, 113, 182, 61, 241, 122, 154, 189, 69, 34, 192, 61, 151, 51, 191, 189, 146, 179, 9, 189, 7, 47, 69, 189, 125, 22, 44, 190, 122, 135, 57, 61, 41, 247, 155, 61, 250, 251, 151, 61, 9, 85, 145, 189, 40, 107, 14, 190, 46, 141, 42, 62, 66, 40, 35, 190, 239, 60, 206, 189, 12, 159, 40, 189, 208, 114, 165, 59, 66, 123, 231, 59, 209, 0, 133, 189, 40, 165, 157, 189, 107, 235, 142, 189, 41, 161, 14, 190, 61, 6, 233, 189, 87, 185, 59, 61, 213, 221, 225, 189, 145, 164, 198, 61, 79, 19, 130, 189, 9, 207, 37, 61, 211, 208, 27, 59, 55, 237, 2, 189, 28, 130, 235, 61, 97, 95, 50, 190, 59, 67, 225, 61, 216, 142, 37, 189, 211, 78, 168, 61, 191, 190, 54, 189, 27, 247, 91, 61, 240, 146, 5, 62, 64, 233, 60, 190, 65, 235, 66, 188, 142, 151, 205, 189, 171, 94, 29, 190, 111, 25, 8, 190, 220, 194, 223, 61, 0, 159, 71, 186, 68, 182, 128, 189, 117, 62, 69, 190, 90, 38, 233, 61, 114, 47, 5, 190, 152, 240, 196, 188, 129, 206, 20, 61, 98, 231, 110, 190, 56, 224, 176, 61, 64, 67, 34, 190, 255, 255, 43, 189, 137, 13, 52, 189, 229, 224, 82, 190, 13, 178, 142, 61, 113, 29, 85, 60, 96, 147, 17, 190, 128, 15, 5, 189, 197, 236, 198, 189, 78, 184, 4, 190, 213, 150, 207, 189, 228, 87, 45, 190, 6, 95, 96, 189, 150, 224, 63, 187, 103, 185, 130, 189, 83, 115, 231, 189, 35, 200, 244, 189, 147, 244, 159, 61, 127, 237, 128, 189, 167, 147, 9, 62, 60, 111, 176, 189, 171, 4, 238, 189, 5, 224, 154, 61, 26, 190, 17, 189, 181, 125, 38, 190, 163, 101, 145, 188, 115, 76, 199, 61, 84, 221, 111, 60, 50, 150, 130, 188, 71, 29, 158, 61, 220, 230, 0, 61, 224, 162, 83, 59, 125, 52, 48, 190, 222, 0, 201, 186, 4, 216, 16, 61, 43, 234, 39, 60, 1, 8, 142, 61, 163, 126, 163, 189, 208, 253, 28, 190, 122, 70, 5, 190, 82, 13, 20, 62, 178, 38, 109, 190, 144, 211, 79, 60, 129, 118, 237, 61, 225, 167, 160, 61, 33, 229, 46, 190, 57, 111, 4, 189, 114, 34, 248, 189, 63, 38, 103, 189, 127, 201, 28, 190, 244, 21, 213, 58, 94, 59, 32, 62, 56, 79, 229, 189, 165, 49, 119, 62, 62, 80, 51, 190, 108, 227, 160, 188, 189, 160, 82, 188, 68, 24, 15, 62, 117, 20, 38, 190, 24, 195, 170, 61, 240, 158, 69, 190, 77, 63, 173, 60, 240, 220, 136, 189, 212, 197, 62, 190, 2, 109, 51, 190, 167, 138, 39, 190, 194, 78, 207, 60, 229, 27, 106, 189, 70, 236, 239, 61, 201, 163, 193, 189, 208, 214, 28, 60, 41, 17, 147, 189, 154, 104, 162, 61, 42, 187, 249, 188, 221, 11, 188, 61, 32, 166, 142, 190, 27, 253, 58, 189, 21, 120, 99, 190, 149, 230, 7, 189, 207, 105, 59, 190, 93, 87, 224, 61, 153, 87, 146, 61, 191, 249, 34, 190, 198, 1, 116, 62, 198, 149, 173, 188, 118, 244, 184, 61, 136, 251, 101, 190, 50, 29, 238, 58, 27, 74, 50, 190, 216, 235, 160, 60, 210, 110, 9, 190, 16, 26, 13, 190, 80, 48, 26, 61, 253, 66, 153, 190, 65, 146, 100, 190, 228, 39, 228, 189, 22, 252, 40, 190, 236, 213, 234, 61, 243, 228, 171, 60, 71, 238, 39, 61, 98, 178, 156, 62, 31, 255, 186, 61, 96, 64, 30, 60, 248, 109, 162, 189, 97, 121, 50, 189, 43, 152, 107, 61, 216, 22, 249, 189, 30, 31, 153, 188, 102, 25, 79, 61, 100, 188, 22, 62, 222, 169, 231, 61, 41, 67, 36, 62, 69, 151, 38, 62, 50, 246, 93, 189, 164, 200, 159, 189, 42, 169, 132, 189, 23, 210, 78, 61, 125, 231, 126, 189, 92, 171, 134, 61, 63, 26, 139, 61, 122, 100, 31, 61, 81, 194, 222, 60, 30, 169, 49, 189, 165, 245, 166, 189, 157, 164, 5, 190, 214, 237, 56, 190, 223, 187, 80, 190, 121, 49, 74, 190, 215, 133, 111, 61, 4, 71, 135, 61, 253, 32, 168, 61, 106, 89, 224, 61, 200, 73, 238, 60, 177, 220, 38, 189, 200, 167, 54, 62, 118, 84, 16, 62, 77, 114, 229, 61, 224, 53, 52, 62, 3, 12, 142, 61, 215, 116, 4, 60, 69, 116, 48, 189, 205, 92, 243, 59, 208, 157, 71, 61, 155, 252, 233, 188, 80, 99, 239, 61, 227, 220, 8, 190, 252, 24, 40, 188, 70, 17, 223, 189, 201, 205, 111, 60, 67, 67, 9, 190, 126, 197, 176, 61, 47, 133, 186, 61, 17, 176, 154, 60, 156, 238, 11, 61, 116, 34, 211, 61, 134, 222, 155, 61, 165, 82, 177, 60, 201, 129, 84, 190, 213, 11, 41, 62, 245, 252, 170, 61, 97, 172, 212, 189, 196, 74, 106, 60, 48, 30, 215, 61, 55, 150, 64, 61, 184, 18, 145, 189, 9, 117, 184, 189, 151, 10, 36, 190, 253, 152, 3, 62, 109, 155, 114, 189, 39, 47, 203, 189, 64, 180, 139, 61, 19, 38, 150, 62, 16, 63, 135, 61, 64, 53, 151, 60, 199, 68, 12, 60, 174, 26, 115, 62, 220, 106, 185, 60, 104, 60, 69, 188, 27, 242, 46, 189, 124, 198, 255, 188, 27, 47, 56, 190, 231, 181, 141, 189, 89, 191, 9, 62, 176, 222, 10, 190, 172, 185, 47, 190, 12, 181, 49, 62, 175, 110, 91, 62, 94, 216, 78, 62, 108, 100, 49, 62, 53, 2, 13, 61, 215, 165, 121, 189, 116, 254, 23, 62, 24, 68, 26, 62, 97, 60, 24, 62, 67, 140, 156, 188, 58, 144, 117, 62, 87, 34, 118, 190, 95, 159, 129, 187, 79, 166, 190, 189, 196, 12, 242, 189, 227, 29, 156, 189, 162, 170, 72, 189, 221, 188, 243, 61, 101, 128, 29, 61, 213, 65, 173, 189, 185, 44, 53, 188, 110, 46, 198, 61, 3, 143, 166, 189, 231, 157, 247, 188, 84, 14, 61, 60, 106, 169, 40, 62, 173, 206, 166, 61, 162, 129, 24, 190, 70, 210, 190, 60, 166, 27, 4, 190, 177, 160, 223, 61, 178, 205, 174, 189, 106, 235, 71, 190, 57, 164, 24, 62, 161, 134, 174, 189, 133, 4, 53, 190, 175, 223, 58, 190, 194, 255, 249, 61, 198, 1, 68, 189, 141, 94, 234, 189, 33, 177, 19, 61, 189, 35, 198, 189, 178, 54, 82, 190, 155, 147, 88, 190, 224, 111, 250, 189, 159, 60, 133, 190, 148, 241, 201, 189, 70, 72, 125, 190, 167, 123, 213, 189, 179, 188, 147, 62, 27, 50, 192, 190, 35, 193, 134, 189, 202, 109, 49, 190, 22, 52, 251, 61, 33, 31, 226, 189, 68, 151, 245, 189, 252, 218, 15, 190, 255, 22, 31, 61, 131, 4, 39, 61, 136, 183, 243, 185, 61, 27, 134, 62, 98, 221, 128, 190, 119, 77, 211, 189, 1, 98, 139, 190, 86, 236, 11, 61, 14, 119, 136, 190, 101, 127, 46, 190, 46, 73, 56, 61, 152, 2, 156, 189, 105, 45, 68, 190, 38, 117, 103, 189, 76, 23, 49, 190, 73, 189, 233, 189, 205, 102, 163, 60, 143, 107, 37, 61, 148, 206, 144, 62, 196, 21, 110, 61, 132, 124, 187, 189, 225, 113, 73, 188, 192, 2, 149, 189, 197, 6, 141, 62, 185, 238, 168, 189, 160, 206, 203, 62, 254, 94, 138, 190, 20, 25, 189, 190, 50, 23, 20, 189, 92, 97, 65, 62, 190, 152, 57, 61, 169, 111, 43, 187, 181, 234, 26, 60, 163, 217, 239, 189, 225, 119, 88, 190, 184, 203, 147, 189, 124, 42, 112, 62, 126, 177, 184, 190, 174, 91, 164, 190, 80, 130, 188, 58, 164, 47, 133, 62, 144, 136, 57, 62, 179, 225, 11, 62, 179, 135, 162, 62, 110, 51, 255, 62, 116, 151, 77, 60, 24, 138, 181, 61, 122, 79, 2, 62, 80, 96, 96, 189, 62, 54, 85, 62, 139, 108, 166, 190, 141, 6, 24, 62, 221, 173, 141, 60, 165, 169, 34, 60, 206, 240, 19, 62, 121, 75, 69, 62, 17, 47, 156, 61, 90, 98, 71, 61, 163, 62, 236, 189, 250, 184, 5, 61, 148, 175, 38, 62, 137, 84, 102, 62, 171, 84, 157, 189, 124, 104, 229, 188, 175, 186, 147, 190, 234, 65, 155, 61, 167, 220, 211, 61, 55, 184, 206, 189, 103, 199, 121, 59, 119, 238, 179, 189, 55, 118, 158, 60, 115, 190, 208, 60, 8, 213, 73, 62, 6, 172, 140, 188, 157, 238, 95, 62, 0, 15, 43, 62, 182, 68, 219, 61, 193, 243, 204, 189, 192, 126, 191, 61, 152, 196, 213, 61, 110, 124, 3, 62, 126, 206, 126, 189, 215, 49, 79, 190, 94, 222, 145, 59, 158, 65, 133, 190, 30, 116, 195, 61, 140, 42, 76, 189, 93, 223, 232, 189, 12, 206, 135, 62, 185, 29, 230, 189, 181, 79, 189, 189, 57, 213, 73, 62, 118, 162, 102, 60, 92, 186, 4, 190, 134, 145, 133, 189, 169, 139, 81, 190, 81, 255, 23, 62, 91, 25, 179, 61, 101, 188, 7, 189, 177, 154, 116, 62, 184, 152, 26, 190, 137, 254, 72, 62, 251, 48, 44, 62, 130, 146, 144, 62, 32, 56, 250, 189, 248, 116, 124, 189, 232, 128, 73, 189, 237, 45, 217, 61, 31, 221, 111, 190, 28, 243, 47, 62, 83, 68, 7, 190, 196, 68, 145, 61, 251, 157, 88, 62, 74, 179, 55, 190, 19, 60, 251, 61, 171, 154, 126, 190, 59, 148, 37, 190, 103, 6, 160, 61, 246, 243, 141, 61, 230, 204, 224, 187, 234, 108, 136, 61, 17, 94, 183, 190, 107, 150, 76, 62, 168, 178, 30, 189, 245, 246, 231, 61, 117, 181, 73, 190, 25, 132, 66, 190, 9, 197, 118, 190, 179, 192, 213, 61, 123, 26, 111, 189, 30, 81, 29, 190, 229, 219, 26, 62, 237, 112, 247, 189, 61, 38, 10, 190, 83, 211, 93, 189, 75, 45, 70, 61, 19, 38, 112, 189, 76, 148, 23, 187, 28, 255, 198, 189, 33, 78, 238, 188, 213, 222, 222, 189, 108, 228, 41, 61, 100, 238, 53, 189, 236, 186, 87, 60, 17, 203, 38, 62, 27, 250, 122, 61, 213, 247, 75, 62, 84, 231, 102, 60};
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
                alignas(float) const unsigned char memory[] = {166, 255, 31, 62, 18, 36, 91, 188, 68, 46, 106, 62, 55, 25, 177, 188, 191, 201, 215, 189, 90, 141, 130, 189, 61, 31, 112, 61, 179, 120, 172, 60, 153, 236, 42, 190, 6, 146, 4, 60, 251, 23, 140, 189, 163, 93, 18, 60, 199, 189, 141, 60, 54, 109, 151, 61, 124, 137, 129, 61, 14, 199, 217, 187, 241, 229, 251, 188, 25, 177, 222, 189, 51, 33, 48, 62, 68, 187, 31, 190, 147, 184, 178, 189, 75, 0, 76, 189, 182, 184, 34, 62, 48, 0, 162, 61, 189, 66, 232, 61, 65, 34, 83, 62, 33, 95, 1, 62, 131, 53, 114, 62, 154, 240, 230, 61, 12, 106, 187, 61, 103, 188, 90, 62, 109, 121, 203, 61};
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
                alignas(float) const unsigned char memory[] = {135, 129, 134, 62, 101, 97, 224, 60, 123, 77, 144, 62, 209, 97, 148, 61, 216, 180, 151, 61, 224, 236, 29, 190, 57, 4, 244, 189, 167, 217, 182, 190, 50, 54, 38, 62, 65, 191, 116, 61, 217, 216, 154, 188, 156, 249, 106, 62, 236, 57, 132, 62, 151, 76, 179, 61, 199, 112, 140, 190, 31, 22, 125, 187, 208, 35, 242, 189, 204, 94, 73, 61, 139, 45, 240, 188, 206, 197, 198, 61, 99, 208, 238, 189, 234, 144, 128, 190, 91, 138, 139, 62, 133, 153, 73, 59, 228, 46, 17, 190, 152, 139, 148, 189, 11, 95, 224, 189, 98, 182, 244, 62, 146, 252, 164, 190, 144, 224, 254, 189, 104, 76, 166, 62, 245, 25, 87, 62, 100, 44, 114, 189, 253, 220, 132, 61, 22, 255, 18, 190, 127, 157, 168, 189, 124, 211, 15, 190, 61, 4, 16, 61, 39, 36, 239, 189, 215, 159, 237, 60, 173, 42, 182, 61, 44, 241, 41, 62, 116, 224, 27, 62, 41, 40, 139, 61, 208, 134, 200, 189, 67, 55, 56, 189, 135, 47, 24, 190, 214, 252, 84, 190, 209, 174, 216, 189, 115, 112, 246, 61, 148, 58, 253, 60, 0, 136, 8, 62, 212, 240, 237, 59, 174, 3, 166, 61, 53, 7, 58, 61, 205, 234, 131, 61, 163, 182, 165, 61, 198, 118, 233, 189, 24, 56, 226, 59, 30, 6, 158, 190, 104, 101, 143, 187, 215, 192, 61, 190, 215, 70, 94, 61, 61, 79, 109, 61};
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
                alignas(float) const unsigned char memory[] = {226, 177, 18, 60, 123, 91, 116, 60};
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
    alignas(float) const unsigned char memory[] = {6, 69, 229, 62, 111, 97, 17, 63, 25, 112, 39, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {11, 152, 168, 191, 2, 61, 48, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0036/steps/000000000002000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}