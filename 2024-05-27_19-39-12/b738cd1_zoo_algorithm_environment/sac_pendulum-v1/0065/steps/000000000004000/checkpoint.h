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
                alignas(float) const unsigned char memory[] = {22, 98, 228, 190, 20, 115, 107, 63, 142, 47, 124, 190, 67, 242, 141, 187, 222, 135, 245, 190, 122, 149, 213, 62, 23, 213, 29, 63, 59, 201, 254, 190, 234, 208, 201, 189, 231, 148, 123, 189, 175, 131, 249, 62, 175, 196, 45, 63, 7, 243, 134, 62, 107, 187, 208, 190, 58, 97, 189, 189, 35, 168, 161, 190, 96, 178, 9, 63, 34, 208, 189, 190, 113, 39, 21, 63, 55, 98, 119, 191, 213, 79, 169, 190, 83, 243, 153, 190, 194, 179, 81, 191, 81, 60, 97, 61, 203, 187, 233, 190, 76, 127, 162, 62, 102, 217, 255, 62, 237, 81, 62, 63, 175, 185, 166, 190, 8, 179, 185, 190, 230, 17, 147, 62, 16, 133, 9, 63, 140, 190, 203, 62, 78, 194, 143, 62, 5, 235, 52, 62, 30, 32, 6, 189, 56, 122, 11, 62, 28, 42, 243, 61, 80, 99, 55, 188, 202, 176, 3, 191, 127, 25, 230, 62, 12, 238, 170, 62, 21, 23, 25, 191, 202, 3, 50, 191, 208, 193, 108, 63, 207, 124, 203, 62, 110, 99, 135, 191, 20, 202, 79, 190, 252, 228, 228, 61, 64, 60, 137, 189, 155, 212, 14, 63, 250, 29, 188, 62, 43, 52, 133, 191, 60, 71, 37, 60, 237, 145, 160, 190, 239, 165, 60, 63, 52, 216, 24, 190, 156, 154, 217, 190, 248, 136, 66, 62, 83, 165, 95, 63, 209, 171, 145, 190, 0, 191, 89, 191, 117, 175, 175, 61, 199, 125, 177, 62, 175, 87, 103, 62, 176, 26, 12, 63, 1, 42, 155, 62, 119, 73, 203, 190, 1, 48, 201, 190, 246, 221, 156, 62, 208, 92, 4, 191, 83, 99, 252, 62, 166, 194, 130, 190, 248, 254, 18, 63, 20, 187, 70, 190, 114, 3, 246, 62, 38, 46, 128, 63, 21, 4, 232, 62, 90, 32, 112, 62, 51, 170, 248, 62, 224, 128, 182, 190, 237, 43, 15, 63, 45, 63, 56, 191, 120, 57, 149, 190, 137, 78, 202, 62, 229, 126, 45, 191, 199, 172, 162, 62, 141, 208, 45, 191, 114, 206, 160, 190, 163, 12, 180, 62, 30, 144, 222, 60, 195, 44, 12, 191, 163, 211, 198, 189, 120, 0, 54, 63, 196, 193, 53, 63, 140, 55, 212, 62};
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
                alignas(float) const unsigned char memory[] = {16, 161, 54, 190, 189, 141, 163, 190, 154, 120, 133, 62, 137, 235, 152, 62, 150, 1, 196, 190, 163, 235, 79, 62, 239, 41, 162, 61, 212, 132, 177, 62, 42, 61, 105, 190, 47, 93, 158, 62, 123, 141, 245, 189, 111, 224, 40, 191, 208, 132, 84, 63, 43, 173, 227, 62, 68, 45, 186, 190, 30, 219, 29, 190, 2, 243, 212, 190, 94, 234, 188, 61, 110, 139, 184, 61, 50, 93, 67, 190, 199, 19, 183, 62, 77, 132, 54, 190, 170, 223, 61, 63, 153, 223, 70, 190, 6, 44, 217, 189, 148, 18, 252, 189, 77, 141, 174, 190, 132, 183, 142, 190, 230, 228, 121, 62, 111, 72, 144, 188, 93, 38, 77, 191, 62, 94, 86, 62};
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
                alignas(float) const unsigned char memory[] = {150, 51, 102, 62, 136, 69, 182, 189, 162, 151, 72, 189, 249, 157, 92, 62, 15, 5, 53, 190, 71, 34, 21, 187, 217, 140, 217, 61, 33, 105, 4, 62, 97, 113, 43, 62, 218, 93, 27, 62, 167, 100, 161, 188, 202, 99, 9, 62, 61, 141, 26, 61, 38, 196, 11, 62, 112, 97, 27, 62, 57, 126, 36, 62, 145, 216, 195, 61, 180, 8, 130, 60, 175, 98, 183, 189, 139, 78, 141, 61, 214, 47, 21, 60, 181, 1, 49, 189, 211, 169, 164, 59, 12, 180, 55, 190, 238, 224, 51, 189, 247, 39, 136, 190, 68, 245, 99, 189, 130, 228, 77, 189, 209, 148, 181, 62, 119, 116, 172, 189, 99, 152, 117, 190, 229, 28, 44, 188, 154, 248, 100, 61, 15, 51, 62, 187, 202, 222, 4, 62, 206, 44, 166, 188, 111, 109, 25, 190, 10, 231, 46, 189, 184, 56, 249, 58, 21, 186, 1, 190, 58, 153, 46, 188, 1, 92, 82, 188, 209, 168, 43, 189, 64, 55, 187, 61, 149, 251, 87, 60, 94, 239, 46, 190, 198, 201, 107, 60, 254, 152, 59, 62, 69, 17, 149, 61, 113, 103, 152, 190, 20, 215, 36, 190, 64, 144, 190, 61, 33, 9, 42, 190, 149, 54, 20, 61, 148, 237, 36, 190, 43, 173, 128, 189, 221, 60, 3, 62, 239, 141, 132, 62, 94, 248, 30, 188, 215, 220, 25, 62, 73, 203, 111, 190, 93, 164, 40, 190, 164, 65, 178, 61, 53, 122, 107, 62, 245, 30, 121, 190, 48, 56, 6, 62, 63, 217, 59, 62, 107, 91, 152, 61, 190, 10, 10, 62, 73, 159, 132, 62, 152, 250, 79, 190, 230, 13, 72, 189, 139, 116, 3, 189, 87, 57, 236, 189, 93, 200, 170, 61, 55, 228, 39, 188, 9, 135, 112, 62, 6, 211, 221, 60, 234, 13, 144, 190, 77, 231, 150, 188, 205, 27, 70, 62, 254, 21, 153, 190, 68, 109, 71, 189, 214, 19, 56, 190, 122, 225, 93, 190, 130, 103, 128, 62, 115, 227, 168, 62, 242, 118, 130, 62, 160, 155, 175, 190, 245, 74, 94, 62, 126, 150, 195, 59, 160, 215, 137, 190, 228, 225, 127, 190, 222, 35, 153, 190, 182, 72, 92, 190, 110, 4, 249, 188, 94, 128, 238, 189, 70, 118, 72, 186, 147, 176, 254, 189, 215, 171, 174, 61, 72, 7, 17, 62, 250, 186, 226, 189, 76, 107, 161, 61, 101, 81, 146, 189, 129, 10, 199, 189, 185, 226, 180, 188, 215, 251, 244, 61, 9, 67, 41, 62, 99, 59, 232, 189, 104, 24, 45, 190, 123, 72, 1, 62, 128, 15, 189, 189, 185, 168, 16, 190, 245, 160, 38, 62, 132, 233, 31, 62, 133, 24, 3, 190, 54, 133, 34, 61, 32, 179, 129, 61, 18, 205, 38, 190, 26, 4, 32, 190, 100, 23, 38, 190, 22, 136, 51, 190, 210, 57, 29, 190, 210, 15, 202, 60, 140, 221, 36, 190, 200, 0, 23, 62, 4, 243, 136, 60, 14, 137, 214, 189, 24, 60, 255, 61, 150, 247, 78, 190, 119, 107, 195, 61, 20, 60, 112, 60, 65, 24, 171, 190, 198, 46, 2, 190, 207, 82, 118, 189, 191, 167, 165, 189, 117, 224, 234, 61, 137, 250, 70, 62, 153, 227, 35, 190, 250, 97, 61, 61, 199, 231, 153, 62, 140, 205, 211, 61, 243, 6, 10, 62, 17, 133, 133, 189, 235, 163, 199, 187, 21, 112, 107, 62, 229, 249, 197, 187, 198, 150, 225, 61, 147, 214, 84, 62, 156, 36, 82, 189, 159, 19, 66, 62, 109, 110, 134, 190, 216, 237, 157, 189, 91, 162, 169, 190, 197, 2, 21, 190, 169, 246, 113, 61, 233, 251, 140, 62, 22, 252, 18, 62, 8, 90, 235, 189, 251, 35, 179, 189, 3, 154, 93, 190, 102, 85, 133, 61, 0, 127, 219, 189, 163, 143, 147, 61, 154, 255, 13, 62, 189, 127, 56, 62, 227, 123, 115, 189, 207, 98, 19, 60, 125, 184, 139, 190, 226, 99, 209, 188, 76, 192, 107, 62, 105, 149, 139, 58, 124, 172, 88, 62, 66, 128, 71, 190, 157, 148, 148, 190, 14, 136, 146, 189, 211, 17, 235, 187, 198, 115, 136, 190, 198, 143, 179, 61, 118, 87, 176, 186, 210, 115, 180, 189, 189, 105, 115, 61, 192, 72, 195, 60, 9, 148, 204, 61, 143, 176, 181, 190, 215, 171, 140, 62, 222, 107, 162, 189, 57, 214, 136, 190, 158, 86, 29, 190, 82, 116, 25, 60, 150, 229, 3, 62, 148, 202, 124, 62, 188, 157, 245, 189, 224, 103, 103, 61, 191, 216, 205, 61, 12, 137, 43, 190, 109, 106, 62, 190, 175, 23, 189, 62, 0, 214, 7, 190, 243, 130, 157, 60, 48, 12, 191, 190, 142, 127, 129, 189, 180, 83, 230, 61, 111, 215, 73, 189, 211, 153, 154, 62, 167, 31, 96, 189, 224, 121, 166, 190, 0, 15, 185, 187, 132, 192, 205, 60, 133, 231, 75, 189, 43, 190, 3, 62, 228, 150, 146, 190, 39, 32, 3, 190, 3, 61, 41, 62, 25, 109, 229, 61, 115, 117, 85, 62, 77, 235, 54, 190, 137, 170, 130, 62, 52, 15, 65, 187, 155, 15, 248, 190, 98, 13, 44, 62, 65, 205, 29, 190, 205, 213, 20, 190, 26, 183, 162, 62, 215, 178, 245, 61, 179, 250, 63, 62, 221, 232, 62, 190, 35, 218, 237, 60, 101, 236, 80, 190, 49, 160, 79, 189, 78, 97, 33, 190, 1, 197, 192, 190, 143, 78, 6, 189, 124, 187, 231, 61, 234, 72, 128, 62, 77, 128, 34, 190, 94, 157, 99, 62, 90, 48, 250, 60, 65, 123, 152, 61, 164, 104, 60, 190, 149, 143, 8, 62, 91, 192, 78, 62, 143, 176, 37, 189, 213, 91, 178, 61, 22, 225, 150, 190, 126, 159, 98, 62, 178, 47, 211, 187, 172, 234, 12, 62, 208, 130, 200, 188, 112, 32, 149, 61, 179, 33, 89, 188, 59, 210, 236, 190, 167, 8, 71, 62, 70, 106, 10, 61, 7, 238, 103, 61, 58, 86, 189, 60, 90, 210, 102, 190, 121, 150, 152, 61, 217, 57, 232, 188, 201, 164, 210, 189, 143, 198, 18, 62, 208, 229, 223, 62, 108, 7, 148, 190, 101, 73, 12, 190, 10, 49, 142, 190, 164, 44, 22, 189, 10, 248, 181, 62, 101, 78, 10, 61, 91, 144, 31, 62, 6, 9, 71, 61, 217, 208, 80, 190, 235, 230, 22, 190, 169, 245, 177, 61, 68, 22, 49, 190, 248, 53, 86, 62, 18, 109, 47, 190, 171, 120, 130, 190, 74, 169, 58, 62, 21, 47, 145, 62, 197, 32, 63, 62, 167, 41, 58, 190, 218, 70, 183, 62, 29, 235, 123, 189, 172, 237, 233, 190, 9, 98, 3, 190, 209, 159, 142, 190, 209, 105, 233, 190, 193, 82, 53, 62, 174, 191, 212, 61, 100, 203, 44, 190, 28, 26, 199, 61, 32, 253, 18, 190, 113, 215, 21, 62, 0, 43, 152, 61, 204, 150, 121, 61, 149, 190, 28, 190, 189, 188, 215, 61, 23, 184, 61, 190, 166, 47, 47, 188, 115, 120, 15, 62, 5, 139, 213, 61, 159, 242, 156, 189, 9, 24, 43, 190, 72, 147, 116, 61, 90, 36, 232, 61, 154, 224, 151, 189, 95, 229, 197, 189, 210, 20, 22, 190, 147, 227, 241, 189, 92, 111, 250, 188, 212, 77, 37, 190, 149, 224, 12, 187, 129, 250, 50, 190, 218, 69, 168, 189, 151, 125, 21, 189, 1, 126, 4, 62, 224, 227, 177, 187, 22, 104, 133, 189, 10, 45, 155, 189, 206, 206, 38, 190, 66, 179, 100, 190, 239, 52, 228, 60, 175, 16, 53, 61, 205, 50, 89, 190, 232, 241, 137, 190, 124, 244, 44, 189, 161, 15, 139, 62, 6, 189, 46, 61, 170, 77, 7, 62, 173, 80, 21, 62, 75, 218, 73, 60, 183, 216, 141, 184, 248, 15, 129, 190, 187, 145, 197, 189, 48, 136, 247, 188, 219, 152, 49, 62, 240, 230, 190, 188, 143, 138, 236, 61, 57, 37, 75, 190, 255, 54, 133, 61, 31, 216, 58, 189, 162, 168, 55, 190, 117, 203, 53, 189, 55, 74, 189, 61, 218, 66, 230, 189, 76, 195, 137, 189, 134, 229, 52, 61, 211, 251, 137, 62, 28, 88, 42, 58, 115, 199, 204, 187, 125, 202, 248, 61, 242, 23, 237, 61, 50, 23, 161, 190, 182, 169, 184, 61, 104, 191, 23, 62, 45, 60, 211, 190, 93, 171, 169, 62, 162, 135, 182, 62, 123, 15, 56, 190, 155, 207, 192, 61, 134, 71, 251, 190, 85, 152, 100, 188, 76, 65, 121, 189, 138, 178, 2, 189, 234, 26, 154, 61, 45, 106, 46, 62, 136, 181, 117, 191, 121, 2, 157, 188, 167, 117, 128, 190, 18, 148, 12, 190, 90, 40, 25, 62, 138, 91, 148, 191, 33, 127, 194, 62, 245, 73, 241, 188, 130, 224, 2, 62, 181, 137, 147, 190, 177, 160, 184, 190, 101, 137, 175, 189, 243, 161, 14, 61, 221, 242, 12, 62, 111, 232, 101, 191, 188, 15, 2, 62, 92, 104, 36, 62, 255, 217, 192, 190, 53, 230, 4, 60, 63, 122, 207, 61, 245, 226, 199, 189, 48, 107, 177, 189, 85, 195, 80, 190, 182, 152, 3, 191, 41, 83, 146, 189, 229, 109, 160, 62, 67, 4, 66, 190, 90, 183, 129, 189, 196, 165, 191, 189, 51, 209, 77, 61, 9, 18, 60, 190, 44, 77, 116, 61, 112, 160, 178, 61, 23, 178, 42, 61, 131, 205, 130, 61, 137, 171, 170, 62, 126, 79, 77, 190, 198, 249, 53, 62, 181, 103, 132, 62, 233, 68, 154, 190, 41, 245, 104, 190, 248, 171, 153, 188, 129, 121, 31, 190, 195, 243, 185, 190, 12, 162, 227, 189, 16, 61, 133, 187, 120, 201, 90, 62, 225, 211, 135, 62, 243, 102, 3, 62, 188, 167, 141, 190, 233, 29, 3, 61, 144, 252, 218, 61, 159, 2, 131, 187, 115, 204, 14, 62, 14, 193, 147, 189, 122, 170, 93, 190, 149, 248, 163, 61, 20, 127, 139, 190, 4, 169, 20, 62, 136, 82, 28, 62, 21, 253, 10, 189, 244, 113, 4, 190, 209, 232, 217, 189, 0, 69, 49, 62, 158, 197, 91, 189, 214, 184, 62, 190, 223, 207, 220, 188, 185, 231, 161, 189, 255, 215, 217, 189, 139, 139, 82, 187, 128, 39, 135, 190, 19, 249, 93, 189, 82, 156, 182, 60, 191, 61, 22, 62, 39, 21, 239, 189, 136, 127, 62, 61, 247, 235, 25, 187, 220, 133, 141, 189, 51, 255, 28, 61, 0, 139, 154, 189, 10, 167, 1, 61, 108, 78, 129, 62, 6, 136, 108, 62, 74, 227, 95, 190, 239, 118, 246, 61, 78, 116, 38, 62, 79, 158, 213, 190, 71, 129, 22, 190, 129, 81, 91, 62, 133, 204, 95, 62, 185, 93, 196, 62, 127, 46, 68, 62, 78, 49, 87, 190, 20, 9, 17, 190, 112, 47, 70, 61, 149, 146, 10, 60, 63, 153, 241, 61, 165, 121, 82, 61, 16, 136, 0, 190, 216, 92, 19, 62, 222, 238, 143, 190, 190, 176, 237, 188, 117, 151, 82, 62, 124, 128, 247, 189, 56, 241, 128, 190, 168, 92, 147, 189, 255, 132, 87, 62, 46, 195, 190, 190, 150, 136, 220, 189, 6, 33, 156, 62, 143, 198, 214, 62, 20, 96, 222, 62, 25, 244, 231, 60, 110, 233, 59, 190, 116, 109, 236, 61, 174, 179, 137, 190, 151, 4, 67, 62, 241, 29, 158, 57, 111, 121, 209, 190, 215, 14, 74, 61, 124, 80, 12, 61, 131, 20, 83, 188, 189, 118, 245, 61, 87, 172, 246, 61, 14, 198, 255, 190, 181, 157, 169, 61, 67, 162, 241, 61, 110, 205, 129, 61, 40, 8, 71, 62, 55, 163, 31, 62, 24, 109, 77, 189, 130, 64, 171, 60, 122, 155, 27, 62, 136, 234, 114, 60, 43, 28, 68, 62, 25, 196, 169, 189, 220, 1, 211, 61, 253, 35, 95, 189, 31, 193, 204, 61, 203, 180, 167, 190, 24, 224, 2, 190, 239, 140, 240, 188, 18, 195, 205, 62, 162, 201, 190, 62, 189, 26, 20, 190, 98, 226, 135, 189, 109, 99, 246, 187, 100, 114, 55, 190, 86, 73, 144, 60, 180, 144, 26, 190, 56, 220, 215, 59, 244, 54, 96, 61, 63, 210, 17, 190, 12, 13, 221, 58, 63, 12, 253, 60, 220, 97, 155, 189, 93, 141, 228, 61, 61, 202, 52, 189, 13, 163, 124, 189, 106, 21, 178, 61, 211, 6, 187, 60, 106, 81, 21, 190, 9, 249, 61, 61, 5, 250, 14, 190, 189, 204, 133, 61, 130, 220, 128, 60, 216, 118, 157, 189, 28, 130, 31, 190, 27, 209, 15, 190, 144, 91, 12, 62, 184, 229, 22, 190, 204, 240, 87, 189, 128, 38, 3, 189, 115, 224, 15, 189, 9, 158, 6, 62, 121, 215, 241, 60, 78, 171, 150, 61, 89, 110, 187, 61, 204, 210, 6, 63, 227, 144, 124, 189, 38, 119, 114, 62, 138, 235, 75, 62, 219, 150, 209, 190, 144, 143, 227, 190, 114, 174, 25, 62, 137, 74, 161, 62, 87, 211, 208, 61, 158, 229, 140, 61, 5, 83, 132, 190, 91, 252, 21, 190, 95, 11, 207, 61, 116, 134, 24, 62, 11, 233, 81, 62, 104, 75, 139, 61, 166, 57, 39, 61, 17, 26, 166, 189, 84, 82, 215, 189, 100, 6, 1, 190, 163, 96, 150, 62, 27, 230, 44, 190, 61, 76, 45, 190, 178, 202, 86, 190, 203, 166, 50, 62, 17, 102, 194, 190, 141, 249, 221, 190, 112, 135, 224, 61, 254, 213, 15, 61, 171, 198, 209, 61, 76, 41, 143, 189, 73, 172, 214, 60, 37, 208, 157, 190, 174, 162, 244, 61, 30, 182, 156, 189, 13, 182, 124, 61, 169, 139, 241, 189, 34, 22, 160, 62, 70, 167, 146, 61, 174, 207, 160, 190, 226, 237, 136, 190, 103, 40, 61, 62, 68, 97, 194, 61, 215, 129, 164, 188, 8, 102, 108, 189, 28, 153, 151, 61, 197, 152, 36, 190, 247, 161, 220, 189, 25, 204, 46, 59, 247, 225, 253, 188, 38, 26, 234, 61, 9, 85, 87, 61, 34, 1, 176, 190, 205, 182, 37, 62, 208, 90, 192, 61, 206, 83, 141, 60, 49, 5, 99, 190, 151, 9, 41, 62, 252, 227, 152, 61, 72, 108, 162, 190, 100, 190, 174, 59, 55, 139, 139, 190, 239, 218, 127, 190, 253, 217, 135, 61, 164, 85, 18, 189, 47, 48, 27, 190, 26, 120, 98, 189, 80, 182, 232, 189, 28, 132, 192, 61, 227, 82, 39, 190, 164, 93, 189, 188, 68, 172, 117, 59, 5, 88, 4, 190, 87, 62, 34, 61, 203, 153, 148, 188, 126, 85, 62, 190, 12, 75, 239, 189, 168, 70, 139, 61, 232, 38, 51, 61, 27, 141, 174, 61, 224, 1, 69, 190, 40, 63, 208, 189, 14, 14, 111, 188, 3, 209, 160, 189, 193, 158, 66, 190, 132, 246, 82, 189, 2, 58, 12, 190, 211, 213, 40, 190, 222, 117, 84, 61, 251, 58, 87, 189, 131, 216, 184, 61, 29, 203, 167, 61, 100, 231, 155, 61, 242, 98, 15, 190, 23, 214, 150, 189, 50, 51, 229, 61, 253, 92, 146, 61, 179, 218, 140, 189, 208, 175, 166, 62, 100, 66, 132, 61, 241, 118, 152, 190, 167, 131, 10, 62, 35, 189, 238, 60, 202, 196, 162, 60, 235, 226, 2, 190, 119, 147, 35, 62, 19, 8, 32, 190, 33, 65, 66, 190, 162, 159, 28, 62, 86, 35, 177, 61, 169, 101, 226, 189, 194, 118, 119, 189, 102, 165, 194, 61, 98, 136, 239, 61, 190, 97, 57, 189, 99, 165, 139, 61, 113, 39, 44, 190, 177, 238, 178, 61, 30, 155, 194, 60, 192, 89, 167, 188, 225, 187, 95, 190, 15, 90, 87, 189, 227, 237, 201, 189, 139, 24, 132, 190, 64, 17, 214, 61, 247, 73, 55, 190, 121, 235, 31, 61, 242, 215, 110, 62, 171, 74, 73, 61, 184, 5, 56, 62, 239, 32, 156, 188, 75, 231, 80, 60, 65, 132, 143, 62, 60, 209, 12, 190, 94, 42, 174, 189, 104, 188, 89, 62, 67, 127, 102, 62, 2, 130, 211, 61, 254, 90, 12, 189, 211, 114, 192, 189, 47, 115, 89, 60, 240, 128, 202, 189, 182, 6, 106, 62, 23, 64, 72, 62, 133, 187, 8, 190, 133, 149, 201, 61, 36, 5, 7, 191, 65, 56, 155, 189, 173, 134, 234, 61, 144, 160, 187, 189, 180, 218, 177, 61, 56, 88, 163, 61, 131, 64, 184, 61, 25, 74, 124, 190, 191, 0, 220, 61, 28, 125, 146, 62, 27, 18, 60, 62, 243, 19, 54, 62, 10, 219, 13, 62, 101, 108, 175, 190, 90, 112, 99, 62, 130, 82, 152, 188, 134, 70, 144, 62, 57, 209, 62, 62, 249, 172, 91, 190, 44, 97, 17, 62, 97, 180, 4, 62, 99, 4, 193, 61, 184, 132, 59, 62, 216, 183, 98, 56, 237, 93, 184, 190, 43, 19, 31, 190, 27, 198, 196, 62, 166, 67, 66, 62, 227, 240, 0, 62, 178, 206, 4, 190, 7, 129, 152, 190, 220, 55, 2, 62, 76, 75, 2, 62, 110, 232, 23, 189, 89, 216, 161, 62, 2, 19, 167, 190, 133, 49, 193, 61, 5, 179, 49, 190, 199, 67, 6, 61, 186, 133, 170, 190, 119, 191, 146, 59, 148, 98, 169, 186, 231, 78, 171, 62, 76, 209, 150, 61, 241, 43, 163, 187, 207, 16, 56, 190, 55, 147, 39, 190, 213, 35, 42, 190, 90, 145, 133, 189, 131, 141, 40, 61, 57, 58, 66, 61, 3, 144, 251, 59, 26, 168, 0, 190, 158, 71, 116, 61, 133, 98, 106, 188, 88, 224, 120, 61, 85, 90, 221, 61, 22, 254, 25, 61, 120, 125, 38, 61, 202, 200, 56, 190, 121, 135, 150, 61, 138, 176, 105, 60, 79, 107, 236, 189, 33, 78, 55, 190, 71, 17, 133, 189, 134, 253, 129, 61, 55, 210, 230, 187, 153, 192, 116, 61, 62, 149, 142, 189, 249, 150, 152, 61, 77, 64, 219, 189, 183, 236, 56, 190, 78, 29, 117, 61, 30, 27, 218, 188, 71, 53, 4, 190, 54, 12, 71, 190, 11, 35, 210, 189, 25, 65, 214, 61, 188, 180, 124, 189, 178, 213, 33, 62, 44, 201, 176, 189, 85, 76, 14, 62, 158, 250, 239, 61, 38, 245, 199, 61, 8, 112, 160, 189, 41, 243, 153, 190, 58, 114, 80, 190, 2, 57, 67, 189, 138, 239, 181, 60, 200, 153, 39, 62, 131, 182, 159, 188, 130, 250, 152, 187, 79, 132, 247, 189, 75, 41, 54, 189, 204, 108, 132, 61, 199, 52, 149, 190, 109, 193, 94, 62, 201, 59, 137, 189, 153, 177, 186, 190, 182, 109, 72, 62, 44, 254, 4, 62, 78, 42, 5, 187, 7, 254, 113, 189, 91, 170, 147, 62, 48, 125, 26, 61, 66, 176, 56, 189, 79, 215, 134, 61, 69, 172, 55, 190, 52, 183, 155, 186, 31, 104, 180, 61, 97, 29, 204, 61, 142, 218, 167, 189, 246, 90, 243, 189, 124, 36, 205, 189, 139, 33, 46, 189, 205, 143, 38, 190, 244, 176, 28, 60, 111, 119, 162, 61, 249, 129, 247, 61, 36, 1, 66, 190, 102, 4, 175, 189, 43, 36, 62, 188, 193, 53, 48, 61, 179, 219, 252, 189, 78, 160, 172, 61, 215, 133, 171, 61, 97, 25, 223, 61, 200, 91, 69, 189, 130, 161, 14, 189, 62, 56, 35, 188, 251, 121, 208, 61, 151, 161, 233, 189, 29, 21, 55, 190, 86, 9, 45, 187, 10, 73, 210, 189, 146, 251, 111, 189, 56, 215, 27, 190, 255, 105, 175, 189, 230, 155, 137, 61, 121, 47, 216, 189, 188, 88, 62, 189, 108, 175, 19, 190, 154, 219, 207, 189, 131, 107, 228, 61, 46, 173, 88, 61, 69, 232, 225, 188, 86, 245, 2, 190, 141, 150, 141, 188, 130, 138, 13, 62, 3, 226, 101, 61, 165, 190, 55, 189, 107, 124, 18, 62, 147, 9, 122, 189, 163, 165, 153, 61, 4, 13, 62, 190, 173, 109, 13, 190, 53, 97, 40, 189, 167, 23, 189, 189, 115, 164, 157, 189, 134, 136, 143, 188, 239, 124, 21, 62, 174, 206, 184, 61, 192, 245, 15, 190, 31, 178, 173, 61, 220, 27, 37, 190, 70, 208, 122, 189, 200, 194, 151, 189, 145, 240, 203, 61, 246, 76, 168, 188, 177, 104, 62, 190, 62, 137, 213, 60, 228, 14, 52, 190, 7, 247, 238, 60, 212, 161, 195, 188, 253, 73, 19, 62, 206, 8, 6, 190, 176, 20, 223, 189, 204, 250, 186, 188, 204, 82, 15, 188, 249, 31, 95, 61, 97, 243, 36, 190, 207, 147, 37, 62, 40, 45, 4, 190, 178, 204, 154, 188, 13, 177, 207, 189, 56, 34, 80, 61, 236, 181, 31, 190, 53, 20, 204, 189, 32, 43, 233, 184, 132, 184, 206, 189, 132, 251, 232, 189, 59, 247, 18, 61, 160, 24, 249, 189, 0, 96, 221, 60, 14, 96, 10, 190, 172, 75, 128, 61, 205, 222, 152, 188, 172, 148, 4, 189, 46, 139, 212, 61, 47, 57, 46, 62, 46, 182, 101, 59, 200, 49, 8, 190, 247, 90, 22, 62, 193, 120, 245, 187, 64, 130, 34, 189, 220, 244, 130, 188, 202, 153, 90, 189, 107, 60, 161, 188, 10, 165, 247, 60, 57, 67, 208, 189, 152, 202, 69, 189, 230, 102, 130, 189, 144, 75, 207, 61, 51, 86, 60, 190, 154, 15, 245, 186, 119, 28, 29, 189, 149, 185, 8, 190, 190, 19, 153, 189, 182, 202, 184, 189, 78, 175, 94, 61, 138, 0, 156, 61, 92, 191, 141, 60, 217, 182, 3, 190, 155, 112, 182, 189, 117, 16, 130, 59, 15, 0, 229, 61, 50, 198, 178, 61, 25, 208, 41, 190, 41, 251, 22, 190, 202, 222, 39, 190, 118, 166, 197, 61, 93, 94, 159, 189, 85, 186, 47, 190, 26, 241, 129, 188, 138, 102, 9, 62, 137, 205, 120, 189, 47, 126, 234, 61, 10, 84, 194, 188, 251, 201, 45, 62, 1, 243, 97, 189, 72, 215, 8, 190, 119, 153, 118, 189, 205, 192, 160, 189, 2, 76, 245, 189, 181, 140, 151, 61, 133, 39, 138, 189, 133, 79, 155, 61, 106, 102, 134, 188, 217, 186, 226, 189, 96, 116, 179, 60, 220, 163, 218, 61, 241, 211, 0, 190, 181, 84, 30, 190, 209, 117, 183, 189, 248, 113, 47, 190, 5, 235, 203, 60, 197, 62, 59, 188, 182, 155, 204, 189, 6, 186, 207, 189, 99, 196, 219, 61, 240, 94, 2, 62, 143, 12, 30, 188, 255, 234, 28, 190, 165, 225, 223, 61, 99, 92, 32, 190, 71, 18, 60, 190, 36, 220, 38, 190, 158, 174, 73, 61, 20, 118, 229, 189, 210, 127, 159, 189, 130, 17, 109, 61, 17, 85, 116, 61, 140, 17, 135, 61, 123, 238, 173, 189, 76, 4, 149, 188, 131, 136, 100, 62, 145, 1, 85, 190, 18, 30, 137, 62, 126, 161, 203, 190, 47, 216, 210, 60, 164, 17, 83, 62, 231, 67, 53, 190, 7, 90, 185, 61, 178, 99, 20, 61, 223, 205, 38, 191, 210, 233, 180, 61, 27, 163, 128, 190, 23, 169, 5, 191, 94, 185, 93, 190, 94, 82, 135, 191, 246, 115, 89, 62, 5, 169, 164, 190, 201, 41, 216, 61, 99, 124, 154, 61, 226, 8, 95, 189, 13, 222, 170, 189, 194, 98, 132, 62, 62, 88, 151, 189, 114, 71, 19, 191, 72, 166, 50, 62, 243, 252, 131, 189, 100, 83, 117, 190, 10, 44, 23, 189, 132, 221, 162, 188, 37, 134, 183, 61, 167, 189, 149, 190, 126, 237, 163, 188, 138, 0, 185, 62, 114, 170, 159, 190, 76, 70, 124, 62, 68, 143, 31, 191, 76, 77, 132, 187, 98, 1, 102, 62, 124, 194, 25, 62, 22, 75, 47, 62, 100, 165, 36, 61, 190, 221, 85, 191, 112, 187, 135, 190, 102, 63, 33, 60, 196, 100, 202, 190, 92, 24, 66, 62, 16, 68, 122, 191, 2, 65, 48, 61, 163, 15, 214, 61, 35, 128, 144, 62, 141, 182, 134, 62, 54, 200, 130, 190, 116, 243, 147, 62, 146, 233, 78, 190, 72, 178, 2, 191, 149, 250, 183, 190, 150, 184, 163, 61, 84, 232, 243, 190, 72, 140, 16, 61};
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
                alignas(float) const unsigned char memory[] = {72, 13, 187, 62, 196, 159, 246, 189, 4, 143, 94, 62, 77, 128, 47, 190, 8, 168, 167, 62, 52, 207, 71, 62, 121, 53, 118, 62, 45, 108, 243, 60, 59, 105, 139, 62, 50, 52, 195, 61, 196, 3, 140, 189, 36, 29, 126, 62, 245, 119, 240, 189, 59, 119, 40, 190, 16, 168, 121, 189, 24, 57, 33, 62, 165, 215, 181, 189, 36, 47, 128, 60, 3, 224, 116, 62, 239, 216, 126, 61, 110, 106, 172, 61, 92, 56, 141, 190, 8, 236, 69, 62, 34, 21, 140, 187, 150, 229, 47, 190, 30, 43, 0, 190, 229, 61, 56, 184, 111, 250, 52, 190, 29, 17, 144, 188, 41, 173, 0, 189, 152, 95, 142, 62, 237, 182, 204, 62};
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
                alignas(float) const unsigned char memory[] = {245, 229, 240, 61, 175, 75, 220, 61, 196, 118, 138, 190, 185, 139, 214, 60, 122, 57, 118, 62, 246, 129, 176, 190, 161, 2, 227, 190, 38, 207, 7, 190, 3, 135, 208, 190, 222, 57, 242, 189, 42, 60, 138, 62, 112, 5, 70, 191, 177, 89, 191, 190, 166, 169, 71, 190, 162, 35, 222, 62, 203, 183, 163, 62, 38, 231, 68, 189, 110, 233, 165, 62, 130, 84, 122, 190, 89, 125, 120, 188, 161, 110, 11, 61, 163, 111, 180, 190, 197, 244, 151, 62, 10, 22, 230, 189, 0, 158, 90, 61, 8, 213, 0, 188, 68, 139, 246, 189, 200, 131, 5, 190, 36, 36, 101, 189, 222, 226, 183, 189, 255, 218, 30, 191, 79, 132, 113, 191, 231, 197, 192, 189, 86, 130, 140, 62, 59, 206, 196, 61, 3, 82, 41, 190, 139, 246, 130, 190, 155, 207, 90, 58, 187, 63, 145, 190, 87, 67, 131, 188, 154, 37, 148, 60, 252, 73, 239, 61, 4, 46, 57, 62, 38, 177, 138, 189, 159, 160, 250, 60, 137, 189, 218, 189, 129, 122, 63, 62, 155, 182, 7, 190, 30, 52, 225, 189, 238, 223, 133, 61, 91, 53, 20, 190, 15, 84, 39, 61, 165, 60, 73, 190, 54, 175, 52, 62, 134, 39, 213, 189, 172, 0, 43, 62, 118, 9, 141, 62, 224, 13, 229, 61, 130, 86, 10, 61, 22, 183, 20, 190, 173, 136, 69, 61, 83, 17, 200, 61, 138, 80, 232, 62, 89, 96, 59, 61};
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
                alignas(float) const unsigned char memory[] = {147, 35, 116, 61, 248, 18, 12, 190};
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
    alignas(float) const unsigned char memory[] = {224, 206, 130, 191, 19, 97, 216, 63, 171, 147, 161, 190};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {243, 64, 203, 190, 253, 178, 43, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0065/steps/000000000004000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}