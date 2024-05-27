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
                alignas(float) const unsigned char memory[] = {75, 76, 197, 190, 99, 188, 174, 61, 5, 154, 116, 63, 205, 250, 100, 61, 201, 242, 252, 62, 18, 172, 94, 190, 186, 52, 175, 190, 108, 0, 117, 63, 35, 235, 35, 63, 212, 188, 229, 190, 251, 33, 168, 191, 131, 223, 78, 190, 169, 211, 17, 189, 186, 65, 72, 191, 200, 5, 7, 190, 201, 206, 32, 63, 130, 4, 166, 63, 183, 77, 160, 62, 197, 223, 57, 191, 162, 195, 207, 62, 101, 198, 131, 60, 176, 197, 73, 63, 45, 132, 94, 62, 106, 135, 59, 62, 215, 99, 78, 63, 119, 10, 184, 190, 92, 70, 203, 190, 154, 31, 7, 191, 228, 206, 96, 190, 146, 88, 199, 190, 104, 200, 73, 61, 76, 204, 59, 191, 87, 238, 85, 63, 9, 154, 56, 61, 114, 143, 62, 63, 241, 89, 66, 63, 215, 208, 66, 188, 124, 166, 178, 62, 191, 128, 10, 191, 214, 195, 151, 60, 67, 249, 48, 63, 67, 198, 252, 190, 26, 30, 148, 62, 194, 49, 6, 63, 40, 102, 117, 62, 230, 176, 211, 62, 2, 139, 128, 60, 127, 46, 16, 190, 31, 34, 88, 190, 139, 41, 94, 191, 2, 117, 204, 62, 132, 118, 38, 62, 234, 92, 227, 189, 63, 66, 235, 189, 52, 38, 165, 62, 90, 187, 167, 190, 246, 101, 85, 57, 134, 144, 81, 191, 177, 22, 31, 63, 179, 171, 54, 62, 209, 5, 34, 63, 71, 34, 169, 63, 190, 150, 224, 62, 235, 253, 36, 189, 152, 142, 93, 63, 1, 226, 237, 190, 119, 215, 198, 190, 71, 3, 2, 191, 178, 99, 204, 61, 53, 169, 166, 61, 17, 156, 8, 191, 52, 160, 49, 63, 235, 9, 217, 190, 140, 50, 135, 191, 158, 80, 106, 190, 75, 31, 159, 189, 124, 8, 165, 63, 230, 16, 152, 62, 4, 231, 73, 63, 129, 124, 145, 190, 102, 21, 230, 190, 151, 188, 204, 187, 32, 208, 95, 63, 85, 41, 152, 62, 125, 121, 237, 189, 56, 46, 153, 191, 239, 194, 224, 60, 6, 229, 243, 62, 18, 179, 84, 63, 68, 86, 34, 63, 49, 86, 179, 62, 127, 137, 157, 191, 204, 16, 189, 190, 75, 75, 35, 190, 163, 106, 4, 191, 2, 191, 84, 62};
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
                alignas(float) const unsigned char memory[] = {36, 187, 74, 191, 98, 163, 70, 190, 181, 217, 161, 190, 190, 229, 58, 190, 197, 245, 1, 63, 149, 134, 118, 189, 105, 133, 201, 62, 176, 93, 186, 62, 95, 197, 101, 191, 97, 99, 216, 59, 85, 244, 129, 190, 109, 110, 144, 62, 71, 10, 109, 62, 155, 20, 93, 62, 245, 81, 212, 62, 163, 185, 221, 190, 197, 58, 208, 190, 34, 75, 137, 62, 137, 152, 237, 62, 222, 51, 148, 61, 236, 129, 130, 190, 208, 38, 238, 62, 105, 28, 219, 62, 123, 178, 146, 190, 84, 106, 131, 190, 146, 61, 5, 61, 66, 31, 253, 190, 239, 41, 217, 61, 141, 141, 186, 62, 63, 255, 71, 62, 68, 185, 101, 61, 91, 233, 101, 62};
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
                alignas(float) const unsigned char memory[] = {74, 184, 30, 190, 250, 179, 200, 61, 87, 102, 87, 58, 109, 195, 50, 190, 230, 232, 16, 191, 101, 13, 168, 62, 250, 170, 135, 58, 109, 128, 94, 62, 15, 235, 21, 62, 49, 0, 81, 61, 239, 6, 23, 62, 252, 27, 50, 62, 60, 19, 215, 61, 233, 147, 74, 62, 220, 247, 8, 190, 187, 73, 43, 62, 4, 159, 99, 190, 198, 126, 103, 190, 208, 89, 136, 190, 187, 231, 248, 189, 39, 96, 190, 62, 195, 101, 31, 190, 193, 15, 19, 190, 108, 84, 42, 190, 195, 79, 20, 190, 130, 222, 35, 61, 180, 32, 61, 190, 15, 156, 6, 61, 251, 233, 206, 190, 182, 115, 141, 62, 13, 113, 47, 58, 150, 93, 213, 190, 25, 96, 11, 62, 157, 33, 39, 62, 128, 37, 168, 61, 124, 35, 168, 190, 99, 6, 172, 190, 134, 66, 195, 62, 153, 232, 175, 61, 73, 156, 1, 188, 105, 18, 109, 190, 171, 134, 15, 191, 187, 13, 65, 62, 201, 254, 67, 62, 118, 43, 181, 61, 161, 14, 167, 62, 168, 185, 0, 62, 41, 253, 187, 190, 55, 28, 142, 62, 20, 181, 36, 61, 32, 142, 249, 60, 41, 71, 162, 189, 117, 9, 63, 61, 100, 206, 99, 62, 142, 213, 66, 61, 129, 9, 214, 60, 14, 206, 158, 62, 175, 60, 19, 62, 175, 39, 14, 190, 195, 224, 172, 61, 32, 10, 150, 61, 119, 112, 73, 62, 139, 81, 82, 190, 87, 87, 31, 62, 126, 250, 140, 190, 40, 82, 44, 190, 114, 51, 10, 190, 105, 77, 2, 62, 61, 64, 239, 60, 255, 227, 138, 190, 64, 199, 201, 190, 113, 150, 149, 62, 58, 141, 111, 190, 166, 135, 105, 62, 186, 190, 14, 60, 81, 30, 162, 189, 147, 211, 165, 60, 48, 82, 138, 188, 227, 173, 70, 62, 128, 136, 251, 187, 16, 153, 214, 61, 208, 0, 70, 62, 203, 26, 51, 62, 115, 201, 38, 191, 26, 44, 148, 190, 199, 88, 35, 62, 189, 141, 77, 189, 27, 14, 97, 59, 53, 181, 15, 189, 105, 226, 113, 191, 70, 152, 81, 190, 223, 112, 251, 189, 2, 224, 142, 62, 202, 164, 3, 62, 14, 2, 148, 62, 92, 149, 117, 62, 202, 152, 125, 189, 141, 161, 82, 62, 132, 42, 105, 62, 77, 30, 98, 190, 148, 134, 162, 190, 81, 15, 71, 62, 238, 253, 214, 61, 28, 100, 62, 190, 112, 79, 123, 190, 186, 134, 158, 189, 220, 26, 5, 190, 107, 245, 79, 61, 242, 206, 243, 61, 248, 84, 22, 62, 36, 16, 174, 61, 203, 16, 29, 190, 139, 98, 197, 189, 242, 224, 182, 61, 215, 216, 41, 189, 132, 151, 163, 59, 67, 99, 199, 61, 128, 212, 157, 61, 59, 20, 169, 190, 125, 78, 90, 190, 115, 205, 16, 190, 95, 166, 148, 61, 71, 245, 224, 189, 33, 122, 228, 61, 100, 136, 224, 189, 172, 140, 94, 186, 107, 209, 24, 190, 191, 39, 163, 189, 16, 164, 103, 186, 34, 154, 166, 61, 97, 28, 80, 62, 22, 29, 81, 62, 49, 242, 2, 61, 187, 134, 158, 189, 81, 237, 171, 189, 43, 104, 90, 62, 92, 232, 238, 188, 245, 44, 162, 189, 35, 121, 61, 61, 218, 43, 39, 62, 34, 178, 232, 60, 18, 31, 63, 190, 26, 50, 1, 61, 50, 240, 131, 189, 118, 137, 106, 188, 148, 29, 79, 62, 39, 220, 252, 60, 226, 74, 104, 62, 191, 15, 128, 61, 7, 248, 53, 62, 122, 51, 157, 62, 184, 235, 218, 58, 251, 219, 48, 190, 57, 179, 244, 189, 183, 27, 132, 187, 219, 17, 242, 60, 182, 161, 40, 62, 143, 68, 41, 61, 64, 191, 230, 59, 177, 9, 24, 61, 96, 193, 246, 190, 105, 228, 187, 61, 171, 227, 8, 191, 127, 8, 59, 62, 232, 151, 192, 186, 176, 127, 136, 62, 233, 59, 224, 189, 221, 255, 192, 62, 232, 253, 126, 189, 217, 255, 249, 61, 216, 137, 2, 60, 137, 108, 63, 190, 137, 32, 108, 62, 169, 254, 109, 190, 239, 249, 139, 189, 148, 172, 50, 190, 94, 37, 5, 191, 41, 206, 202, 189, 185, 114, 215, 61, 142, 91, 11, 189, 133, 50, 5, 188, 77, 28, 140, 62, 180, 165, 6, 61, 161, 207, 46, 190, 47, 120, 173, 190, 221, 75, 78, 190, 33, 52, 223, 189, 68, 9, 232, 190, 102, 42, 212, 189, 254, 31, 124, 60, 137, 142, 32, 191, 239, 218, 3, 187, 222, 184, 135, 62, 112, 28, 109, 190, 8, 30, 14, 62, 60, 122, 42, 189, 156, 11, 139, 58, 69, 81, 12, 191, 124, 135, 200, 60, 114, 202, 39, 62, 157, 164, 69, 189, 124, 198, 64, 190, 110, 87, 215, 190, 76, 5, 254, 61, 212, 10, 135, 190, 25, 24, 239, 61, 172, 144, 185, 189, 93, 59, 36, 190, 237, 136, 165, 62, 221, 156, 79, 62, 12, 241, 28, 189, 96, 46, 37, 61, 152, 213, 20, 191, 251, 20, 23, 190, 20, 139, 176, 188, 18, 35, 199, 62, 162, 169, 32, 61, 120, 249, 50, 62, 110, 73, 104, 61, 206, 214, 156, 61, 59, 157, 252, 189, 145, 13, 95, 190, 176, 161, 148, 62, 74, 163, 148, 187, 152, 44, 61, 62, 131, 214, 101, 190, 124, 160, 92, 62, 141, 54, 7, 191, 14, 63, 195, 189, 227, 206, 44, 190, 141, 11, 218, 60, 104, 7, 36, 62, 108, 254, 129, 190, 62, 84, 142, 61, 50, 151, 234, 190, 111, 201, 61, 62, 154, 224, 115, 61, 74, 158, 27, 189, 108, 63, 94, 62, 60, 118, 52, 190, 211, 30, 180, 61, 91, 110, 167, 61, 58, 205, 130, 59, 230, 99, 150, 62, 31, 225, 137, 190, 210, 47, 31, 190, 159, 38, 214, 189, 156, 23, 203, 62, 205, 166, 55, 191, 8, 214, 243, 187, 154, 34, 184, 189, 162, 114, 122, 62, 245, 192, 205, 60, 237, 46, 149, 190, 70, 131, 139, 62, 146, 238, 136, 61, 219, 145, 96, 189, 126, 226, 57, 61, 254, 171, 126, 61, 37, 140, 146, 191, 77, 193, 207, 190, 106, 219, 142, 62, 226, 96, 61, 189, 33, 6, 84, 62, 148, 19, 24, 189, 95, 100, 134, 190, 106, 32, 37, 190, 194, 160, 72, 62, 210, 0, 100, 190, 209, 124, 41, 62, 90, 177, 116, 62, 208, 208, 134, 62, 115, 131, 139, 62, 194, 237, 23, 62, 219, 9, 229, 61, 171, 216, 57, 62, 41, 15, 207, 60, 199, 68, 55, 62, 154, 30, 41, 189, 160, 151, 54, 61, 50, 107, 93, 188, 236, 181, 117, 61, 40, 228, 240, 189, 229, 11, 105, 189, 148, 22, 210, 190, 10, 228, 89, 62, 27, 124, 145, 190, 114, 143, 232, 189, 101, 148, 166, 188, 242, 97, 0, 62, 0, 128, 191, 188, 229, 30, 185, 189, 65, 206, 147, 60, 40, 3, 216, 189, 138, 211, 10, 59, 169, 82, 217, 189, 247, 227, 21, 190, 151, 106, 16, 190, 85, 33, 197, 189, 88, 122, 210, 61, 59, 243, 41, 190, 208, 128, 5, 62, 184, 236, 255, 189, 107, 84, 25, 190, 239, 232, 175, 188, 181, 179, 153, 61, 135, 84, 238, 189, 129, 220, 28, 188, 84, 118, 53, 189, 112, 210, 175, 187, 31, 117, 201, 188, 166, 27, 94, 188, 140, 189, 29, 190, 6, 182, 131, 61, 253, 158, 162, 61, 30, 79, 220, 189, 122, 65, 197, 61, 219, 13, 8, 190, 73, 128, 204, 188, 64, 32, 217, 61, 199, 211, 90, 62, 160, 135, 154, 190, 148, 237, 250, 61, 131, 228, 64, 62, 77, 253, 135, 61, 251, 155, 185, 60, 132, 201, 0, 61, 56, 29, 163, 190, 63, 179, 174, 62, 46, 105, 180, 190, 159, 194, 120, 62, 99, 153, 62, 62, 70, 7, 244, 189, 177, 138, 203, 189, 178, 215, 32, 61, 218, 73, 128, 62, 72, 253, 54, 62, 99, 56, 56, 190, 101, 181, 159, 62, 72, 148, 223, 61, 200, 243, 78, 190, 167, 109, 37, 190, 190, 168, 82, 189, 234, 16, 144, 62, 196, 214, 177, 62, 64, 29, 244, 189, 196, 76, 192, 62, 207, 89, 109, 62, 194, 231, 0, 62, 103, 66, 200, 61, 198, 234, 216, 62, 223, 106, 177, 61, 162, 229, 235, 60, 101, 83, 140, 62, 159, 21, 34, 191, 30, 87, 168, 62, 166, 17, 109, 187, 238, 243, 131, 62, 112, 167, 33, 190, 13, 134, 157, 62, 102, 146, 136, 190, 205, 249, 127, 62, 169, 18, 181, 189, 149, 153, 149, 190, 165, 156, 164, 62, 232, 202, 192, 190, 90, 70, 104, 190, 236, 163, 43, 190, 176, 179, 178, 190, 132, 168, 63, 61, 1, 188, 117, 61, 10, 123, 109, 188, 99, 238, 36, 62, 185, 155, 167, 62, 219, 179, 65, 62, 52, 27, 49, 191, 128, 197, 144, 190, 162, 66, 215, 190, 167, 215, 132, 190, 109, 139, 121, 191, 239, 237, 192, 62, 208, 43, 220, 61, 9, 45, 46, 191, 217, 214, 170, 62, 236, 176, 0, 61, 87, 224, 36, 59, 74, 192, 35, 190, 98, 103, 217, 189, 49, 6, 106, 189, 185, 119, 167, 188, 28, 223, 37, 189, 254, 88, 150, 61, 66, 246, 127, 189, 143, 213, 0, 62, 246, 78, 119, 60, 206, 90, 211, 189, 87, 165, 158, 60, 22, 163, 14, 190, 237, 21, 156, 61, 89, 28, 232, 60, 117, 254, 234, 188, 78, 225, 130, 189, 212, 130, 19, 188, 167, 217, 213, 61, 6, 152, 254, 61, 38, 121, 158, 186, 139, 249, 7, 190, 160, 126, 222, 189, 98, 218, 178, 189, 94, 245, 70, 190, 182, 150, 135, 61, 111, 27, 147, 61, 166, 36, 35, 190, 239, 52, 246, 61, 63, 124, 21, 190, 220, 117, 15, 62, 163, 61, 208, 190, 110, 143, 16, 190, 209, 252, 53, 191, 149, 107, 20, 62, 140, 182, 56, 62, 41, 245, 69, 62, 68, 36, 70, 191, 76, 17, 180, 62, 145, 81, 77, 190, 89, 234, 27, 190, 8, 49, 80, 61, 200, 31, 217, 189, 157, 7, 81, 61, 64, 136, 11, 190, 224, 143, 26, 62, 203, 131, 54, 190, 20, 245, 93, 62, 37, 247, 23, 190, 144, 229, 151, 61, 32, 203, 198, 190, 35, 217, 157, 60, 169, 174, 38, 190, 135, 181, 95, 61, 12, 98, 184, 189, 198, 115, 73, 62, 208, 69, 114, 191, 197, 100, 236, 189, 34, 113, 208, 190, 103, 108, 245, 61, 253, 80, 138, 62, 119, 158, 214, 60, 241, 42, 162, 62, 252, 174, 83, 61, 174, 127, 65, 189, 108, 75, 10, 189, 51, 217, 2, 190, 43, 113, 19, 62, 185, 168, 18, 191, 113, 40, 136, 189, 64, 242, 204, 62, 169, 201, 66, 190, 115, 226, 240, 61, 163, 236, 243, 190, 230, 22, 80, 61, 223, 118, 76, 187, 127, 254, 1, 62, 57, 30, 128, 62, 190, 137, 134, 62, 18, 220, 161, 62, 175, 224, 176, 61, 184, 128, 2, 60, 240, 245, 114, 62, 177, 0, 250, 190, 128, 85, 40, 190, 91, 172, 166, 62, 198, 249, 146, 62, 50, 223, 115, 190, 166, 216, 154, 189, 127, 166, 106, 190, 194, 226, 48, 62, 184, 63, 16, 61, 228, 137, 16, 190, 79, 219, 35, 62, 183, 170, 229, 59, 73, 208, 139, 62, 65, 217, 29, 60, 18, 32, 131, 62, 214, 7, 229, 190, 24, 99, 159, 190, 25, 4, 31, 61, 107, 11, 161, 188, 244, 189, 169, 190, 246, 73, 132, 188, 107, 151, 172, 190, 81, 251, 26, 60, 84, 204, 143, 62, 14, 181, 225, 187, 39, 105, 123, 62, 180, 157, 68, 189, 215, 163, 73, 190, 52, 154, 184, 62, 117, 152, 41, 190, 250, 242, 141, 62, 74, 124, 72, 62, 245, 80, 145, 188, 219, 105, 148, 61, 76, 163, 212, 189, 236, 78, 163, 62, 63, 41, 12, 63, 3, 92, 68, 62, 86, 225, 167, 189, 175, 253, 224, 61, 141, 176, 29, 60, 23, 210, 93, 62, 19, 202, 3, 62, 46, 200, 70, 62, 192, 65, 129, 189, 133, 140, 212, 189, 0, 96, 222, 189, 137, 174, 209, 188, 192, 97, 39, 190, 106, 80, 41, 62, 126, 197, 81, 60, 181, 45, 30, 189, 127, 46, 158, 61, 40, 242, 240, 61, 208, 121, 17, 190, 238, 191, 51, 190, 41, 37, 89, 185, 101, 229, 240, 189, 204, 121, 239, 186, 168, 164, 226, 189, 62, 197, 92, 61, 19, 7, 16, 190, 81, 159, 173, 186, 77, 239, 9, 190, 206, 3, 128, 187, 31, 196, 121, 188, 1, 221, 41, 61, 80, 212, 252, 61, 154, 97, 164, 188, 32, 150, 92, 61, 138, 22, 184, 189, 192, 49, 217, 61, 197, 103, 255, 60, 3, 183, 31, 190, 1, 186, 90, 60, 117, 187, 35, 190, 241, 230, 151, 62, 6, 22, 148, 61, 247, 82, 166, 61, 230, 56, 35, 191, 204, 163, 176, 61, 180, 161, 42, 191, 155, 9, 233, 61, 151, 48, 244, 62, 247, 157, 200, 60, 26, 95, 111, 189, 214, 161, 14, 191, 126, 106, 24, 62, 153, 103, 79, 190, 240, 148, 132, 62, 55, 8, 149, 62, 232, 208, 5, 63, 198, 232, 141, 62, 100, 75, 99, 62, 115, 125, 84, 62, 64, 253, 144, 62, 141, 129, 6, 191, 61, 172, 181, 61, 31, 182, 3, 62, 142, 110, 107, 62, 221, 174, 118, 191, 203, 52, 165, 61, 133, 81, 168, 189, 129, 154, 20, 62, 63, 188, 236, 189, 18, 10, 141, 190, 158, 157, 218, 61, 236, 82, 150, 189, 9, 205, 135, 61, 115, 112, 244, 61, 209, 10, 36, 187, 11, 139, 101, 61, 121, 9, 89, 60, 123, 131, 172, 189, 80, 53, 233, 189, 224, 75, 48, 62, 229, 31, 5, 62, 120, 160, 11, 62, 245, 195, 21, 190, 239, 209, 18, 62, 146, 52, 84, 189, 175, 244, 174, 189, 164, 108, 94, 189, 106, 1, 71, 189, 42, 26, 175, 188, 166, 28, 175, 61, 22, 190, 62, 190, 77, 201, 34, 189, 39, 199, 19, 190, 67, 122, 220, 189, 172, 46, 127, 190, 168, 119, 189, 61, 55, 232, 120, 61, 19, 149, 211, 189, 29, 172, 174, 61, 227, 86, 149, 189, 45, 66, 113, 190, 23, 183, 214, 61, 58, 236, 197, 189, 3, 255, 128, 190, 236, 37, 117, 62, 19, 158, 43, 61, 252, 162, 50, 61, 118, 65, 40, 62, 48, 197, 218, 61, 61, 132, 168, 59, 141, 117, 99, 62, 118, 58, 9, 191, 144, 5, 239, 61, 235, 34, 13, 191, 162, 14, 19, 190, 199, 208, 29, 59, 72, 79, 135, 190, 94, 58, 207, 188, 5, 66, 179, 189, 233, 39, 108, 62, 30, 65, 219, 61, 34, 233, 144, 189, 76, 48, 30, 62, 17, 240, 209, 61, 146, 111, 4, 188, 253, 235, 206, 59, 22, 250, 134, 61, 134, 43, 49, 190, 223, 240, 167, 62, 44, 73, 10, 62, 247, 189, 218, 60, 9, 229, 6, 190, 154, 74, 222, 61, 6, 240, 140, 190, 223, 232, 124, 61, 179, 136, 55, 62, 87, 26, 52, 62, 93, 22, 10, 190, 105, 78, 36, 62, 44, 92, 203, 61, 31, 114, 202, 61, 197, 145, 154, 190, 86, 15, 131, 62, 79, 217, 166, 62, 198, 7, 153, 190, 11, 173, 72, 62, 12, 149, 14, 188, 49, 157, 146, 62, 47, 132, 173, 60, 251, 195, 179, 188, 254, 229, 157, 62, 218, 14, 149, 190, 231, 38, 139, 62, 86, 102, 220, 61, 75, 236, 174, 59, 186, 226, 67, 60, 115, 85, 60, 190, 67, 236, 12, 187, 175, 197, 207, 61, 39, 248, 73, 62, 21, 250, 23, 60, 52, 242, 21, 189, 233, 140, 213, 189, 128, 133, 108, 58, 255, 164, 254, 61, 24, 106, 138, 60, 19, 107, 229, 188, 253, 228, 104, 61, 161, 146, 160, 62, 10, 250, 176, 190, 170, 98, 119, 62, 12, 21, 249, 189, 200, 124, 10, 62, 119, 93, 24, 191, 201, 197, 2, 188, 153, 21, 175, 62, 56, 53, 42, 190, 56, 136, 48, 62, 66, 196, 189, 190, 102, 198, 2, 62, 111, 41, 169, 189, 78, 97, 202, 61, 112, 205, 136, 62, 204, 159, 210, 190, 121, 138, 106, 62, 19, 4, 52, 62, 215, 104, 146, 188, 167, 153, 35, 62, 129, 162, 80, 190, 236, 178, 132, 190, 241, 253, 146, 188, 207, 187, 151, 62, 102, 73, 53, 62, 28, 47, 157, 61, 195, 238, 29, 190, 92, 125, 42, 62, 156, 94, 234, 188, 110, 244, 170, 190, 69, 80, 27, 62, 30, 93, 154, 61, 130, 85, 138, 190, 232, 125, 150, 61, 105, 88, 12, 189, 152, 5, 145, 60, 233, 253, 93, 189, 80, 150, 163, 62, 16, 109, 39, 62, 131, 242, 77, 62, 19, 239, 108, 62, 155, 185, 138, 61, 68, 218, 97, 62, 105, 79, 19, 61, 175, 176, 122, 62, 89, 53, 16, 190, 144, 87, 30, 62, 123, 55, 169, 61, 248, 62, 53, 191, 93, 210, 72, 62, 229, 199, 171, 62, 95, 50, 47, 61, 27, 241, 37, 62, 82, 178, 136, 62, 123, 85, 155, 189, 9, 118, 231, 190, 66, 212, 113, 190, 52, 128, 161, 60, 58, 188, 18, 62, 15, 149, 228, 189, 228, 86, 94, 190, 28, 87, 228, 62, 242, 237, 153, 189, 225, 70, 38, 190, 240, 251, 65, 190, 98, 101, 182, 62, 109, 246, 20, 190, 109, 64, 101, 62, 122, 60, 56, 189, 113, 226, 186, 62, 184, 57, 92, 62, 107, 36, 185, 62, 24, 229, 56, 190, 148, 226, 209, 61, 176, 80, 90, 189, 96, 231, 66, 62, 143, 102, 63, 62, 253, 247, 85, 190, 220, 220, 24, 61, 84, 254, 246, 61, 125, 99, 170, 190, 20, 47, 199, 61, 180, 16, 32, 189, 54, 134, 21, 190, 87, 39, 211, 62, 40, 140, 127, 62, 90, 140, 96, 189, 108, 194, 0, 191, 149, 131, 206, 190, 58, 241, 69, 61, 11, 182, 89, 190, 151, 42, 44, 190, 255, 171, 253, 60, 144, 196, 228, 62, 170, 206, 0, 191, 202, 119, 162, 61, 165, 237, 87, 62, 107, 246, 219, 61, 195, 161, 186, 61, 238, 6, 55, 191, 108, 195, 42, 61, 251, 30, 2, 191, 145, 59, 13, 62, 47, 72, 136, 62, 192, 27, 151, 62, 38, 180, 125, 189, 158, 136, 9, 190, 181, 35, 214, 188, 15, 232, 210, 60, 42, 194, 169, 189, 213, 50, 58, 190, 54, 169, 120, 62, 197, 175, 85, 62, 226, 60, 62, 190, 56, 183, 161, 189, 169, 236, 49, 62, 158, 111, 156, 190, 123, 76, 133, 188, 81, 175, 12, 62, 67, 8, 150, 61, 39, 176, 15, 191, 218, 244, 174, 188, 80, 166, 117, 62, 103, 222, 128, 62, 212, 65, 189, 60, 43, 67, 39, 190, 155, 163, 120, 62, 113, 254, 172, 189, 181, 238, 143, 189, 46, 230, 18, 62, 122, 74, 22, 191, 199, 200, 136, 62, 232, 177, 96, 62, 58, 236, 121, 62, 173, 180, 191, 188, 178, 139, 153, 62, 36, 208, 118, 190, 146, 84, 145, 62, 255, 168, 250, 189, 95, 37, 217, 190, 29, 232, 206, 62, 135, 121, 170, 190, 186, 12, 177, 190, 93, 229, 177, 61, 68, 206, 85, 191, 137, 77, 100, 62, 204, 194, 125, 189, 70, 114, 197, 189, 219, 208, 17, 190, 123, 232, 129, 61, 26, 72, 80, 62, 11, 51, 42, 191, 37, 64, 101, 190, 139, 187, 4, 191, 22, 197, 58, 190, 245, 50, 144, 191, 212, 51, 110, 62, 115, 108, 179, 61, 159, 233, 39, 191, 230, 46, 165, 62, 74, 241, 194, 189, 59, 123, 79, 61, 238, 137, 1, 191, 137, 63, 217, 189, 232, 129, 28, 190, 246, 47, 189, 190, 74, 18, 239, 187, 57, 177, 77, 189, 67, 74, 96, 189, 187, 175, 122, 62, 0, 212, 166, 60, 244, 97, 172, 190, 213, 124, 133, 62, 5, 90, 197, 61, 23, 83, 100, 190, 189, 177, 4, 62, 203, 163, 157, 190, 200, 115, 64, 190, 220, 117, 134, 189, 61, 91, 110, 62, 105, 122, 42, 62, 133, 23, 79, 62, 92, 60, 92, 59, 6, 161, 137, 190, 147, 152, 72, 62, 179, 11, 8, 61, 76, 130, 142, 190, 157, 230, 106, 62, 56, 167, 175, 190, 129, 122, 239, 190, 163, 51, 84, 190, 114, 108, 153, 60, 233, 77, 32, 191, 79, 10, 184, 61, 30, 169, 197, 190, 138, 97, 74, 62, 190, 182, 109, 62, 251, 61, 161, 61, 192, 107, 72, 190, 35, 95, 148, 62, 30, 24, 39, 189, 246, 99, 128, 189, 244, 17, 94, 191, 179, 245, 47, 189, 162, 8, 35, 61, 60, 150, 182, 189, 171, 53, 33, 190, 205, 7, 16, 190, 28, 140, 114, 191, 224, 72, 252, 60, 171, 21, 188, 62, 105, 54, 136, 60, 32, 152, 200, 61, 61, 191, 194, 61, 200, 70, 203, 189, 45, 119, 130, 191, 93, 36, 231, 189, 251, 17, 89, 190, 154, 192, 131, 62, 199, 48, 67, 191, 186, 80, 52, 62, 184, 189, 246, 189, 149, 48, 240, 60, 108, 220, 77, 62, 243, 62, 12, 191, 211, 113, 41, 62, 21, 8, 207, 190, 229, 37, 75, 62, 30, 103, 111, 62, 142, 12, 0, 190, 33, 173, 21, 62, 120, 232, 140, 62, 91, 173, 155, 189, 63, 37, 66, 61, 250, 243, 182, 61, 137, 114, 17, 191, 59, 52, 92, 62, 245, 220, 203, 190, 146, 113, 68, 191, 79, 61, 181, 190, 73, 0, 53, 191, 193, 110, 128, 62, 4, 169, 2, 62, 217, 243, 143, 61, 17, 139, 198, 189, 70, 164, 74, 62, 122, 0, 44, 62, 7, 30, 135, 191, 44, 253, 84, 190, 98, 11, 223, 190, 67, 226, 53, 61, 14, 7, 201, 191, 203, 227, 168, 62, 127, 71, 142, 190, 67, 211, 17, 191, 245, 17, 140, 62, 5, 52, 113, 62, 50, 153, 148, 190, 114, 62, 245, 61, 40, 176, 229, 190, 238, 135, 3, 61, 239, 179, 171, 190, 16, 4, 10, 62, 216, 30, 238, 62, 156, 24, 74, 62, 166, 159, 235, 189, 116, 247, 182, 190, 107, 196, 119, 62, 226, 71, 162, 189, 93, 255, 66, 62, 209, 62, 150, 62, 91, 115, 100, 62, 154, 214, 207, 62, 239, 128, 154, 189, 40, 35, 221, 189, 175, 91, 22, 62, 115, 11, 253, 189, 112, 40, 126, 189, 99, 228, 42, 62, 216, 183, 196, 62, 119, 85, 201, 191, 24, 67, 47, 190, 199, 35, 217, 62, 118, 204, 46, 61, 102, 11, 169, 190, 249, 206, 134, 189, 33, 142, 39, 61, 84, 85, 129, 61, 47, 45, 155, 190, 127, 163, 38, 189, 183, 150, 128, 190, 45, 75, 181, 61, 71, 19, 149, 189, 187, 75, 44, 190, 23, 20, 59, 191, 234, 122, 166, 62, 189, 197, 63, 190, 65, 204, 146, 61, 27, 98, 48, 62, 52, 205, 155, 190, 132, 145, 6, 62, 182, 30, 199, 187, 81, 104, 198, 61, 159, 2, 109, 62, 186, 35, 255, 61, 23, 115, 187, 61, 166, 18, 35, 61, 88, 108, 226, 190, 96, 54, 228, 189, 11, 51, 158, 61, 32, 20, 101, 62, 132, 192, 71, 189, 238, 4, 157, 188, 75, 57, 136, 191, 121, 91, 62, 190, 157, 214, 54, 190, 223, 159, 69, 62, 48, 244, 139, 62, 134, 161, 89, 189, 181, 3, 27, 62, 156, 87, 54, 62, 227, 54, 152, 61, 190, 115, 139, 62, 193, 83, 6, 191, 173, 152, 5, 190, 246, 7, 33, 191, 106, 103, 116, 62, 202, 236, 5, 63, 53, 78, 40, 61, 171, 224, 141, 189, 168, 14, 38, 191, 158, 70, 109, 62, 60, 117, 155, 190, 99, 183, 76, 62, 75, 51, 204, 61, 64, 225, 120, 62, 210, 210, 138, 62, 162, 80, 39, 188, 176, 236, 89, 61, 101, 60, 245, 61, 46, 73, 179, 190, 213, 113, 207, 189, 6, 6, 142, 61, 55, 3, 157, 62, 252, 250, 192, 191, 32, 248, 178, 189, 101, 81, 168, 61, 166, 12, 42, 62, 104, 205, 120, 61, 56, 205, 180, 190, 191, 68, 204, 62, 230, 22, 68, 62};
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
                alignas(float) const unsigned char memory[] = {202, 145, 215, 190, 86, 108, 55, 190, 151, 131, 158, 189, 90, 191, 22, 59, 141, 185, 185, 61, 234, 58, 4, 62, 214, 235, 79, 62, 219, 55, 46, 62, 27, 10, 50, 62, 194, 170, 239, 189, 227, 249, 103, 189, 30, 68, 73, 62, 122, 33, 77, 190, 18, 173, 49, 62, 115, 19, 118, 62, 237, 151, 163, 189, 27, 35, 97, 60, 186, 82, 60, 62, 13, 116, 246, 189, 241, 129, 219, 188, 25, 35, 155, 188, 216, 43, 158, 61, 231, 112, 124, 189, 109, 183, 229, 61, 178, 194, 255, 61, 252, 200, 9, 62, 117, 242, 8, 62, 229, 20, 137, 62, 145, 172, 133, 61, 255, 225, 20, 62, 51, 117, 133, 61, 150, 160, 61, 62};
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
                alignas(float) const unsigned char memory[] = {69, 71, 54, 63, 118, 73, 73, 190, 150, 69, 214, 62, 61, 64, 84, 190, 126, 123, 56, 188, 230, 245, 252, 190, 237, 140, 147, 62, 63, 191, 243, 62, 250, 15, 126, 190, 36, 61, 140, 189, 11, 11, 129, 190, 249, 146, 37, 191, 119, 189, 205, 60, 97, 100, 133, 62, 210, 191, 130, 62, 215, 49, 144, 190, 21, 217, 77, 61, 185, 144, 40, 63, 245, 62, 147, 60, 133, 28, 97, 190, 126, 15, 56, 61, 200, 120, 245, 62, 121, 7, 148, 190, 206, 9, 220, 190, 248, 93, 130, 62, 215, 197, 43, 191, 87, 27, 176, 62, 212, 14, 185, 190, 66, 48, 92, 191, 153, 155, 195, 62, 202, 72, 223, 62, 38, 214, 65, 63, 36, 44, 35, 63, 215, 141, 26, 62, 200, 64, 198, 187, 176, 212, 244, 61, 48, 251, 80, 190, 19, 56, 160, 190, 164, 212, 140, 62, 222, 106, 143, 61, 38, 227, 173, 189, 163, 177, 127, 189, 43, 100, 30, 62, 32, 174, 58, 189, 82, 233, 180, 188, 18, 59, 190, 190, 222, 91, 200, 189, 206, 207, 42, 190, 113, 162, 238, 61, 245, 239, 153, 188, 2, 118, 12, 62, 120, 148, 133, 190, 167, 237, 62, 190, 198, 249, 143, 61, 250, 120, 24, 190, 176, 144, 94, 190, 190, 199, 103, 62, 48, 151, 72, 59, 127, 97, 103, 61, 246, 5, 121, 190, 250, 163, 115, 62, 96, 22, 110, 190, 13, 217, 104, 190, 151, 160, 78, 61};
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
                alignas(float) const unsigned char memory[] = {214, 14, 243, 189, 245, 223, 86, 190};
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
    alignas(float) const unsigned char memory[] = {134, 188, 112, 63, 142, 92, 242, 60, 53, 188, 86, 63};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {17, 142, 153, 191, 42, 112, 209, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0060/steps/000000000008000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}