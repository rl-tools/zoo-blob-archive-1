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
                alignas(float) const unsigned char memory[] = {68, 241, 96, 63, 78, 104, 1, 63, 24, 8, 183, 189, 192, 56, 47, 190, 179, 126, 241, 62, 20, 146, 226, 190, 167, 15, 0, 63, 79, 202, 35, 191, 21, 159, 214, 62, 187, 34, 1, 63, 118, 224, 180, 191, 153, 165, 163, 190, 176, 177, 42, 191, 202, 25, 4, 190, 19, 168, 251, 62, 113, 33, 153, 190, 248, 114, 249, 61, 151, 100, 112, 187, 22, 91, 17, 59, 26, 60, 217, 63, 130, 79, 185, 62, 106, 55, 228, 62, 178, 76, 146, 191, 13, 94, 200, 190, 128, 27, 29, 63, 225, 38, 143, 62, 33, 113, 222, 62, 5, 9, 90, 63, 160, 19, 71, 63, 71, 94, 137, 62, 90, 118, 81, 62, 84, 104, 0, 191, 147, 192, 10, 63, 81, 230, 64, 190, 56, 33, 231, 190, 213, 254, 185, 62, 53, 26, 42, 191, 104, 64, 144, 191, 5, 134, 142, 190, 11, 239, 55, 63, 235, 246, 27, 63, 96, 254, 57, 62, 13, 134, 78, 63, 107, 71, 126, 191, 81, 30, 139, 190, 84, 176, 237, 62, 9, 178, 188, 63, 236, 163, 215, 62, 245, 203, 165, 58, 19, 139, 231, 63, 34, 223, 13, 63, 232, 185, 102, 60, 94, 206, 143, 190, 48, 138, 70, 190, 168, 250, 216, 190, 117, 19, 239, 190, 54, 19, 109, 62, 2, 19, 187, 190, 184, 63, 29, 63, 72, 247, 14, 191, 39, 177, 233, 62, 126, 76, 141, 190, 75, 74, 59, 190, 145, 163, 12, 191, 174, 208, 90, 191, 40, 56, 218, 190, 15, 199, 221, 62, 140, 147, 78, 63, 171, 15, 130, 190, 92, 2, 9, 63, 122, 35, 42, 62, 245, 45, 194, 62, 20, 255, 233, 62, 106, 225, 43, 63, 80, 68, 168, 62, 188, 209, 47, 63, 139, 185, 115, 191, 236, 242, 254, 61, 60, 58, 92, 191, 45, 241, 103, 63, 189, 41, 178, 61, 248, 117, 149, 189, 6, 235, 14, 191, 212, 205, 212, 62, 50, 97, 246, 187, 77, 31, 4, 191, 249, 108, 195, 62, 161, 220, 9, 191, 53, 132, 237, 190, 152, 215, 10, 63, 247, 63, 151, 62, 255, 213, 180, 190, 241, 240, 0, 63, 178, 109, 95, 62, 91, 170, 220, 190, 249, 235, 16, 191};
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
                alignas(float) const unsigned char memory[] = {155, 208, 217, 190, 26, 146, 130, 190, 167, 131, 211, 190, 145, 214, 199, 189, 181, 38, 148, 190, 116, 226, 178, 62, 14, 109, 90, 62, 249, 49, 181, 62, 175, 49, 130, 190, 196, 174, 192, 190, 142, 234, 178, 190, 45, 118, 156, 62, 25, 216, 33, 63, 147, 42, 56, 63, 31, 137, 176, 190, 174, 175, 244, 62, 102, 151, 215, 60, 240, 172, 7, 63, 195, 185, 6, 63, 168, 242, 221, 62, 216, 166, 18, 191, 130, 235, 165, 190, 214, 50, 248, 62, 86, 238, 59, 190, 235, 243, 228, 189, 133, 229, 171, 190, 83, 225, 33, 190, 218, 76, 95, 189, 247, 118, 247, 62, 114, 10, 155, 188, 255, 229, 20, 63, 118, 158, 85, 189};
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
                alignas(float) const unsigned char memory[] = {239, 99, 102, 62, 122, 29, 138, 60, 123, 246, 180, 61, 22, 223, 140, 189, 40, 238, 196, 188, 94, 245, 29, 61, 111, 237, 238, 191, 115, 152, 7, 62, 187, 252, 41, 190, 191, 235, 50, 191, 108, 49, 174, 61, 156, 156, 159, 60, 88, 225, 1, 61, 13, 4, 173, 62, 205, 198, 188, 189, 93, 22, 94, 61, 72, 204, 191, 190, 160, 157, 146, 62, 44, 234, 72, 62, 20, 61, 4, 188, 235, 62, 210, 190, 103, 21, 186, 61, 37, 8, 15, 62, 198, 250, 146, 60, 220, 141, 148, 190, 2, 61, 84, 62, 101, 65, 220, 190, 121, 74, 15, 62, 68, 157, 54, 62, 189, 91, 24, 190, 53, 235, 122, 62, 32, 212, 3, 189, 150, 128, 47, 62, 139, 29, 253, 189, 103, 114, 194, 189, 237, 125, 21, 189, 97, 32, 157, 61, 95, 149, 144, 62, 70, 126, 138, 61, 115, 248, 76, 188, 55, 39, 212, 61, 59, 0, 168, 188, 169, 70, 182, 61, 128, 123, 235, 189, 2, 207, 63, 61, 28, 160, 86, 62, 48, 210, 177, 190, 185, 177, 72, 62, 250, 159, 130, 189, 196, 118, 43, 60, 85, 126, 178, 189, 16, 117, 141, 61, 90, 175, 143, 190, 92, 151, 172, 61, 188, 24, 21, 62, 26, 30, 55, 188, 222, 48, 153, 188, 94, 173, 180, 190, 136, 188, 134, 61, 18, 54, 243, 189, 20, 122, 167, 61, 60, 170, 58, 61, 21, 105, 185, 60, 10, 109, 0, 190, 221, 31, 239, 190, 87, 186, 61, 61, 241, 234, 138, 61, 11, 96, 156, 62, 179, 8, 42, 189, 0, 71, 198, 188, 49, 235, 249, 189, 17, 166, 68, 62, 246, 62, 153, 190, 32, 236, 133, 190, 66, 221, 48, 190, 62, 45, 93, 62, 19, 183, 221, 62, 30, 175, 128, 191, 195, 151, 40, 63, 145, 149, 219, 191, 184, 94, 161, 191, 240, 159, 226, 61, 109, 187, 96, 62, 176, 186, 111, 190, 197, 143, 7, 63, 229, 204, 101, 62, 146, 217, 240, 189, 209, 60, 110, 189, 117, 111, 236, 190, 47, 127, 185, 62, 128, 92, 84, 190, 16, 235, 46, 62, 8, 81, 137, 62, 55, 58, 164, 62, 56, 237, 157, 58, 156, 179, 66, 190, 198, 208, 69, 190, 54, 93, 165, 190, 247, 39, 228, 189, 150, 70, 227, 189, 11, 134, 87, 191, 91, 16, 35, 62, 181, 149, 71, 61, 50, 182, 180, 189, 225, 17, 129, 61, 54, 75, 81, 60, 137, 68, 50, 61, 116, 17, 25, 191, 52, 137, 60, 61, 78, 244, 170, 190, 73, 24, 158, 189, 51, 108, 132, 61, 230, 138, 64, 190, 93, 117, 6, 189, 36, 250, 89, 62, 134, 224, 198, 189, 188, 251, 133, 190, 194, 131, 45, 62, 121, 37, 132, 190, 55, 26, 169, 189, 206, 131, 6, 188, 130, 33, 34, 190, 6, 158, 45, 62, 217, 203, 178, 61, 88, 20, 85, 191, 66, 169, 73, 191, 169, 177, 64, 191, 202, 87, 125, 190, 140, 58, 173, 189, 159, 143, 76, 62, 34, 255, 35, 189, 177, 244, 183, 189, 213, 7, 152, 61, 137, 103, 35, 62, 96, 225, 164, 61, 103, 145, 242, 61, 168, 73, 77, 190, 139, 85, 18, 190, 221, 201, 19, 60, 248, 163, 152, 187, 125, 78, 179, 61, 33, 90, 100, 62, 149, 240, 130, 62, 160, 231, 203, 61, 20, 14, 4, 62, 224, 137, 49, 61, 144, 169, 103, 62, 129, 24, 63, 190, 197, 16, 63, 190, 254, 201, 194, 190, 26, 228, 178, 61, 161, 101, 104, 190, 244, 23, 59, 190, 136, 131, 139, 60, 39, 243, 18, 62, 61, 41, 128, 189, 195, 127, 48, 62, 191, 46, 203, 60, 235, 131, 138, 61, 185, 51, 19, 62, 255, 241, 9, 63, 222, 60, 23, 190, 19, 134, 147, 62, 194, 80, 210, 190, 80, 115, 213, 190, 83, 236, 215, 189, 83, 76, 51, 189, 226, 235, 178, 61, 171, 212, 44, 62, 233, 15, 138, 62, 23, 128, 220, 61, 59, 23, 201, 189, 80, 46, 23, 191, 64, 97, 145, 62, 193, 10, 206, 190, 236, 76, 95, 62, 30, 24, 18, 190, 49, 33, 201, 189, 173, 128, 181, 189, 59, 84, 22, 62, 146, 237, 10, 191, 225, 31, 72, 62, 30, 66, 135, 62, 31, 84, 102, 62, 138, 149, 105, 62, 77, 126, 167, 61, 206, 144, 43, 191, 221, 226, 79, 62, 153, 118, 194, 189, 114, 65, 11, 189, 79, 243, 165, 61, 183, 254, 14, 190, 44, 147, 129, 62, 108, 76, 162, 60, 217, 217, 51, 61, 240, 174, 146, 190, 150, 117, 89, 191, 47, 219, 255, 59, 134, 12, 235, 61, 41, 55, 184, 61, 218, 66, 233, 61, 70, 50, 160, 62, 18, 246, 173, 62, 246, 244, 122, 190, 223, 215, 82, 190, 170, 194, 33, 62, 142, 15, 234, 190, 38, 226, 167, 62, 176, 228, 160, 190, 57, 138, 159, 189, 226, 63, 102, 61, 35, 35, 191, 61, 234, 252, 53, 191, 195, 15, 40, 189, 216, 158, 117, 62, 124, 231, 157, 62, 7, 125, 155, 62, 143, 1, 221, 62, 119, 144, 223, 61, 14, 5, 145, 62, 117, 206, 220, 190, 241, 149, 74, 191, 116, 150, 50, 190, 83, 222, 43, 190, 75, 116, 137, 62, 214, 140, 37, 188, 200, 219, 131, 62, 123, 70, 23, 190, 39, 142, 146, 190, 250, 3, 5, 190, 122, 48, 82, 60, 75, 32, 230, 190, 142, 114, 56, 189, 139, 158, 196, 62, 58, 206, 85, 189, 91, 248, 87, 190, 42, 85, 37, 191, 143, 188, 247, 61, 2, 141, 40, 190, 67, 197, 122, 62, 36, 164, 127, 61, 156, 8, 25, 190, 169, 215, 164, 190, 86, 241, 188, 61, 104, 109, 193, 190, 191, 197, 177, 190, 47, 180, 202, 62, 138, 243, 83, 62, 173, 210, 16, 62, 154, 109, 225, 62, 108, 104, 229, 190, 92, 13, 166, 189, 122, 102, 21, 190, 52, 24, 51, 189, 90, 188, 187, 189, 160, 39, 164, 190, 254, 205, 4, 190, 156, 62, 196, 189, 235, 124, 12, 62, 123, 134, 48, 189, 245, 188, 218, 188, 63, 33, 240, 189, 224, 90, 59, 60, 240, 198, 31, 190, 199, 57, 243, 189, 237, 69, 246, 61, 200, 67, 15, 62, 83, 53, 136, 189, 157, 246, 247, 61, 61, 76, 4, 190, 75, 226, 220, 61, 37, 9, 5, 189, 27, 244, 156, 59, 133, 36, 247, 189, 15, 228, 231, 189, 17, 206, 13, 62, 49, 65, 149, 189, 210, 29, 1, 61, 151, 51, 5, 190, 123, 25, 193, 187, 83, 105, 66, 189, 101, 235, 217, 189, 157, 24, 190, 189, 3, 86, 30, 190, 230, 191, 40, 190, 249, 100, 17, 61, 253, 247, 23, 62, 57, 72, 117, 189, 99, 58, 34, 190, 124, 103, 94, 189, 173, 146, 59, 190, 96, 12, 174, 190, 179, 29, 200, 190, 60, 1, 116, 62, 239, 153, 145, 190, 85, 88, 208, 189, 69, 188, 8, 190, 58, 112, 57, 190, 3, 145, 239, 61, 164, 118, 7, 61, 250, 138, 230, 62, 164, 27, 193, 191, 146, 188, 48, 191, 151, 97, 198, 191, 239, 211, 210, 191, 217, 167, 208, 61, 198, 82, 91, 62, 212, 59, 22, 62, 162, 140, 162, 191, 49, 2, 226, 62, 116, 170, 69, 190, 199, 116, 169, 58, 76, 40, 123, 61, 221, 150, 100, 190, 34, 156, 227, 61, 202, 232, 80, 62, 59, 140, 83, 61, 189, 28, 21, 60, 218, 68, 171, 190, 212, 97, 233, 189, 235, 155, 178, 62, 231, 10, 142, 188, 57, 56, 62, 62, 216, 88, 99, 190, 162, 67, 129, 60, 61, 159, 13, 61, 80, 147, 146, 62, 136, 165, 7, 190, 212, 169, 138, 62, 254, 218, 91, 62, 94, 156, 208, 60, 118, 198, 255, 189, 170, 83, 140, 189, 217, 80, 29, 190, 192, 2, 82, 190, 135, 59, 61, 62, 67, 243, 43, 61, 161, 208, 170, 59, 69, 52, 118, 189, 92, 71, 143, 62, 63, 40, 20, 63, 48, 221, 18, 62, 191, 172, 2, 62, 89, 221, 22, 62, 51, 140, 115, 62, 150, 11, 83, 190, 103, 207, 244, 61, 121, 105, 100, 61, 18, 27, 107, 190, 106, 157, 48, 188, 238, 87, 90, 190, 96, 175, 111, 188, 221, 224, 169, 189, 130, 200, 146, 188, 194, 253, 15, 61, 12, 223, 88, 62, 198, 210, 137, 62, 243, 42, 108, 62, 88, 18, 103, 62, 141, 85, 44, 62, 242, 145, 203, 61, 196, 43, 245, 189, 184, 5, 7, 189, 44, 113, 75, 62, 219, 182, 94, 62, 158, 51, 57, 62, 161, 14, 44, 62, 89, 168, 219, 61, 170, 165, 72, 189, 65, 9, 8, 62, 253, 128, 233, 61, 91, 139, 88, 62, 76, 59, 16, 190, 122, 24, 110, 190, 17, 228, 150, 189, 107, 250, 230, 189, 241, 145, 134, 189, 169, 33, 117, 190, 237, 162, 112, 62, 211, 60, 94, 190, 58, 195, 158, 188, 61, 74, 60, 62, 220, 187, 62, 188, 146, 156, 143, 61, 125, 64, 184, 61, 3, 9, 148, 61, 79, 75, 126, 62, 109, 95, 30, 62, 218, 39, 52, 190, 184, 185, 6, 61, 136, 131, 74, 190, 230, 57, 131, 62, 164, 101, 92, 190, 203, 10, 93, 191, 204, 156, 51, 191, 113, 180, 4, 190, 245, 67, 46, 62, 35, 65, 100, 189, 71, 14, 87, 62, 55, 132, 204, 189, 158, 237, 230, 61, 39, 26, 173, 61, 82, 166, 146, 62, 18, 71, 187, 61, 96, 177, 229, 62, 95, 117, 137, 61, 247, 3, 120, 190, 162, 60, 181, 190, 202, 157, 26, 191, 122, 133, 253, 61, 56, 255, 208, 61, 237, 229, 37, 191, 174, 116, 171, 189, 155, 107, 175, 190, 37, 109, 29, 189, 158, 74, 238, 60, 225, 28, 216, 188, 100, 62, 62, 190, 175, 220, 233, 58, 142, 18, 143, 61, 54, 32, 244, 60, 137, 180, 131, 190, 155, 8, 202, 189, 103, 173, 51, 189, 93, 183, 37, 61, 45, 3, 44, 190, 31, 110, 111, 190, 108, 3, 135, 190, 25, 204, 69, 190, 192, 118, 14, 61, 81, 195, 105, 189, 216, 126, 112, 190, 24, 168, 65, 61, 228, 147, 13, 188, 98, 91, 29, 61, 116, 141, 100, 61, 56, 169, 192, 189, 147, 199, 46, 190, 138, 131, 97, 189, 8, 211, 170, 61, 79, 148, 169, 61, 87, 85, 69, 61, 73, 191, 161, 189, 172, 99, 107, 61, 9, 178, 119, 189, 133, 249, 144, 61, 72, 125, 175, 189, 117, 57, 242, 60, 187, 115, 78, 62, 87, 232, 162, 190, 148, 24, 184, 62, 52, 73, 222, 190, 239, 40, 205, 190, 243, 185, 77, 190, 155, 19, 127, 189, 65, 196, 48, 61, 82, 152, 89, 62, 99, 10, 37, 63, 110, 144, 204, 62, 29, 160, 120, 190, 48, 248, 14, 191, 19, 63, 2, 62, 87, 196, 164, 190, 42, 117, 130, 61, 102, 225, 225, 188, 126, 45, 196, 61, 200, 188, 220, 59, 233, 58, 174, 62, 104, 143, 31, 191, 71, 88, 233, 189, 126, 135, 138, 62, 175, 228, 226, 62, 34, 215, 185, 62, 105, 116, 177, 62, 21, 239, 205, 190, 197, 26, 157, 61, 203, 164, 174, 59, 183, 159, 155, 190, 99, 90, 59, 189, 241, 2, 39, 190, 78, 144, 10, 63, 132, 202, 16, 62, 28, 97, 44, 61, 247, 47, 64, 190, 127, 153, 159, 190, 119, 207, 137, 62, 97, 52, 88, 60, 45, 109, 97, 188, 60, 8, 118, 189, 115, 76, 45, 61, 104, 96, 38, 61, 141, 131, 208, 189, 197, 56, 45, 62, 242, 83, 39, 62, 124, 167, 150, 190, 42, 86, 42, 189, 208, 253, 196, 61, 69, 124, 130, 61, 49, 148, 227, 61, 193, 232, 36, 62, 15, 188, 241, 190, 1, 242, 175, 61, 67, 181, 73, 62, 251, 207, 191, 189, 99, 118, 193, 61, 225, 53, 21, 61, 159, 101, 38, 61, 95, 76, 179, 188, 209, 37, 15, 62, 252, 70, 131, 189, 212, 125, 128, 188, 92, 27, 133, 189, 85, 187, 103, 190, 148, 146, 14, 62, 59, 152, 159, 187, 217, 151, 187, 62, 218, 67, 201, 61, 174, 11, 93, 62, 222, 250, 120, 62, 149, 142, 5, 62, 125, 194, 216, 190, 232, 234, 84, 191, 1, 141, 148, 190, 230, 214, 33, 62, 194, 146, 146, 62, 75, 248, 4, 61, 27, 159, 187, 62, 30, 60, 81, 62, 1, 66, 17, 62, 11, 152, 150, 187, 28, 124, 74, 62, 241, 19, 12, 60, 161, 101, 80, 61, 120, 87, 70, 61, 121, 101, 41, 188, 38, 148, 150, 190, 153, 37, 166, 190, 125, 55, 253, 189, 150, 140, 63, 62, 58, 42, 204, 189, 35, 168, 24, 62, 127, 39, 125, 60, 148, 118, 100, 62, 214, 218, 161, 187, 22, 162, 139, 189, 56, 209, 41, 189, 140, 184, 54, 187, 149, 223, 32, 190, 30, 110, 158, 61, 242, 174, 18, 190, 150, 142, 34, 61, 125, 65, 81, 190, 80, 134, 36, 190, 10, 232, 7, 60, 60, 82, 228, 61, 176, 250, 52, 190, 103, 210, 180, 189, 85, 100, 61, 190, 240, 28, 65, 189, 226, 253, 178, 189, 244, 107, 246, 189, 58, 18, 182, 188, 215, 68, 184, 189, 238, 206, 12, 61, 56, 160, 22, 190, 121, 77, 11, 62, 11, 205, 138, 61, 119, 190, 169, 61, 26, 226, 254, 189, 34, 230, 181, 189, 9, 183, 55, 190, 89, 205, 216, 60, 228, 131, 207, 59, 40, 223, 225, 61, 67, 117, 48, 61, 62, 249, 229, 189, 209, 107, 22, 190, 110, 253, 39, 61, 80, 252, 45, 61, 36, 147, 182, 188, 98, 179, 210, 189, 103, 40, 108, 190, 101, 11, 213, 61, 130, 244, 18, 190, 160, 49, 175, 61, 209, 75, 130, 61, 74, 40, 13, 62, 60, 244, 64, 61, 9, 169, 34, 190, 58, 178, 72, 189, 138, 54, 245, 61, 247, 130, 72, 187, 154, 199, 165, 188, 163, 169, 101, 189, 57, 18, 209, 189, 120, 71, 221, 189, 228, 11, 211, 189, 77, 221, 31, 190, 39, 90, 118, 60, 106, 138, 60, 190, 253, 145, 197, 61, 227, 26, 175, 189, 67, 236, 117, 61, 216, 69, 19, 190, 180, 43, 140, 60, 120, 125, 174, 61, 160, 159, 98, 190, 171, 96, 178, 61, 228, 100, 62, 62, 117, 27, 136, 190, 74, 214, 0, 62, 155, 181, 62, 191, 190, 24, 179, 187, 215, 81, 60, 61, 122, 231, 0, 191, 96, 124, 130, 191, 117, 132, 190, 189, 211, 39, 103, 62, 59, 111, 167, 189, 195, 200, 143, 62, 228, 42, 137, 61, 89, 42, 231, 60, 240, 90, 7, 191, 176, 68, 210, 190, 150, 134, 130, 190, 93, 233, 114, 62, 230, 108, 14, 62, 248, 57, 76, 186, 245, 23, 243, 189, 46, 106, 132, 62, 63, 94, 23, 189, 159, 230, 14, 62, 67, 114, 16, 189, 138, 202, 7, 62, 106, 191, 178, 190, 217, 58, 1, 190, 127, 0, 124, 62, 254, 212, 154, 62, 194, 60, 205, 61, 19, 189, 84, 191, 101, 34, 2, 62, 109, 127, 63, 60, 227, 170, 179, 190, 56, 135, 54, 190, 48, 146, 211, 61, 168, 39, 42, 61, 65, 119, 147, 62, 65, 96, 153, 190, 199, 125, 14, 191, 209, 80, 28, 191, 28, 51, 45, 191, 84, 177, 41, 189, 44, 153, 103, 62, 117, 74, 0, 191, 71, 108, 192, 61, 87, 116, 155, 189, 77, 88, 36, 189, 191, 57, 93, 190, 234, 119, 137, 189, 133, 210, 205, 189, 160, 169, 169, 61, 152, 196, 78, 191, 5, 212, 80, 190, 102, 121, 18, 191, 101, 140, 84, 191, 100, 69, 18, 190, 231, 182, 206, 62, 11, 95, 251, 190, 24, 17, 198, 190, 94, 195, 19, 190, 6, 20, 99, 190, 159, 159, 103, 189, 99, 218, 189, 189, 251, 136, 77, 62, 177, 168, 19, 62, 136, 115, 49, 61, 112, 231, 48, 190, 162, 115, 48, 189, 120, 233, 24, 190, 42, 64, 24, 190, 103, 222, 138, 62, 97, 167, 136, 62, 102, 177, 205, 61, 160, 9, 202, 188, 75, 158, 202, 62, 252, 46, 46, 190, 254, 28, 85, 190, 159, 95, 144, 188, 253, 216, 224, 189, 246, 123, 186, 61, 41, 64, 103, 189, 26, 254, 115, 62, 65, 214, 108, 190, 107, 50, 207, 61, 182, 249, 11, 62, 37, 248, 220, 62, 14, 216, 65, 62, 10, 117, 5, 190, 28, 89, 1, 191, 123, 236, 193, 61, 162, 233, 150, 190, 175, 49, 165, 60, 70, 84, 76, 190, 86, 172, 204, 61, 202, 79, 125, 60, 201, 149, 38, 188, 62, 57, 245, 189, 65, 63, 72, 188, 128, 188, 38, 187, 223, 0, 162, 60, 3, 235, 1, 61, 215, 246, 142, 189, 46, 163, 27, 190, 64, 75, 137, 189, 13, 59, 135, 61, 183, 232, 225, 188, 241, 189, 207, 60, 152, 159, 50, 190, 44, 34, 198, 189, 178, 236, 136, 58, 66, 107, 246, 189, 129, 167, 158, 61, 122, 175, 8, 190, 227, 7, 9, 190, 223, 179, 20, 190, 9, 47, 184, 189, 69, 107, 145, 189, 106, 72, 20, 190, 224, 43, 168, 61, 41, 165, 42, 190, 127, 217, 20, 61, 168, 42, 46, 190, 187, 238, 7, 190, 112, 46, 26, 190, 17, 13, 18, 62, 64, 212, 102, 61, 214, 161, 77, 62, 89, 250, 214, 190, 17, 247, 22, 62, 182, 42, 44, 62, 73, 113, 15, 190, 187, 62, 0, 190, 24, 121, 65, 191, 50, 49, 230, 61, 40, 21, 20, 190, 65, 210, 105, 191, 204, 235, 130, 62, 71, 82, 201, 61, 169, 50, 88, 61, 28, 62, 204, 189, 213, 116, 183, 61, 180, 98, 226, 190, 55, 55, 191, 190, 155, 23, 32, 190, 160, 72, 148, 62, 39, 126, 136, 190, 224, 21, 50, 60, 215, 192, 236, 190, 202, 249, 202, 60, 222, 20, 48, 190, 138, 149, 10, 191, 216, 233, 118, 62, 159, 170, 55, 191, 34, 56, 21, 62, 34, 128, 121, 188, 198, 217, 196, 61, 204, 50, 4, 62, 69, 176, 42, 190, 114, 105, 69, 61, 202, 19, 4, 63, 224, 152, 194, 189, 166, 238, 194, 59, 52, 52, 69, 62, 182, 22, 226, 187, 211, 75, 136, 62, 109, 171, 165, 61, 171, 31, 225, 189, 242, 52, 170, 62, 124, 107, 188, 61, 86, 251, 166, 61, 217, 59, 13, 191, 94, 9, 182, 61, 115, 82, 22, 190, 225, 75, 113, 62, 118, 71, 84, 62, 63, 144, 35, 190, 17, 205, 34, 189, 235, 66, 42, 62, 128, 135, 25, 62, 179, 221, 224, 62, 113, 49, 180, 62, 208, 42, 177, 61, 56, 125, 73, 189, 213, 193, 220, 61, 137, 203, 218, 61, 104, 202, 244, 60, 180, 60, 199, 189, 88, 16, 176, 61, 20, 38, 114, 61, 44, 203, 33, 62, 101, 22, 140, 61, 91, 212, 49, 62, 67, 172, 130, 190, 90, 23, 211, 62, 36, 126, 133, 62, 8, 135, 230, 60, 135, 149, 169, 62, 4, 4, 182, 61, 50, 241, 166, 189, 132, 8, 39, 191, 111, 73, 167, 190, 54, 69, 132, 62, 16, 247, 144, 188, 7, 254, 5, 62, 161, 163, 188, 62, 1, 180, 172, 189, 237, 127, 116, 61, 220, 124, 29, 188, 144, 99, 131, 62, 118, 87, 192, 190, 238, 164, 211, 62, 198, 104, 158, 191, 126, 62, 115, 190, 35, 149, 238, 189, 189, 227, 187, 190, 79, 65, 1, 190, 173, 85, 165, 62, 86, 225, 151, 190, 198, 6, 134, 62, 52, 121, 230, 61, 76, 166, 87, 61, 115, 124, 3, 62, 172, 63, 224, 61, 214, 85, 40, 62, 61, 39, 92, 188, 169, 254, 170, 61, 194, 7, 185, 60, 49, 43, 216, 189, 237, 205, 36, 62, 205, 57, 35, 190, 190, 86, 177, 189, 184, 100, 231, 189, 223, 104, 32, 60, 65, 84, 24, 62, 213, 39, 16, 190, 108, 248, 182, 61, 96, 166, 52, 60, 67, 217, 43, 61, 71, 48, 230, 189, 119, 132, 13, 61, 181, 50, 10, 190, 36, 110, 52, 189, 134, 3, 162, 60, 4, 79, 80, 61, 6, 79, 34, 190, 149, 142, 34, 61, 144, 76, 15, 190, 61, 208, 200, 189, 174, 18, 157, 189, 29, 215, 47, 190, 172, 74, 209, 188, 168, 182, 52, 190, 148, 32, 219, 189, 65, 111, 221, 189, 107, 249, 10, 190, 76, 67, 145, 61, 119, 76, 62, 189, 38, 46, 11, 190, 197, 220, 57, 191, 179, 175, 10, 62, 234, 167, 111, 62, 94, 193, 120, 190, 7, 65, 117, 190, 22, 255, 241, 190, 134, 135, 156, 189, 130, 201, 29, 191, 133, 172, 186, 60, 100, 43, 48, 62, 240, 192, 7, 191, 227, 251, 167, 61, 241, 141, 219, 190, 16, 232, 164, 188, 182, 67, 108, 190, 199, 65, 130, 62, 127, 109, 131, 191, 79, 205, 27, 190, 70, 21, 44, 61, 166, 64, 137, 190, 56, 160, 79, 191, 220, 244, 249, 60, 214, 228, 189, 62, 68, 93, 7, 190, 179, 35, 106, 191, 190, 18, 161, 191, 116, 104, 11, 191, 183, 19, 85, 190, 56, 4, 190, 60, 130, 122, 255, 189, 234, 11, 197, 188, 98, 237, 31, 190, 75, 90, 245, 189, 167, 105, 52, 188, 138, 7, 38, 190, 229, 50, 9, 62, 42, 252, 151, 61, 148, 99, 132, 189, 171, 127, 97, 60, 96, 35, 198, 61, 166, 217, 25, 61, 65, 233, 32, 190, 171, 56, 158, 187, 126, 13, 40, 62, 115, 1, 36, 190, 35, 113, 238, 61, 209, 67, 9, 190, 40, 193, 201, 189, 236, 8, 136, 188, 29, 184, 15, 190, 92, 181, 5, 61, 221, 215, 148, 189, 167, 176, 30, 61, 14, 185, 198, 189, 192, 150, 233, 61, 105, 111, 24, 188, 239, 12, 205, 189, 96, 8, 34, 62, 207, 158, 232, 60, 139, 42, 56, 189, 19, 127, 204, 62, 216, 178, 129, 190, 154, 118, 73, 62, 145, 200, 215, 190, 141, 188, 156, 191, 203, 175, 234, 61, 77, 243, 204, 61, 77, 255, 69, 190, 151, 179, 140, 62, 14, 61, 139, 62, 58, 3, 137, 62, 39, 191, 226, 190, 97, 70, 46, 190, 250, 115, 201, 62, 101, 71, 2, 191, 148, 141, 115, 62, 154, 116, 15, 190, 144, 168, 133, 62, 147, 210, 134, 189, 37, 241, 230, 61, 108, 248, 139, 191, 10, 21, 150, 189, 128, 31, 204, 62, 173, 141, 169, 62, 227, 147, 119, 62, 2, 67, 91, 62, 196, 119, 182, 61, 45, 168, 127, 62, 96, 39, 176, 190, 36, 33, 41, 191, 12, 87, 127, 188, 124, 213, 0, 190, 128, 224, 62, 189, 76, 34, 112, 190, 225, 177, 22, 61, 103, 42, 47, 190, 138, 154, 140, 191, 217, 85, 146, 62, 227, 18, 246, 62, 238, 105, 55, 188, 142, 158, 177, 189, 76, 29, 211, 190, 137, 235, 16, 62, 211, 238, 64, 191, 254, 128, 232, 61, 10, 130, 4, 62, 177, 193, 13, 191, 46, 130, 81, 62, 68, 124, 172, 190, 185, 134, 85, 62, 229, 229, 113, 188, 210, 205, 99, 62, 231, 36, 179, 191, 89, 82, 34, 62, 242, 50, 129, 62, 205, 178, 200, 189, 222, 132, 201, 190, 159, 23, 35, 190, 48, 255, 161, 62, 129, 189, 1, 189, 36, 43, 60, 191, 238, 229, 30, 191, 13, 248, 41, 191, 2, 234, 28, 190, 193, 114, 170, 188, 205, 152, 160, 61, 79, 143, 18, 190, 38, 63, 205, 61, 43, 225, 80, 60, 36, 44, 168, 189, 233, 132, 209, 60, 105, 128, 49, 190, 138, 152, 225, 189, 211, 63, 149, 61, 138, 125, 197, 189, 218, 37, 60, 190, 174, 95, 138, 186, 92, 246, 29, 190, 103, 214, 18, 189, 209, 184, 210, 189, 21, 39, 189, 61, 52, 244, 143, 189, 6, 50, 54, 190, 226, 74, 73, 61, 114, 198, 138, 189, 86, 92, 141, 189, 116, 108, 160, 189, 188, 61, 173, 61, 21, 117, 246, 61, 219, 140, 104, 59, 48, 29, 132, 61, 78, 230, 7, 187, 235, 75, 139, 61, 161, 192, 35, 61, 245, 239, 128, 189, 145, 240, 81, 61};
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
                alignas(float) const unsigned char memory[] = {117, 137, 174, 62, 53, 31, 30, 189, 177, 98, 103, 62, 9, 218, 110, 189, 1, 120, 143, 62, 52, 24, 40, 189, 229, 231, 14, 62, 62, 249, 62, 62, 155, 92, 2, 190, 44, 253, 165, 188, 47, 166, 84, 190, 245, 131, 127, 62, 148, 241, 61, 60, 31, 216, 192, 189, 33, 1, 173, 189, 225, 175, 152, 62, 103, 95, 150, 62, 210, 57, 213, 61, 68, 243, 135, 187, 223, 179, 7, 188, 159, 26, 203, 61, 31, 171, 169, 59, 106, 185, 50, 190, 145, 186, 6, 62, 222, 162, 72, 190, 52, 218, 147, 62, 159, 130, 181, 189, 38, 179, 160, 188, 198, 235, 52, 190, 156, 132, 25, 61, 251, 3, 214, 61, 238, 164, 119, 189};
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
                alignas(float) const unsigned char memory[] = {0, 92, 1, 63, 72, 80, 165, 60, 34, 123, 113, 191, 245, 126, 50, 191, 176, 171, 112, 62, 231, 41, 203, 190, 236, 184, 166, 190, 66, 54, 46, 63, 150, 5, 28, 62, 243, 246, 178, 191, 83, 1, 142, 62, 136, 99, 82, 62, 125, 251, 139, 62, 19, 5, 99, 61, 161, 41, 29, 191, 37, 140, 104, 61, 68, 230, 204, 62, 244, 162, 192, 61, 105, 214, 145, 61, 104, 204, 179, 190, 6, 230, 80, 63, 70, 27, 132, 62, 78, 149, 6, 190, 213, 141, 48, 63, 34, 45, 154, 190, 143, 21, 11, 63, 250, 123, 99, 61, 90, 252, 59, 191, 130, 166, 81, 188, 3, 58, 20, 191, 174, 128, 97, 191, 112, 104, 179, 188, 47, 29, 248, 190, 125, 154, 172, 189, 34, 24, 75, 189, 167, 138, 79, 61, 214, 0, 21, 190, 84, 64, 125, 190, 8, 171, 251, 189, 95, 40, 215, 62, 174, 189, 43, 188, 159, 115, 126, 62, 154, 243, 16, 62, 128, 94, 60, 190, 109, 143, 27, 62, 242, 161, 54, 61, 206, 131, 251, 61, 153, 149, 6, 190, 224, 187, 5, 62, 227, 62, 121, 60, 15, 242, 77, 189, 202, 138, 207, 189, 188, 230, 15, 62, 82, 108, 133, 189, 10, 104, 129, 187, 250, 17, 2, 63, 31, 255, 231, 188, 109, 85, 83, 62, 92, 1, 204, 188, 182, 170, 107, 62, 165, 130, 143, 189, 41, 233, 56, 190, 95, 178, 19, 60, 137, 49, 14, 187};
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
                alignas(float) const unsigned char memory[] = {236, 238, 50, 188, 62, 204, 240, 190};
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
    alignas(float) const unsigned char memory[] = {75, 169, 249, 190, 168, 33, 129, 192, 99, 223, 162, 62};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {76, 9, 39, 192, 73, 7, 86, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0020/steps/000000000012000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}