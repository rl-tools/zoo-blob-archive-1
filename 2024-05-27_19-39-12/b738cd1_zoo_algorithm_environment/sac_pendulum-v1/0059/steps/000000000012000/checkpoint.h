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
                alignas(float) const unsigned char memory[] = {71, 29, 219, 62, 151, 63, 54, 190, 144, 144, 171, 59, 118, 255, 28, 191, 246, 126, 200, 62, 161, 204, 20, 62, 110, 240, 220, 190, 167, 93, 129, 191, 177, 27, 50, 189, 156, 135, 159, 190, 216, 69, 39, 191, 163, 146, 158, 62, 231, 214, 195, 62, 154, 215, 146, 191, 120, 148, 4, 191, 41, 75, 143, 190, 235, 252, 178, 63, 151, 112, 212, 62, 221, 68, 200, 188, 19, 6, 6, 191, 28, 128, 6, 191, 160, 223, 251, 190, 13, 89, 131, 62, 68, 20, 33, 62, 148, 241, 14, 63, 121, 96, 19, 191, 216, 157, 143, 62, 93, 21, 41, 191, 200, 86, 131, 62, 150, 123, 29, 62, 160, 245, 81, 63, 250, 110, 9, 191, 116, 32, 140, 190, 25, 185, 186, 188, 250, 104, 24, 189, 55, 171, 3, 191, 92, 194, 30, 191, 137, 95, 64, 63, 60, 223, 58, 62, 27, 147, 59, 190, 81, 71, 173, 62, 74, 50, 5, 63, 23, 35, 79, 63, 205, 69, 43, 63, 38, 164, 132, 62, 59, 86, 190, 190, 67, 233, 215, 62, 74, 233, 31, 191, 67, 127, 67, 190, 38, 67, 128, 63, 167, 187, 22, 188, 72, 30, 19, 191, 85, 236, 216, 191, 173, 235, 221, 190, 43, 21, 17, 63, 200, 50, 43, 63, 241, 154, 221, 62, 171, 171, 31, 191, 180, 150, 151, 191, 243, 145, 176, 190, 160, 46, 180, 62, 58, 89, 142, 62, 242, 222, 120, 190, 246, 217, 147, 62, 57, 1, 172, 190, 158, 189, 30, 60, 175, 255, 22, 190, 187, 80, 136, 63, 44, 45, 120, 190, 7, 200, 46, 63, 91, 218, 231, 61, 6, 51, 127, 62, 66, 136, 178, 62, 22, 212, 22, 62, 228, 73, 14, 63, 218, 105, 116, 190, 12, 115, 145, 63, 239, 94, 216, 62, 94, 195, 89, 190, 92, 170, 123, 189, 194, 105, 38, 63, 214, 175, 70, 62, 185, 244, 177, 61, 168, 190, 27, 63, 172, 12, 123, 189, 251, 80, 6, 188, 201, 18, 136, 60, 11, 207, 65, 63, 201, 254, 136, 63, 245, 182, 145, 62, 0, 19, 168, 190, 166, 101, 98, 190, 88, 37, 14, 63, 229, 134, 11, 63, 211, 160, 58, 191, 145, 191, 48, 190};
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
                alignas(float) const unsigned char memory[] = {206, 126, 25, 191, 58, 21, 64, 63, 54, 129, 37, 63, 225, 78, 236, 62, 43, 245, 200, 190, 122, 150, 24, 191, 186, 101, 138, 62, 26, 235, 72, 63, 2, 224, 165, 62, 39, 254, 87, 63, 220, 32, 11, 63, 15, 14, 88, 191, 0, 180, 139, 62, 122, 203, 123, 190, 92, 135, 252, 190, 141, 11, 115, 190, 198, 243, 163, 190, 201, 35, 6, 62, 41, 168, 46, 62, 68, 4, 250, 188, 216, 203, 136, 189, 123, 91, 1, 191, 13, 182, 245, 62, 104, 181, 101, 191, 246, 223, 123, 62, 92, 233, 20, 191, 200, 88, 176, 190, 171, 114, 217, 190, 183, 241, 134, 190, 2, 60, 240, 189, 103, 82, 133, 190, 249, 214, 212, 61};
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
                alignas(float) const unsigned char memory[] = {77, 157, 32, 190, 41, 192, 169, 188, 162, 88, 106, 189, 90, 10, 182, 189, 7, 59, 99, 189, 61, 92, 124, 190, 52, 108, 7, 189, 76, 4, 132, 62, 219, 140, 160, 62, 108, 143, 142, 189, 64, 111, 230, 61, 221, 209, 39, 190, 192, 114, 137, 189, 137, 232, 211, 188, 74, 188, 133, 62, 217, 82, 101, 62, 251, 214, 254, 60, 130, 117, 70, 61, 252, 80, 123, 62, 33, 179, 140, 189, 21, 205, 100, 60, 209, 233, 175, 61, 205, 176, 133, 62, 74, 234, 5, 63, 202, 118, 88, 62, 231, 129, 137, 190, 139, 215, 116, 61, 70, 192, 39, 61, 0, 201, 25, 190, 55, 163, 205, 61, 45, 92, 248, 189, 212, 238, 242, 61, 203, 53, 76, 189, 196, 191, 98, 190, 243, 111, 107, 62, 133, 72, 130, 190, 186, 244, 255, 190, 63, 31, 23, 191, 59, 128, 101, 62, 225, 109, 147, 60, 77, 144, 90, 62, 27, 36, 189, 190, 176, 127, 139, 62, 108, 205, 160, 188, 163, 157, 211, 190, 3, 244, 72, 190, 90, 49, 137, 189, 212, 247, 186, 189, 212, 181, 66, 62, 87, 246, 13, 191, 220, 223, 187, 61, 210, 228, 137, 189, 9, 142, 77, 62, 151, 112, 17, 62, 45, 89, 30, 190, 250, 89, 6, 190, 146, 194, 141, 61, 188, 28, 25, 191, 136, 89, 198, 190, 7, 240, 28, 190, 190, 97, 162, 189, 219, 72, 149, 189, 110, 229, 131, 190, 44, 218, 242, 189, 168, 240, 169, 61, 173, 80, 23, 190, 62, 26, 40, 62, 225, 0, 75, 189, 206, 89, 210, 187, 250, 92, 105, 189, 247, 21, 5, 190, 163, 107, 196, 189, 29, 60, 170, 189, 111, 112, 25, 190, 230, 58, 76, 189, 215, 62, 184, 189, 253, 136, 4, 62, 87, 218, 212, 189, 123, 108, 247, 61, 87, 40, 21, 61, 78, 11, 8, 61, 215, 116, 13, 189, 227, 66, 206, 61, 184, 53, 249, 189, 187, 196, 30, 62, 70, 95, 37, 190, 244, 54, 28, 189, 204, 226, 136, 58, 162, 83, 0, 190, 156, 213, 244, 189, 204, 18, 140, 185, 65, 195, 216, 61, 222, 6, 21, 62, 214, 22, 221, 61, 193, 164, 108, 189, 23, 7, 31, 190, 186, 155, 43, 62, 119, 16, 233, 61, 58, 181, 2, 189, 43, 175, 220, 188, 174, 26, 170, 61, 115, 205, 201, 61, 179, 230, 183, 190, 99, 57, 158, 189, 161, 13, 144, 62, 106, 122, 240, 61, 239, 131, 176, 62, 145, 83, 29, 62, 214, 58, 24, 62, 110, 251, 183, 189, 60, 186, 49, 191, 0, 184, 182, 190, 0, 77, 163, 62, 180, 227, 45, 191, 21, 43, 66, 189, 61, 199, 144, 191, 6, 224, 144, 62, 250, 232, 43, 62, 184, 72, 100, 190, 78, 163, 13, 191, 198, 125, 154, 61, 154, 190, 104, 62, 181, 129, 43, 61, 201, 200, 119, 190, 135, 244, 34, 62, 237, 73, 153, 190, 249, 90, 10, 62, 57, 98, 26, 62, 53, 23, 161, 61, 40, 119, 184, 61, 97, 69, 131, 62, 225, 74, 192, 62, 158, 13, 117, 189, 134, 171, 142, 191, 70, 48, 37, 62, 179, 137, 50, 62, 222, 148, 115, 190, 55, 210, 58, 190, 76, 37, 235, 61, 217, 157, 22, 190, 195, 244, 246, 189, 15, 228, 157, 62, 190, 58, 236, 190, 61, 178, 152, 61, 15, 163, 255, 190, 164, 154, 133, 60, 34, 159, 76, 190, 231, 53, 72, 61, 6, 7, 199, 61, 56, 254, 139, 187, 138, 155, 104, 62, 188, 248, 52, 190, 98, 142, 162, 190, 133, 81, 181, 191, 213, 44, 1, 190, 127, 108, 99, 60, 69, 98, 35, 61, 58, 78, 46, 61, 86, 151, 78, 190, 79, 85, 26, 190, 135, 62, 47, 190, 53, 89, 135, 191, 74, 139, 88, 190, 249, 32, 119, 190, 106, 150, 155, 62, 93, 218, 172, 62, 133, 15, 55, 62, 247, 192, 148, 191, 84, 204, 73, 62, 44, 212, 130, 191, 17, 28, 189, 61, 150, 208, 108, 62, 46, 53, 212, 190, 63, 140, 111, 62, 13, 30, 75, 62, 138, 190, 203, 189, 205, 216, 30, 62, 172, 28, 66, 61, 21, 89, 103, 61, 198, 49, 8, 190, 26, 116, 49, 62, 45, 42, 232, 189, 79, 142, 53, 60, 152, 53, 255, 62, 148, 3, 139, 61, 147, 50, 156, 62, 195, 99, 186, 62, 73, 121, 156, 62, 216, 255, 103, 189, 94, 35, 252, 189, 135, 229, 47, 61, 135, 25, 173, 62, 47, 31, 154, 189, 106, 42, 176, 189, 238, 104, 140, 62, 45, 0, 136, 62, 14, 16, 189, 190, 252, 25, 167, 191, 254, 152, 23, 62, 178, 135, 60, 61, 180, 225, 138, 60, 121, 36, 15, 61, 68, 30, 24, 61, 14, 180, 128, 190, 173, 44, 190, 60, 24, 11, 216, 61, 169, 178, 216, 62, 116, 178, 62, 62, 59, 5, 183, 190, 10, 143, 79, 189, 224, 7, 219, 61, 93, 144, 222, 61, 13, 166, 58, 188, 218, 241, 152, 189, 128, 194, 24, 61, 251, 170, 77, 190, 233, 250, 200, 189, 144, 193, 199, 191, 159, 46, 1, 191, 29, 110, 183, 60, 145, 118, 44, 190, 17, 71, 3, 61, 170, 112, 194, 190, 130, 23, 106, 190, 9, 69, 183, 61, 150, 224, 9, 61, 162, 205, 43, 62, 180, 189, 179, 61, 218, 19, 117, 62, 15, 207, 134, 190, 93, 68, 174, 60, 8, 31, 20, 190, 169, 140, 99, 62, 122, 131, 135, 60, 64, 37, 8, 62, 207, 57, 107, 61, 199, 106, 26, 190, 161, 120, 43, 190, 224, 46, 65, 191, 142, 240, 6, 190, 154, 140, 20, 62, 248, 174, 220, 190, 154, 188, 13, 189, 52, 135, 86, 191, 127, 149, 42, 189, 129, 237, 222, 61, 71, 113, 8, 59, 188, 81, 222, 190, 27, 94, 110, 189, 89, 94, 75, 190, 243, 95, 149, 61, 161, 122, 28, 61, 56, 170, 206, 61, 229, 15, 60, 191, 192, 66, 60, 62, 6, 220, 231, 62, 108, 13, 45, 189, 30, 112, 21, 190, 182, 64, 35, 190, 42, 156, 49, 190, 43, 57, 205, 60, 40, 39, 40, 189, 133, 253, 7, 62, 84, 131, 0, 190, 215, 127, 138, 60, 47, 125, 124, 60, 79, 48, 36, 188, 89, 5, 143, 189, 125, 198, 229, 61, 116, 16, 37, 62, 239, 65, 134, 189, 227, 98, 246, 189, 148, 126, 31, 61, 239, 138, 154, 187, 227, 14, 200, 189, 223, 56, 181, 189, 216, 70, 131, 187, 11, 117, 187, 189, 78, 168, 172, 189, 55, 164, 189, 189, 218, 166, 30, 61, 77, 214, 214, 188, 82, 170, 232, 61, 249, 237, 39, 190, 67, 170, 115, 61, 11, 193, 207, 188, 49, 185, 217, 189, 106, 29, 160, 61, 119, 176, 248, 189, 76, 113, 45, 190, 208, 129, 172, 61, 76, 52, 113, 61, 16, 232, 5, 62, 102, 34, 6, 62, 223, 28, 149, 188, 62, 211, 207, 189, 124, 126, 124, 60, 52, 4, 17, 190, 77, 1, 58, 189, 231, 56, 189, 61, 80, 154, 93, 61, 41, 20, 47, 189, 223, 213, 203, 60, 120, 74, 107, 189, 248, 53, 188, 61, 187, 152, 234, 189, 153, 12, 4, 190, 207, 159, 88, 189, 137, 224, 14, 189, 172, 80, 147, 189, 135, 95, 24, 190, 180, 163, 251, 61, 191, 227, 122, 188, 141, 26, 162, 60, 164, 177, 237, 189, 170, 5, 187, 189, 242, 189, 244, 188, 159, 225, 154, 189, 141, 237, 129, 188, 42, 163, 108, 60, 78, 210, 102, 188, 104, 197, 181, 60, 104, 144, 155, 62, 89, 97, 221, 62, 210, 60, 70, 60, 136, 27, 173, 191, 198, 0, 138, 190, 146, 18, 141, 61, 220, 204, 184, 62, 165, 50, 208, 61, 246, 4, 147, 189, 222, 170, 131, 189, 206, 65, 81, 62, 116, 27, 165, 62, 107, 9, 59, 190, 35, 5, 51, 190, 26, 60, 231, 190, 239, 133, 16, 62, 52, 66, 117, 191, 121, 243, 185, 190, 77, 176, 169, 190, 34, 212, 41, 189, 180, 118, 24, 190, 181, 52, 55, 190, 5, 136, 92, 189, 191, 99, 154, 191, 92, 71, 252, 190, 206, 187, 175, 61, 127, 165, 49, 190, 8, 187, 89, 190, 74, 17, 154, 190, 175, 112, 246, 61, 11, 135, 134, 189, 122, 137, 28, 191, 231, 209, 6, 190, 196, 191, 32, 191, 216, 54, 143, 62, 246, 60, 160, 189, 105, 67, 41, 62, 41, 168, 144, 191, 142, 27, 13, 62, 82, 35, 162, 191, 55, 36, 183, 61, 238, 222, 25, 189, 171, 101, 128, 191, 129, 140, 144, 62, 148, 69, 172, 61, 243, 95, 235, 61, 64, 214, 139, 62, 192, 145, 197, 61, 60, 155, 108, 62, 158, 251, 37, 62, 112, 116, 191, 189, 115, 253, 175, 189, 238, 107, 253, 61, 53, 20, 36, 190, 188, 171, 48, 190, 224, 228, 219, 189, 74, 6, 84, 61, 134, 41, 141, 61, 67, 107, 61, 186, 66, 107, 23, 191, 129, 69, 247, 188, 76, 68, 111, 62, 227, 68, 63, 61, 214, 114, 221, 189, 88, 216, 177, 58, 200, 124, 253, 61, 38, 100, 214, 61, 54, 125, 203, 189, 134, 159, 9, 191, 159, 205, 11, 61, 198, 171, 26, 62, 178, 186, 23, 62, 113, 89, 180, 62, 33, 176, 132, 190, 230, 66, 219, 189, 245, 120, 24, 190, 167, 170, 32, 191, 254, 188, 122, 191, 231, 128, 118, 62, 177, 251, 110, 191, 247, 223, 152, 190, 205, 190, 185, 191, 11, 85, 102, 62, 55, 158, 2, 62, 184, 127, 103, 62, 53, 249, 235, 190, 38, 190, 141, 61, 156, 72, 190, 189, 72, 117, 50, 62, 164, 121, 149, 190, 120, 112, 11, 190, 4, 8, 219, 190, 12, 138, 2, 62, 112, 68, 218, 62, 252, 50, 16, 190, 37, 58, 6, 190, 21, 170, 146, 189, 49, 143, 50, 190, 126, 78, 73, 190, 99, 193, 54, 190, 38, 114, 116, 190, 157, 47, 202, 61, 191, 234, 35, 61, 66, 138, 222, 188, 163, 65, 108, 190, 131, 52, 138, 61, 58, 233, 25, 189, 44, 35, 244, 56, 190, 65, 59, 63, 221, 237, 94, 62, 79, 139, 92, 62, 233, 18, 47, 190, 79, 83, 179, 62, 80, 169, 213, 189, 212, 1, 41, 190, 188, 99, 177, 189, 47, 54, 143, 62, 184, 30, 25, 63, 31, 22, 155, 61, 115, 76, 141, 190, 248, 139, 146, 61, 105, 46, 121, 189, 181, 51, 182, 61, 80, 49, 208, 62, 185, 11, 29, 190, 32, 148, 228, 190, 216, 201, 250, 61, 235, 62, 54, 189, 85, 120, 89, 62, 160, 147, 186, 189, 59, 82, 254, 188, 70, 184, 102, 190, 185, 93, 39, 62, 194, 144, 66, 190, 35, 48, 74, 62, 55, 106, 7, 62, 33, 46, 40, 62, 57, 115, 141, 189, 209, 67, 0, 191, 141, 134, 73, 61, 234, 74, 228, 190, 123, 198, 136, 61, 21, 53, 243, 190, 224, 36, 119, 61, 166, 176, 47, 188, 130, 140, 113, 62, 229, 176, 75, 189, 248, 168, 135, 61, 75, 235, 122, 61, 245, 72, 231, 189, 176, 217, 169, 59, 183, 12, 217, 190, 62, 169, 202, 61, 155, 1, 9, 190, 27, 233, 238, 189, 143, 248, 239, 189, 54, 209, 23, 60, 211, 7, 99, 62, 246, 113, 213, 188, 175, 57, 246, 61, 84, 64, 3, 190, 39, 73, 227, 186, 184, 138, 132, 189, 105, 237, 198, 61, 226, 155, 0, 62, 129, 120, 6, 190, 248, 22, 244, 61, 124, 218, 213, 189, 231, 102, 230, 189, 159, 73, 72, 190, 173, 60, 52, 190, 190, 155, 34, 190, 255, 36, 142, 61, 141, 144, 240, 61, 222, 5, 228, 61, 112, 151, 132, 189, 71, 100, 26, 190, 40, 72, 246, 61, 119, 123, 49, 189, 194, 166, 25, 62, 127, 212, 226, 188, 247, 150, 62, 189, 148, 104, 153, 60, 64, 176, 155, 61, 3, 72, 159, 189, 84, 171, 125, 189, 8, 184, 77, 188, 177, 122, 22, 61, 236, 128, 18, 61, 239, 80, 191, 61, 109, 121, 97, 189, 132, 126, 56, 62, 188, 50, 154, 60, 138, 166, 152, 61, 49, 252, 128, 190, 81, 168, 33, 191, 226, 37, 62, 62, 198, 254, 135, 61, 122, 253, 127, 61, 21, 8, 132, 189, 250, 4, 189, 60, 147, 122, 127, 61, 160, 0, 134, 61, 79, 105, 8, 190, 61, 175, 37, 189, 165, 71, 50, 62, 190, 48, 242, 190, 181, 18, 27, 190, 12, 43, 184, 61, 52, 178, 183, 61, 170, 208, 222, 61, 106, 230, 200, 61, 12, 122, 54, 61, 34, 35, 46, 190, 208, 15, 234, 60, 20, 71, 6, 191, 1, 47, 60, 189, 120, 34, 130, 188, 245, 228, 7, 62, 67, 0, 163, 189, 88, 239, 117, 190, 13, 226, 44, 190, 162, 124, 163, 188, 242, 218, 254, 61, 201, 226, 188, 60, 61, 180, 108, 189, 203, 130, 188, 190, 32, 164, 88, 190, 212, 195, 126, 62, 37, 241, 5, 190, 131, 192, 19, 62, 135, 25, 194, 61, 219, 8, 135, 188, 228, 252, 202, 190, 250, 184, 215, 61, 57, 17, 85, 190, 243, 254, 161, 62, 44, 75, 252, 61, 246, 234, 142, 190, 30, 214, 214, 189, 53, 203, 166, 62, 211, 21, 229, 62, 237, 40, 44, 60, 27, 89, 213, 189, 10, 147, 159, 62, 201, 1, 8, 62, 221, 97, 112, 61, 41, 146, 231, 190, 206, 104, 180, 189, 138, 100, 80, 189, 222, 148, 238, 61, 157, 171, 177, 62, 218, 140, 212, 190, 29, 29, 243, 190, 77, 177, 216, 189, 111, 249, 172, 189, 45, 114, 189, 62, 243, 68, 49, 62, 114, 12, 198, 189, 192, 229, 31, 62, 189, 82, 19, 189, 84, 46, 138, 188, 129, 246, 153, 61, 26, 206, 16, 62, 155, 159, 43, 62, 234, 160, 153, 190, 133, 143, 43, 62, 53, 233, 23, 190, 142, 15, 151, 191, 68, 106, 200, 189, 174, 198, 120, 62, 201, 79, 211, 61, 43, 8, 148, 190, 175, 71, 192, 61, 240, 181, 119, 190, 5, 214, 127, 61, 110, 227, 152, 61, 49, 175, 2, 191, 71, 126, 108, 62, 218, 31, 131, 189, 86, 39, 178, 189, 39, 175, 97, 190, 11, 244, 248, 189, 109, 59, 243, 190, 85, 123, 126, 61, 16, 200, 130, 62, 54, 192, 253, 188, 133, 107, 163, 189, 30, 178, 167, 62, 5, 44, 45, 190, 225, 252, 68, 189, 173, 172, 126, 190, 11, 64, 131, 62, 102, 40, 201, 61, 172, 126, 36, 188, 125, 90, 226, 61, 35, 246, 73, 62, 44, 232, 191, 59, 38, 91, 155, 190, 209, 5, 224, 61, 166, 182, 187, 190, 29, 167, 62, 189, 243, 127, 137, 190, 91, 63, 6, 188, 132, 11, 228, 61, 96, 25, 42, 61, 191, 142, 11, 62, 55, 185, 57, 61, 129, 1, 17, 190, 79, 227, 103, 190, 220, 135, 181, 60, 107, 109, 87, 190, 182, 7, 70, 189, 252, 19, 4, 62, 240, 153, 21, 190, 72, 145, 177, 189, 226, 135, 34, 190, 228, 252, 246, 61, 182, 219, 21, 190, 37, 56, 13, 191, 185, 164, 205, 189, 143, 220, 137, 190, 171, 189, 70, 62, 62, 203, 219, 190, 238, 111, 80, 188, 199, 68, 17, 191, 72, 223, 153, 60, 117, 156, 14, 191, 97, 111, 158, 62, 198, 99, 141, 187, 3, 33, 164, 191, 91, 69, 116, 189, 176, 18, 190, 189, 55, 254, 221, 188, 247, 166, 156, 61, 88, 184, 60, 189, 245, 79, 19, 62, 191, 128, 38, 61, 55, 196, 168, 61, 253, 159, 114, 189, 145, 100, 105, 62, 213, 16, 76, 62, 11, 26, 101, 61, 14, 118, 181, 190, 149, 63, 97, 190, 169, 213, 15, 190, 221, 201, 3, 190, 120, 38, 238, 59, 97, 109, 19, 190, 166, 99, 99, 62, 112, 201, 181, 60, 234, 185, 75, 62, 237, 78, 157, 60, 106, 232, 5, 191, 216, 144, 181, 58, 154, 57, 51, 189, 10, 202, 36, 62, 169, 247, 163, 62, 14, 86, 219, 190, 1, 220, 211, 59, 162, 185, 72, 190, 111, 150, 111, 60, 142, 215, 211, 62, 111, 182, 56, 190, 53, 173, 20, 62, 74, 7, 199, 61, 226, 61, 133, 185, 235, 202, 128, 189, 91, 17, 104, 60, 6, 68, 172, 61, 39, 177, 236, 61, 119, 185, 112, 61, 23, 11, 74, 62, 84, 248, 170, 189, 209, 226, 128, 190, 105, 79, 213, 189, 156, 86, 229, 190, 165, 16, 173, 189, 246, 81, 248, 59, 184, 116, 196, 62, 13, 231, 14, 191, 81, 53, 34, 190, 201, 97, 1, 189, 176, 8, 55, 62, 187, 233, 11, 190, 198, 180, 23, 190, 181, 17, 93, 62, 186, 144, 160, 189, 241, 135, 169, 61, 250, 189, 254, 189, 248, 212, 85, 62, 132, 146, 0, 62, 132, 202, 184, 61, 123, 151, 149, 189, 137, 249, 175, 189, 167, 187, 220, 188, 1, 113, 15, 63, 125, 239, 148, 190, 100, 251, 96, 62, 192, 19, 7, 62, 81, 254, 87, 62, 3, 213, 134, 190, 175, 174, 140, 60, 250, 32, 5, 189, 11, 120, 243, 189, 21, 44, 31, 63, 94, 142, 104, 59, 195, 20, 152, 189, 128, 191, 220, 189, 52, 215, 98, 62, 232, 173, 26, 62, 156, 160, 22, 62, 101, 50, 33, 62, 119, 245, 250, 61, 90, 87, 37, 62, 142, 196, 174, 190, 35, 195, 187, 62, 152, 142, 83, 62, 139, 146, 178, 62, 238, 50, 26, 62, 123, 118, 211, 188, 30, 233, 190, 188, 202, 170, 162, 62, 53, 51, 191, 61, 193, 132, 59, 62, 200, 150, 148, 62, 16, 255, 158, 190, 144, 123, 150, 189, 13, 47, 194, 62, 89, 197, 61, 62, 30, 227, 252, 190, 144, 110, 117, 62, 124, 225, 7, 190, 22, 216, 110, 60, 178, 64, 77, 188, 60, 85, 17, 190, 166, 8, 48, 191, 158, 246, 79, 62, 97, 66, 161, 62, 189, 101, 133, 62, 161, 232, 72, 62, 254, 45, 70, 62, 43, 198, 103, 188, 167, 145, 123, 190, 249, 58, 6, 62, 61, 78, 132, 62, 242, 232, 195, 187, 161, 61, 115, 59, 99, 219, 145, 189, 234, 90, 87, 61, 33, 186, 193, 62, 145, 171, 175, 62, 51, 54, 222, 189, 184, 6, 70, 61, 102, 35, 246, 60, 74, 91, 91, 62, 56, 14, 204, 60, 182, 192, 120, 62, 139, 172, 205, 61, 201, 74, 47, 189, 150, 89, 8, 191, 228, 163, 23, 59, 108, 6, 134, 62, 95, 201, 16, 191, 196, 217, 61, 190, 64, 102, 26, 191, 85, 243, 227, 59, 211, 87, 30, 62, 168, 101, 85, 190, 96, 90, 58, 191, 76, 192, 29, 62, 182, 204, 230, 62, 192, 174, 248, 61, 98, 50, 118, 190, 134, 206, 66, 189, 47, 63, 13, 191, 3, 154, 103, 62, 238, 112, 0, 63, 53, 191, 84, 189, 151, 80, 69, 189, 97, 205, 169, 61, 3, 134, 59, 62, 34, 138, 88, 62, 175, 167, 200, 62, 209, 39, 180, 61, 18, 111, 216, 60, 254, 192, 113, 62, 58, 250, 176, 188, 80, 197, 92, 62, 169, 147, 152, 187, 60, 16, 112, 62, 221, 216, 175, 189, 178, 141, 21, 191, 134, 246, 239, 189, 127, 98, 238, 59, 189, 92, 116, 189, 242, 41, 169, 61, 175, 139, 134, 189, 45, 146, 92, 190, 96, 147, 168, 189, 127, 162, 154, 190, 219, 194, 197, 190, 212, 228, 132, 62, 183, 170, 178, 62, 50, 14, 175, 62, 250, 241, 94, 190, 208, 9, 253, 61, 65, 137, 43, 190, 214, 243, 125, 61, 55, 252, 59, 62, 185, 228, 16, 61, 96, 186, 175, 189, 183, 232, 57, 190, 234, 132, 181, 190, 140, 185, 5, 189, 161, 18, 203, 190, 70, 255, 110, 62, 115, 244, 18, 59, 239, 139, 125, 191, 231, 199, 41, 189, 147, 186, 228, 60, 88, 52, 67, 62, 248, 4, 156, 62, 119, 203, 249, 190, 243, 43, 255, 61, 127, 239, 44, 62, 215, 197, 135, 62, 150, 238, 200, 189, 174, 68, 143, 61, 181, 135, 89, 62, 211, 80, 227, 187, 40, 198, 0, 190, 142, 163, 89, 61, 6, 121, 105, 190, 104, 71, 223, 190, 234, 2, 170, 190, 169, 116, 248, 190, 53, 163, 4, 191, 251, 253, 29, 62, 138, 193, 92, 190, 0, 86, 244, 190, 129, 234, 243, 188, 134, 146, 81, 188, 40, 7, 136, 62, 187, 134, 42, 190, 206, 105, 2, 190, 255, 58, 223, 190, 71, 215, 51, 189, 212, 108, 123, 58, 116, 159, 249, 61, 53, 80, 23, 62, 3, 102, 50, 62, 134, 87, 208, 61, 164, 207, 140, 189, 125, 148, 111, 61, 66, 10, 118, 61, 208, 149, 69, 190, 67, 178, 36, 60, 76, 189, 124, 62, 120, 240, 210, 190, 46, 48, 170, 189, 10, 106, 70, 190, 11, 68, 24, 62, 251, 28, 28, 190, 22, 49, 30, 62, 65, 108, 141, 62, 42, 100, 202, 61, 147, 52, 48, 190, 209, 93, 156, 61, 68, 112, 159, 189, 253, 70, 220, 189, 135, 128, 17, 61, 158, 210, 13, 61, 208, 36, 136, 61, 78, 228, 34, 190, 255, 142, 3, 62, 71, 110, 217, 189, 6, 92, 132, 189, 113, 52, 13, 62, 195, 118, 189, 60, 143, 101, 223, 190, 176, 246, 170, 61, 92, 228, 98, 62, 31, 74, 207, 60, 46, 218, 35, 62, 231, 36, 149, 61, 154, 166, 199, 189, 110, 211, 224, 189, 247, 192, 71, 191, 131, 157, 103, 191, 40, 217, 4, 62, 14, 146, 101, 191, 203, 135, 133, 190, 193, 120, 191, 191, 104, 23, 179, 62, 107, 1, 19, 61, 234, 253, 181, 61, 71, 47, 253, 190, 251, 32, 73, 62, 185, 150, 232, 188, 101, 221, 52, 62, 138, 42, 145, 190, 215, 182, 112, 189, 109, 186, 189, 190, 201, 28, 244, 61, 164, 195, 225, 62, 64, 114, 46, 62, 184, 75, 174, 61, 40, 224, 52, 190, 163, 65, 83, 189, 139, 74, 166, 188, 4, 57, 22, 190, 245, 100, 123, 189, 114, 136, 236, 189, 7, 152, 219, 189, 27, 102, 6, 190, 168, 4, 113, 61, 60, 116, 0, 189, 143, 217, 242, 189, 73, 34, 24, 62, 110, 129, 53, 190, 148, 53, 227, 188, 74, 2, 232, 61, 22, 167, 0, 62, 132, 141, 216, 61, 94, 192, 8, 190, 70, 189, 82, 190, 196, 208, 29, 189, 210, 186, 224, 61, 204, 154, 70, 190, 81, 94, 171, 189, 91, 53, 226, 61, 199, 127, 153, 188, 138, 162, 115, 189, 198, 104, 227, 61, 222, 26, 75, 190, 110, 147, 25, 62, 213, 237, 129, 61, 84, 0, 46, 62, 66, 26, 76, 62, 48, 189, 163, 60, 62, 165, 78, 189, 147, 95, 97, 189, 232, 253, 197, 61, 50, 148, 142, 61, 100, 135, 10, 61, 157, 75, 66, 62, 227, 233, 4, 62, 231, 235, 50, 62, 140, 26, 233, 189, 134, 248, 51, 60, 25, 5, 193, 188, 99, 153, 123, 60, 50, 209, 64, 61, 147, 56, 109, 61, 244, 48, 141, 59, 136, 181, 207, 189, 49, 52, 202, 61, 30, 138, 189, 61, 70, 224, 87, 61, 123, 112, 40, 61, 32, 69, 236, 62, 211, 127, 7, 62, 67, 247, 156, 61, 211, 87, 240, 61, 99, 226, 116, 190, 57, 1, 3, 62, 22, 90, 174, 189, 125, 224, 42, 61, 188, 193, 154, 61, 119, 1, 115, 61, 83, 38, 134, 61, 104, 27, 41, 62, 183, 212, 137, 62, 255, 113, 7, 190, 203, 36, 158, 191, 185, 156, 51, 62, 171, 66, 137, 189, 78, 141, 133, 187, 39, 215, 77, 189, 136, 156, 76, 61, 24, 151, 156, 190, 223, 111, 49, 60, 146, 87, 137, 189, 134, 115, 9, 189, 45, 150, 86, 62, 137, 112, 137, 190, 158, 128, 164, 189, 236, 50, 252, 188, 74, 215, 187, 61, 38, 185, 191, 60, 61, 168, 209, 58, 169, 23, 27, 190, 13, 174, 136, 190, 55, 250, 50, 190, 32, 115, 133, 191, 245, 243, 187, 190, 240, 21, 240, 188, 117, 142, 232, 188, 226, 129, 80, 62, 246, 47, 132, 190, 31, 180, 100, 189};
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
                alignas(float) const unsigned char memory[] = {55, 144, 175, 62, 26, 154, 42, 62, 72, 86, 88, 189, 224, 121, 242, 61, 217, 216, 175, 61, 121, 198, 6, 190, 50, 187, 31, 62, 204, 142, 180, 188, 161, 30, 10, 190, 138, 64, 46, 190, 25, 52, 225, 189, 176, 236, 85, 60, 199, 177, 128, 62, 153, 72, 16, 190, 12, 92, 9, 62, 169, 87, 54, 190, 50, 137, 170, 189, 29, 92, 33, 189, 78, 65, 151, 62, 138, 77, 142, 189, 98, 5, 28, 62, 133, 224, 11, 62, 80, 154, 186, 61, 251, 239, 30, 190, 171, 229, 247, 61, 57, 71, 114, 62, 156, 13, 102, 190, 77, 218, 6, 62, 2, 248, 134, 62, 96, 118, 49, 190, 51, 203, 228, 61, 79, 176, 132, 62};
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
                alignas(float) const unsigned char memory[] = {199, 88, 132, 190, 175, 139, 203, 190, 131, 185, 73, 60, 5, 5, 249, 62, 24, 95, 191, 190, 221, 61, 62, 63, 45, 102, 39, 191, 219, 182, 142, 63, 155, 154, 131, 189, 188, 180, 250, 189, 224, 85, 91, 191, 40, 5, 207, 62, 136, 209, 112, 63, 167, 242, 80, 190, 110, 9, 65, 62, 5, 181, 170, 61, 132, 51, 158, 189, 141, 16, 218, 190, 210, 19, 241, 62, 182, 122, 220, 61, 245, 251, 200, 62, 42, 48, 151, 190, 41, 207, 14, 190, 50, 187, 2, 191, 190, 76, 73, 63, 189, 191, 160, 62, 213, 245, 142, 62, 217, 124, 102, 189, 148, 111, 84, 63, 151, 12, 28, 190, 163, 167, 11, 189, 138, 222, 251, 190, 158, 153, 167, 190, 16, 243, 75, 191, 17, 194, 85, 189, 31, 100, 29, 190, 1, 206, 185, 189, 46, 239, 222, 62, 157, 235, 172, 61, 223, 201, 10, 63, 187, 23, 118, 189, 222, 106, 224, 61, 84, 20, 146, 62, 150, 85, 128, 189, 208, 179, 53, 190, 25, 1, 194, 62, 116, 194, 119, 187, 207, 199, 95, 188, 28, 223, 49, 189, 101, 63, 101, 62, 181, 14, 81, 62, 248, 114, 34, 189, 35, 50, 202, 190, 54, 238, 2, 189, 50, 193, 21, 61, 106, 39, 143, 61, 225, 172, 239, 62, 66, 47, 64, 190, 70, 118, 62, 62, 15, 147, 91, 190, 252, 82, 176, 190, 157, 103, 11, 61, 139, 149, 24, 190, 96, 75, 76, 190};
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
                alignas(float) const unsigned char memory[] = {13, 1, 34, 190, 239, 238, 170, 190};
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
    alignas(float) const unsigned char memory[] = {113, 93, 194, 62, 188, 219, 173, 191, 57, 144, 69, 190};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {83, 197, 194, 191, 35, 219, 251, 190};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0059/steps/000000000012000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}