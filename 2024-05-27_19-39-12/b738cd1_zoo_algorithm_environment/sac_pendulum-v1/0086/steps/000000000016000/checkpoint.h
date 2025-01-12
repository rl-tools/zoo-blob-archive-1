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
                alignas(float) const unsigned char memory[] = {66, 21, 145, 190, 59, 150, 133, 63, 202, 134, 237, 62, 32, 245, 152, 190, 26, 200, 213, 191, 38, 147, 194, 190, 223, 205, 171, 190, 193, 235, 169, 188, 115, 171, 236, 190, 235, 141, 219, 190, 72, 219, 242, 61, 162, 18, 55, 191, 252, 219, 188, 60, 17, 231, 23, 190, 88, 113, 13, 63, 108, 111, 197, 190, 232, 95, 159, 63, 176, 143, 246, 62, 191, 238, 66, 62, 121, 34, 143, 190, 157, 14, 70, 63, 155, 62, 43, 191, 27, 208, 132, 191, 238, 122, 232, 189, 182, 29, 59, 190, 149, 177, 173, 191, 79, 96, 173, 61, 190, 123, 153, 189, 193, 184, 111, 191, 78, 81, 168, 62, 96, 126, 53, 62, 88, 138, 66, 63, 67, 210, 37, 190, 192, 133, 20, 191, 196, 222, 232, 63, 16, 41, 213, 62, 212, 136, 26, 63, 236, 232, 33, 63, 14, 55, 72, 62, 148, 122, 42, 63, 187, 163, 47, 191, 188, 80, 7, 190, 102, 71, 131, 190, 140, 44, 188, 191, 202, 118, 165, 190, 107, 84, 16, 63, 42, 128, 129, 63, 228, 82, 95, 62, 105, 49, 198, 62, 182, 131, 194, 190, 114, 223, 135, 62, 178, 111, 180, 187, 202, 254, 100, 188, 237, 247, 88, 190, 222, 71, 82, 63, 62, 239, 176, 190, 17, 231, 129, 190, 31, 148, 231, 189, 105, 114, 62, 191, 148, 95, 1, 191, 224, 161, 234, 62, 54, 17, 127, 190, 198, 39, 236, 62, 220, 227, 28, 63, 175, 139, 187, 191, 117, 68, 209, 190, 139, 0, 163, 190, 142, 111, 90, 190, 127, 100, 246, 61, 42, 13, 131, 62, 248, 163, 166, 190, 80, 137, 96, 62, 140, 229, 142, 190, 225, 17, 10, 191, 235, 27, 177, 190, 16, 213, 202, 62, 84, 127, 145, 63, 195, 45, 100, 62, 35, 235, 159, 62, 253, 62, 134, 63, 28, 37, 202, 62, 239, 142, 230, 62, 236, 226, 109, 191, 223, 181, 160, 190, 252, 215, 15, 189, 46, 128, 151, 190, 20, 29, 160, 190, 104, 199, 183, 187, 126, 242, 236, 190, 232, 28, 245, 190, 224, 38, 246, 62, 77, 185, 193, 189, 28, 37, 26, 191, 239, 11, 49, 63, 240, 177, 53, 63, 169, 74, 137, 62};
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
                alignas(float) const unsigned char memory[] = {101, 19, 174, 190, 3, 172, 156, 190, 48, 188, 211, 190, 6, 127, 254, 190, 243, 217, 207, 189, 167, 230, 135, 61, 95, 107, 11, 61, 46, 69, 162, 190, 20, 123, 155, 62, 72, 48, 5, 190, 90, 54, 203, 189, 160, 187, 236, 60, 231, 40, 21, 62, 231, 155, 25, 62, 30, 224, 182, 190, 224, 247, 92, 61, 147, 29, 227, 62, 82, 19, 203, 189, 54, 16, 71, 191, 49, 205, 118, 61, 28, 243, 75, 191, 82, 26, 180, 189, 117, 63, 24, 63, 4, 74, 142, 61, 168, 205, 119, 62, 132, 201, 13, 62, 107, 239, 107, 190, 90, 66, 31, 191, 56, 131, 18, 191, 22, 235, 231, 187, 128, 197, 162, 62, 40, 192, 202, 190};
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
                alignas(float) const unsigned char memory[] = {80, 122, 47, 189, 43, 30, 0, 190, 90, 192, 45, 189, 101, 194, 149, 61, 243, 141, 172, 189, 244, 78, 140, 190, 66, 177, 172, 61, 177, 238, 210, 189, 75, 250, 116, 189, 17, 61, 145, 189, 114, 185, 138, 62, 5, 232, 5, 191, 158, 175, 175, 60, 248, 194, 11, 60, 246, 30, 25, 61, 242, 11, 5, 62, 247, 234, 210, 60, 217, 146, 198, 61, 67, 17, 160, 191, 75, 206, 118, 62, 254, 173, 83, 62, 158, 252, 7, 191, 154, 27, 210, 189, 151, 84, 216, 61, 198, 56, 28, 61, 99, 17, 159, 62, 38, 126, 99, 61, 94, 27, 42, 191, 187, 91, 71, 190, 95, 149, 141, 189, 149, 103, 36, 62, 185, 181, 25, 62, 37, 19, 6, 62, 162, 88, 132, 61, 236, 166, 53, 188, 80, 147, 157, 188, 222, 231, 14, 190, 223, 199, 80, 189, 254, 212, 198, 188, 16, 208, 142, 61, 94, 208, 250, 188, 85, 104, 34, 190, 48, 26, 46, 190, 220, 187, 12, 190, 106, 223, 229, 189, 44, 255, 205, 61, 232, 58, 47, 190, 224, 73, 184, 61, 100, 99, 4, 190, 199, 206, 33, 61, 72, 92, 4, 189, 155, 14, 89, 189, 97, 106, 48, 189, 22, 221, 32, 190, 139, 229, 139, 61, 46, 21, 164, 61, 184, 238, 7, 190, 55, 110, 25, 190, 91, 238, 188, 61, 88, 239, 14, 62, 129, 244, 52, 62, 190, 113, 46, 190, 117, 107, 192, 189, 169, 187, 6, 190, 197, 170, 130, 190, 213, 95, 156, 191, 118, 7, 221, 62, 41, 8, 14, 191, 123, 125, 82, 62, 162, 195, 75, 62, 82, 177, 50, 61, 94, 22, 56, 189, 69, 25, 28, 62, 235, 155, 180, 190, 59, 187, 176, 190, 159, 90, 186, 62, 44, 46, 165, 61, 156, 122, 198, 62, 159, 2, 215, 191, 174, 27, 167, 190, 38, 241, 209, 188, 28, 220, 13, 190, 243, 125, 214, 59, 68, 144, 62, 190, 179, 224, 212, 190, 22, 45, 2, 63, 29, 214, 122, 62, 195, 215, 116, 62, 5, 153, 93, 189, 139, 153, 225, 190, 37, 85, 58, 190, 121, 137, 251, 61, 36, 110, 2, 63, 193, 3, 81, 190, 138, 114, 129, 62, 133, 33, 253, 190, 253, 253, 108, 189, 179, 139, 163, 61, 184, 168, 121, 189, 152, 144, 201, 188, 45, 46, 140, 189, 74, 154, 21, 190, 87, 186, 246, 189, 173, 8, 26, 190, 165, 215, 173, 61, 177, 16, 213, 61, 102, 69, 88, 188, 124, 206, 182, 61, 124, 148, 133, 61, 137, 31, 193, 189, 165, 175, 106, 61, 14, 97, 248, 189, 34, 239, 169, 61, 176, 152, 14, 189, 217, 49, 21, 62, 142, 123, 116, 189, 4, 157, 242, 61, 141, 217, 247, 60, 78, 167, 40, 190, 6, 186, 26, 190, 60, 42, 174, 189, 16, 103, 166, 189, 41, 75, 177, 61, 160, 245, 129, 189, 52, 126, 61, 189, 238, 172, 230, 189, 213, 85, 232, 61, 22, 115, 180, 61, 12, 8, 170, 190, 25, 120, 30, 190, 126, 94, 16, 190, 127, 17, 180, 61, 250, 66, 104, 61, 146, 114, 21, 190, 225, 99, 170, 60, 172, 220, 69, 190, 121, 73, 119, 62, 223, 48, 157, 59, 250, 57, 210, 61, 84, 33, 181, 61, 47, 109, 172, 62, 226, 148, 244, 61, 56, 44, 3, 189, 175, 125, 103, 62, 147, 77, 37, 61, 197, 21, 28, 62, 126, 169, 213, 190, 65, 230, 74, 62, 151, 219, 183, 60, 139, 179, 166, 60, 124, 19, 200, 61, 216, 129, 96, 190, 6, 76, 51, 61, 91, 66, 201, 62, 215, 204, 209, 60, 176, 102, 70, 190, 73, 41, 181, 189, 44, 167, 71, 189, 148, 234, 255, 61, 23, 170, 147, 62, 21, 142, 84, 190, 119, 181, 244, 61, 206, 176, 19, 190, 247, 50, 18, 191, 61, 141, 13, 62, 139, 36, 46, 190, 27, 68, 249, 61, 241, 195, 237, 60, 120, 222, 130, 190, 73, 187, 39, 189, 65, 63, 155, 189, 201, 47, 205, 190, 11, 165, 182, 61, 105, 0, 29, 62, 146, 97, 13, 62, 224, 195, 31, 189, 51, 60, 161, 189, 186, 10, 231, 62, 144, 220, 164, 190, 200, 17, 65, 190, 184, 86, 188, 62, 172, 214, 78, 191, 214, 89, 76, 190, 87, 230, 151, 189, 30, 216, 138, 61, 194, 254, 15, 62, 180, 43, 121, 62, 160, 11, 168, 189, 155, 133, 179, 189, 90, 138, 150, 190, 79, 124, 105, 188, 46, 15, 245, 62, 28, 148, 241, 189, 43, 121, 52, 190, 216, 155, 21, 189, 81, 244, 13, 189, 55, 84, 212, 189, 214, 254, 222, 189, 172, 130, 2, 62, 192, 203, 21, 189, 149, 43, 162, 61, 178, 231, 145, 189, 94, 42, 175, 61, 37, 107, 242, 189, 230, 146, 25, 190, 4, 198, 51, 189, 203, 235, 215, 61, 172, 234, 157, 61, 9, 6, 56, 189, 50, 196, 91, 61, 68, 117, 250, 189, 20, 42, 87, 190, 115, 4, 213, 61, 120, 48, 245, 61, 130, 61, 39, 190, 209, 223, 44, 62, 232, 249, 39, 189, 197, 37, 25, 62, 108, 34, 141, 61, 249, 153, 146, 61, 192, 181, 48, 190, 162, 39, 232, 189, 75, 234, 190, 61, 124, 74, 4, 190, 224, 146, 52, 191, 167, 172, 174, 61, 242, 130, 144, 189, 100, 185, 35, 62, 134, 115, 126, 190, 186, 166, 80, 191, 96, 216, 147, 190, 86, 117, 143, 62, 126, 197, 176, 189, 57, 47, 251, 61, 142, 197, 175, 61, 84, 66, 223, 190, 56, 70, 236, 61, 167, 108, 155, 62, 194, 179, 157, 62, 72, 74, 52, 62, 235, 244, 192, 61, 160, 116, 59, 62, 56, 247, 239, 190, 189, 255, 24, 61, 217, 96, 133, 61, 156, 75, 28, 190, 196, 141, 217, 189, 69, 68, 88, 190, 33, 208, 81, 62, 63, 35, 82, 62, 127, 129, 248, 189, 200, 168, 95, 61, 185, 197, 125, 190, 163, 151, 114, 61, 234, 113, 4, 190, 91, 87, 158, 62, 152, 98, 186, 189, 247, 213, 231, 62, 5, 169, 156, 190, 231, 164, 58, 62, 70, 100, 141, 190, 236, 22, 166, 190, 9, 238, 137, 60, 89, 90, 19, 63, 96, 9, 6, 62, 15, 39, 75, 62, 164, 120, 4, 62, 1, 178, 58, 191, 171, 87, 226, 189, 15, 225, 147, 61, 156, 134, 162, 62, 164, 207, 37, 62, 56, 98, 14, 62, 191, 43, 57, 62, 138, 74, 105, 191, 184, 84, 221, 60, 126, 95, 218, 61, 189, 224, 179, 190, 151, 76, 196, 189, 231, 84, 58, 190, 128, 185, 100, 62, 110, 206, 170, 62, 99, 150, 149, 62, 193, 8, 10, 190, 106, 218, 251, 189, 160, 219, 168, 61, 51, 85, 41, 190, 22, 189, 183, 62, 23, 185, 67, 187, 37, 226, 21, 62, 7, 103, 162, 189, 149, 144, 72, 61, 145, 73, 107, 191, 77, 228, 230, 191, 71, 16, 200, 191, 188, 0, 11, 63, 66, 25, 154, 190, 202, 151, 234, 190, 122, 205, 10, 61, 13, 120, 154, 190, 7, 89, 173, 62, 58, 75, 190, 188, 10, 192, 77, 189, 128, 188, 211, 61, 34, 161, 67, 190, 100, 227, 44, 62, 214, 76, 53, 191, 32, 15, 82, 62, 63, 189, 131, 61, 102, 26, 186, 189, 176, 227, 128, 189, 100, 80, 54, 191, 93, 197, 144, 62, 121, 103, 189, 62, 84, 233, 34, 191, 131, 97, 125, 190, 166, 46, 129, 190, 23, 223, 134, 62, 1, 71, 48, 62, 209, 217, 28, 62, 226, 58, 94, 62, 69, 84, 82, 62, 18, 95, 243, 190, 72, 208, 184, 190, 246, 175, 162, 190, 189, 75, 171, 190, 6, 223, 132, 190, 96, 245, 236, 189, 90, 135, 109, 190, 69, 41, 211, 61, 107, 197, 102, 190, 74, 59, 163, 190, 40, 30, 78, 59, 60, 62, 139, 61, 1, 108, 16, 61, 125, 62, 222, 187, 31, 73, 123, 60, 88, 198, 245, 190, 168, 167, 135, 190, 95, 253, 25, 189, 5, 249, 209, 62, 228, 51, 20, 190, 59, 41, 14, 190, 25, 231, 254, 189, 93, 85, 178, 61, 205, 35, 104, 62, 205, 158, 206, 62, 84, 214, 92, 189, 247, 63, 242, 189, 114, 87, 155, 190, 237, 212, 158, 61, 154, 117, 187, 62, 245, 169, 137, 188, 60, 64, 141, 189, 85, 119, 245, 61, 115, 124, 243, 189, 214, 98, 31, 190, 85, 127, 157, 189, 0, 144, 32, 62, 250, 94, 201, 61, 187, 112, 66, 61, 51, 33, 132, 189, 54, 58, 196, 58, 26, 88, 177, 189, 54, 225, 184, 61, 188, 122, 198, 188, 202, 167, 171, 61, 82, 93, 228, 61, 244, 145, 4, 190, 185, 22, 234, 60, 135, 7, 6, 62, 100, 88, 190, 60, 185, 81, 8, 190, 141, 206, 41, 190, 44, 84, 0, 188, 222, 123, 174, 60, 44, 221, 23, 61, 129, 51, 156, 61, 105, 249, 246, 189, 45, 59, 120, 61, 102, 206, 225, 188, 89, 194, 245, 189, 178, 234, 253, 189, 67, 123, 128, 61, 45, 26, 101, 191, 195, 35, 215, 60, 197, 86, 168, 189, 241, 61, 227, 61, 91, 94, 252, 189, 189, 33, 4, 191, 84, 17, 243, 61, 46, 111, 146, 60, 197, 38, 157, 62, 62, 237, 164, 62, 34, 91, 3, 62, 19, 208, 168, 191, 208, 72, 228, 62, 121, 198, 75, 62, 41, 160, 139, 61, 211, 140, 103, 61, 243, 78, 213, 61, 41, 6, 197, 189, 147, 144, 156, 191, 11, 58, 5, 62, 160, 240, 208, 61, 255, 8, 200, 190, 205, 101, 138, 189, 25, 20, 14, 61, 54, 21, 74, 62, 168, 131, 201, 62, 223, 130, 39, 62, 166, 228, 7, 190, 69, 49, 103, 190, 155, 173, 80, 61, 50, 89, 162, 60, 158, 143, 223, 62, 212, 220, 10, 61, 49, 0, 216, 187, 226, 178, 121, 190, 239, 14, 44, 190, 126, 123, 143, 61, 129, 171, 38, 190, 88, 166, 31, 61, 239, 94, 135, 62, 179, 79, 213, 62, 27, 246, 34, 61, 73, 124, 28, 191, 5, 230, 20, 189, 67, 135, 72, 189, 175, 109, 138, 62, 123, 152, 24, 60, 210, 57, 137, 190, 107, 193, 191, 189, 100, 216, 191, 187, 195, 26, 213, 188, 173, 46, 27, 190, 131, 163, 227, 188, 160, 243, 119, 61, 175, 77, 166, 61, 238, 38, 166, 62, 203, 87, 66, 62, 124, 191, 154, 190, 44, 234, 60, 190, 207, 120, 100, 59, 229, 77, 147, 190, 236, 127, 31, 189, 232, 154, 241, 61, 135, 157, 31, 190, 28, 147, 38, 190, 48, 183, 140, 62, 126, 79, 207, 190, 80, 216, 250, 189, 181, 216, 13, 191, 204, 95, 244, 191, 146, 88, 12, 191, 237, 236, 65, 61, 58, 139, 208, 62, 82, 246, 65, 63, 26, 23, 106, 190, 45, 4, 168, 190, 117, 159, 174, 191, 14, 113, 172, 61, 228, 65, 53, 62, 213, 188, 225, 190, 4, 255, 190, 62, 82, 153, 5, 191, 212, 184, 98, 62, 235, 114, 4, 62, 187, 153, 96, 190, 210, 114, 83, 190, 41, 65, 67, 62, 218, 77, 210, 188, 161, 157, 33, 61, 232, 108, 201, 190, 11, 15, 8, 191, 111, 148, 227, 62, 104, 58, 85, 190, 161, 138, 38, 61, 77, 129, 149, 190, 244, 138, 61, 190, 47, 108, 227, 188, 225, 201, 93, 61, 96, 254, 159, 189, 136, 186, 254, 61, 85, 232, 106, 60, 57, 113, 146, 190, 147, 105, 201, 189, 249, 205, 43, 62, 65, 40, 42, 189, 89, 207, 209, 60, 241, 252, 195, 62, 75, 204, 64, 191, 230, 43, 202, 62, 201, 51, 28, 190, 79, 181, 149, 190, 9, 167, 171, 62, 204, 49, 133, 62, 177, 122, 62, 62, 34, 34, 140, 191, 59, 200, 195, 189, 63, 143, 11, 189, 92, 47, 182, 190, 251, 249, 94, 190, 43, 59, 144, 59, 249, 244, 93, 62, 105, 248, 17, 62, 238, 132, 57, 61, 159, 219, 2, 191, 246, 140, 40, 190, 232, 230, 241, 61, 16, 43, 54, 189, 38, 7, 43, 62, 47, 94, 143, 190, 14, 202, 206, 62, 108, 38, 225, 190, 84, 140, 217, 62, 162, 174, 197, 189, 73, 73, 104, 191, 1, 180, 154, 188, 88, 101, 34, 63, 116, 137, 35, 189, 108, 99, 230, 61, 192, 44, 7, 62, 84, 34, 66, 191, 19, 167, 218, 61, 251, 69, 150, 190, 148, 93, 115, 62, 199, 6, 130, 60, 58, 206, 254, 61, 177, 170, 188, 62, 21, 225, 164, 191, 16, 59, 189, 61, 112, 16, 140, 189, 192, 191, 66, 191, 70, 221, 136, 190, 182, 155, 225, 190, 107, 148, 100, 62, 32, 217, 16, 63, 58, 234, 189, 62, 99, 60, 255, 190, 135, 100, 7, 191, 160, 147, 147, 62, 139, 28, 194, 189, 64, 241, 17, 63, 236, 189, 28, 190, 4, 129, 82, 190, 247, 164, 36, 62, 31, 143, 89, 62, 18, 178, 105, 190, 203, 20, 172, 190, 204, 54, 243, 190, 107, 250, 233, 190, 54, 195, 180, 62, 215, 192, 46, 188, 34, 129, 149, 189, 158, 165, 102, 190, 146, 173, 185, 190, 186, 12, 61, 61, 7, 78, 53, 190, 245, 75, 229, 190, 179, 222, 129, 190, 236, 105, 250, 61, 141, 103, 93, 62, 143, 75, 47, 62, 230, 7, 194, 187, 234, 196, 180, 188, 189, 80, 144, 62, 194, 177, 78, 191, 47, 105, 38, 61, 131, 229, 207, 190, 147, 3, 187, 189, 29, 199, 38, 190, 153, 79, 28, 62, 69, 244, 39, 189, 188, 141, 152, 188, 49, 193, 26, 190, 176, 197, 195, 189, 2, 119, 68, 189, 178, 103, 123, 61, 11, 36, 13, 61, 89, 250, 177, 188, 210, 44, 205, 189, 157, 41, 40, 62, 2, 239, 120, 190, 74, 39, 140, 61, 191, 13, 240, 61, 136, 230, 148, 189, 115, 243, 156, 190, 185, 22, 131, 190, 212, 37, 248, 61, 80, 209, 146, 189, 5, 16, 53, 189, 117, 7, 151, 62, 178, 251, 203, 189, 20, 75, 4, 62, 194, 76, 40, 189, 37, 204, 86, 59, 149, 245, 104, 62, 102, 226, 95, 189, 31, 199, 51, 61, 32, 128, 156, 189, 67, 106, 88, 190, 86, 163, 100, 190, 247, 157, 5, 189, 157, 218, 34, 189, 13, 138, 141, 62, 12, 62, 117, 61, 224, 144, 94, 190, 35, 164, 166, 190, 21, 147, 105, 191, 202, 173, 220, 61, 192, 230, 52, 187, 82, 177, 76, 62, 88, 180, 175, 58, 225, 83, 255, 61, 110, 94, 147, 189, 176, 4, 30, 62, 95, 209, 152, 61, 13, 125, 174, 189, 211, 163, 213, 62, 22, 237, 152, 188, 106, 23, 59, 62, 109, 113, 138, 191, 13, 127, 110, 189, 22, 193, 192, 189, 180, 248, 41, 190, 202, 23, 161, 190, 101, 253, 17, 190, 77, 223, 203, 190, 211, 118, 105, 62, 51, 31, 141, 62, 187, 174, 162, 189, 223, 113, 91, 190, 32, 165, 237, 189, 225, 206, 205, 190, 173, 117, 162, 61, 128, 253, 246, 189, 123, 34, 82, 190, 97, 74, 39, 62, 241, 217, 101, 190, 30, 41, 6, 62, 58, 67, 33, 61, 131, 163, 165, 188, 212, 3, 148, 62, 60, 186, 162, 190, 212, 57, 15, 190, 141, 105, 173, 189, 30, 16, 161, 62, 224, 1, 65, 189, 231, 213, 48, 188, 108, 123, 79, 62, 150, 242, 152, 190, 226, 196, 115, 189, 254, 155, 16, 190, 27, 70, 175, 190, 254, 246, 164, 61, 204, 200, 129, 189, 103, 77, 97, 62, 155, 142, 151, 191, 38, 196, 235, 61, 25, 221, 9, 61, 86, 234, 2, 191, 37, 45, 81, 190, 239, 155, 97, 190, 26, 141, 4, 62, 95, 88, 122, 61, 45, 175, 212, 61, 246, 145, 237, 190, 82, 254, 53, 189, 144, 125, 27, 189, 234, 108, 228, 189, 170, 163, 217, 62, 167, 203, 26, 190, 115, 3, 57, 62, 27, 74, 162, 190, 69, 11, 220, 61, 102, 199, 6, 190, 51, 207, 22, 190, 15, 249, 163, 61, 168, 200, 144, 189, 65, 235, 184, 189, 40, 163, 241, 61, 53, 207, 16, 62, 208, 47, 214, 189, 248, 218, 1, 62, 8, 211, 176, 61, 92, 105, 23, 62, 80, 127, 131, 62, 38, 219, 106, 189, 76, 57, 122, 62, 80, 189, 126, 191, 243, 75, 28, 62, 51, 5, 159, 61, 253, 60, 145, 190, 13, 87, 33, 60, 157, 241, 155, 188, 31, 101, 192, 189, 27, 137, 192, 62, 102, 148, 113, 61, 163, 61, 180, 190, 47, 80, 190, 190, 152, 254, 196, 61, 145, 159, 10, 62, 67, 179, 150, 60, 188, 236, 97, 189, 100, 77, 52, 189, 174, 236, 17, 190, 248, 158, 206, 189, 138, 78, 218, 188, 199, 181, 10, 189, 80, 3, 11, 190, 111, 58, 17, 190, 214, 124, 91, 61, 228, 100, 207, 60, 131, 88, 27, 62, 86, 184, 56, 60, 202, 145, 141, 187, 231, 2, 175, 61, 189, 87, 197, 61, 43, 164, 146, 188, 209, 57, 230, 189, 206, 196, 184, 189, 131, 130, 24, 190, 70, 126, 47, 188, 30, 149, 23, 190, 192, 104, 142, 189, 126, 24, 11, 62, 98, 172, 44, 61, 168, 4, 60, 190, 86, 72, 211, 189, 129, 142, 250, 189, 130, 194, 68, 189, 162, 237, 32, 62, 113, 99, 173, 189, 82, 154, 16, 61, 81, 215, 132, 61, 142, 201, 90, 62, 138, 88, 252, 188, 195, 17, 24, 190, 243, 133, 145, 62, 242, 211, 197, 61, 132, 254, 72, 62, 226, 192, 136, 188, 19, 129, 108, 190, 23, 204, 38, 190, 134, 29, 210, 187, 138, 191, 15, 63, 129, 26, 97, 62, 70, 152, 128, 62, 112, 252, 44, 191, 163, 19, 149, 189, 24, 139, 80, 62, 200, 51, 97, 190, 232, 14, 2, 62, 82, 245, 100, 62, 116, 89, 1, 62, 242, 98, 148, 189, 93, 2, 44, 190, 247, 241, 134, 60, 198, 93, 189, 190, 21, 243, 8, 62, 5, 24, 254, 62, 47, 0, 8, 63, 33, 126, 25, 62, 75, 73, 180, 189, 143, 202, 45, 62, 129, 86, 179, 61, 208, 186, 68, 189, 102, 160, 220, 61, 135, 52, 175, 61, 119, 135, 174, 60, 103, 16, 126, 61, 23, 168, 18, 62, 248, 225, 60, 190, 246, 185, 5, 190, 218, 78, 214, 61, 163, 49, 35, 190, 60, 184, 250, 189, 0, 169, 185, 61, 157, 12, 94, 61, 148, 84, 110, 188, 120, 91, 175, 189, 142, 220, 240, 189, 161, 73, 104, 189, 162, 140, 184, 188, 77, 110, 179, 189, 27, 73, 217, 188, 28, 62, 67, 60, 48, 200, 182, 189, 88, 74, 103, 189, 140, 0, 106, 61, 196, 217, 46, 190, 238, 203, 21, 189, 250, 176, 58, 61, 80, 89, 41, 190, 31, 245, 184, 189, 23, 228, 159, 189, 5, 43, 35, 190, 57, 50, 185, 189, 134, 132, 222, 60, 73, 65, 181, 190, 68, 14, 14, 191, 174, 26, 32, 62, 251, 85, 166, 59, 106, 50, 147, 61, 49, 41, 151, 190, 91, 143, 230, 61, 41, 199, 54, 191, 107, 211, 162, 62, 21, 51, 36, 190, 14, 164, 14, 190, 133, 197, 144, 187, 63, 209, 158, 189, 118, 107, 223, 62, 170, 249, 61, 191, 53, 226, 64, 190, 221, 247, 56, 189, 78, 69, 129, 189, 69, 147, 5, 63, 39, 123, 200, 59, 218, 244, 44, 190, 28, 90, 190, 62, 180, 196, 44, 62, 116, 173, 177, 62, 83, 119, 43, 60, 78, 222, 145, 190, 228, 9, 236, 190, 244, 100, 127, 62, 47, 122, 114, 62, 135, 76, 174, 189, 94, 24, 96, 62, 240, 143, 169, 190, 143, 2, 155, 190, 86, 160, 79, 191, 1, 151, 98, 62, 75, 81, 14, 61, 119, 45, 79, 62, 118, 26, 228, 60, 102, 164, 149, 62, 243, 38, 87, 61, 132, 28, 134, 62, 75, 127, 15, 190, 150, 86, 52, 191, 190, 61, 102, 61, 73, 137, 66, 190, 41, 10, 179, 62, 37, 144, 112, 191, 124, 38, 247, 189, 23, 29, 50, 60, 5, 31, 136, 190, 58, 186, 189, 190, 217, 68, 82, 190, 209, 153, 238, 188, 131, 87, 54, 62, 145, 216, 136, 188, 191, 212, 150, 62, 164, 163, 172, 189, 172, 47, 16, 191, 162, 192, 152, 190, 222, 29, 216, 190, 170, 179, 230, 189, 237, 77, 157, 57, 233, 30, 57, 62, 48, 209, 145, 190, 149, 108, 212, 61, 69, 191, 209, 61, 48, 105, 150, 62, 30, 236, 9, 62, 160, 116, 192, 190, 74, 248, 156, 190, 63, 132, 137, 190, 248, 187, 177, 61, 18, 15, 119, 191, 85, 102, 241, 189, 20, 166, 163, 62, 94, 51, 9, 191, 124, 86, 186, 62, 236, 71, 245, 189, 15, 230, 25, 190, 139, 200, 154, 62, 11, 11, 46, 62, 28, 157, 245, 61, 238, 121, 12, 191, 36, 105, 101, 190, 208, 208, 141, 62, 91, 165, 20, 191, 250, 217, 70, 190, 76, 183, 160, 61, 180, 16, 167, 62, 106, 106, 148, 62, 32, 110, 212, 61, 218, 47, 151, 190, 15, 130, 105, 62, 247, 66, 195, 190, 205, 115, 166, 189, 238, 43, 224, 62, 52, 244, 165, 61, 201, 133, 119, 190, 31, 2, 55, 60, 220, 118, 48, 62, 47, 99, 42, 190, 128, 251, 233, 60, 238, 32, 136, 61, 88, 167, 58, 62, 121, 140, 251, 190, 221, 138, 20, 189, 204, 244, 248, 62, 65, 153, 128, 190, 83, 158, 28, 62, 246, 201, 169, 60, 82, 103, 152, 190, 220, 157, 154, 61, 87, 61, 224, 189, 104, 179, 0, 190, 49, 156, 110, 191, 82, 28, 223, 190, 76, 3, 200, 189, 42, 199, 181, 190, 197, 100, 180, 188, 114, 155, 93, 189, 77, 27, 47, 190, 12, 129, 70, 61, 115, 201, 241, 61, 219, 0, 143, 190, 110, 117, 122, 190, 29, 197, 152, 190, 206, 65, 167, 61, 245, 47, 98, 62, 149, 168, 6, 60, 14, 119, 32, 189, 102, 254, 250, 188, 178, 207, 216, 61, 240, 152, 105, 188, 132, 86, 237, 189, 59, 155, 142, 60, 137, 232, 220, 189, 186, 116, 185, 188, 104, 69, 92, 190, 153, 119, 157, 60, 250, 83, 21, 189, 159, 197, 58, 62, 28, 220, 218, 62, 207, 16, 100, 189, 1, 235, 161, 62, 188, 186, 133, 62, 89, 96, 12, 61, 124, 11, 51, 191, 73, 61, 14, 62, 58, 163, 131, 189, 87, 222, 232, 189, 161, 21, 48, 62, 95, 50, 29, 190, 145, 131, 211, 61, 65, 247, 40, 62, 85, 227, 25, 62, 185, 148, 72, 190, 69, 68, 75, 189, 149, 68, 40, 62, 180, 172, 24, 62, 64, 13, 133, 62, 67, 226, 10, 191, 221, 45, 251, 190, 115, 198, 177, 62, 112, 214, 10, 191, 135, 217, 221, 60, 254, 176, 70, 190, 254, 32, 124, 190, 221, 94, 151, 61, 148, 140, 200, 62, 61, 193, 210, 190, 21, 5, 197, 189, 63, 95, 177, 189, 28, 119, 80, 190, 101, 34, 141, 62, 95, 97, 130, 191, 95, 58, 7, 61, 212, 152, 51, 185, 199, 92, 128, 190, 173, 124, 137, 190, 213, 207, 173, 190, 202, 186, 192, 189, 148, 48, 175, 62, 120, 207, 118, 62, 171, 86, 76, 190, 155, 19, 14, 189, 161, 212, 78, 189, 219, 158, 116, 190, 80, 9, 75, 190, 129, 52, 203, 60, 143, 224, 63, 60, 75, 113, 0, 189, 37, 172, 109, 190, 130, 194, 165, 190, 53, 142, 150, 190, 161, 215, 192, 61, 61, 74, 202, 61, 186, 225, 233, 61, 254, 186, 50, 189, 123, 192, 124, 189, 246, 54, 36, 61, 161, 164, 120, 62, 35, 99, 130, 189, 228, 68, 204, 61, 9, 3, 163, 189, 183, 220, 191, 62, 54, 156, 151, 62, 171, 64, 71, 190, 88, 25, 208, 59, 139, 156, 152, 61, 80, 69, 157, 61, 128, 212, 151, 190, 158, 82, 104, 61, 97, 56, 54, 188, 252, 216, 168, 188, 53, 223, 154, 62, 66, 224, 40, 188, 201, 160, 25, 59, 62, 136, 29, 185, 204, 208, 49, 61, 203, 77, 57, 61, 158, 89, 188, 189, 234, 53, 107, 61, 40, 122, 135, 61, 80, 249, 61, 62};
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
                alignas(float) const unsigned char memory[] = {80, 23, 189, 61, 232, 17, 146, 188, 221, 254, 180, 62, 184, 35, 138, 189, 67, 240, 182, 62, 26, 170, 163, 190, 46, 214, 74, 190, 131, 14, 183, 61, 83, 1, 36, 189, 176, 24, 222, 61, 226, 207, 225, 189, 82, 192, 13, 190, 143, 100, 78, 62, 96, 249, 81, 62, 248, 2, 101, 189, 47, 192, 80, 62, 147, 171, 30, 190, 64, 122, 25, 189, 162, 162, 147, 60, 119, 200, 137, 62, 230, 14, 225, 60, 211, 104, 163, 61, 141, 139, 188, 189, 112, 158, 190, 189, 24, 162, 12, 190, 105, 231, 243, 188, 168, 48, 73, 62, 68, 179, 82, 190, 66, 234, 8, 61, 145, 236, 130, 62, 152, 199, 0, 62, 227, 185, 103, 62};
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
                alignas(float) const unsigned char memory[] = {98, 133, 172, 190, 171, 4, 237, 189, 124, 27, 169, 63, 235, 121, 207, 61, 255, 181, 45, 61, 128, 212, 68, 191, 192, 52, 79, 58, 27, 231, 125, 190, 177, 164, 210, 190, 207, 212, 249, 190, 66, 5, 141, 190, 122, 156, 19, 189, 101, 212, 32, 191, 248, 22, 94, 62, 185, 115, 144, 191, 45, 117, 234, 190, 58, 210, 115, 191, 254, 86, 39, 62, 131, 236, 169, 61, 45, 47, 200, 62, 183, 161, 85, 191, 51, 91, 57, 190, 113, 122, 124, 61, 99, 84, 203, 62, 9, 223, 97, 61, 53, 189, 77, 63, 208, 207, 224, 62, 249, 70, 196, 190, 117, 71, 129, 189, 155, 95, 85, 186, 167, 171, 196, 62, 49, 126, 13, 61, 198, 28, 35, 190, 166, 124, 141, 189, 120, 172, 76, 62, 136, 143, 231, 61, 223, 13, 166, 190, 12, 192, 44, 62, 191, 94, 160, 60, 77, 135, 210, 188, 166, 160, 212, 62, 146, 85, 166, 190, 190, 204, 178, 62, 11, 48, 189, 61, 32, 113, 115, 190, 30, 22, 13, 190, 204, 30, 21, 62, 200, 165, 206, 189, 124, 176, 2, 63, 181, 94, 49, 190, 205, 79, 241, 189, 35, 217, 247, 189, 137, 42, 136, 62, 149, 71, 86, 190, 255, 150, 242, 61, 63, 27, 27, 62, 109, 5, 169, 61, 140, 27, 54, 189, 136, 115, 101, 190, 141, 180, 107, 63, 84, 47, 164, 62, 251, 172, 171, 190, 200, 61, 13, 190, 42, 78, 113, 190};
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
                alignas(float) const unsigned char memory[] = {58, 4, 62, 62, 205, 163, 172, 190};
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
    alignas(float) const unsigned char memory[] = {69, 74, 93, 63, 158, 154, 189, 190, 127, 74, 89, 62};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {195, 175, 119, 64, 113, 95, 234, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0086/steps/000000000016000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}