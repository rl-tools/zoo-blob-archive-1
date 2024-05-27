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
                alignas(float) const unsigned char memory[] = {186, 33, 221, 62, 80, 168, 144, 63, 94, 53, 14, 62, 234, 5, 114, 62, 50, 8, 200, 190, 238, 58, 9, 63, 61, 146, 133, 61, 44, 28, 169, 62, 110, 37, 198, 190, 196, 248, 175, 190, 222, 178, 177, 191, 14, 197, 8, 190, 175, 169, 15, 63, 155, 171, 132, 191, 18, 74, 131, 190, 88, 194, 21, 191, 253, 240, 12, 63, 208, 209, 7, 191, 72, 183, 159, 191, 19, 195, 21, 191, 139, 79, 82, 190, 6, 118, 231, 62, 233, 94, 210, 190, 92, 163, 128, 190, 36, 214, 252, 61, 96, 213, 252, 62, 138, 6, 33, 191, 57, 151, 229, 189, 242, 180, 147, 191, 24, 218, 161, 62, 56, 126, 186, 190, 20, 149, 19, 63, 175, 244, 80, 189, 157, 48, 100, 63, 189, 246, 88, 191, 25, 196, 30, 191, 132, 89, 243, 190, 100, 75, 134, 63, 73, 221, 34, 190, 60, 82, 126, 191, 51, 81, 151, 62, 174, 17, 11, 63, 99, 35, 180, 190, 143, 76, 78, 191, 100, 210, 171, 62, 123, 98, 51, 62, 134, 177, 177, 191, 23, 27, 38, 61, 183, 31, 18, 62, 28, 244, 42, 63, 247, 129, 17, 63, 253, 100, 131, 191, 235, 47, 13, 63, 77, 84, 13, 189, 27, 220, 76, 63, 180, 107, 64, 191, 74, 148, 10, 191, 117, 161, 5, 63, 149, 37, 96, 191, 111, 93, 222, 190, 227, 17, 139, 62, 189, 238, 229, 62, 152, 62, 70, 190, 235, 208, 16, 63, 217, 210, 222, 63, 232, 194, 204, 62, 90, 153, 130, 190, 201, 252, 134, 191, 219, 82, 78, 190, 100, 61, 185, 62, 62, 97, 42, 191, 97, 239, 208, 190, 77, 70, 77, 63, 254, 242, 94, 189, 212, 213, 24, 190, 143, 2, 53, 62, 145, 230, 43, 190, 45, 154, 43, 63, 90, 115, 210, 190, 56, 131, 152, 191, 213, 225, 179, 189, 57, 176, 196, 190, 171, 77, 143, 62, 244, 218, 101, 191, 71, 209, 52, 62, 122, 209, 119, 63, 42, 34, 230, 62, 219, 4, 27, 191, 34, 165, 205, 62, 58, 203, 61, 191, 31, 185, 79, 191, 54, 177, 39, 191, 124, 78, 76, 59, 134, 140, 110, 190, 51, 198, 38, 63, 219, 2, 116, 63};
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
                alignas(float) const unsigned char memory[] = {125, 169, 5, 191, 102, 248, 23, 62, 175, 96, 40, 62, 151, 86, 131, 62, 228, 121, 174, 189, 54, 251, 155, 190, 224, 167, 140, 61, 118, 133, 6, 190, 120, 211, 150, 62, 174, 160, 79, 61, 163, 154, 156, 62, 221, 32, 153, 188, 225, 10, 34, 63, 9, 20, 161, 62, 183, 51, 78, 190, 190, 169, 163, 62, 188, 151, 2, 63, 51, 210, 57, 190, 68, 150, 249, 190, 178, 127, 153, 189, 206, 3, 209, 62, 88, 128, 235, 60, 61, 145, 243, 62, 25, 36, 255, 189, 58, 70, 39, 190, 179, 188, 48, 191, 253, 247, 153, 61, 129, 232, 41, 188, 216, 74, 92, 62, 201, 0, 228, 190, 231, 103, 202, 61, 247, 135, 36, 188};
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
                alignas(float) const unsigned char memory[] = {166, 108, 249, 61, 123, 138, 11, 190, 247, 146, 4, 62, 235, 219, 87, 190, 5, 182, 127, 61, 114, 227, 178, 188, 166, 73, 224, 188, 45, 181, 84, 57, 65, 0, 144, 190, 93, 35, 187, 190, 109, 243, 241, 60, 184, 136, 117, 190, 38, 240, 119, 62, 193, 142, 40, 187, 30, 152, 12, 191, 45, 81, 140, 190, 28, 128, 27, 62, 137, 106, 255, 190, 241, 124, 111, 61, 4, 165, 35, 62, 225, 96, 4, 61, 168, 98, 64, 189, 108, 17, 17, 190, 187, 55, 43, 62, 221, 181, 230, 190, 162, 243, 72, 190, 177, 9, 94, 59, 129, 196, 148, 190, 210, 97, 77, 62, 248, 138, 172, 190, 151, 10, 172, 190, 199, 209, 154, 60, 203, 128, 54, 189, 60, 115, 7, 62, 177, 123, 54, 62, 120, 150, 63, 62, 251, 208, 137, 62, 60, 4, 65, 190, 28, 123, 84, 190, 106, 66, 182, 62, 20, 77, 101, 61, 199, 178, 207, 190, 74, 20, 172, 189, 25, 99, 96, 62, 243, 127, 12, 62, 92, 11, 19, 61, 64, 98, 65, 190, 235, 61, 166, 62, 24, 42, 193, 61, 63, 25, 154, 190, 64, 186, 161, 189, 62, 172, 143, 62, 94, 54, 105, 62, 197, 11, 254, 189, 123, 84, 148, 62, 38, 248, 157, 61, 209, 33, 102, 188, 55, 166, 216, 189, 253, 64, 122, 62, 68, 171, 175, 60, 33, 52, 151, 188, 203, 217, 227, 190, 137, 125, 41, 190, 83, 136, 154, 61, 167, 234, 41, 191, 158, 46, 5, 190, 4, 28, 250, 189, 35, 114, 116, 61, 21, 119, 243, 61, 15, 17, 9, 189, 131, 5, 179, 61, 103, 81, 5, 62, 230, 41, 4, 62, 117, 251, 139, 190, 202, 121, 201, 61, 228, 73, 118, 189, 59, 86, 163, 62, 55, 48, 19, 62, 4, 236, 117, 189, 250, 184, 29, 62, 43, 199, 214, 189, 175, 182, 76, 61, 27, 150, 70, 190, 124, 63, 64, 189, 254, 161, 161, 62, 67, 176, 117, 190, 90, 235, 173, 189, 39, 195, 81, 189, 29, 205, 235, 61, 141, 255, 182, 190, 168, 52, 89, 62, 208, 71, 74, 190, 86, 177, 168, 190, 28, 223, 16, 60, 96, 18, 55, 61, 148, 65, 5, 190, 211, 143, 25, 191, 6, 215, 211, 191, 169, 246, 2, 191, 86, 65, 129, 62, 111, 245, 53, 191, 180, 100, 20, 60, 10, 155, 150, 62, 8, 191, 220, 189, 119, 147, 70, 62, 5, 31, 70, 189, 158, 35, 198, 62, 106, 77, 51, 190, 161, 237, 139, 62, 149, 188, 96, 62, 166, 83, 210, 60, 173, 20, 125, 61, 100, 57, 8, 192, 111, 49, 99, 62, 186, 37, 166, 190, 113, 172, 199, 190, 229, 59, 49, 62, 217, 96, 38, 190, 78, 10, 51, 189, 240, 8, 17, 191, 191, 19, 217, 189, 53, 56, 157, 190, 106, 206, 56, 62, 232, 134, 134, 62, 5, 215, 7, 190, 95, 224, 168, 62, 118, 69, 190, 62, 166, 219, 192, 191, 51, 153, 128, 190, 214, 37, 173, 62, 120, 41, 58, 62, 244, 85, 240, 190, 209, 154, 209, 61, 93, 108, 165, 61, 227, 145, 208, 190, 242, 32, 97, 188, 161, 149, 137, 62, 165, 118, 10, 190, 92, 253, 47, 62, 33, 137, 94, 188, 148, 57, 170, 62, 150, 253, 185, 189, 254, 189, 118, 61, 173, 175, 219, 61, 89, 120, 216, 61, 235, 22, 32, 191, 99, 235, 89, 189, 244, 189, 98, 190, 104, 230, 61, 62, 225, 121, 70, 62, 126, 35, 247, 190, 27, 245, 144, 190, 243, 38, 8, 62, 67, 201, 88, 62, 233, 142, 181, 190, 15, 130, 67, 190, 192, 43, 31, 62, 16, 252, 130, 61, 137, 37, 211, 190, 180, 61, 246, 61, 181, 199, 167, 191, 239, 169, 212, 62, 161, 185, 226, 62, 219, 197, 4, 191, 108, 74, 213, 60, 115, 1, 54, 190, 44, 36, 41, 190, 75, 225, 80, 62, 130, 114, 114, 189, 47, 69, 77, 191, 51, 82, 119, 62, 96, 188, 144, 62, 164, 22, 145, 62, 35, 7, 183, 62, 18, 17, 41, 191, 85, 145, 242, 189, 130, 87, 194, 62, 146, 36, 114, 63, 161, 236, 138, 62, 255, 242, 174, 62, 138, 175, 86, 190, 230, 59, 4, 191, 133, 28, 89, 60, 229, 231, 21, 62, 79, 23, 154, 62, 191, 221, 66, 190, 108, 220, 28, 191, 8, 132, 68, 60, 126, 83, 207, 190, 202, 26, 107, 191, 8, 240, 186, 61, 60, 125, 190, 62, 74, 63, 151, 190, 163, 47, 167, 62, 236, 157, 217, 189, 118, 203, 219, 61, 249, 46, 66, 62, 45, 162, 228, 190, 130, 133, 133, 191, 53, 196, 75, 62, 109, 219, 14, 191, 105, 235, 160, 190, 208, 155, 247, 188, 223, 247, 184, 61, 26, 164, 128, 190, 157, 138, 96, 62, 133, 162, 213, 190, 88, 163, 87, 62, 206, 159, 44, 62, 140, 138, 204, 62, 134, 248, 60, 62, 235, 75, 234, 62, 113, 94, 212, 190, 20, 79, 10, 191, 85, 193, 151, 189, 202, 242, 188, 60, 2, 75, 18, 63, 218, 157, 246, 190, 252, 32, 157, 190, 9, 34, 25, 191, 139, 84, 156, 190, 12, 125, 106, 191, 17, 189, 153, 190, 202, 45, 181, 61, 42, 225, 59, 189, 209, 246, 48, 191, 212, 126, 189, 189, 86, 87, 212, 190, 251, 204, 167, 62, 139, 112, 16, 61, 182, 40, 185, 188, 141, 192, 81, 189, 171, 203, 49, 62, 106, 184, 199, 62, 17, 222, 160, 62, 175, 156, 3, 61, 141, 87, 101, 62, 172, 198, 32, 190, 76, 77, 99, 62, 164, 208, 136, 190, 104, 165, 111, 190, 8, 176, 139, 189, 226, 243, 83, 61, 140, 118, 7, 61, 129, 71, 252, 61, 100, 93, 36, 191, 195, 33, 178, 188, 121, 236, 104, 61, 51, 136, 135, 62, 147, 171, 12, 190, 160, 254, 113, 190, 130, 80, 64, 62, 252, 19, 86, 191, 171, 160, 144, 62, 222, 136, 22, 190, 169, 65, 40, 190, 210, 101, 108, 190, 137, 225, 237, 60, 108, 63, 174, 190, 39, 214, 215, 189, 129, 246, 27, 190, 194, 190, 122, 61, 68, 240, 220, 61, 237, 143, 215, 189, 124, 105, 125, 62, 3, 255, 118, 61, 125, 68, 158, 61, 250, 45, 85, 190, 106, 104, 129, 62, 93, 96, 86, 189, 219, 74, 48, 189, 108, 16, 207, 189, 184, 224, 41, 188, 139, 253, 39, 61, 103, 213, 129, 190, 89, 147, 173, 190, 123, 212, 174, 62, 241, 96, 11, 63, 253, 115, 145, 190, 78, 209, 80, 190, 107, 194, 149, 61, 125, 28, 160, 62, 14, 139, 141, 190, 101, 171, 148, 62, 231, 165, 112, 62, 207, 245, 197, 62, 32, 53, 54, 190, 60, 90, 212, 188, 229, 100, 38, 63, 252, 96, 132, 60, 33, 184, 178, 188, 126, 198, 164, 189, 5, 3, 34, 191, 74, 160, 24, 62, 184, 11, 161, 61, 66, 52, 75, 190, 238, 0, 129, 185, 28, 116, 3, 189, 56, 88, 32, 62, 191, 115, 84, 190, 154, 157, 147, 62, 188, 143, 211, 188, 36, 22, 148, 188, 53, 115, 195, 190, 42, 217, 41, 62, 26, 244, 113, 62, 2, 111, 175, 190, 54, 112, 194, 190, 232, 49, 165, 61, 239, 189, 228, 62, 68, 198, 15, 191, 210, 135, 205, 190, 157, 11, 175, 62, 200, 132, 91, 62, 138, 204, 211, 189, 240, 56, 27, 62, 131, 232, 166, 62, 66, 6, 247, 61, 226, 132, 121, 189, 232, 81, 107, 61, 71, 7, 128, 190, 87, 152, 143, 191, 209, 129, 220, 190, 128, 75, 38, 62, 227, 151, 120, 191, 226, 14, 26, 60, 254, 187, 170, 62, 66, 232, 209, 190, 17, 75, 24, 62, 189, 236, 201, 190, 128, 87, 136, 62, 155, 207, 119, 190, 151, 235, 184, 62, 227, 250, 1, 189, 175, 110, 8, 62, 178, 255, 42, 62, 184, 128, 155, 191, 112, 112, 212, 62, 154, 148, 21, 191, 215, 173, 201, 190, 74, 74, 221, 61, 200, 131, 17, 63, 74, 243, 232, 61, 198, 213, 143, 190, 138, 125, 13, 62, 207, 44, 130, 62, 249, 3, 189, 61, 164, 199, 151, 62, 105, 30, 55, 63, 208, 67, 120, 62, 107, 60, 55, 62, 123, 12, 144, 191, 115, 149, 0, 63, 22, 231, 124, 189, 45, 213, 174, 62, 28, 153, 124, 190, 79, 231, 0, 191, 70, 186, 2, 62, 162, 131, 224, 190, 22, 156, 182, 190, 116, 97, 90, 62, 28, 251, 159, 189, 112, 54, 209, 189, 224, 129, 7, 191, 142, 85, 25, 190, 121, 217, 55, 191, 30, 54, 51, 189, 33, 210, 25, 191, 125, 112, 80, 190, 57, 146, 75, 190, 73, 139, 201, 190, 253, 233, 11, 191, 172, 48, 136, 62, 151, 196, 76, 62, 181, 149, 33, 191, 53, 124, 131, 190, 234, 126, 237, 188, 196, 127, 189, 189, 26, 220, 152, 190, 204, 61, 187, 61, 102, 86, 145, 60, 180, 244, 51, 62, 40, 31, 57, 191, 24, 56, 3, 191, 49, 208, 172, 62, 144, 222, 171, 190, 233, 58, 60, 60, 24, 199, 140, 190, 108, 173, 38, 62, 133, 240, 100, 62, 33, 206, 207, 59, 191, 243, 184, 60, 164, 95, 221, 61, 172, 188, 174, 62, 57, 138, 11, 62, 228, 152, 205, 61, 154, 103, 148, 62, 115, 248, 38, 191, 105, 119, 205, 61, 47, 4, 152, 190, 183, 54, 48, 190, 74, 233, 93, 190, 68, 227, 197, 60, 14, 161, 59, 61, 203, 60, 208, 60, 188, 102, 75, 60, 2, 98, 0, 62, 44, 157, 88, 62, 38, 156, 135, 190, 36, 220, 203, 59, 164, 90, 21, 189, 16, 91, 193, 62, 17, 232, 154, 189, 251, 47, 164, 62, 203, 182, 162, 190, 120, 166, 175, 190, 233, 207, 36, 190, 211, 39, 49, 190, 160, 224, 255, 61, 165, 169, 242, 190, 40, 13, 0, 63, 46, 83, 168, 61, 59, 209, 41, 62, 30, 152, 174, 61, 45, 100, 151, 188, 68, 0, 208, 190, 202, 70, 241, 61, 221, 229, 252, 189, 246, 235, 128, 189, 103, 99, 56, 62, 157, 203, 185, 190, 83, 174, 47, 191, 172, 102, 200, 190, 201, 9, 42, 62, 105, 59, 10, 188, 193, 246, 134, 61, 190, 65, 13, 62, 147, 131, 102, 191, 106, 161, 52, 190, 206, 129, 223, 189, 225, 246, 141, 62, 144, 108, 98, 190, 236, 169, 145, 190, 173, 130, 46, 62, 193, 221, 190, 191, 44, 39, 133, 62, 252, 58, 171, 190, 101, 20, 23, 190, 80, 7, 174, 62, 168, 164, 87, 61, 128, 208, 153, 62, 178, 47, 183, 190, 61, 180, 213, 191, 223, 0, 212, 60, 91, 85, 40, 191, 201, 41, 92, 191, 199, 154, 231, 61, 74, 218, 159, 61, 71, 208, 212, 62, 113, 136, 75, 191, 205, 131, 245, 62, 179, 215, 95, 61, 146, 137, 105, 190, 250, 178, 79, 191, 51, 102, 112, 62, 245, 171, 147, 190, 174, 138, 66, 191, 213, 132, 21, 191, 6, 78, 6, 62, 102, 209, 234, 62, 125, 55, 64, 191, 164, 191, 211, 190, 114, 254, 232, 190, 42, 113, 82, 190, 79, 15, 151, 190, 218, 44, 27, 62, 40, 197, 115, 62, 29, 250, 39, 62, 182, 181, 255, 188, 78, 40, 0, 190, 233, 113, 159, 60, 158, 68, 128, 191, 244, 16, 63, 190, 156, 67, 4, 62, 11, 242, 177, 190, 251, 5, 191, 61, 42, 253, 67, 61, 70, 195, 47, 62, 114, 234, 154, 62, 139, 123, 65, 191, 41, 164, 30, 62, 224, 69, 160, 61, 37, 149, 123, 62, 115, 116, 159, 190, 59, 22, 223, 190, 230, 60, 30, 190, 3, 182, 1, 191, 169, 47, 149, 62, 63, 58, 154, 190, 90, 91, 45, 190, 86, 215, 90, 62, 161, 25, 157, 62, 31, 22, 162, 61, 156, 152, 131, 190, 33, 203, 7, 190, 69, 226, 107, 187, 54, 61, 153, 60, 106, 184, 127, 62, 68, 126, 249, 62, 242, 42, 174, 62, 222, 151, 230, 61, 62, 238, 128, 191, 144, 172, 243, 190, 125, 143, 175, 187, 65, 202, 81, 190, 108, 45, 162, 190, 185, 246, 142, 190, 138, 229, 166, 60, 251, 187, 75, 189, 12, 30, 136, 190, 181, 12, 28, 62, 41, 135, 178, 61, 26, 216, 101, 62, 91, 104, 1, 190, 96, 37, 65, 62, 56, 137, 19, 189, 76, 208, 215, 189, 111, 8, 125, 60, 225, 253, 156, 61, 194, 182, 198, 61, 167, 109, 169, 190, 39, 211, 129, 190, 42, 38, 41, 62, 13, 180, 224, 62, 223, 49, 191, 190, 110, 19, 204, 190, 162, 185, 145, 62, 2, 211, 21, 62, 102, 225, 42, 190, 40, 219, 81, 187, 220, 254, 188, 62, 144, 149, 131, 62, 201, 77, 164, 190, 253, 173, 228, 61, 238, 6, 235, 188, 110, 15, 104, 62, 249, 147, 169, 62, 92, 220, 152, 61, 50, 94, 161, 62, 174, 105, 130, 190, 60, 86, 67, 190, 171, 127, 146, 189, 170, 9, 201, 189, 25, 234, 199, 61, 59, 126, 47, 190, 94, 53, 55, 189, 191, 113, 163, 189, 246, 200, 146, 190, 161, 196, 149, 187, 25, 233, 156, 62, 106, 187, 137, 62, 125, 10, 110, 191, 84, 121, 175, 189, 136, 30, 126, 190, 112, 249, 223, 62, 30, 190, 92, 62, 111, 246, 136, 189, 137, 69, 95, 189, 78, 35, 240, 61, 213, 144, 140, 190, 233, 99, 170, 60, 95, 53, 164, 190, 108, 116, 59, 62, 200, 173, 61, 191, 149, 36, 33, 190, 147, 38, 172, 187, 140, 7, 52, 191, 237, 235, 163, 62, 200, 82, 207, 190, 163, 44, 78, 62, 108, 246, 25, 190, 37, 95, 102, 191, 34, 159, 233, 190, 87, 179, 193, 62, 116, 161, 2, 191, 38, 92, 177, 190, 51, 164, 90, 60, 92, 60, 186, 62, 51, 234, 17, 188, 37, 35, 109, 61, 16, 113, 104, 190, 208, 194, 101, 189, 218, 185, 134, 62, 233, 73, 154, 62, 181, 250, 160, 189, 253, 63, 215, 61, 251, 243, 129, 189, 247, 194, 82, 191, 255, 170, 15, 62, 11, 34, 67, 190, 39, 195, 209, 62, 162, 91, 20, 190, 135, 247, 38, 62, 146, 114, 122, 191, 26, 236, 255, 189, 103, 137, 148, 191, 147, 129, 90, 62, 102, 207, 65, 61, 115, 197, 166, 191, 32, 34, 211, 62, 172, 213, 102, 62, 10, 85, 115, 62, 228, 40, 39, 62, 49, 75, 22, 191, 203, 198, 144, 188, 211, 89, 37, 62, 32, 217, 229, 61, 245, 182, 154, 190, 23, 253, 246, 190, 104, 134, 214, 62, 159, 95, 52, 190, 206, 232, 77, 62, 195, 255, 41, 190, 80, 222, 75, 62, 161, 84, 236, 61, 226, 182, 59, 190, 129, 173, 104, 62, 22, 58, 59, 62, 113, 51, 25, 190, 51, 60, 9, 191, 223, 228, 152, 62, 42, 41, 205, 61, 153, 101, 159, 62, 16, 207, 172, 190, 235, 135, 44, 62, 136, 31, 173, 190, 12, 182, 137, 190, 132, 212, 119, 191, 25, 19, 224, 62, 34, 165, 118, 61, 23, 105, 7, 62, 212, 43, 208, 189, 1, 35, 154, 61, 124, 119, 100, 189, 253, 44, 161, 189, 124, 193, 159, 189, 252, 110, 45, 188, 64, 59, 250, 189, 154, 221, 11, 190, 181, 224, 54, 189, 240, 246, 222, 61, 16, 65, 137, 189, 124, 160, 253, 188, 145, 10, 130, 61, 108, 186, 171, 189, 159, 189, 25, 61, 64, 178, 152, 60, 203, 132, 235, 61, 161, 238, 5, 190, 26, 209, 30, 62, 83, 200, 157, 189, 230, 233, 175, 61, 21, 233, 36, 190, 82, 212, 239, 189, 122, 175, 124, 61, 154, 102, 43, 190, 237, 48, 53, 190, 86, 126, 241, 188, 89, 134, 243, 189, 194, 70, 27, 187, 194, 166, 231, 61, 129, 210, 139, 189, 173, 120, 11, 191, 77, 234, 28, 62, 9, 8, 204, 190, 170, 110, 242, 188, 59, 194, 215, 61, 225, 43, 202, 190, 159, 3, 217, 190, 64, 64, 128, 190, 124, 162, 217, 190, 229, 69, 33, 189, 46, 140, 23, 189, 13, 133, 62, 189, 81, 201, 136, 190, 73, 86, 1, 190, 28, 133, 55, 61, 211, 166, 168, 62, 3, 51, 51, 61, 27, 58, 223, 190, 58, 103, 228, 60, 239, 165, 60, 190, 95, 212, 38, 191, 219, 180, 223, 60, 134, 165, 224, 189, 77, 160, 194, 188, 207, 156, 2, 191, 224, 85, 12, 61, 36, 85, 179, 61, 158, 18, 221, 190, 199, 23, 22, 190, 147, 151, 18, 190, 210, 130, 3, 189, 23, 63, 137, 61, 159, 80, 175, 189, 167, 84, 84, 190, 114, 38, 161, 189, 253, 166, 45, 62, 13, 45, 103, 190, 187, 185, 231, 61, 100, 244, 21, 62, 0, 214, 46, 189, 241, 157, 110, 62, 95, 83, 232, 189, 118, 177, 1, 62, 225, 36, 250, 189, 87, 63, 64, 62, 55, 146, 23, 190, 103, 216, 210, 60, 70, 2, 200, 189, 165, 110, 120, 61, 55, 75, 40, 190, 203, 53, 137, 190, 251, 255, 167, 190, 104, 225, 51, 62, 153, 149, 212, 62, 175, 49, 92, 188, 179, 158, 230, 190, 82, 244, 168, 62, 156, 15, 4, 61, 110, 131, 142, 189, 228, 161, 57, 62, 127, 110, 121, 61, 209, 72, 171, 62, 151, 240, 183, 61, 196, 106, 90, 190, 14, 235, 148, 62, 35, 173, 228, 62, 88, 253, 206, 189, 64, 67, 90, 62, 88, 227, 82, 61, 83, 247, 219, 190, 228, 114, 181, 189, 23, 144, 222, 187, 222, 165, 1, 191, 186, 55, 212, 189, 171, 194, 131, 62, 61, 229, 93, 62, 38, 204, 45, 190, 138, 60, 224, 62, 122, 139, 193, 61, 207, 13, 132, 61, 96, 188, 181, 62, 61, 11, 10, 63, 140, 17, 211, 190, 73, 151, 20, 62, 100, 244, 133, 190, 142, 201, 140, 190, 73, 179, 64, 61, 147, 21, 222, 189, 73, 232, 83, 61, 218, 143, 145, 190, 121, 230, 18, 62, 123, 133, 29, 191, 32, 45, 144, 188, 40, 70, 134, 191, 23, 122, 197, 62, 156, 208, 204, 61, 88, 46, 196, 61, 33, 127, 3, 191, 170, 192, 207, 189, 6, 25, 185, 62, 83, 74, 42, 191, 205, 194, 161, 61, 191, 130, 145, 62, 253, 50, 127, 190, 232, 253, 53, 62, 185, 62, 152, 190, 27, 23, 154, 61, 251, 175, 175, 189, 169, 153, 130, 61, 59, 92, 67, 190, 155, 11, 140, 190, 118, 240, 119, 190, 191, 12, 235, 190, 140, 30, 143, 62, 71, 21, 250, 190, 93, 70, 177, 190, 210, 175, 167, 62, 56, 209, 25, 63, 148, 127, 137, 189, 210, 205, 85, 190, 120, 4, 63, 62, 246, 15, 6, 191, 216, 155, 222, 62, 204, 107, 142, 62, 251, 163, 12, 63, 119, 177, 160, 62, 142, 115, 245, 62, 153, 171, 104, 191, 207, 241, 143, 60, 117, 110, 193, 61, 68, 152, 173, 189, 89, 248, 30, 60, 93, 105, 27, 190, 13, 40, 18, 190, 1, 74, 183, 188, 85, 232, 27, 62, 163, 88, 220, 189, 68, 76, 238, 189, 225, 62, 208, 189, 125, 145, 231, 59, 159, 121, 167, 189, 210, 182, 157, 61, 22, 135, 90, 60, 149, 140, 202, 188, 42, 136, 16, 62, 170, 168, 131, 61, 63, 229, 166, 187, 114, 183, 51, 189, 252, 51, 19, 190, 31, 221, 178, 59, 171, 203, 204, 189, 22, 181, 131, 61, 168, 143, 27, 189, 253, 112, 21, 190, 16, 29, 244, 189, 188, 189, 219, 61, 183, 95, 26, 190, 174, 199, 161, 61, 118, 203, 172, 59, 255, 102, 59, 190, 221, 49, 165, 190, 252, 37, 68, 188, 144, 198, 87, 189, 177, 219, 128, 61, 155, 245, 134, 62, 48, 251, 143, 60, 55, 34, 131, 190, 242, 199, 154, 62, 64, 89, 123, 61, 19, 51, 91, 62, 149, 23, 186, 190, 36, 5, 107, 62, 159, 31, 198, 190, 9, 172, 90, 190, 202, 149, 212, 61, 64, 14, 142, 62, 74, 13, 22, 190, 49, 175, 163, 189, 236, 192, 151, 62, 31, 95, 8, 62, 153, 117, 1, 190, 23, 232, 158, 190, 173, 107, 22, 189, 246, 184, 106, 62, 25, 157, 53, 62, 209, 252, 238, 190, 65, 122, 98, 61, 135, 153, 242, 189, 225, 53, 132, 190, 201, 247, 40, 190, 11, 24, 87, 190, 255, 76, 87, 190, 73, 19, 182, 60, 226, 69, 29, 190, 196, 83, 63, 189, 97, 194, 205, 189, 85, 112, 209, 189, 130, 4, 228, 61, 81, 199, 175, 61, 255, 60, 130, 61, 108, 24, 148, 61, 39, 49, 150, 60, 177, 111, 44, 190, 1, 247, 176, 61, 45, 32, 145, 61, 215, 134, 189, 189, 198, 103, 159, 189, 184, 204, 199, 188, 127, 5, 4, 190, 216, 98, 72, 61, 33, 15, 164, 189, 5, 20, 26, 190, 39, 204, 26, 190, 26, 234, 160, 189, 250, 58, 18, 189, 113, 201, 144, 189, 111, 189, 190, 61, 30, 83, 10, 62, 154, 172, 38, 62, 132, 211, 224, 189, 75, 128, 173, 60, 192, 60, 151, 189, 225, 137, 32, 190, 203, 222, 108, 189, 115, 168, 20, 63, 253, 80, 253, 189, 109, 11, 164, 189, 96, 210, 221, 62, 59, 181, 142, 63, 106, 251, 154, 62, 153, 247, 87, 62, 67, 4, 148, 191, 5, 100, 130, 61, 168, 62, 52, 191, 15, 62, 29, 63, 83, 45, 123, 191, 18, 202, 29, 63, 89, 10, 54, 191, 231, 54, 102, 191, 216, 63, 100, 189, 216, 89, 41, 190, 82, 91, 252, 62, 230, 60, 143, 191, 18, 60, 91, 191, 188, 116, 192, 62, 222, 83, 236, 61, 132, 213, 109, 62, 199, 88, 73, 191, 30, 134, 52, 191, 63, 115, 131, 190, 139, 32, 180, 62, 32, 243, 150, 60, 170, 209, 93, 191, 93, 40, 150, 62, 26, 85, 159, 62, 102, 216, 206, 190, 151, 137, 188, 62, 44, 229, 157, 61, 200, 54, 169, 189, 200, 239, 136, 188, 33, 146, 99, 190, 124, 133, 148, 189, 1, 9, 70, 63, 231, 99, 62, 190, 191, 119, 146, 188, 0, 92, 118, 188, 78, 15, 120, 61, 126, 22, 126, 190, 6, 176, 50, 62, 204, 233, 194, 190, 27, 64, 164, 190, 66, 114, 21, 190, 228, 35, 134, 62, 54, 234, 146, 60, 130, 218, 31, 191, 238, 44, 20, 191, 221, 174, 136, 62, 46, 2, 148, 62, 18, 22, 20, 190, 233, 199, 249, 190, 77, 252, 134, 62, 210, 232, 58, 61, 73, 99, 150, 190, 128, 106, 15, 190, 192, 121, 146, 61, 229, 62, 132, 190, 39, 3, 39, 191, 204, 82, 29, 190, 204, 30, 46, 60, 221, 23, 148, 190, 47, 172, 228, 188, 33, 204, 181, 190, 191, 74, 188, 189, 217, 251, 136, 62, 98, 74, 166, 189, 165, 40, 122, 60, 228, 25, 45, 61, 206, 110, 213, 62, 7, 170, 131, 62, 97, 21, 227, 188, 10, 117, 167, 62, 6, 152, 90, 190, 117, 80, 12, 63, 9, 153, 104, 190, 232, 251, 139, 190, 37, 197, 248, 189, 29, 122, 184, 61, 139, 19, 86, 190, 210, 153, 141, 62, 48, 101, 226, 190, 55, 123, 116, 190, 57, 218, 107, 61, 88, 168, 253, 188, 79, 239, 199, 188, 132, 108, 131, 190, 252, 5, 73, 62, 133, 83, 160, 190, 207, 114, 129, 62, 143, 101, 16, 190, 112, 6, 234, 190, 81, 222, 247, 190, 2, 64, 179, 189, 239, 217, 197, 189, 91, 152, 30, 190, 99, 22, 42, 190, 63, 161, 1, 61, 48, 206, 185, 189, 155, 150, 52, 190, 219, 203, 238, 61, 209, 25, 41, 188, 229, 235, 36, 62, 216, 248, 153, 189, 32, 182, 193, 189, 140, 3, 77, 190, 245, 151, 4, 61, 135, 168, 202, 189, 93, 63, 93, 61, 213, 18, 186, 190, 241, 115, 162, 190, 204, 142, 56, 190, 133, 36, 169, 62, 240, 25, 182, 62, 147, 234, 132, 189, 235, 6, 179, 190, 133, 215, 104, 189, 99, 58, 152, 62, 189, 11, 97, 189, 103, 142, 8, 62, 150, 179, 120, 61, 163, 96, 53, 62, 67, 203, 131, 190, 148, 75, 22, 62};
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
                alignas(float) const unsigned char memory[] = {127, 112, 181, 189, 184, 64, 174, 61, 218, 10, 159, 62, 75, 60, 139, 62, 79, 182, 254, 60, 204, 180, 70, 62, 218, 166, 121, 61, 184, 103, 49, 62, 88, 35, 23, 62, 238, 14, 124, 189, 17, 182, 170, 62, 194, 86, 116, 190, 136, 253, 94, 190, 137, 244, 26, 190, 187, 76, 243, 189, 19, 81, 236, 60, 160, 252, 201, 61, 143, 7, 213, 188, 183, 221, 52, 62, 181, 222, 1, 62, 178, 191, 57, 190, 127, 87, 13, 190, 144, 35, 55, 62, 110, 164, 125, 61, 217, 127, 197, 61, 42, 148, 55, 61, 23, 6, 148, 190, 5, 159, 248, 189, 135, 58, 239, 62, 45, 135, 183, 60, 52, 65, 239, 189, 93, 2, 86, 62};
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
                alignas(float) const unsigned char memory[] = {161, 248, 38, 190, 178, 67, 168, 61, 151, 199, 54, 61, 159, 159, 95, 191, 170, 83, 233, 189, 21, 183, 134, 63, 199, 26, 170, 63, 246, 106, 164, 62, 150, 209, 208, 190, 46, 220, 119, 190, 212, 189, 44, 191, 95, 49, 110, 63, 49, 188, 205, 62, 236, 143, 172, 62, 238, 112, 139, 63, 21, 211, 146, 190, 39, 167, 51, 190, 99, 180, 202, 190, 108, 129, 108, 63, 211, 228, 13, 63, 1, 194, 220, 61, 82, 247, 61, 190, 80, 132, 137, 190, 189, 123, 6, 63, 90, 203, 8, 191, 10, 206, 149, 189, 138, 170, 206, 190, 240, 251, 170, 189, 67, 222, 212, 63, 26, 84, 39, 191, 48, 52, 142, 62, 52, 62, 19, 189, 102, 130, 143, 190, 206, 215, 212, 190, 76, 215, 139, 190, 161, 106, 74, 62, 151, 88, 168, 190, 128, 135, 156, 189, 3, 143, 19, 63, 182, 177, 146, 61, 239, 69, 99, 190, 245, 60, 251, 62, 102, 206, 126, 62, 144, 189, 205, 62, 85, 52, 144, 61, 19, 190, 162, 60, 144, 187, 39, 189, 127, 91, 172, 190, 146, 247, 97, 190, 165, 47, 198, 190, 230, 242, 194, 62, 247, 68, 74, 190, 185, 96, 111, 61, 117, 51, 183, 61, 15, 168, 72, 190, 122, 134, 153, 189, 96, 69, 56, 62, 185, 86, 74, 188, 1, 81, 225, 62, 29, 168, 16, 190, 95, 126, 209, 189, 66, 255, 230, 62, 22, 253, 32, 62, 161, 112, 83, 190};
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
                alignas(float) const unsigned char memory[] = {140, 238, 207, 188, 210, 119, 157, 190};
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
    alignas(float) const unsigned char memory[] = {246, 160, 170, 63, 16, 192, 109, 191, 37, 112, 148, 63};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {97, 7, 135, 64, 52, 90, 61, 190};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0094/steps/000000000018000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}