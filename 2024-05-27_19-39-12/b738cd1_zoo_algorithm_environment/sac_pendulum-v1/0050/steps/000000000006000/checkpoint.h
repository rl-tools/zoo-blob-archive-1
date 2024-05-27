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
                alignas(float) const unsigned char memory[] = {234, 91, 131, 62, 169, 235, 175, 60, 192, 180, 28, 189, 189, 29, 159, 190, 90, 45, 27, 191, 106, 219, 142, 62, 69, 189, 186, 62, 35, 241, 35, 62, 176, 86, 134, 189, 227, 196, 225, 189, 97, 28, 209, 62, 19, 245, 39, 191, 99, 67, 0, 190, 232, 112, 143, 189, 175, 163, 191, 189, 171, 218, 149, 190, 79, 90, 92, 191, 64, 163, 173, 62, 102, 254, 136, 190, 174, 72, 52, 63, 4, 20, 204, 190, 193, 74, 205, 61, 222, 12, 164, 62, 118, 198, 5, 63, 158, 58, 38, 190, 247, 170, 120, 63, 227, 136, 203, 62, 117, 220, 43, 62, 125, 54, 21, 63, 41, 119, 94, 62, 128, 182, 75, 57, 31, 15, 56, 63, 186, 80, 22, 191, 89, 9, 15, 62, 105, 34, 134, 191, 38, 15, 228, 190, 129, 113, 138, 190, 75, 36, 64, 191, 87, 152, 210, 61, 188, 49, 12, 191, 182, 53, 61, 63, 207, 28, 211, 62, 137, 53, 50, 63, 91, 42, 108, 191, 6, 253, 154, 190, 70, 35, 152, 61, 47, 57, 129, 191, 16, 43, 136, 190, 230, 161, 159, 61, 85, 3, 201, 62, 213, 45, 92, 62, 127, 245, 39, 63, 183, 40, 148, 190, 198, 102, 186, 188, 63, 1, 199, 62, 85, 145, 74, 191, 112, 172, 57, 62, 114, 209, 243, 60, 50, 249, 229, 61, 7, 98, 190, 190, 224, 13, 119, 190, 191, 32, 221, 61, 173, 143, 110, 191, 225, 72, 242, 190, 29, 13, 50, 63, 9, 10, 83, 63, 74, 119, 147, 190, 243, 181, 15, 63, 224, 26, 41, 188, 93, 136, 10, 191, 93, 194, 9, 191, 76, 119, 36, 190, 72, 2, 139, 190, 230, 239, 228, 62, 99, 95, 28, 191, 0, 224, 163, 61, 235, 11, 67, 59, 5, 83, 36, 191, 69, 125, 141, 190, 9, 50, 59, 63, 93, 145, 211, 188, 213, 10, 176, 190, 89, 181, 63, 191, 204, 142, 51, 191, 184, 200, 130, 62, 24, 172, 64, 63, 220, 14, 239, 62, 236, 206, 38, 63, 104, 75, 208, 59, 176, 239, 53, 62, 113, 183, 92, 191, 116, 124, 97, 191, 124, 37, 31, 190, 46, 56, 158, 190, 171, 245, 6, 62, 67, 124, 28, 191};
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
                alignas(float) const unsigned char memory[] = {80, 13, 35, 191, 150, 2, 93, 190, 147, 200, 227, 62, 17, 73, 214, 61, 23, 43, 9, 191, 192, 209, 199, 190, 116, 210, 107, 61, 203, 46, 137, 190, 148, 199, 56, 60, 56, 41, 167, 190, 175, 105, 73, 190, 232, 205, 125, 190, 221, 183, 45, 63, 43, 20, 249, 190, 2, 3, 121, 62, 76, 239, 114, 190, 133, 234, 155, 190, 253, 29, 12, 190, 145, 12, 228, 190, 24, 104, 32, 63, 221, 215, 161, 190, 167, 19, 143, 190, 247, 119, 55, 63, 61, 170, 43, 63, 59, 142, 176, 60, 79, 131, 182, 60, 4, 160, 224, 62, 111, 184, 78, 187, 192, 88, 181, 190, 10, 140, 242, 190, 227, 190, 147, 62, 1, 142, 200, 190};
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
                alignas(float) const unsigned char memory[] = {165, 66, 233, 189, 4, 179, 190, 189, 253, 162, 98, 190, 56, 104, 148, 61, 188, 121, 102, 62, 82, 206, 178, 189, 170, 179, 8, 62, 159, 2, 153, 187, 252, 236, 13, 60, 29, 168, 33, 62, 109, 1, 101, 190, 101, 115, 218, 189, 92, 246, 21, 189, 245, 109, 2, 190, 181, 129, 67, 60, 235, 205, 159, 60, 20, 89, 251, 61, 25, 205, 192, 189, 247, 14, 203, 61, 21, 19, 48, 61, 124, 212, 255, 61, 175, 88, 115, 61, 164, 10, 252, 190, 133, 248, 227, 189, 179, 135, 129, 188, 132, 134, 62, 189, 97, 154, 232, 190, 244, 100, 210, 188, 4, 33, 207, 189, 3, 59, 147, 61, 28, 210, 159, 61, 164, 137, 217, 187, 237, 99, 6, 62, 41, 11, 44, 190, 128, 149, 222, 62, 102, 220, 83, 62, 4, 171, 203, 189, 61, 65, 65, 189, 45, 76, 72, 189, 65, 113, 58, 61, 139, 1, 244, 61, 39, 93, 131, 190, 149, 168, 93, 189, 36, 105, 17, 189, 118, 122, 11, 62, 146, 219, 18, 62, 55, 11, 179, 62, 60, 208, 3, 60, 129, 39, 223, 61, 112, 210, 62, 62, 173, 100, 95, 61, 117, 2, 153, 189, 143, 123, 56, 190, 134, 241, 32, 61, 251, 112, 67, 61, 123, 104, 75, 62, 101, 119, 146, 188, 7, 136, 196, 188, 62, 153, 48, 62, 146, 65, 169, 61, 255, 141, 119, 190, 132, 132, 144, 189, 191, 113, 69, 61, 237, 134, 117, 189, 206, 4, 208, 60, 233, 148, 36, 190, 201, 239, 209, 62, 212, 170, 58, 62, 174, 172, 1, 190, 128, 35, 103, 190, 83, 172, 85, 62, 76, 137, 170, 189, 188, 244, 207, 61, 191, 159, 38, 190, 228, 124, 106, 60, 87, 83, 60, 188, 126, 105, 102, 190, 114, 188, 207, 189, 138, 138, 103, 189, 143, 160, 184, 190, 200, 44, 43, 60, 24, 158, 28, 62, 112, 171, 85, 190, 143, 67, 44, 61, 80, 65, 153, 190, 130, 114, 35, 62, 244, 152, 132, 189, 251, 174, 25, 191, 153, 168, 161, 62, 142, 130, 110, 62, 187, 107, 22, 62, 26, 38, 38, 61, 236, 32, 121, 188, 153, 133, 227, 189, 159, 210, 34, 191, 221, 85, 211, 190, 93, 170, 233, 189, 230, 253, 83, 61, 134, 12, 189, 189, 229, 223, 0, 190, 9, 240, 173, 61, 59, 141, 161, 61, 154, 107, 14, 62, 24, 130, 78, 189, 181, 15, 55, 62, 6, 170, 116, 189, 132, 219, 144, 190, 207, 33, 110, 190, 173, 216, 166, 62, 195, 57, 167, 61, 45, 16, 44, 190, 135, 158, 158, 190, 210, 76, 77, 189, 106, 58, 160, 59, 105, 248, 93, 62, 27, 36, 135, 190, 103, 69, 173, 190, 35, 30, 65, 188, 208, 79, 107, 190, 170, 150, 141, 190, 143, 116, 222, 188, 94, 67, 125, 190, 255, 91, 103, 190, 95, 82, 193, 190, 0, 236, 85, 61, 49, 187, 163, 62, 29, 248, 14, 190, 141, 76, 227, 190, 121, 47, 134, 189, 180, 21, 3, 61, 31, 192, 87, 189, 198, 104, 48, 62, 70, 20, 68, 190, 70, 136, 151, 62, 97, 183, 248, 61, 173, 3, 162, 190, 105, 236, 133, 62, 87, 245, 28, 190, 248, 50, 134, 190, 247, 163, 134, 62, 190, 243, 37, 62, 222, 250, 128, 62, 78, 19, 44, 62, 35, 55, 175, 187, 53, 97, 132, 62, 237, 180, 133, 62, 97, 249, 136, 190, 231, 228, 6, 62, 143, 152, 32, 190, 61, 35, 113, 62, 74, 27, 36, 60, 145, 137, 148, 60, 139, 9, 19, 61, 248, 72, 64, 62, 122, 110, 69, 61, 216, 250, 157, 189, 179, 118, 99, 190, 157, 0, 130, 190, 95, 155, 42, 190, 104, 136, 99, 190, 224, 3, 13, 62, 90, 101, 126, 190, 211, 115, 158, 190, 212, 125, 189, 189, 232, 61, 159, 61, 103, 239, 31, 190, 193, 200, 238, 189, 16, 183, 66, 189, 231, 4, 15, 190, 190, 72, 162, 189, 201, 166, 162, 189, 105, 217, 183, 61, 167, 171, 139, 61, 196, 236, 235, 189, 77, 106, 244, 61, 149, 77, 190, 62, 208, 168, 242, 61, 197, 26, 153, 62, 188, 48, 40, 188, 44, 233, 136, 61, 28, 156, 32, 61, 202, 255, 222, 61, 102, 214, 205, 190, 184, 224, 206, 189, 5, 246, 182, 61, 180, 127, 249, 61, 57, 219, 196, 190, 119, 240, 126, 189, 249, 43, 85, 61, 247, 245, 16, 190, 137, 218, 22, 62, 85, 239, 73, 61, 49, 12, 43, 62, 31, 73, 54, 190, 206, 2, 34, 188, 124, 37, 86, 189, 206, 73, 35, 60, 111, 38, 13, 61, 86, 107, 140, 62, 6, 163, 145, 190, 16, 136, 94, 62, 5, 122, 199, 190, 20, 73, 144, 60, 177, 44, 151, 62, 25, 154, 21, 62, 247, 81, 232, 62, 204, 235, 15, 62, 200, 163, 94, 60, 143, 71, 119, 190, 193, 134, 156, 62, 82, 192, 123, 190, 4, 86, 126, 189, 4, 19, 168, 189, 186, 72, 47, 60, 108, 142, 219, 187, 142, 89, 158, 189, 240, 145, 35, 62, 244, 86, 155, 61, 110, 37, 74, 62, 193, 175, 184, 190, 48, 183, 56, 190, 168, 204, 208, 190, 59, 176, 25, 190, 172, 145, 45, 190, 197, 52, 151, 189, 194, 74, 1, 62, 123, 186, 127, 62, 49, 255, 205, 61, 42, 127, 255, 61, 91, 94, 167, 62, 67, 223, 26, 190, 64, 237, 85, 61, 47, 98, 237, 61, 73, 92, 133, 190, 173, 170, 137, 190, 157, 240, 157, 61, 189, 253, 132, 62, 49, 165, 71, 187, 71, 148, 35, 190, 5, 75, 159, 189, 14, 37, 69, 190, 140, 93, 141, 190, 106, 117, 117, 62, 116, 227, 225, 190, 233, 91, 135, 190, 181, 59, 156, 61, 214, 180, 220, 189, 253, 42, 223, 188, 182, 98, 29, 190, 110, 25, 23, 61, 24, 228, 85, 190, 198, 248, 62, 61, 139, 202, 62, 189, 208, 203, 9, 62, 140, 132, 215, 61, 66, 57, 87, 191, 9, 125, 96, 189, 118, 213, 16, 190, 202, 69, 188, 62, 140, 184, 185, 59, 19, 101, 128, 188, 25, 97, 23, 62, 209, 79, 88, 190, 71, 124, 15, 62, 143, 238, 59, 61, 13, 164, 212, 187, 56, 53, 83, 190, 28, 236, 186, 61, 100, 253, 198, 60, 155, 67, 23, 189, 175, 252, 204, 62, 115, 106, 158, 61, 178, 155, 33, 189, 183, 71, 216, 62, 72, 93, 25, 61, 62, 1, 143, 61, 224, 213, 211, 60, 242, 151, 130, 190, 224, 238, 170, 61, 50, 86, 187, 61, 100, 65, 67, 190, 39, 223, 73, 62, 172, 229, 250, 190, 139, 127, 149, 61, 39, 12, 28, 190, 39, 176, 147, 62, 142, 66, 143, 60, 165, 246, 122, 61, 37, 115, 61, 61, 234, 201, 125, 189, 174, 255, 198, 61, 50, 111, 116, 61, 251, 54, 88, 187, 30, 52, 139, 62, 142, 45, 101, 62, 20, 144, 28, 190, 27, 65, 66, 62, 89, 91, 147, 190, 178, 142, 28, 190, 189, 40, 51, 62, 166, 70, 155, 188, 232, 63, 237, 62, 212, 45, 70, 62, 60, 203, 56, 188, 223, 85, 145, 61, 44, 172, 66, 62, 111, 14, 139, 61, 209, 181, 197, 189, 149, 210, 240, 189, 82, 229, 19, 62, 80, 83, 34, 62, 222, 238, 202, 188, 251, 98, 34, 62, 80, 49, 122, 61, 224, 123, 230, 189, 40, 203, 90, 189, 127, 157, 52, 190, 132, 60, 148, 188, 201, 134, 29, 61, 215, 168, 147, 190, 164, 96, 76, 61, 196, 8, 9, 62, 25, 149, 94, 62, 150, 235, 157, 190, 162, 223, 194, 189, 199, 254, 170, 187, 255, 39, 88, 191, 226, 251, 79, 59, 129, 224, 253, 188, 244, 209, 149, 62, 48, 154, 155, 61, 5, 23, 196, 190, 89, 140, 85, 62, 214, 176, 162, 191, 99, 174, 169, 190, 31, 100, 20, 191, 12, 236, 159, 189, 2, 101, 144, 190, 251, 37, 134, 189, 155, 138, 101, 61, 31, 155, 88, 62, 46, 145, 186, 190, 214, 185, 31, 62, 19, 74, 164, 61, 57, 222, 50, 191, 51, 53, 35, 191, 139, 209, 111, 189, 208, 212, 230, 62, 96, 234, 110, 62, 7, 5, 139, 189, 117, 186, 233, 60, 199, 143, 219, 61, 196, 132, 165, 189, 206, 38, 64, 189, 249, 213, 159, 189, 110, 158, 171, 61, 154, 251, 137, 61, 125, 152, 96, 190, 246, 218, 201, 189, 124, 222, 14, 190, 234, 33, 140, 188, 114, 76, 238, 61, 94, 119, 153, 190, 167, 205, 153, 62, 73, 97, 137, 59, 93, 7, 128, 189, 208, 30, 140, 62, 107, 215, 27, 62, 46, 224, 132, 189, 230, 200, 127, 62, 247, 221, 146, 188, 127, 237, 245, 189, 151, 152, 5, 189, 202, 120, 229, 60, 22, 118, 204, 190, 49, 20, 43, 62, 123, 221, 222, 189, 80, 239, 5, 62, 18, 70, 44, 191, 71, 35, 99, 61, 115, 122, 111, 188, 56, 241, 107, 189, 240, 248, 182, 188, 221, 229, 83, 190, 144, 109, 243, 61, 192, 134, 205, 60, 162, 235, 175, 62, 219, 205, 152, 60, 244, 67, 197, 61, 151, 146, 180, 188, 106, 2, 157, 189, 89, 59, 44, 62, 188, 2, 53, 62, 140, 120, 51, 190, 181, 116, 197, 190, 174, 177, 33, 189, 208, 191, 66, 190, 38, 203, 210, 60, 10, 212, 13, 191, 107, 72, 204, 189, 153, 161, 177, 189, 54, 28, 48, 61, 118, 85, 126, 62, 167, 248, 59, 62, 98, 141, 148, 190, 96, 30, 241, 188, 53, 206, 153, 61, 159, 0, 217, 190, 22, 140, 0, 190, 5, 236, 133, 61, 114, 158, 24, 62, 134, 137, 214, 60, 185, 82, 232, 61, 205, 175, 182, 62, 47, 43, 239, 190, 201, 77, 177, 190, 128, 180, 158, 187, 181, 113, 8, 191, 48, 142, 79, 62, 24, 65, 83, 189, 192, 142, 134, 190, 99, 199, 112, 62, 103, 107, 19, 61, 119, 245, 96, 190, 175, 215, 190, 62, 88, 50, 31, 190, 54, 139, 159, 190, 12, 251, 60, 190, 21, 208, 181, 61, 84, 229, 103, 62, 5, 6, 226, 61, 20, 213, 62, 190, 125, 219, 191, 190, 179, 110, 71, 62, 24, 231, 180, 62, 100, 219, 86, 189, 80, 36, 44, 191, 103, 201, 36, 61, 252, 68, 45, 62, 100, 225, 29, 62, 31, 91, 188, 61, 231, 93, 129, 190, 105, 233, 58, 189, 168, 82, 70, 191, 27, 159, 209, 189, 235, 13, 7, 190, 45, 204, 132, 61, 205, 29, 192, 189, 193, 191, 152, 61, 39, 124, 47, 63, 32, 251, 182, 62, 95, 30, 168, 190, 233, 81, 128, 190, 2, 44, 187, 190, 179, 8, 175, 189, 66, 121, 172, 62, 9, 44, 99, 191, 36, 215, 136, 62, 105, 49, 155, 62, 82, 191, 129, 190, 80, 112, 133, 60, 224, 172, 250, 191, 4, 100, 139, 190, 171, 53, 234, 190, 78, 103, 175, 62, 146, 127, 5, 61, 246, 7, 236, 189, 28, 191, 173, 62, 31, 218, 69, 62, 237, 151, 46, 191, 140, 192, 53, 61, 201, 2, 205, 61, 207, 242, 93, 190, 88, 139, 189, 190, 26, 84, 13, 62, 120, 216, 22, 62, 80, 180, 237, 62, 255, 95, 156, 190, 66, 101, 201, 62, 209, 83, 192, 62, 161, 195, 153, 61, 16, 125, 16, 187, 222, 172, 155, 62, 173, 66, 81, 189, 84, 252, 41, 62, 208, 207, 0, 62, 223, 221, 23, 62, 124, 249, 133, 188, 207, 100, 100, 62, 239, 244, 176, 60, 198, 144, 175, 190, 231, 194, 145, 61, 84, 238, 9, 190, 135, 124, 155, 189, 234, 160, 63, 61, 220, 216, 18, 190, 20, 210, 0, 62, 243, 229, 20, 62, 17, 111, 164, 62, 120, 171, 90, 62, 111, 178, 71, 191, 83, 216, 162, 61, 71, 82, 15, 62, 41, 63, 34, 191, 108, 42, 73, 190, 175, 11, 165, 61, 125, 153, 75, 62, 23, 55, 235, 189, 34, 247, 113, 189, 141, 217, 153, 62, 88, 174, 73, 191, 66, 180, 249, 190, 134, 37, 1, 190, 236, 108, 212, 62, 49, 212, 180, 62, 58, 46, 228, 189, 32, 215, 233, 190, 147, 245, 220, 61, 83, 3, 155, 190, 63, 44, 121, 189, 50, 57, 0, 191, 68, 212, 137, 61, 209, 131, 52, 62, 126, 48, 214, 190, 15, 201, 73, 61, 23, 185, 170, 191, 68, 210, 40, 190, 53, 136, 53, 191, 223, 17, 167, 62, 143, 62, 94, 61, 155, 14, 133, 189, 39, 41, 175, 61, 9, 216, 168, 62, 101, 242, 206, 190, 179, 3, 49, 62, 75, 253, 160, 189, 90, 246, 173, 190, 123, 147, 53, 190, 83, 208, 120, 61, 23, 230, 139, 62, 14, 28, 12, 62, 57, 150, 85, 189, 167, 1, 61, 62, 156, 238, 162, 62, 247, 141, 41, 190, 73, 157, 5, 190, 152, 3, 153, 189, 72, 86, 150, 189, 100, 199, 29, 62, 212, 50, 204, 190, 156, 240, 89, 190, 125, 248, 152, 189, 40, 214, 53, 62, 51, 132, 212, 62, 103, 219, 168, 190, 242, 9, 29, 190, 106, 59, 67, 191, 141, 224, 137, 190, 136, 122, 60, 190, 41, 151, 33, 59, 43, 206, 41, 62, 140, 252, 109, 190, 98, 142, 254, 60, 46, 13, 7, 191, 180, 207, 63, 61, 32, 47, 10, 61, 232, 57, 192, 189, 42, 153, 246, 190, 71, 93, 81, 58, 213, 192, 67, 188, 9, 122, 53, 61, 144, 35, 1, 190, 116, 164, 60, 61, 174, 49, 216, 190, 196, 37, 174, 190, 154, 218, 69, 189, 92, 61, 232, 61, 2, 72, 17, 190, 40, 204, 170, 59, 162, 161, 153, 61, 50, 219, 206, 61, 115, 130, 90, 188, 5, 145, 249, 189, 47, 202, 214, 189, 173, 191, 37, 190, 21, 242, 215, 61, 57, 119, 6, 190, 44, 51, 220, 61, 91, 129, 33, 190, 152, 185, 134, 61, 120, 200, 72, 190, 60, 200, 42, 190, 1, 170, 60, 189, 186, 81, 30, 62, 8, 75, 80, 62, 180, 166, 129, 61, 164, 120, 218, 61, 178, 220, 242, 61, 255, 112, 126, 61, 27, 234, 162, 189, 53, 58, 209, 61, 235, 9, 180, 61, 93, 206, 1, 190, 179, 220, 236, 189, 254, 36, 104, 61, 102, 203, 28, 190, 100, 52, 172, 61, 13, 93, 253, 189, 69, 195, 224, 61, 65, 67, 134, 62, 135, 149, 74, 62, 235, 168, 215, 61, 77, 115, 125, 190, 132, 35, 209, 61, 130, 172, 202, 190, 207, 79, 129, 188, 32, 217, 2, 191, 213, 234, 33, 61, 109, 168, 10, 189, 107, 207, 253, 189, 6, 188, 86, 62, 145, 4, 184, 191, 215, 15, 244, 61, 130, 249, 126, 190, 193, 37, 37, 62, 95, 21, 181, 61, 131, 83, 94, 62, 155, 180, 101, 62, 210, 187, 37, 61, 54, 166, 221, 190, 44, 240, 233, 61, 203, 48, 52, 189, 148, 66, 78, 190, 55, 120, 95, 190, 91, 84, 129, 61, 41, 250, 99, 62, 229, 89, 156, 62, 14, 108, 56, 61, 78, 143, 95, 61, 81, 105, 68, 62, 8, 115, 210, 189, 164, 36, 212, 62, 67, 227, 156, 190, 215, 42, 43, 190, 166, 246, 137, 61, 121, 67, 150, 62, 224, 199, 150, 189, 86, 231, 146, 190, 50, 140, 73, 191, 21, 36, 19, 190, 32, 82, 1, 62, 160, 109, 158, 190, 181, 88, 171, 62, 142, 108, 190, 191, 220, 155, 16, 191, 7, 222, 38, 191, 85, 254, 1, 62, 143, 67, 210, 60, 104, 177, 138, 190, 44, 87, 69, 62, 36, 89, 69, 62, 19, 255, 73, 191, 72, 102, 166, 61, 139, 17, 0, 62, 106, 65, 136, 189, 156, 24, 186, 190, 220, 54, 224, 60, 190, 151, 123, 62, 222, 7, 230, 60, 86, 2, 255, 61, 139, 188, 174, 62, 118, 82, 3, 189, 134, 51, 125, 189, 73, 57, 18, 187, 216, 47, 24, 190, 121, 214, 177, 189, 162, 114, 190, 61, 50, 82, 129, 60, 224, 191, 44, 188, 21, 146, 144, 189, 167, 87, 148, 61, 72, 49, 60, 190, 222, 116, 134, 190, 162, 73, 109, 62, 241, 141, 157, 61, 62, 40, 9, 62, 105, 245, 88, 62, 152, 173, 27, 62, 247, 69, 153, 189, 155, 215, 167, 189, 48, 154, 97, 189, 105, 193, 168, 61, 70, 237, 22, 190, 141, 43, 148, 189, 249, 153, 22, 191, 240, 3, 18, 190, 203, 176, 59, 62, 11, 49, 29, 62, 206, 1, 68, 191, 96, 102, 125, 61, 170, 34, 254, 189, 71, 148, 146, 59, 167, 93, 157, 61, 192, 223, 6, 190, 120, 86, 180, 61, 218, 28, 38, 190, 151, 88, 50, 190, 234, 27, 199, 62, 211, 147, 35, 60, 65, 101, 197, 62, 17, 204, 152, 62, 56, 76, 162, 190, 119, 201, 207, 61, 81, 211, 146, 190, 97, 252, 154, 190, 47, 78, 128, 62, 115, 135, 125, 62, 37, 241, 218, 62, 184, 157, 163, 61, 5, 137, 184, 61, 76, 98, 92, 190, 99, 69, 22, 63, 39, 171, 197, 190, 103, 15, 141, 189, 232, 233, 4, 191, 185, 199, 154, 61, 175, 96, 102, 62, 51, 7, 173, 189, 6, 40, 200, 62, 1, 58, 128, 62, 4, 197, 31, 62, 243, 171, 184, 190, 82, 196, 55, 190, 82, 64, 108, 190, 139, 166, 200, 61, 175, 169, 146, 190, 174, 67, 135, 189, 48, 111, 71, 188, 26, 7, 208, 62, 162, 108, 115, 190, 191, 166, 103, 187, 22, 127, 229, 188, 250, 139, 0, 61, 187, 52, 22, 62, 73, 212, 24, 62, 187, 161, 162, 60, 243, 235, 113, 190, 74, 118, 8, 190, 8, 193, 85, 188, 127, 240, 107, 190, 176, 223, 255, 190, 160, 72, 39, 189, 83, 224, 145, 61, 102, 48, 26, 190, 73, 68, 21, 62, 91, 101, 13, 62, 227, 45, 104, 190, 125, 191, 104, 61, 152, 153, 236, 57, 64, 180, 191, 190, 246, 35, 168, 189, 153, 228, 138, 189, 255, 216, 66, 61, 246, 56, 102, 188, 198, 40, 25, 62, 182, 175, 157, 62, 64, 64, 52, 191, 242, 196, 129, 190, 253, 214, 36, 189, 111, 239, 71, 190, 189, 141, 59, 63, 175, 170, 179, 61, 163, 4, 2, 61, 8, 140, 167, 61, 180, 33, 201, 61, 111, 81, 218, 188, 15, 92, 131, 62, 130, 112, 151, 190, 153, 128, 88, 190, 104, 236, 192, 186, 252, 181, 30, 62, 239, 190, 100, 62, 59, 99, 175, 62, 118, 129, 38, 189, 116, 140, 31, 190, 86, 166, 161, 62, 16, 180, 166, 61, 254, 19, 54, 60, 82, 137, 16, 61, 240, 41, 217, 61, 102, 161, 112, 62, 205, 238, 254, 61, 132, 126, 4, 62, 12, 6, 179, 188, 231, 82, 61, 61, 114, 49, 139, 186, 177, 22, 34, 190, 237, 115, 49, 189, 59, 234, 215, 60, 232, 205, 156, 190, 92, 240, 94, 61, 252, 206, 116, 62, 79, 43, 90, 62, 143, 34, 10, 190, 48, 92, 149, 190, 42, 77, 37, 190, 202, 92, 43, 190, 89, 193, 46, 190, 241, 250, 196, 190, 108, 129, 225, 186, 156, 165, 10, 62, 253, 107, 48, 190, 146, 174, 158, 61, 139, 56, 182, 191, 154, 48, 165, 61, 209, 138, 147, 59, 147, 253, 180, 189, 142, 146, 27, 58, 67, 44, 99, 190, 221, 29, 87, 62, 91, 120, 43, 189, 122, 189, 203, 190, 164, 217, 104, 61, 137, 171, 78, 62, 88, 218, 121, 190, 32, 193, 100, 189, 24, 46, 110, 61, 113, 54, 43, 60, 198, 225, 55, 62, 111, 205, 112, 190, 20, 222, 65, 62, 174, 160, 19, 62, 179, 45, 13, 190, 56, 87, 214, 61, 196, 237, 22, 190, 142, 16, 217, 189, 28, 106, 94, 61, 135, 127, 147, 190, 125, 220, 48, 190, 103, 177, 105, 62, 133, 209, 3, 189, 11, 148, 167, 62, 104, 13, 81, 190, 85, 51, 243, 61, 44, 142, 242, 190, 54, 121, 120, 190, 48, 61, 9, 62, 107, 70, 224, 188, 4, 190, 31, 62, 192, 131, 250, 190, 108, 140, 146, 190, 246, 246, 27, 191, 202, 162, 13, 61, 187, 157, 208, 61, 42, 8, 11, 61, 100, 165, 110, 189, 12, 4, 181, 189, 44, 251, 28, 62, 6, 135, 134, 187, 184, 5, 54, 190, 99, 87, 85, 62, 5, 129, 43, 191, 34, 226, 9, 190, 235, 180, 60, 190, 211, 221, 150, 189, 183, 252, 7, 62, 117, 215, 199, 60, 68, 133, 246, 59, 235, 157, 249, 61, 126, 160, 1, 62, 74, 62, 79, 189, 107, 17, 88, 189, 198, 195, 64, 62, 229, 217, 189, 189, 201, 183, 32, 59, 23, 18, 16, 62, 171, 221, 38, 61, 114, 244, 134, 60, 136, 210, 179, 59, 112, 211, 207, 189, 254, 94, 153, 61, 217, 95, 151, 189, 212, 181, 219, 62, 238, 51, 78, 190, 254, 119, 25, 61, 188, 81, 171, 189, 144, 118, 196, 190, 105, 239, 195, 190, 18, 63, 18, 186, 161, 65, 222, 61, 121, 27, 165, 190, 199, 174, 36, 189, 119, 53, 203, 61, 20, 9, 139, 62, 192, 207, 191, 190, 35, 105, 68, 190, 23, 50, 21, 190, 56, 173, 128, 189, 47, 229, 186, 61, 137, 2, 151, 60, 204, 140, 39, 62, 60, 185, 135, 60, 206, 201, 185, 189, 39, 202, 10, 62, 210, 249, 132, 188, 173, 119, 44, 190, 128, 71, 167, 60, 65, 156, 145, 188, 196, 127, 222, 60, 79, 2, 1, 62, 18, 73, 56, 190, 57, 202, 32, 190, 133, 110, 31, 190, 48, 232, 6, 190, 191, 215, 152, 60, 95, 101, 27, 62, 240, 218, 65, 189, 142, 65, 154, 189, 128, 245, 242, 189, 114, 122, 37, 190, 243, 56, 34, 190, 33, 181, 180, 189, 239, 55, 228, 189, 114, 213, 6, 190, 214, 96, 142, 189, 51, 236, 134, 60, 79, 44, 58, 189, 141, 25, 166, 61, 168, 110, 47, 62, 248, 6, 20, 190, 38, 163, 22, 63, 104, 142, 190, 189, 57, 152, 15, 62, 131, 163, 180, 189, 0, 92, 145, 189, 246, 51, 246, 189, 247, 111, 109, 61, 165, 45, 56, 190, 169, 95, 96, 190, 219, 9, 151, 61, 51, 172, 129, 190, 36, 105, 225, 189, 103, 248, 135, 186, 232, 164, 40, 190, 191, 20, 35, 190, 121, 81, 165, 61, 234, 107, 133, 188, 196, 243, 63, 62, 60, 58, 19, 191, 198, 94, 126, 61, 191, 52, 131, 62, 70, 87, 16, 191, 77, 240, 21, 190, 206, 96, 36, 62, 241, 107, 244, 61, 144, 14, 168, 190, 5, 104, 40, 62, 49, 55, 165, 188, 201, 133, 31, 191, 45, 162, 250, 190, 253, 177, 149, 60, 209, 241, 29, 188, 31, 37, 213, 62, 65, 144, 210, 58, 45, 105, 43, 62, 123, 61, 10, 61, 229, 114, 171, 61, 153, 48, 127, 61, 231, 190, 175, 187, 62, 228, 19, 62, 224, 105, 147, 58, 211, 58, 22, 190, 175, 194, 255, 189, 80, 17, 11, 189, 56, 132, 228, 188, 1, 230, 123, 190, 144, 58, 52, 189, 50, 244, 3, 62, 149, 91, 169, 62, 4, 129, 151, 61, 223, 21, 230, 188, 207, 36, 224, 61, 21, 76, 80, 61, 117, 151, 30, 191, 4, 21, 213, 61, 201, 64, 181, 62, 63, 172, 67, 62, 188, 40, 96, 61, 82, 222, 7, 62, 27, 137, 203, 61, 74, 119, 103, 191, 182, 63, 144, 190, 127, 201, 193, 61, 210, 56, 234, 189, 46, 216, 55, 188, 7, 166, 92, 190, 146, 235, 31, 190, 143, 251, 207, 62, 240, 59, 67, 190, 129, 74, 156, 190, 83, 155, 42, 62, 46, 166, 10, 191, 54, 105, 219, 190, 57, 144, 49, 62, 44, 137, 150, 62, 44, 34, 170, 62, 6, 237, 179, 62, 164, 135, 144, 60, 17, 247, 242, 188, 40, 12, 234, 62, 160, 119, 241, 61, 34, 25, 213, 61, 229, 247, 43, 191, 27, 34, 38, 62, 9, 78, 100, 62, 134, 150, 208, 188, 186, 34, 7, 61, 40, 27, 113, 190, 244, 163, 107, 189, 173, 50, 66, 191, 118, 5, 154, 190, 22, 229, 149, 61, 136, 26, 27, 188, 201, 228, 157, 190};
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
                alignas(float) const unsigned char memory[] = {16, 52, 149, 190, 17, 41, 3, 62, 12, 167, 48, 62, 116, 235, 0, 62, 119, 69, 175, 59, 0, 68, 133, 190, 145, 225, 193, 61, 24, 78, 24, 62, 247, 143, 145, 61, 119, 133, 243, 61, 4, 11, 88, 62, 101, 108, 69, 190, 141, 142, 142, 61, 71, 61, 169, 61, 171, 169, 86, 61, 107, 103, 48, 62, 17, 122, 209, 61, 142, 200, 121, 190, 255, 87, 9, 190, 135, 207, 92, 62, 149, 172, 2, 189, 154, 196, 2, 189, 112, 201, 94, 62, 134, 133, 76, 61, 227, 9, 119, 62, 131, 183, 178, 60, 202, 247, 37, 190, 226, 230, 92, 190, 30, 94, 70, 60, 208, 192, 37, 62, 35, 71, 173, 61, 58, 21, 23, 62};
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
                alignas(float) const unsigned char memory[] = {255, 226, 38, 190, 82, 44, 179, 61, 128, 163, 146, 190, 110, 1, 118, 190, 136, 219, 175, 62, 21, 213, 12, 190, 125, 65, 192, 62, 95, 126, 207, 190, 59, 192, 114, 62, 61, 114, 137, 62, 147, 99, 113, 191, 103, 195, 165, 190, 59, 34, 159, 190, 8, 193, 38, 63, 61, 106, 144, 191, 16, 217, 218, 190, 92, 248, 44, 191, 13, 180, 43, 63, 81, 45, 139, 61, 134, 31, 159, 190, 129, 92, 82, 191, 10, 32, 67, 190, 207, 212, 250, 62, 200, 221, 29, 190, 222, 166, 37, 62, 199, 97, 181, 190, 37, 112, 178, 62, 202, 233, 173, 190, 86, 98, 120, 61, 213, 28, 220, 190, 85, 162, 175, 190, 2, 89, 26, 63, 62, 3, 163, 61, 123, 202, 68, 190, 222, 6, 81, 190, 133, 48, 43, 61, 7, 71, 85, 189, 132, 232, 112, 62, 65, 18, 91, 62, 139, 163, 154, 188, 181, 236, 100, 190, 216, 52, 214, 187, 183, 221, 207, 59, 216, 147, 212, 62, 28, 62, 90, 61, 149, 199, 29, 190, 184, 8, 131, 62, 205, 22, 36, 60, 21, 109, 129, 187, 52, 140, 232, 62, 41, 155, 171, 189, 102, 187, 155, 190, 28, 92, 212, 60, 99, 112, 66, 62, 69, 155, 90, 62, 209, 213, 4, 62, 201, 167, 143, 190, 83, 180, 59, 190, 208, 155, 166, 62, 165, 129, 28, 190, 5, 31, 219, 61, 53, 42, 93, 190, 87, 123, 210, 188, 91, 83, 162, 189};
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
                alignas(float) const unsigned char memory[] = {237, 39, 163, 59, 64, 163, 202, 190};
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
    alignas(float) const unsigned char memory[] = {115, 19, 95, 63, 119, 74, 110, 191, 172, 22, 20, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {143, 213, 210, 63, 213, 50, 142, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0050/steps/000000000006000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}