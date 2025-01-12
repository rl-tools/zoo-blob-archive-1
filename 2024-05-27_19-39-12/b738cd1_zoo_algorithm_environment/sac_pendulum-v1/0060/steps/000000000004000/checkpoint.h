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
                alignas(float) const unsigned char memory[] = {16, 238, 29, 191, 113, 241, 111, 191, 87, 237, 91, 63, 195, 52, 156, 189, 1, 2, 43, 63, 137, 62, 58, 190, 221, 12, 199, 190, 247, 225, 10, 191, 83, 170, 56, 63, 214, 187, 206, 190, 242, 33, 214, 190, 202, 34, 242, 189, 176, 109, 78, 188, 178, 236, 173, 190, 191, 64, 239, 189, 139, 239, 14, 63, 193, 179, 106, 63, 152, 224, 160, 62, 243, 154, 2, 191, 214, 22, 25, 63, 213, 175, 67, 62, 161, 78, 109, 63, 163, 103, 220, 61, 114, 143, 251, 61, 3, 119, 1, 63, 44, 222, 189, 60, 139, 82, 245, 190, 46, 215, 234, 190, 100, 109, 127, 62, 20, 242, 183, 190, 132, 93, 48, 62, 131, 25, 78, 191, 183, 46, 90, 63, 33, 15, 22, 60, 48, 237, 66, 190, 193, 102, 90, 63, 40, 181, 151, 58, 4, 89, 35, 63, 108, 150, 5, 191, 67, 221, 53, 62, 50, 130, 55, 63, 127, 71, 3, 191, 160, 126, 137, 62, 52, 147, 1, 61, 128, 232, 138, 62, 164, 28, 163, 62, 108, 56, 234, 187, 118, 105, 56, 189, 102, 185, 170, 190, 2, 96, 124, 191, 109, 111, 190, 62, 110, 190, 208, 61, 123, 106, 223, 61, 58, 190, 180, 189, 255, 27, 175, 62, 113, 195, 143, 190, 215, 149, 174, 188, 28, 210, 52, 191, 118, 234, 2, 63, 16, 190, 20, 62, 195, 45, 17, 63, 111, 253, 119, 63, 3, 203, 236, 62, 189, 38, 233, 188, 117, 242, 118, 63, 13, 231, 247, 190, 81, 105, 154, 190, 36, 158, 243, 188, 113, 37, 90, 62, 55, 199, 60, 190, 109, 69, 87, 191, 123, 223, 35, 63, 104, 41, 105, 190, 181, 92, 176, 190, 27, 39, 103, 190, 207, 128, 195, 189, 205, 142, 72, 63, 92, 242, 30, 62, 172, 159, 29, 63, 225, 248, 199, 61, 19, 21, 232, 190, 80, 158, 112, 189, 10, 165, 193, 190, 96, 142, 224, 62, 174, 93, 168, 189, 170, 80, 69, 191, 2, 227, 161, 188, 9, 150, 31, 63, 114, 117, 132, 62, 186, 181, 33, 63, 71, 255, 191, 62, 17, 159, 73, 191, 83, 112, 195, 190, 32, 224, 55, 190, 209, 37, 157, 190, 155, 24, 22, 62};
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
                alignas(float) const unsigned char memory[] = {195, 93, 250, 190, 104, 57, 189, 59, 95, 17, 73, 190, 254, 14, 198, 61, 76, 64, 19, 63, 154, 122, 40, 190, 211, 197, 150, 62, 33, 193, 40, 62, 44, 7, 64, 191, 216, 184, 116, 61, 80, 242, 94, 190, 70, 39, 105, 62, 250, 250, 151, 62, 137, 133, 213, 61, 32, 46, 186, 62, 173, 234, 186, 190, 64, 124, 208, 190, 72, 148, 194, 62, 113, 209, 217, 62, 66, 195, 221, 61, 191, 17, 162, 190, 5, 175, 244, 62, 159, 129, 8, 63, 97, 187, 184, 189, 156, 2, 238, 190, 207, 18, 198, 62, 168, 0, 212, 190, 15, 221, 252, 58, 16, 255, 181, 62, 143, 220, 233, 61, 209, 226, 174, 60, 207, 140, 107, 62};
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
                alignas(float) const unsigned char memory[] = {190, 248, 1, 190, 218, 135, 69, 190, 84, 46, 119, 60, 109, 195, 50, 190, 169, 38, 111, 190, 149, 217, 42, 62, 224, 24, 21, 189, 63, 217, 206, 61, 15, 235, 21, 62, 183, 10, 181, 61, 74, 209, 60, 62, 134, 209, 46, 62, 48, 193, 61, 190, 135, 220, 173, 189, 176, 27, 41, 190, 157, 92, 46, 62, 156, 3, 157, 189, 31, 203, 156, 190, 22, 167, 159, 190, 111, 91, 14, 190, 196, 229, 131, 62, 28, 193, 103, 190, 178, 231, 181, 189, 122, 131, 2, 190, 195, 79, 20, 190, 70, 25, 129, 189, 89, 155, 225, 189, 223, 167, 21, 61, 247, 83, 55, 189, 178, 157, 119, 62, 161, 5, 60, 61, 24, 140, 179, 190, 93, 184, 58, 62, 228, 152, 14, 61, 70, 33, 215, 61, 78, 197, 104, 190, 21, 7, 77, 190, 173, 72, 120, 62, 100, 17, 110, 61, 165, 206, 176, 189, 131, 195, 255, 189, 181, 99, 224, 190, 208, 78, 83, 62, 162, 164, 24, 62, 54, 46, 238, 61, 135, 164, 125, 62, 230, 219, 23, 61, 194, 12, 187, 189, 3, 82, 137, 62, 69, 152, 180, 61, 98, 146, 204, 61, 173, 19, 2, 189, 32, 179, 30, 188, 192, 100, 0, 62, 7, 45, 137, 61, 3, 136, 41, 61, 92, 166, 119, 189, 130, 150, 45, 189, 73, 31, 88, 189, 16, 186, 153, 61, 154, 218, 3, 62, 179, 9, 33, 62, 38, 106, 143, 60, 175, 227, 51, 62, 223, 238, 103, 190, 96, 38, 98, 190, 56, 244, 245, 189, 19, 61, 19, 62, 142, 233, 46, 59, 223, 188, 13, 190, 127, 14, 40, 190, 115, 144, 69, 62, 130, 167, 51, 190, 137, 85, 87, 62, 181, 15, 232, 189, 116, 2, 157, 189, 54, 92, 98, 60, 9, 71, 160, 187, 173, 167, 234, 61, 61, 233, 231, 189, 75, 125, 170, 61, 106, 74, 41, 62, 93, 30, 252, 61, 162, 5, 233, 190, 55, 43, 3, 190, 23, 207, 4, 62, 179, 15, 59, 190, 222, 76, 243, 187, 233, 22, 10, 189, 205, 28, 0, 191, 62, 139, 36, 190, 224, 8, 63, 190, 217, 117, 110, 62, 0, 123, 186, 61, 192, 60, 149, 62, 92, 187, 222, 61, 179, 227, 236, 189, 67, 164, 200, 61, 153, 93, 215, 61, 66, 171, 231, 189, 97, 24, 40, 190, 116, 254, 52, 189, 197, 212, 154, 188, 66, 85, 173, 189, 190, 170, 48, 190, 159, 184, 14, 190, 39, 3, 174, 189, 237, 76, 91, 189, 73, 53, 35, 61, 130, 42, 90, 61, 0, 139, 5, 189, 197, 34, 213, 189, 71, 45, 163, 189, 171, 197, 176, 61, 56, 171, 187, 61, 57, 68, 29, 189, 219, 82, 47, 189, 80, 140, 147, 188, 65, 166, 66, 190, 112, 155, 33, 190, 135, 34, 0, 190, 244, 197, 180, 189, 181, 146, 150, 189, 19, 51, 207, 187, 112, 43, 61, 60, 213, 152, 54, 189, 207, 104, 221, 188, 244, 52, 50, 190, 57, 247, 50, 189, 237, 8, 47, 62, 195, 118, 76, 62, 50, 29, 141, 61, 51, 50, 175, 60, 64, 150, 131, 189, 144, 81, 166, 189, 171, 227, 199, 62, 231, 130, 236, 60, 75, 107, 206, 189, 102, 210, 21, 61, 151, 123, 48, 62, 113, 243, 217, 60, 25, 219, 73, 190, 232, 72, 166, 61, 76, 3, 33, 189, 118, 215, 234, 189, 52, 126, 96, 62, 209, 237, 149, 61, 6, 208, 64, 62, 92, 192, 9, 62, 217, 165, 42, 62, 96, 16, 138, 62, 162, 207, 162, 188, 8, 75, 60, 190, 86, 242, 113, 60, 145, 13, 54, 189, 82, 186, 67, 61, 142, 42, 16, 62, 88, 192, 187, 61, 176, 218, 26, 62, 249, 236, 45, 60, 210, 201, 248, 190, 84, 90, 164, 61, 104, 124, 149, 190, 103, 210, 27, 62, 245, 240, 49, 61, 31, 25, 17, 62, 254, 211, 133, 188, 54, 213, 184, 62, 190, 203, 176, 60, 235, 202, 20, 62, 192, 74, 22, 190, 11, 183, 67, 190, 141, 35, 132, 62, 148, 30, 113, 190, 110, 229, 141, 188, 140, 138, 243, 189, 209, 42, 1, 191, 217, 109, 150, 189, 35, 18, 242, 61, 72, 43, 145, 61, 27, 188, 187, 189, 184, 2, 151, 62, 66, 215, 141, 61, 197, 160, 253, 190, 238, 4, 53, 190, 237, 234, 1, 189, 51, 236, 184, 189, 248, 228, 52, 190, 95, 181, 248, 189, 113, 90, 148, 189, 165, 44, 214, 190, 27, 111, 169, 189, 82, 249, 162, 62, 254, 249, 58, 190, 81, 40, 22, 62, 241, 198, 6, 62, 92, 112, 38, 61, 30, 241, 176, 190, 206, 168, 4, 189, 140, 24, 36, 62, 140, 111, 87, 61, 208, 209, 80, 190, 135, 94, 192, 190, 97, 81, 31, 62, 185, 114, 86, 190, 201, 237, 88, 62, 163, 185, 212, 189, 35, 13, 89, 189, 24, 170, 240, 62, 14, 125, 98, 62, 147, 96, 31, 187, 124, 169, 83, 189, 229, 230, 238, 190, 122, 38, 204, 189, 158, 53, 164, 188, 93, 30, 229, 62, 137, 214, 188, 61, 55, 124, 61, 61, 26, 246, 65, 62, 197, 50, 124, 61, 231, 59, 74, 189, 23, 101, 50, 190, 95, 15, 89, 62, 189, 10, 249, 60, 149, 239, 27, 62, 15, 40, 105, 189, 85, 25, 50, 62, 35, 232, 177, 189, 178, 131, 229, 188, 181, 73, 141, 189, 76, 86, 235, 189, 11, 196, 28, 62, 55, 192, 95, 190, 254, 166, 242, 188, 16, 32, 238, 190, 173, 178, 43, 62, 87, 242, 30, 61, 116, 217, 227, 59, 136, 120, 62, 62, 78, 37, 8, 190, 107, 91, 48, 62, 21, 238, 141, 61, 186, 224, 69, 61, 248, 209, 246, 61, 127, 171, 109, 190, 253, 154, 6, 190, 155, 127, 249, 189, 153, 106, 203, 62, 177, 84, 180, 61, 82, 8, 248, 189, 233, 171, 147, 189, 106, 90, 88, 62, 144, 215, 76, 62, 218, 243, 145, 190, 24, 90, 125, 62, 4, 169, 200, 61, 166, 124, 185, 59, 87, 54, 223, 61, 43, 248, 164, 61, 161, 234, 151, 190, 78, 247, 112, 190, 52, 18, 92, 62, 10, 184, 165, 189, 226, 116, 12, 62, 115, 184, 63, 190, 243, 126, 170, 190, 96, 92, 142, 189, 157, 215, 64, 62, 71, 180, 26, 190, 253, 67, 236, 61, 234, 227, 72, 62, 18, 5, 255, 61, 195, 48, 169, 62, 210, 209, 248, 61, 54, 154, 38, 62, 134, 216, 243, 61, 40, 41, 55, 60, 77, 164, 19, 61, 53, 112, 34, 61, 230, 91, 229, 61, 36, 57, 165, 61, 118, 249, 40, 189, 14, 255, 63, 190, 25, 46, 160, 189, 151, 12, 49, 190, 42, 196, 92, 62, 113, 132, 199, 189, 124, 208, 198, 187, 101, 148, 166, 188, 242, 97, 0, 62, 0, 128, 191, 188, 229, 30, 185, 189, 65, 206, 147, 60, 40, 3, 216, 189, 138, 211, 10, 59, 169, 82, 217, 189, 247, 227, 21, 190, 151, 106, 16, 190, 85, 33, 197, 189, 88, 122, 210, 61, 59, 243, 41, 190, 208, 128, 5, 62, 184, 236, 255, 189, 107, 84, 25, 190, 239, 232, 175, 188, 181, 179, 153, 61, 135, 84, 238, 189, 129, 220, 28, 188, 84, 118, 53, 189, 112, 210, 175, 187, 31, 117, 201, 188, 166, 27, 94, 188, 140, 189, 29, 190, 6, 182, 131, 61, 253, 158, 162, 61, 30, 79, 220, 189, 122, 65, 197, 61, 219, 13, 8, 190, 73, 128, 204, 188, 64, 32, 217, 61, 238, 64, 134, 62, 235, 16, 25, 190, 177, 229, 32, 62, 151, 91, 50, 62, 168, 113, 34, 188, 240, 69, 21, 61, 59, 141, 121, 188, 178, 53, 214, 190, 182, 184, 38, 62, 252, 179, 120, 190, 127, 97, 140, 62, 49, 145, 51, 62, 81, 245, 141, 189, 132, 89, 141, 189, 37, 153, 57, 61, 220, 111, 176, 60, 68, 0, 40, 62, 214, 114, 103, 190, 33, 88, 62, 62, 139, 172, 202, 61, 30, 226, 77, 190, 175, 153, 240, 189, 213, 240, 133, 189, 139, 195, 157, 62, 6, 8, 130, 62, 245, 122, 49, 190, 159, 179, 102, 62, 240, 76, 129, 62, 245, 66, 32, 61, 145, 17, 202, 61, 30, 90, 150, 62, 230, 236, 179, 61, 140, 40, 199, 190, 12, 27, 147, 62, 102, 121, 227, 190, 6, 168, 7, 59, 94, 25, 109, 189, 193, 214, 252, 61, 234, 115, 92, 189, 201, 6, 180, 62, 137, 200, 58, 190, 93, 245, 66, 62, 27, 248, 196, 189, 255, 59, 154, 190, 131, 213, 165, 62, 70, 24, 199, 190, 118, 125, 232, 189, 213, 142, 177, 61, 50, 33, 242, 190, 16, 230, 139, 61, 235, 133, 193, 61, 222, 57, 181, 61, 164, 171, 83, 61, 59, 226, 184, 62, 17, 164, 224, 61, 167, 127, 104, 191, 244, 26, 202, 190, 172, 25, 37, 190, 253, 23, 126, 190, 65, 173, 17, 191, 192, 201, 52, 62, 197, 0, 89, 61, 45, 21, 14, 191, 209, 164, 67, 62, 236, 176, 0, 61, 87, 224, 36, 59, 182, 213, 34, 190, 98, 103, 217, 189, 124, 31, 104, 189, 121, 6, 128, 188, 52, 155, 37, 189, 225, 81, 161, 61, 66, 246, 127, 189, 143, 213, 0, 62, 232, 94, 130, 60, 215, 42, 201, 189, 87, 165, 158, 60, 75, 108, 14, 190, 83, 7, 165, 61, 89, 28, 232, 60, 117, 254, 234, 188, 101, 241, 128, 189, 212, 38, 206, 187, 167, 217, 213, 61, 44, 244, 3, 62, 165, 218, 84, 57, 58, 225, 7, 190, 243, 33, 221, 189, 98, 218, 178, 189, 179, 27, 68, 190, 182, 150, 135, 61, 126, 248, 151, 61, 166, 36, 35, 190, 85, 11, 1, 62, 63, 124, 21, 190, 160, 185, 15, 62, 194, 165, 74, 190, 121, 115, 67, 61, 19, 125, 168, 190, 55, 83, 194, 61, 229, 227, 38, 62, 41, 72, 223, 186, 69, 36, 152, 190, 92, 26, 94, 62, 131, 231, 219, 60, 141, 79, 140, 189, 105, 118, 17, 61, 97, 9, 213, 189, 219, 51, 56, 62, 52, 82, 102, 60, 31, 105, 20, 189, 70, 42, 86, 189, 238, 80, 32, 62, 10, 231, 248, 189, 141, 62, 20, 60, 244, 118, 85, 190, 99, 11, 8, 189, 232, 142, 160, 189, 201, 180, 40, 190, 104, 8, 168, 187, 151, 151, 39, 62, 171, 161, 201, 190, 6, 171, 159, 61, 177, 53, 120, 190, 247, 42, 80, 61, 130, 131, 13, 62, 13, 36, 229, 61, 90, 40, 22, 62, 191, 163, 239, 60, 62, 187, 121, 60, 66, 249, 77, 189, 202, 40, 243, 188, 65, 247, 37, 62, 168, 180, 219, 190, 70, 26, 173, 189, 105, 44, 207, 62, 180, 27, 219, 189, 151, 58, 205, 61, 117, 69, 253, 190, 15, 128, 169, 61, 205, 198, 141, 60, 191, 139, 64, 62, 199, 175, 116, 62, 47, 252, 128, 61, 189, 124, 169, 62, 215, 70, 143, 61, 182, 127, 7, 61, 250, 16, 33, 62, 5, 161, 198, 190, 88, 26, 28, 190, 73, 183, 137, 62, 162, 204, 141, 62, 71, 171, 17, 190, 234, 174, 60, 189, 99, 127, 2, 190, 191, 132, 41, 62, 204, 180, 162, 61, 212, 93, 210, 189, 193, 176, 47, 62, 100, 211, 50, 188, 134, 136, 141, 62, 74, 186, 193, 60, 228, 105, 137, 62, 156, 15, 182, 190, 94, 138, 92, 190, 123, 75, 97, 189, 71, 183, 75, 189, 240, 123, 198, 190, 48, 82, 135, 59, 94, 69, 94, 190, 145, 255, 55, 60, 145, 51, 132, 62, 1, 66, 202, 188, 68, 9, 254, 61, 28, 12, 214, 189, 165, 66, 34, 190, 195, 220, 142, 62, 142, 240, 96, 190, 251, 191, 143, 62, 229, 164, 70, 62, 197, 213, 66, 189, 18, 193, 25, 190, 78, 174, 180, 189, 108, 111, 161, 62, 65, 254, 127, 61, 32, 216, 4, 62, 156, 200, 137, 189, 12, 20, 213, 61, 200, 75, 108, 61, 14, 41, 82, 62, 205, 78, 144, 62, 96, 180, 92, 62, 192, 65, 129, 189, 133, 140, 212, 189, 0, 96, 222, 189, 137, 174, 209, 188, 192, 97, 39, 190, 106, 80, 41, 62, 126, 197, 81, 60, 181, 45, 30, 189, 127, 46, 158, 61, 40, 242, 240, 61, 208, 121, 17, 190, 238, 191, 51, 190, 41, 37, 89, 185, 101, 229, 240, 189, 204, 121, 239, 186, 168, 164, 226, 189, 62, 197, 92, 61, 19, 7, 16, 190, 81, 159, 173, 186, 77, 239, 9, 190, 206, 3, 128, 187, 31, 196, 121, 188, 1, 221, 41, 61, 80, 212, 252, 61, 154, 97, 164, 188, 32, 150, 92, 61, 138, 22, 184, 189, 192, 49, 217, 61, 197, 103, 255, 60, 3, 183, 31, 190, 1, 186, 90, 60, 117, 187, 35, 190, 88, 14, 129, 62, 255, 234, 254, 188, 1, 159, 78, 61, 253, 54, 106, 190, 77, 34, 88, 61, 28, 236, 5, 191, 78, 177, 134, 61, 156, 145, 175, 62, 223, 241, 221, 189, 96, 23, 95, 189, 91, 92, 30, 191, 65, 231, 239, 61, 34, 153, 116, 190, 129, 24, 125, 62, 33, 12, 99, 62, 61, 24, 24, 62, 211, 185, 145, 62, 18, 59, 237, 61, 205, 251, 161, 61, 41, 54, 76, 62, 146, 183, 225, 190, 202, 4, 105, 61, 2, 25, 143, 61, 13, 119, 64, 62, 24, 215, 79, 189, 136, 155, 75, 61, 64, 110, 17, 190, 15, 145, 6, 62, 251, 120, 117, 189, 122, 244, 138, 190, 108, 119, 174, 189, 182, 242, 241, 189, 9, 205, 135, 61, 12, 231, 53, 61, 209, 10, 36, 187, 226, 33, 229, 61, 94, 253, 92, 61, 85, 227, 168, 189, 91, 100, 107, 189, 58, 108, 249, 60, 208, 207, 224, 61, 188, 41, 15, 62, 245, 195, 21, 190, 239, 209, 18, 62, 122, 34, 136, 189, 96, 133, 228, 189, 208, 94, 75, 189, 93, 118, 200, 189, 42, 26, 175, 188, 59, 59, 165, 61, 126, 154, 23, 190, 49, 132, 205, 60, 39, 199, 19, 190, 13, 170, 5, 190, 172, 125, 46, 190, 168, 119, 189, 61, 226, 61, 212, 61, 156, 105, 108, 189, 33, 49, 137, 61, 227, 86, 149, 189, 187, 177, 35, 190, 23, 183, 214, 61, 61, 219, 139, 189, 66, 228, 60, 190, 64, 56, 155, 62, 142, 72, 58, 190, 25, 56, 222, 61, 164, 81, 146, 60, 48, 69, 214, 188, 228, 175, 135, 61, 68, 59, 45, 62, 51, 229, 199, 190, 152, 172, 102, 62, 119, 3, 196, 190, 98, 79, 135, 189, 183, 85, 37, 61, 38, 154, 93, 189, 168, 24, 46, 190, 110, 184, 47, 189, 10, 11, 40, 62, 30, 43, 157, 61, 165, 90, 184, 189, 2, 74, 43, 62, 63, 24, 88, 61, 148, 15, 194, 61, 203, 190, 159, 190, 184, 44, 255, 59, 30, 125, 221, 189, 220, 141, 190, 61, 21, 20, 22, 62, 227, 78, 167, 61, 115, 154, 143, 189, 47, 15, 158, 187, 18, 66, 43, 190, 221, 193, 42, 62, 131, 142, 32, 62, 179, 14, 9, 62, 126, 126, 190, 60, 59, 241, 15, 62, 247, 85, 149, 61, 149, 248, 231, 61, 116, 66, 86, 190, 16, 165, 92, 62, 192, 34, 0, 63, 207, 31, 7, 190, 147, 147, 32, 62, 214, 167, 42, 188, 146, 139, 158, 62, 235, 238, 89, 61, 186, 73, 24, 61, 165, 88, 177, 62, 136, 217, 38, 190, 165, 143, 127, 62, 155, 158, 37, 62, 10, 173, 188, 61, 105, 116, 174, 189, 197, 65, 155, 189, 47, 137, 229, 60, 100, 222, 89, 61, 112, 94, 65, 62, 235, 112, 92, 61, 26, 132, 152, 61, 93, 199, 50, 60, 75, 132, 104, 59, 119, 223, 27, 62, 135, 25, 179, 61, 32, 27, 152, 61, 43, 219, 26, 61, 206, 128, 158, 62, 32, 131, 113, 190, 180, 78, 99, 62, 230, 219, 220, 187, 44, 54, 46, 62, 116, 32, 0, 191, 249, 135, 217, 189, 10, 202, 180, 62, 207, 19, 124, 189, 208, 18, 6, 62, 119, 53, 190, 190, 49, 68, 18, 62, 1, 100, 146, 189, 104, 228, 24, 62, 20, 28, 112, 62, 158, 103, 43, 190, 202, 82, 162, 62, 164, 13, 59, 62, 204, 254, 174, 60, 13, 71, 67, 61, 246, 241, 22, 190, 137, 46, 126, 190, 252, 146, 108, 189, 46, 25, 157, 62, 238, 114, 103, 62, 209, 134, 24, 189, 85, 199, 33, 189, 140, 222, 6, 62, 128, 163, 4, 61, 153, 237, 157, 190, 163, 19, 246, 61, 173, 221, 148, 61, 53, 151, 90, 190, 239, 219, 236, 61, 248, 102, 131, 189, 118, 58, 186, 59, 54, 46, 253, 59, 93, 97, 23, 62, 88, 25, 46, 62, 107, 120, 49, 62, 76, 224, 26, 62, 167, 57, 242, 61, 38, 155, 130, 62, 170, 93, 89, 189, 160, 98, 125, 62, 41, 115, 49, 190, 32, 70, 26, 62, 218, 146, 247, 61, 73, 148, 34, 191, 211, 158, 76, 62, 182, 162, 144, 62, 226, 33, 57, 61, 81, 150, 117, 61, 227, 75, 134, 62, 75, 69, 212, 61, 141, 31, 204, 190, 68, 178, 51, 190, 39, 4, 26, 188, 168, 42, 251, 60, 220, 224, 79, 190, 181, 9, 39, 190, 219, 249, 158, 62, 15, 44, 160, 188, 6, 255, 10, 61, 145, 181, 1, 190, 97, 1, 157, 62, 178, 154, 13, 190, 120, 76, 214, 61, 143, 161, 11, 61, 226, 151, 50, 62, 104, 3, 51, 62, 216, 64, 168, 62, 92, 61, 95, 190, 20, 173, 195, 61, 174, 147, 110, 189, 65, 72, 208, 61, 174, 12, 38, 62, 187, 159, 148, 190, 220, 0, 198, 60, 4, 71, 245, 61, 150, 175, 196, 190, 151, 56, 229, 61, 60, 181, 161, 188, 45, 74, 28, 190, 170, 83, 147, 62, 47, 134, 68, 62, 168, 7, 56, 189, 78, 11, 249, 190, 207, 234, 162, 190, 116, 21, 253, 60, 94, 153, 153, 190, 92, 172, 112, 190, 115, 90, 135, 61, 144, 224, 158, 62, 143, 84, 86, 190, 23, 5, 142, 61, 253, 132, 134, 62, 128, 89, 154, 61, 197, 3, 223, 61, 180, 6, 50, 190, 49, 140, 0, 60, 189, 132, 115, 190, 30, 202, 75, 60, 245, 46, 149, 62, 138, 235, 161, 61, 39, 43, 240, 189, 121, 25, 174, 189, 137, 151, 58, 60, 10, 186, 128, 60, 241, 140, 96, 189, 34, 180, 4, 190, 248, 224, 66, 189, 46, 31, 198, 62, 12, 22, 85, 190, 207, 158, 135, 189, 90, 18, 237, 187, 253, 228, 40, 190, 77, 254, 238, 187, 96, 165, 222, 61, 218, 214, 15, 62, 185, 32, 89, 62, 94, 147, 243, 189, 39, 239, 15, 62, 13, 22, 132, 62, 137, 204, 13, 62, 96, 111, 169, 189, 247, 161, 211, 189, 179, 148, 125, 189, 251, 56, 234, 190, 226, 59, 32, 62, 196, 35, 246, 190, 149, 123, 186, 60, 200, 177, 29, 62, 204, 235, 120, 62, 74, 36, 9, 62, 230, 160, 179, 62, 43, 146, 61, 190, 79, 142, 130, 62, 120, 194, 246, 189, 236, 219, 184, 190, 26, 31, 212, 62, 229, 34, 171, 190, 202, 1, 43, 190, 204, 233, 7, 62, 32, 184, 82, 191, 175, 63, 124, 62, 231, 163, 51, 189, 245, 94, 56, 61, 59, 42, 228, 189, 14, 246, 216, 61, 82, 25, 231, 61, 70, 232, 93, 191, 189, 13, 116, 190, 92, 125, 13, 190, 202, 88, 88, 190, 169, 196, 211, 190, 131, 30, 185, 60, 14, 49, 1, 62, 240, 16, 17, 191, 116, 51, 250, 61, 94, 53, 8, 60, 200, 245, 177, 61, 43, 4, 9, 191, 50, 231, 8, 189, 81, 80, 162, 189, 25, 189, 147, 190, 236, 59, 14, 190, 49, 148, 197, 60, 31, 96, 23, 61, 138, 231, 129, 62, 67, 163, 172, 60, 146, 146, 200, 190, 41, 126, 165, 62, 244, 13, 49, 62, 53, 47, 159, 189, 194, 41, 136, 61, 79, 145, 156, 190, 236, 9, 169, 189, 210, 47, 38, 62, 27, 55, 243, 61, 102, 123, 33, 190, 111, 27, 129, 62, 60, 73, 131, 190, 157, 67, 136, 190, 211, 95, 129, 62, 80, 155, 111, 61, 36, 228, 226, 189, 224, 101, 150, 189, 235, 40, 122, 190, 111, 5, 188, 190, 126, 88, 111, 189, 159, 83, 138, 190, 56, 194, 46, 191, 207, 153, 77, 62, 200, 108, 118, 190, 243, 143, 11, 61, 44, 174, 28, 62, 126, 203, 198, 59, 210, 185, 193, 189, 82, 57, 168, 62, 233, 108, 229, 189, 180, 115, 139, 189, 14, 89, 233, 190, 18, 33, 174, 187, 164, 137, 113, 61, 50, 101, 145, 189, 87, 246, 15, 188, 30, 147, 185, 189, 211, 242, 63, 191, 167, 71, 173, 60, 83, 214, 148, 62, 84, 42, 144, 61, 240, 235, 122, 61, 51, 83, 16, 62, 26, 87, 204, 189, 210, 42, 81, 191, 117, 131, 206, 189, 35, 116, 155, 61, 202, 216, 8, 62, 234, 102, 147, 190, 164, 179, 6, 61, 237, 108, 40, 190, 153, 212, 22, 61, 103, 188, 49, 62, 207, 173, 108, 191, 72, 102, 20, 62, 131, 194, 129, 190, 177, 114, 31, 189, 221, 239, 237, 61, 57, 67, 217, 189, 234, 205, 152, 62, 172, 36, 59, 62, 138, 173, 228, 188, 106, 32, 26, 61, 54, 108, 77, 190, 241, 24, 1, 191, 154, 83, 109, 62, 58, 211, 196, 190, 7, 117, 162, 190, 126, 185, 21, 190, 212, 39, 28, 191, 215, 22, 129, 62, 160, 246, 37, 60, 81, 180, 107, 62, 241, 209, 200, 61, 255, 190, 129, 62, 70, 191, 221, 61, 70, 245, 132, 191, 223, 15, 97, 190, 129, 37, 188, 60, 37, 170, 185, 188, 17, 165, 53, 191, 46, 8, 238, 60, 102, 169, 225, 189, 209, 114, 253, 190, 94, 43, 71, 61, 133, 92, 79, 62, 114, 72, 206, 190, 2, 227, 150, 61, 181, 210, 134, 59, 0, 12, 224, 61, 11, 51, 99, 190, 233, 116, 220, 60, 209, 112, 4, 63, 25, 155, 2, 189, 26, 195, 75, 190, 82, 14, 169, 190, 98, 202, 124, 62, 42, 165, 55, 190, 158, 220, 212, 61, 123, 239, 148, 62, 208, 230, 136, 189, 226, 189, 252, 62, 209, 177, 242, 189, 98, 160, 96, 189, 131, 42, 31, 189, 39, 38, 112, 189, 161, 83, 46, 190, 245, 251, 59, 62, 188, 233, 208, 62, 45, 74, 9, 190, 230, 111, 83, 190, 220, 163, 116, 62, 32, 167, 160, 59, 237, 191, 246, 189, 55, 234, 198, 188, 123, 121, 187, 188, 149, 239, 250, 61, 127, 174, 11, 190, 103, 204, 147, 189, 226, 208, 171, 189, 77, 54, 246, 61, 88, 166, 164, 189, 20, 137, 253, 189, 190, 39, 220, 190, 119, 124, 131, 62, 209, 241, 113, 189, 212, 173, 198, 61, 119, 184, 90, 62, 84, 179, 58, 190, 68, 193, 19, 62, 31, 36, 112, 60, 149, 163, 111, 61, 196, 184, 38, 62, 245, 234, 250, 61, 105, 73, 121, 61, 57, 103, 213, 187, 6, 200, 139, 190, 238, 153, 249, 60, 204, 117, 37, 61, 203, 155, 6, 62, 30, 4, 46, 61, 224, 127, 74, 60, 59, 115, 29, 191, 118, 82, 203, 189, 40, 64, 187, 189, 211, 173, 59, 62, 234, 157, 161, 62, 244, 148, 40, 57, 110, 29, 149, 61, 14, 177, 8, 62, 31, 14, 83, 190, 44, 11, 128, 62, 217, 12, 219, 58, 251, 48, 152, 189, 32, 175, 221, 190, 144, 159, 36, 62, 248, 26, 248, 62, 86, 175, 203, 189, 240, 194, 92, 189, 255, 247, 50, 191, 35, 7, 98, 62, 13, 127, 177, 190, 77, 10, 6, 62, 233, 225, 160, 61, 163, 216, 145, 189, 186, 193, 145, 62, 177, 214, 131, 189, 110, 32, 40, 61, 42, 63, 245, 187, 158, 138, 95, 190, 199, 232, 64, 190, 125, 252, 180, 60, 13, 113, 140, 62, 125, 198, 78, 190, 105, 80, 206, 189, 235, 7, 100, 188, 136, 251, 34, 62, 147, 173, 87, 62, 165, 7, 162, 190, 158, 190, 205, 62, 224, 212, 45, 62};
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
                alignas(float) const unsigned char memory[] = {105, 218, 219, 190, 212, 239, 41, 190, 138, 214, 230, 189, 235, 241, 133, 188, 254, 155, 106, 61, 138, 183, 8, 62, 254, 92, 103, 62, 78, 207, 40, 62, 98, 156, 45, 62, 194, 170, 239, 189, 209, 142, 235, 189, 136, 107, 59, 62, 9, 234, 72, 190, 72, 95, 231, 61, 22, 56, 114, 62, 0, 240, 250, 189, 27, 35, 97, 60, 2, 99, 6, 62, 103, 217, 169, 189, 205, 150, 17, 190, 129, 36, 143, 188, 53, 103, 155, 61, 202, 44, 73, 189, 7, 196, 192, 61, 42, 80, 0, 62, 123, 139, 3, 62, 184, 223, 60, 62, 58, 30, 116, 62, 36, 71, 47, 61, 228, 133, 24, 62, 172, 95, 68, 60, 127, 52, 46, 62};
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
                alignas(float) const unsigned char memory[] = {86, 45, 236, 62, 135, 36, 23, 190, 104, 65, 168, 62, 223, 172, 97, 61, 217, 119, 10, 189, 63, 159, 205, 190, 93, 17, 174, 62, 0, 118, 202, 62, 89, 198, 45, 190, 36, 61, 140, 189, 184, 192, 102, 190, 124, 23, 233, 190, 181, 241, 231, 60, 172, 166, 20, 62, 54, 9, 84, 62, 145, 128, 143, 190, 21, 217, 77, 61, 181, 206, 221, 62, 112, 124, 219, 61, 183, 84, 117, 190, 96, 176, 76, 61, 188, 90, 249, 62, 196, 237, 131, 190, 189, 16, 149, 190, 220, 23, 209, 61, 171, 75, 227, 190, 159, 190, 193, 62, 250, 99, 143, 190, 250, 22, 27, 191, 64, 150, 165, 62, 184, 16, 130, 62, 5, 70, 12, 63, 133, 169, 194, 62, 201, 210, 30, 62, 232, 21, 12, 190, 189, 221, 176, 61, 213, 77, 124, 190, 125, 104, 151, 189, 131, 111, 120, 62, 187, 189, 126, 61, 229, 192, 241, 189, 163, 177, 127, 189, 50, 11, 87, 62, 205, 241, 24, 60, 138, 200, 164, 188, 95, 164, 108, 190, 77, 250, 34, 190, 62, 83, 14, 190, 113, 162, 238, 61, 37, 30, 141, 189, 195, 127, 221, 61, 148, 76, 8, 190, 144, 221, 63, 190, 68, 39, 159, 61, 93, 213, 21, 190, 209, 145, 3, 190, 160, 191, 80, 62, 158, 34, 246, 58, 7, 138, 19, 61, 26, 82, 82, 190, 28, 192, 68, 62, 149, 197, 76, 190, 83, 7, 134, 190, 26, 86, 168, 189};
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
                alignas(float) const unsigned char memory[] = {203, 33, 186, 189, 33, 88, 53, 190};
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
    alignas(float) const unsigned char memory[] = {207, 81, 161, 191, 235, 30, 134, 191, 147, 219, 99, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {36, 91, 39, 64, 153, 20, 10, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0060/steps/000000000004000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}