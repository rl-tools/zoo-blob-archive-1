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
                alignas(float) const unsigned char memory[] = {166, 33, 178, 61, 18, 181, 254, 187, 242, 26, 36, 190, 35, 235, 136, 190, 198, 224, 212, 190, 33, 242, 141, 62, 253, 10, 146, 190, 51, 186, 146, 62, 26, 179, 118, 62, 189, 72, 7, 191, 51, 243, 113, 62, 158, 87, 6, 62, 211, 206, 81, 62, 28, 59, 142, 62, 250, 232, 225, 62, 31, 90, 151, 189, 191, 16, 195, 62, 44, 184, 223, 62, 181, 7, 26, 190, 145, 172, 240, 190, 163, 54, 84, 61, 32, 32, 114, 62, 127, 157, 231, 190, 72, 49, 252, 190, 72, 8, 191, 190, 27, 180, 162, 62, 151, 98, 227, 62, 160, 163, 151, 61, 244, 175, 170, 190, 238, 9, 207, 190, 175, 65, 40, 189, 247, 144, 222, 61, 42, 6, 114, 190, 155, 24, 245, 189, 148, 77, 198, 61, 234, 107, 209, 62, 172, 138, 226, 189, 105, 50, 101, 189, 85, 220, 7, 191, 112, 53, 182, 190, 144, 90, 8, 62, 220, 121, 52, 62, 129, 244, 17, 63, 205, 192, 16, 191, 75, 105, 73, 190, 113, 45, 241, 189, 21, 206, 156, 189, 153, 82, 251, 190, 88, 34, 14, 189, 204, 125, 187, 189, 224, 55, 15, 63, 202, 185, 62, 188, 111, 104, 1, 191, 28, 7, 180, 62, 166, 204, 198, 189, 237, 64, 11, 62, 165, 121, 219, 62, 89, 1, 219, 189, 40, 226, 15, 191, 3, 91, 164, 62, 16, 76, 10, 191, 150, 24, 245, 189, 127, 205, 198, 61, 17, 232, 236, 189, 192, 31, 170, 62, 244, 203, 198, 62, 17, 179, 180, 190, 185, 14, 200, 60, 218, 227, 6, 63, 218, 58, 196, 190, 114, 123, 14, 191, 236, 157, 125, 189, 78, 39, 4, 191, 84, 99, 108, 62, 254, 106, 129, 61, 205, 30, 191, 190, 159, 52, 133, 190, 160, 3, 100, 62, 99, 213, 101, 190, 142, 20, 4, 62, 230, 164, 241, 62, 155, 135, 216, 62, 164, 47, 253, 190, 198, 198, 206, 62, 3, 25, 8, 190, 154, 225, 15, 63, 95, 201, 236, 190, 161, 83, 131, 62, 175, 55, 233, 62, 189, 229, 211, 188, 3, 202, 198, 190, 168, 139, 139, 190, 177, 142, 71, 189, 35, 174, 41, 189, 29, 92, 37, 61, 141, 76, 229, 190};
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
                alignas(float) const unsigned char memory[] = {28, 153, 19, 191, 221, 188, 226, 62, 172, 103, 164, 62, 87, 187, 221, 190, 13, 186, 1, 191, 240, 40, 141, 62, 7, 123, 48, 189, 121, 68, 255, 61, 160, 237, 238, 190, 187, 154, 75, 62, 62, 140, 141, 62, 114, 182, 68, 190, 251, 89, 19, 63, 170, 194, 250, 62, 98, 92, 185, 62, 247, 112, 1, 62, 156, 217, 191, 62, 155, 201, 228, 189, 150, 27, 10, 190, 120, 12, 181, 62, 174, 177, 205, 62, 255, 227, 222, 189, 13, 179, 5, 63, 118, 46, 230, 62, 96, 13, 140, 190, 146, 112, 128, 190, 210, 100, 1, 61, 249, 118, 10, 191, 7, 92, 179, 62, 107, 51, 2, 191, 47, 176, 17, 191, 211, 125, 31, 190};
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
                alignas(float) const unsigned char memory[] = {127, 142, 32, 62, 236, 10, 33, 190, 165, 23, 44, 189, 164, 223, 195, 189, 147, 251, 37, 62, 218, 135, 35, 62, 232, 162, 9, 190, 207, 196, 44, 62, 125, 212, 46, 62, 230, 177, 121, 61, 136, 97, 1, 189, 57, 132, 27, 62, 72, 131, 25, 190, 195, 155, 31, 62, 113, 128, 39, 190, 167, 177, 50, 60, 165, 176, 42, 62, 141, 21, 230, 187, 80, 215, 152, 61, 237, 139, 226, 189, 110, 35, 49, 62, 196, 86, 242, 61, 179, 50, 221, 60, 176, 45, 20, 190, 64, 191, 227, 60, 131, 255, 18, 190, 185, 6, 52, 189, 36, 241, 252, 189, 23, 86, 137, 189, 22, 144, 147, 61, 190, 204, 118, 61, 162, 132, 224, 61, 194, 8, 174, 189, 242, 193, 11, 62, 152, 72, 138, 186, 1, 46, 93, 189, 150, 11, 56, 60, 76, 48, 71, 186, 152, 118, 47, 189, 71, 21, 14, 190, 15, 38, 129, 60, 62, 59, 30, 62, 92, 187, 12, 190, 252, 5, 164, 189, 205, 106, 178, 189, 0, 140, 253, 189, 35, 58, 167, 189, 33, 15, 13, 62, 188, 36, 23, 62, 118, 191, 28, 190, 250, 230, 186, 61, 198, 248, 218, 61, 242, 139, 226, 189, 69, 112, 48, 62, 83, 173, 96, 189, 57, 248, 31, 62, 99, 54, 220, 61, 100, 162, 47, 62, 154, 4, 49, 190, 35, 31, 185, 61, 120, 126, 39, 188, 87, 179, 11, 60, 206, 79, 242, 61, 125, 65, 33, 62, 220, 144, 128, 61, 65, 138, 159, 61, 226, 15, 131, 61, 109, 64, 105, 61, 153, 128, 212, 60, 91, 185, 60, 61, 68, 3, 213, 61, 116, 133, 5, 62, 43, 220, 48, 62, 255, 15, 21, 62, 161, 182, 104, 188, 18, 140, 149, 189, 56, 91, 166, 189, 48, 6, 16, 190, 126, 176, 189, 188, 59, 202, 181, 61, 239, 34, 3, 190, 166, 194, 161, 61, 110, 86, 204, 189, 243, 5, 222, 186, 73, 133, 44, 62, 44, 19, 84, 188, 171, 60, 235, 189, 127, 208, 165, 189, 222, 109, 130, 61, 235, 108, 42, 62, 149, 6, 218, 189, 54, 61, 197, 61, 128, 166, 171, 61, 171, 149, 203, 61, 185, 62, 43, 190, 58, 48, 185, 61, 157, 37, 176, 60, 209, 46, 109, 61, 34, 232, 218, 189, 200, 36, 129, 189, 15, 8, 5, 62, 172, 160, 181, 189, 137, 23, 61, 61, 148, 226, 29, 190, 63, 1, 41, 62, 139, 249, 180, 189, 41, 247, 205, 61, 107, 8, 152, 189, 138, 149, 209, 60, 106, 207, 141, 61, 70, 82, 1, 190, 149, 168, 47, 62, 251, 137, 4, 190, 246, 155, 36, 61, 95, 224, 24, 62, 243, 50, 199, 59, 166, 82, 197, 187, 15, 27, 189, 189, 199, 15, 34, 190, 210, 3, 25, 190, 138, 29, 33, 190, 34, 9, 51, 190, 113, 75, 21, 190, 146, 8, 188, 61, 20, 123, 31, 190, 100, 255, 12, 62, 199, 49, 30, 190, 165, 251, 23, 61, 69, 86, 26, 62, 220, 30, 130, 189, 111, 91, 222, 189, 84, 190, 193, 189, 22, 116, 13, 189, 127, 249, 230, 61, 44, 132, 211, 61, 205, 189, 4, 190, 216, 80, 205, 189, 235, 4, 210, 61, 55, 9, 40, 189, 203, 169, 139, 189, 114, 57, 138, 61, 59, 192, 20, 62, 66, 61, 51, 62, 169, 171, 68, 189, 22, 212, 45, 62, 222, 67, 234, 189, 197, 189, 238, 61, 37, 253, 27, 190, 71, 130, 51, 62, 64, 193, 9, 62, 96, 94, 15, 60, 130, 138, 6, 188, 212, 209, 3, 190, 75, 28, 50, 190, 164, 192, 39, 190, 4, 203, 12, 62, 222, 160, 189, 60, 73, 21, 15, 62, 252, 178, 9, 62, 241, 188, 30, 62, 251, 77, 164, 60, 9, 199, 32, 62, 126, 236, 138, 189, 142, 146, 0, 62, 134, 0, 182, 189, 68, 52, 31, 62, 237, 254, 166, 189, 215, 173, 174, 189, 7, 68, 23, 62, 219, 26, 175, 61, 231, 253, 40, 62, 200, 45, 79, 61, 144, 147, 44, 62, 118, 7, 34, 190, 17, 111, 247, 60, 215, 189, 111, 189, 243, 143, 14, 190, 59, 166, 145, 189, 141, 209, 176, 61, 235, 247, 175, 61, 157, 42, 49, 190, 218, 113, 3, 62, 95, 211, 254, 60, 220, 146, 196, 189, 191, 13, 151, 61, 9, 183, 144, 61, 75, 41, 195, 60, 102, 117, 52, 190, 201, 138, 41, 190, 193, 123, 223, 61, 173, 40, 20, 62, 19, 228, 141, 59, 227, 67, 184, 61, 18, 76, 4, 61, 114, 26, 22, 62, 73, 105, 201, 61, 89, 115, 231, 60, 214, 198, 247, 60, 209, 148, 126, 189, 45, 42, 9, 62, 86, 67, 6, 190, 125, 76, 225, 60, 241, 42, 12, 62, 152, 11, 88, 60, 46, 59, 96, 189, 172, 168, 10, 190, 153, 9, 77, 59, 101, 27, 198, 189, 125, 119, 10, 190, 245, 200, 209, 188, 211, 247, 2, 190, 176, 157, 111, 60, 218, 176, 169, 61, 122, 199, 146, 189, 69, 239, 210, 59, 52, 159, 75, 59, 234, 189, 217, 189, 134, 221, 72, 189, 186, 127, 147, 189, 19, 21, 226, 61, 3, 32, 192, 189, 58, 172, 41, 62, 238, 182, 176, 189, 38, 231, 118, 61, 30, 63, 43, 62, 207, 123, 133, 189, 255, 201, 5, 190, 144, 232, 237, 60, 26, 74, 31, 190, 78, 239, 195, 61, 196, 71, 92, 188, 52, 178, 63, 189, 235, 224, 153, 61, 187, 168, 166, 189, 214, 50, 26, 190, 163, 151, 14, 190, 126, 152, 18, 62, 248, 131, 32, 62, 70, 50, 0, 190, 184, 211, 208, 189, 176, 252, 152, 189, 129, 150, 219, 188, 14, 206, 178, 189, 214, 18, 253, 189, 101, 119, 177, 189, 90, 233, 202, 189, 244, 132, 12, 61, 115, 209, 103, 189, 224, 240, 29, 190, 173, 247, 53, 189, 86, 245, 46, 61, 144, 47, 41, 190, 36, 149, 87, 189, 1, 6, 92, 187, 78, 2, 18, 62, 24, 112, 150, 61, 97, 47, 168, 60, 184, 83, 96, 188, 49, 157, 54, 61, 185, 148, 10, 62, 233, 102, 7, 62, 181, 114, 147, 189, 97, 94, 50, 62, 159, 22, 34, 62, 51, 111, 243, 189, 117, 210, 51, 62, 204, 71, 231, 188, 150, 163, 13, 189, 180, 143, 111, 61, 136, 177, 218, 61, 170, 32, 165, 61, 82, 52, 50, 189, 79, 136, 148, 189, 1, 147, 233, 61, 167, 114, 4, 190, 62, 111, 249, 61, 53, 33, 161, 189, 43, 219, 230, 188, 171, 249, 3, 62, 171, 187, 205, 189, 79, 84, 15, 190, 25, 115, 138, 61, 226, 19, 3, 190, 101, 11, 136, 188, 76, 21, 36, 190, 120, 82, 195, 189, 197, 134, 187, 61, 178, 69, 151, 189, 149, 16, 244, 189, 160, 232, 68, 189, 107, 146, 205, 189, 119, 74, 249, 61, 61, 49, 32, 62, 186, 26, 1, 190, 185, 21, 32, 190, 210, 80, 250, 61, 92, 248, 166, 61, 13, 55, 0, 190, 30, 137, 96, 189, 11, 54, 241, 60, 169, 135, 199, 189, 214, 171, 20, 190, 190, 37, 147, 61, 191, 191, 42, 190, 130, 162, 203, 61, 62, 101, 223, 189, 25, 85, 5, 190, 79, 46, 203, 61, 179, 228, 96, 61, 65, 187, 197, 60, 64, 160, 22, 62, 99, 111, 37, 190, 85, 226, 46, 188, 226, 76, 23, 190, 218, 237, 91, 61, 160, 140, 36, 62, 165, 52, 3, 189, 180, 38, 183, 61, 61, 149, 169, 61, 186, 85, 212, 61, 50, 115, 101, 189, 159, 172, 139, 60, 17, 16, 47, 190, 25, 162, 8, 60, 199, 61, 29, 62, 197, 85, 255, 189, 170, 93, 190, 61, 6, 64, 218, 189, 147, 62, 186, 60, 84, 11, 175, 189, 201, 123, 169, 188, 95, 196, 51, 190, 114, 149, 4, 190, 2, 167, 74, 60, 59, 68, 165, 187, 46, 102, 176, 61, 22, 38, 50, 190, 162, 92, 173, 189, 150, 91, 46, 187, 22, 36, 43, 190, 131, 152, 249, 60, 93, 155, 9, 62, 193, 176, 95, 61, 158, 67, 28, 61, 240, 73, 27, 190, 169, 250, 21, 187, 26, 105, 152, 61, 250, 18, 221, 189, 141, 18, 48, 190, 241, 15, 89, 61, 18, 207, 131, 61, 161, 152, 51, 62, 125, 219, 6, 190, 246, 41, 48, 62, 169, 178, 10, 61, 45, 248, 216, 189, 255, 209, 151, 189, 1, 204, 27, 59, 106, 19, 80, 59, 93, 161, 200, 188, 235, 136, 172, 189, 28, 215, 136, 61, 61, 142, 204, 61, 184, 212, 187, 60, 71, 159, 74, 188, 132, 42, 19, 61, 79, 32, 218, 187, 156, 198, 31, 190, 135, 223, 222, 189, 156, 22, 177, 189, 169, 67, 51, 62, 30, 158, 21, 60, 97, 58, 28, 61, 144, 36, 92, 61, 165, 148, 190, 188, 73, 38, 229, 60, 46, 10, 194, 189, 179, 25, 15, 60, 117, 63, 144, 61, 149, 254, 162, 61, 140, 169, 3, 62, 246, 174, 135, 61, 207, 17, 28, 62, 122, 255, 181, 61, 91, 18, 50, 62, 226, 73, 245, 189, 204, 109, 37, 62, 176, 239, 186, 189, 236, 18, 5, 189, 244, 169, 27, 190, 87, 142, 23, 190, 76, 0, 204, 61, 206, 204, 141, 61, 49, 81, 19, 62, 199, 157, 184, 188, 196, 211, 224, 189, 138, 87, 16, 62, 69, 250, 131, 189, 32, 104, 21, 190, 174, 170, 168, 60, 129, 123, 176, 189, 72, 197, 31, 190, 62, 178, 192, 188, 244, 26, 143, 189, 80, 88, 214, 61, 1, 128, 211, 61, 61, 144, 185, 61, 104, 129, 163, 61, 43, 95, 163, 61, 54, 169, 46, 61, 89, 99, 236, 60, 17, 55, 190, 189, 5, 231, 143, 189, 194, 221, 149, 189, 208, 140, 3, 62, 199, 163, 8, 188, 154, 204, 90, 189, 48, 21, 247, 189, 39, 117, 136, 189, 190, 52, 17, 190, 42, 27, 201, 60, 26, 82, 76, 185, 237, 57, 190, 189, 14, 210, 37, 190, 107, 223, 224, 60, 139, 58, 247, 188, 115, 244, 0, 62, 214, 208, 52, 190, 33, 188, 144, 188, 6, 104, 42, 61, 213, 135, 215, 189, 146, 86, 136, 61, 167, 128, 6, 190, 227, 199, 108, 188, 52, 139, 50, 187, 147, 197, 49, 62, 211, 145, 189, 189, 251, 77, 156, 189, 12, 23, 236, 188, 92, 16, 43, 187, 152, 236, 240, 188, 35, 27, 172, 188, 104, 250, 206, 61, 182, 236, 213, 61, 121, 61, 40, 190, 149, 160, 179, 189, 35, 178, 30, 190, 212, 234, 120, 189, 197, 148, 229, 60, 80, 189, 171, 61, 63, 95, 253, 61, 80, 107, 123, 61, 132, 137, 226, 188, 161, 150, 26, 62, 71, 122, 49, 62, 155, 158, 241, 60, 108, 209, 9, 61, 143, 100, 49, 62, 252, 250, 81, 61, 61, 160, 63, 187, 231, 139, 31, 58, 249, 230, 195, 188, 164, 220, 143, 61, 12, 3, 192, 61, 26, 11, 9, 189, 129, 118, 52, 190, 27, 237, 239, 61, 47, 223, 210, 60, 6, 247, 239, 189, 103, 106, 31, 60, 42, 205, 39, 190, 173, 70, 43, 61, 121, 140, 147, 189, 234, 243, 98, 61, 192, 217, 48, 188, 83, 228, 50, 189, 130, 83, 133, 189, 246, 254, 205, 61, 92, 236, 51, 62, 59, 105, 10, 190, 68, 190, 19, 190, 236, 202, 205, 61, 72, 207, 159, 189, 32, 98, 31, 190, 137, 228, 247, 188, 104, 244, 51, 190, 192, 98, 223, 188, 166, 187, 206, 189, 150, 203, 14, 62, 157, 89, 175, 59, 87, 59, 11, 62, 92, 36, 21, 190, 5, 8, 251, 61, 73, 228, 101, 189, 196, 16, 228, 188, 104, 228, 31, 190, 21, 6, 209, 61, 115, 181, 160, 189, 8, 12, 224, 189, 140, 241, 49, 190, 1, 135, 208, 61, 57, 55, 185, 61, 232, 136, 96, 61, 85, 183, 6, 189, 196, 7, 49, 190, 61, 61, 230, 189, 112, 52, 161, 189, 72, 124, 127, 61, 200, 237, 37, 61, 142, 185, 189, 189, 103, 146, 131, 61, 68, 165, 214, 186, 206, 192, 42, 62, 39, 131, 1, 189, 169, 110, 9, 189, 34, 7, 140, 187, 232, 97, 77, 189, 51, 117, 6, 62, 166, 149, 77, 188, 123, 183, 50, 190, 140, 217, 14, 62, 143, 237, 35, 190, 142, 76, 183, 188, 19, 131, 241, 61, 22, 32, 42, 189, 248, 229, 31, 190, 48, 168, 5, 59, 37, 146, 144, 188, 245, 248, 200, 60, 206, 217, 161, 61, 36, 220, 131, 189, 204, 18, 231, 61, 6, 202, 21, 190, 235, 250, 220, 61, 176, 130, 220, 61, 87, 251, 17, 62, 185, 106, 161, 188, 189, 237, 226, 61, 115, 77, 9, 62, 219, 179, 18, 60, 205, 11, 253, 189, 140, 51, 14, 62, 47, 201, 32, 62, 106, 21, 143, 61, 59, 23, 223, 189, 69, 171, 213, 189, 40, 39, 16, 62, 57, 42, 125, 60, 133, 84, 36, 190, 254, 80, 192, 61, 14, 183, 27, 188, 86, 15, 145, 61, 238, 130, 214, 60, 31, 238, 152, 189, 79, 86, 177, 61, 141, 111, 203, 61, 125, 185, 205, 60, 44, 88, 145, 189, 132, 66, 233, 61, 60, 249, 242, 61, 53, 175, 139, 189, 126, 24, 217, 189, 1, 184, 74, 189, 149, 236, 206, 61, 131, 219, 116, 60, 236, 222, 31, 62, 143, 66, 205, 189, 14, 41, 22, 190, 59, 14, 210, 60, 198, 71, 197, 188, 162, 180, 145, 61, 251, 164, 176, 60, 51, 55, 147, 60, 5, 25, 201, 61, 127, 69, 143, 189, 99, 208, 30, 62, 119, 116, 237, 61, 96, 21, 209, 189, 11, 10, 110, 189, 82, 137, 3, 62, 200, 46, 248, 61, 168, 24, 202, 189, 115, 34, 227, 59, 63, 150, 49, 190, 166, 143, 96, 189, 223, 247, 153, 189, 235, 245, 87, 61, 132, 141, 15, 62, 217, 144, 132, 61, 173, 46, 192, 60, 164, 254, 155, 61, 210, 237, 34, 189, 127, 165, 225, 60, 136, 86, 18, 62, 246, 147, 46, 62, 101, 153, 42, 62, 11, 43, 171, 189, 20, 225, 253, 188, 109, 18, 171, 189, 224, 212, 80, 61, 173, 188, 247, 189, 40, 182, 7, 190, 254, 111, 113, 189, 126, 198, 220, 188, 235, 81, 71, 189, 33, 186, 194, 189, 10, 205, 206, 60, 207, 102, 132, 60, 141, 10, 17, 61, 57, 102, 231, 61, 223, 252, 88, 61, 146, 225, 229, 61, 217, 142, 0, 189, 82, 241, 219, 187, 132, 232, 221, 188, 236, 168, 208, 61, 88, 234, 239, 61, 60, 91, 128, 189, 201, 188, 1, 190, 131, 36, 119, 61, 73, 37, 209, 61, 142, 96, 14, 190, 233, 103, 14, 62, 156, 127, 173, 188, 98, 143, 148, 61, 80, 142, 230, 61, 105, 80, 26, 190, 140, 171, 175, 61, 14, 4, 22, 190, 254, 219, 157, 189, 121, 27, 117, 189, 69, 154, 240, 61, 19, 176, 163, 189, 138, 113, 37, 190, 213, 49, 24, 190, 62, 118, 4, 190, 142, 88, 222, 189, 55, 231, 21, 187, 142, 156, 192, 61, 125, 60, 127, 189, 158, 187, 134, 189, 3, 239, 4, 190, 36, 56, 150, 189, 17, 59, 116, 61, 250, 198, 50, 62, 5, 90, 22, 62, 246, 157, 139, 189, 98, 56, 191, 61, 18, 34, 42, 190, 1, 46, 53, 189, 91, 209, 190, 61, 79, 208, 135, 61, 254, 175, 36, 62, 238, 171, 233, 61, 103, 81, 26, 189, 231, 81, 179, 59, 128, 82, 80, 61, 175, 25, 183, 189, 55, 26, 154, 188, 8, 132, 174, 189, 177, 27, 151, 61, 46, 192, 39, 62, 18, 235, 42, 190, 240, 199, 25, 62, 141, 132, 80, 59, 100, 18, 182, 61, 155, 136, 130, 61, 80, 237, 23, 189, 234, 56, 170, 189, 38, 180, 65, 189, 219, 126, 253, 188, 43, 206, 103, 187, 6, 149, 53, 61, 68, 96, 19, 62, 105, 137, 238, 189, 137, 241, 128, 61, 163, 133, 165, 187, 116, 245, 55, 189, 11, 138, 99, 59, 20, 96, 139, 60, 110, 169, 158, 189, 136, 124, 147, 61, 15, 30, 16, 62, 212, 174, 14, 62, 203, 145, 144, 189, 147, 11, 224, 61, 137, 254, 34, 62, 23, 186, 203, 189, 44, 242, 118, 61, 210, 213, 30, 59, 152, 73, 154, 61, 239, 124, 188, 61, 96, 35, 32, 61, 28, 75, 41, 190, 164, 232, 80, 189, 118, 92, 33, 62, 33, 124, 9, 189, 118, 172, 8, 62, 73, 16, 116, 189, 125, 73, 33, 62, 198, 67, 40, 62, 85, 162, 13, 62, 141, 98, 32, 61, 83, 136, 15, 62, 117, 199, 51, 188, 208, 99, 9, 62, 155, 12, 234, 60, 169, 116, 110, 61, 35, 26, 42, 62, 252, 204, 226, 189, 187, 90, 20, 190, 229, 76, 1, 189, 228, 56, 4, 62, 171, 130, 131, 61, 35, 71, 28, 190, 41, 166, 225, 60, 198, 234, 23, 62, 199, 209, 45, 62, 243, 225, 186, 61, 188, 109, 95, 189, 239, 190, 199, 188, 200, 245, 24, 189, 189, 224, 162, 189, 122, 252, 247, 61, 233, 94, 103, 61, 3, 97, 176, 61, 133, 5, 100, 60, 14, 71, 19, 190, 105, 40, 14, 189, 241, 94, 80, 61, 244, 172, 225, 61, 117, 151, 212, 61, 94, 62, 19, 190, 179, 205, 44, 62, 51, 241, 9, 61, 50, 47, 203, 188, 237, 59, 171, 61, 35, 40, 10, 190, 102, 253, 229, 61, 6, 27, 29, 62, 28, 42, 250, 61, 241, 93, 202, 189, 173, 92, 190, 189, 48, 196, 13, 62, 41, 193, 181, 61, 61, 233, 133, 189, 102, 103, 211, 189, 162, 36, 16, 188, 234, 41, 162, 189, 40, 158, 234, 188, 155, 14, 40, 190, 222, 185, 181, 61, 51, 90, 95, 61, 200, 195, 132, 61, 163, 182, 228, 189, 57, 28, 140, 61, 80, 158, 133, 61, 168, 70, 52, 62, 174, 228, 62, 187, 141, 18, 41, 190, 21, 62, 34, 61, 90, 0, 131, 188, 75, 16, 136, 189, 143, 140, 185, 189, 20, 96, 28, 61, 123, 61, 73, 189, 141, 155, 33, 62, 82, 230, 250, 61, 48, 255, 138, 189, 50, 74, 246, 189, 184, 253, 156, 61, 189, 57, 177, 59, 43, 252, 24, 61, 39, 179, 47, 190, 36, 189, 34, 62, 2, 16, 74, 189, 74, 130, 14, 189, 91, 182, 200, 60, 179, 59, 207, 189, 136, 112, 156, 189, 190, 50, 155, 189, 104, 221, 16, 190, 125, 251, 6, 189, 214, 71, 24, 62, 135, 191, 0, 62, 177, 83, 11, 189, 46, 25, 217, 185, 44, 122, 228, 61, 44, 167, 234, 61, 29, 249, 235, 189, 88, 92, 228, 189, 165, 172, 9, 62, 3, 104, 208, 61, 170, 48, 33, 62, 63, 157, 90, 188, 40, 255, 215, 189, 167, 141, 5, 62, 65, 145, 13, 188, 137, 106, 180, 61, 108, 177, 181, 189, 52, 121, 151, 61, 185, 223, 166, 188, 147, 188, 255, 189, 69, 42, 169, 188, 18, 108, 254, 61, 18, 248, 35, 190, 216, 242, 45, 60, 17, 16, 215, 189, 148, 116, 136, 60, 21, 176, 107, 189, 219, 48, 251, 189, 153, 44, 37, 62, 196, 6, 235, 188, 61, 97, 110, 61, 106, 147, 20, 190, 1, 83, 5, 190, 218, 114, 246, 189, 158, 5, 42, 190, 162, 22, 69, 60, 195, 229, 100, 189, 114, 170, 38, 62, 219, 87, 108, 61, 184, 142, 136, 188, 89, 163, 27, 190, 107, 179, 159, 189, 134, 23, 250, 60, 31, 55, 187, 61, 47, 0, 28, 190, 219, 104, 159, 188, 1, 158, 93, 188, 201, 189, 132, 187, 93, 42, 27, 62, 156, 239, 93, 189, 197, 31, 184, 61, 236, 142, 132, 189, 1, 88, 29, 61, 217, 82, 18, 61, 167, 18, 147, 61, 164, 124, 146, 189, 29, 237, 141, 189, 15, 45, 243, 189, 108, 165, 50, 62, 252, 46, 239, 61, 38, 139, 111, 189, 192, 221, 10, 189, 113, 89, 250, 61, 151, 210, 134, 59, 198, 22, 20, 190, 156, 52, 169, 61, 63, 125, 41, 190, 206, 32, 171, 189, 252, 65, 103, 189, 106, 50, 196, 60, 247, 204, 48, 190, 117, 15, 250, 61, 129, 234, 219, 61, 95, 253, 14, 190, 186, 208, 121, 188, 103, 127, 122, 61, 185, 21, 164, 61, 118, 127, 236, 189, 223, 188, 51, 190, 70, 253, 16, 187, 61, 200, 117, 189, 56, 219, 117, 60, 5, 249, 245, 61, 117, 250, 24, 62, 144, 1, 183, 189, 171, 149, 65, 61, 233, 73, 213, 189, 124, 135, 163, 61, 172, 219, 161, 189, 191, 23, 153, 59, 204, 40, 10, 61, 226, 60, 35, 62, 34, 156, 16, 60, 149, 155, 24, 190, 114, 165, 37, 62, 98, 247, 113, 189, 185, 242, 154, 189, 146, 96, 18, 62, 30, 168, 218, 61, 128, 162, 7, 62, 157, 31, 16, 190, 176, 101, 234, 61, 86, 250, 190, 189, 16, 114, 11, 61, 100, 211, 8, 62, 77, 75, 29, 189, 67, 245, 43, 62, 112, 55, 94, 189, 255, 193, 18, 186, 78, 34, 12, 62, 149, 202, 42, 62, 205, 4, 229, 189, 5, 14, 26, 61, 234, 52, 5, 190, 125, 255, 40, 61, 56, 134, 1, 62, 254, 99, 189, 188, 149, 208, 175, 187, 216, 32, 171, 188, 42, 61, 108, 188, 221, 196, 29, 190, 240, 218, 80, 189, 241, 127, 194, 60, 150, 235, 243, 189, 149, 239, 157, 61, 74, 190, 158, 188, 65, 27, 121, 189, 44, 183, 234, 188, 223, 200, 51, 188, 153, 162, 3, 62, 187, 205, 209, 188, 26, 17, 42, 190, 149, 174, 140, 188, 156, 152, 3, 190, 214, 208, 39, 189, 160, 116, 3, 62, 35, 21, 20, 190, 155, 238, 41, 190, 215, 238, 149, 61, 123, 23, 134, 61, 97, 147, 47, 62, 2, 108, 152, 189, 114, 27, 116, 60, 70, 250, 191, 61, 104, 54, 31, 61, 23, 204, 74, 61, 252, 167, 7, 190, 242, 247, 17, 62, 175, 163, 238, 61, 127, 179, 147, 61, 233, 42, 10, 62, 149, 46, 134, 61, 85, 113, 24, 190, 118, 205, 44, 61, 101, 88, 48, 190, 251, 46, 47, 62, 56, 28, 23, 190, 247, 82, 4, 188, 52, 165, 197, 60, 67, 181, 240, 188, 14, 205, 140, 61, 202, 210, 157, 61, 238, 204, 242, 61, 24, 227, 151, 189, 28, 75, 37, 62, 230, 54, 35, 62, 100, 75, 173, 188, 244, 188, 12, 62, 34, 147, 47, 190, 44, 243, 184, 61, 170, 134, 176, 187, 69, 46, 3, 189, 104, 225, 37, 190, 164, 218, 212, 61, 124, 149, 227, 189, 135, 185, 20, 62, 153, 243, 202, 61, 133, 93, 193, 188, 144, 223, 230, 188, 157, 162, 191, 61, 3, 211, 106, 61, 238, 6, 235, 61, 214, 51, 1, 62, 242, 22, 221, 186, 208, 15, 134, 189, 141, 94, 152, 61, 104, 0, 190, 189, 25, 141, 175, 189, 71, 123, 125, 61, 62, 128, 78, 189, 27, 106, 13, 62, 56, 121, 245, 188, 247, 8, 38, 190, 209, 77, 46, 61, 119, 175, 178, 188, 95, 168, 25, 61, 194, 159, 232, 61, 169, 145, 24, 190, 50, 242, 185, 61, 39, 111, 27, 61, 78, 129, 178, 188, 168, 157, 92, 61, 97, 159, 25, 62, 226, 198, 250, 189, 48, 133, 188, 60, 255, 59, 78, 188, 123, 21, 9, 190, 171, 28, 51, 61, 214, 80, 189, 189, 161, 213, 183, 189, 5, 174, 8, 189, 52, 188, 201, 189, 237, 148, 17, 62, 101, 252, 6, 62, 241, 65, 46, 62, 226, 169, 17, 190, 229, 90, 123, 189, 169, 111, 128, 189, 89, 65, 152, 189, 75, 84, 2, 189, 129, 117, 25, 62, 212, 145, 175, 60, 123, 98, 135, 189, 144, 176, 51, 190, 245, 129, 163, 61, 133, 201, 199, 61, 228, 116, 10, 62, 99, 77, 16, 190, 190, 129, 5, 60, 132, 156, 3, 62, 213, 199, 125, 189, 171, 115, 237, 189, 196, 185, 2, 62, 135, 140, 213, 189, 193, 73, 134, 61, 7, 187, 121, 60, 216, 163, 23, 190, 76, 98, 10, 62, 219, 103, 166, 61, 195, 30, 37, 190, 52, 44, 20, 190};
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
                alignas(float) const unsigned char memory[] = {227, 162, 23, 62, 94, 58, 26, 62, 36, 222, 164, 59, 107, 169, 45, 190, 147, 132, 38, 189, 164, 122, 61, 61, 73, 111, 96, 189, 224, 116, 50, 190, 195, 232, 8, 189, 103, 95, 197, 189, 218, 89, 4, 190, 31, 45, 29, 62, 5, 140, 40, 62, 62, 59, 36, 190, 108, 33, 38, 61, 175, 43, 48, 190, 105, 48, 92, 61, 196, 253, 145, 61, 85, 79, 248, 189, 234, 77, 227, 61, 52, 224, 160, 189, 52, 178, 78, 189, 230, 100, 174, 61, 67, 144, 170, 188, 151, 103, 155, 189, 215, 140, 12, 190, 43, 142, 203, 61, 238, 246, 52, 190, 16, 149, 203, 188, 178, 18, 152, 189, 61, 151, 115, 189, 71, 63, 234, 189};
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
                alignas(float) const unsigned char memory[] = {94, 76, 36, 190, 20, 165, 185, 189, 180, 100, 39, 189, 226, 49, 192, 61, 223, 92, 91, 61, 44, 126, 43, 189, 5, 116, 226, 189, 180, 141, 248, 189, 24, 233, 236, 189, 185, 189, 215, 188, 10, 206, 218, 60, 39, 32, 215, 189, 196, 208, 20, 190, 96, 236, 50, 190, 47, 148, 142, 189, 85, 99, 47, 190, 72, 192, 220, 188, 235, 67, 128, 58, 28, 37, 46, 190, 149, 162, 5, 190, 65, 223, 165, 61, 255, 10, 101, 61, 68, 15, 165, 61, 217, 55, 217, 61, 1, 152, 198, 187, 150, 13, 24, 189, 255, 130, 218, 61, 11, 250, 63, 59, 19, 67, 183, 61, 26, 31, 140, 189, 58, 27, 33, 190, 179, 198, 218, 188, 250, 54, 20, 190, 239, 192, 14, 62, 131, 222, 241, 60, 179, 107, 37, 190, 128, 226, 2, 190, 159, 195, 5, 189, 236, 132, 31, 190, 166, 49, 15, 190, 203, 142, 44, 62, 249, 250, 225, 189, 73, 47, 5, 190, 61, 75, 70, 61, 10, 155, 2, 62, 11, 229, 64, 61, 32, 38, 218, 189, 157, 82, 21, 62, 34, 129, 108, 60, 193, 96, 149, 61, 241, 15, 219, 61, 60, 124, 153, 189, 215, 53, 2, 62, 225, 228, 157, 189, 4, 159, 14, 60, 209, 155, 138, 189, 62, 215, 238, 189, 17, 234, 46, 61, 167, 227, 247, 59, 119, 242, 9, 190, 23, 1, 146, 60, 194, 43, 180, 61, 191, 213, 164, 60, 103, 127, 45, 190};
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
                alignas(float) const unsigned char memory[] = {97, 236, 251, 61, 120, 170, 39, 62};
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
    alignas(float) const unsigned char memory[] = {77, 168, 130, 63, 58, 234, 70, 62, 115, 217, 132, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {248, 246, 171, 60, 211, 100, 65, 62};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0087/steps/000000000000000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}