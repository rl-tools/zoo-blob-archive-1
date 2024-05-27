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
                alignas(float) const unsigned char memory[] = {72, 215, 49, 63, 20, 194, 80, 189, 103, 99, 167, 62, 186, 162, 180, 62, 170, 159, 68, 191, 152, 215, 56, 190, 142, 178, 164, 190, 124, 49, 207, 191, 16, 39, 202, 190, 150, 241, 244, 190, 33, 135, 201, 62, 7, 46, 96, 191, 52, 30, 203, 61, 244, 198, 105, 62, 71, 15, 128, 63, 192, 192, 10, 191, 93, 150, 146, 63, 34, 191, 83, 62, 78, 56, 251, 62, 109, 70, 69, 191, 81, 57, 3, 191, 239, 79, 249, 190, 224, 249, 129, 191, 31, 43, 178, 62, 110, 148, 43, 63, 196, 91, 166, 190, 161, 232, 136, 190, 244, 189, 3, 190, 32, 216, 130, 190, 13, 98, 208, 62, 51, 170, 119, 60, 98, 104, 105, 191, 20, 146, 70, 190, 108, 230, 12, 189, 86, 203, 24, 191, 48, 104, 154, 60, 29, 76, 63, 63, 61, 109, 63, 191, 126, 166, 118, 188, 152, 114, 39, 63, 209, 202, 127, 63, 120, 72, 159, 62, 71, 64, 119, 61, 225, 139, 51, 63, 159, 226, 222, 190, 201, 80, 86, 62, 22, 99, 57, 63, 39, 66, 193, 190, 160, 233, 7, 63, 141, 34, 152, 61, 81, 197, 29, 191, 35, 49, 38, 62, 26, 112, 83, 62, 132, 24, 234, 190, 92, 1, 143, 190, 252, 212, 76, 191, 103, 1, 39, 190, 250, 105, 223, 188, 184, 132, 174, 62, 80, 169, 52, 61, 190, 53, 222, 190, 218, 222, 64, 191, 255, 236, 35, 190, 139, 44, 118, 191, 198, 35, 36, 190, 31, 80, 173, 188, 145, 238, 55, 191, 210, 203, 147, 62, 184, 246, 153, 189, 89, 60, 44, 62, 175, 173, 149, 62, 198, 178, 218, 190, 235, 213, 57, 63, 34, 254, 130, 63, 26, 94, 239, 62, 134, 162, 65, 62, 168, 13, 168, 63, 110, 66, 9, 63, 3, 210, 244, 62, 114, 30, 227, 189, 63, 25, 14, 63, 228, 114, 143, 61, 56, 136, 35, 191, 180, 140, 232, 62, 49, 10, 97, 190, 57, 30, 183, 63, 73, 38, 157, 62, 102, 93, 128, 63, 27, 231, 126, 62, 183, 53, 85, 189, 155, 176, 167, 190, 138, 90, 128, 190, 102, 34, 233, 62, 244, 253, 174, 190, 225, 208, 117, 191, 32, 58, 211, 190};
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
                alignas(float) const unsigned char memory[] = {112, 198, 83, 191, 243, 197, 52, 189, 141, 246, 128, 189, 217, 185, 229, 61, 163, 188, 134, 62, 67, 154, 1, 191, 73, 146, 136, 190, 154, 5, 200, 190, 159, 82, 68, 191, 206, 81, 114, 190, 240, 214, 239, 62, 99, 18, 40, 63, 47, 125, 60, 189, 147, 173, 171, 190, 93, 64, 242, 60, 229, 41, 60, 62, 247, 88, 249, 61, 205, 8, 198, 189, 66, 99, 206, 62, 69, 143, 6, 63, 108, 37, 232, 62, 24, 68, 91, 188, 43, 6, 52, 63, 8, 221, 108, 190, 66, 33, 245, 61, 178, 71, 53, 62, 242, 171, 144, 62, 129, 40, 253, 189, 219, 66, 3, 190, 82, 27, 121, 189, 115, 255, 171, 190, 67, 29, 15, 190};
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
                alignas(float) const unsigned char memory[] = {253, 140, 217, 189, 15, 21, 32, 62, 198, 253, 40, 190, 205, 189, 95, 59, 26, 98, 228, 60, 58, 44, 171, 189, 153, 13, 47, 59, 93, 48, 246, 188, 96, 225, 7, 190, 233, 144, 207, 189, 21, 239, 128, 189, 108, 94, 205, 187, 240, 31, 42, 190, 129, 197, 53, 188, 190, 51, 4, 190, 27, 24, 98, 60, 233, 57, 169, 188, 159, 94, 36, 61, 184, 52, 162, 189, 25, 128, 12, 189, 85, 112, 37, 60, 198, 168, 177, 189, 140, 67, 1, 61, 243, 39, 206, 189, 16, 147, 180, 61, 59, 0, 63, 189, 225, 28, 64, 190, 182, 22, 208, 189, 209, 191, 17, 62, 96, 90, 134, 189, 127, 133, 199, 188, 189, 219, 33, 190, 51, 2, 60, 61, 243, 12, 17, 191, 225, 232, 9, 190, 239, 17, 159, 61, 197, 84, 234, 187, 164, 171, 37, 190, 42, 92, 195, 190, 121, 248, 15, 190, 109, 138, 138, 190, 117, 44, 230, 190, 11, 46, 202, 189, 38, 126, 32, 190, 233, 210, 13, 61, 85, 192, 189, 61, 241, 153, 215, 62, 158, 231, 112, 62, 203, 23, 198, 60, 27, 254, 79, 190, 81, 108, 14, 191, 71, 192, 90, 60, 249, 138, 207, 189, 148, 127, 62, 190, 241, 200, 35, 62, 214, 196, 222, 190, 163, 131, 254, 61, 23, 65, 148, 61, 170, 91, 63, 189, 109, 161, 139, 190, 79, 236, 176, 188, 117, 221, 202, 62, 174, 207, 134, 190, 248, 152, 2, 61, 40, 113, 198, 190, 241, 239, 196, 62, 176, 108, 140, 191, 27, 134, 223, 189, 57, 117, 161, 60, 102, 70, 132, 62, 142, 76, 146, 62, 182, 133, 198, 189, 170, 184, 28, 63, 159, 38, 197, 62, 36, 103, 209, 189, 221, 229, 51, 62, 85, 157, 6, 63, 15, 240, 41, 191, 66, 137, 55, 189, 19, 196, 247, 190, 154, 230, 252, 188, 185, 187, 148, 62, 145, 96, 139, 62, 237, 64, 77, 189, 167, 201, 132, 61, 217, 218, 163, 189, 218, 19, 79, 62, 206, 169, 247, 62, 154, 223, 142, 190, 137, 73, 30, 62, 42, 75, 156, 189, 68, 72, 201, 61, 136, 132, 159, 62, 92, 247, 56, 190, 195, 149, 238, 189, 166, 187, 160, 191, 145, 22, 71, 189, 115, 5, 82, 62, 148, 72, 128, 190, 225, 191, 244, 189, 105, 158, 150, 188, 191, 155, 212, 61, 81, 238, 11, 190, 5, 77, 124, 190, 122, 67, 179, 189, 49, 98, 141, 62, 160, 111, 189, 60, 2, 131, 113, 62, 12, 235, 189, 62, 202, 168, 219, 190, 166, 241, 58, 190, 94, 210, 156, 61, 72, 71, 47, 62, 151, 69, 36, 61, 143, 142, 177, 62, 164, 227, 94, 62, 46, 107, 61, 60, 77, 159, 72, 62, 217, 135, 103, 188, 54, 114, 161, 190, 212, 228, 107, 61, 173, 204, 221, 61, 255, 180, 140, 189, 39, 186, 58, 189, 178, 200, 22, 62, 144, 89, 19, 62, 134, 116, 241, 189, 189, 101, 57, 189, 165, 199, 52, 189, 164, 130, 121, 190, 10, 80, 196, 60, 141, 155, 155, 62, 178, 74, 10, 191, 1, 59, 135, 191, 163, 107, 112, 190, 65, 230, 133, 63, 73, 109, 129, 62, 85, 75, 157, 189, 58, 31, 121, 61, 28, 71, 208, 60, 54, 200, 195, 62, 41, 159, 14, 62, 164, 172, 56, 62, 136, 60, 247, 61, 96, 89, 8, 62, 93, 158, 192, 61, 37, 78, 150, 189, 104, 119, 47, 61, 132, 20, 145, 189, 175, 34, 69, 190, 167, 63, 187, 61, 167, 18, 14, 62, 155, 41, 41, 62, 235, 178, 121, 190, 182, 123, 138, 189, 137, 25, 49, 189, 245, 111, 153, 190, 57, 196, 253, 61, 4, 205, 28, 189, 107, 7, 169, 62, 66, 138, 195, 188, 171, 236, 133, 190, 237, 98, 239, 189, 253, 215, 41, 189, 5, 176, 167, 61, 211, 231, 169, 61, 76, 133, 205, 61, 58, 22, 81, 190, 230, 61, 137, 188, 161, 40, 172, 190, 169, 219, 113, 190, 228, 164, 135, 189, 202, 62, 130, 190, 205, 12, 154, 190, 195, 134, 233, 189, 241, 63, 107, 189, 60, 240, 157, 61, 236, 150, 130, 61, 18, 136, 200, 189, 39, 174, 161, 189, 48, 49, 93, 189, 230, 221, 140, 61, 18, 48, 7, 62, 180, 111, 160, 189, 209, 236, 232, 190, 112, 12, 218, 188, 223, 175, 207, 190, 196, 75, 91, 190, 122, 115, 208, 61, 170, 210, 62, 190, 244, 121, 167, 190, 11, 80, 164, 190, 9, 24, 38, 190, 88, 23, 10, 189, 3, 234, 121, 191, 104, 101, 164, 188, 249, 152, 16, 62, 218, 149, 191, 62, 125, 88, 105, 62, 31, 54, 128, 190, 150, 132, 159, 189, 11, 211, 172, 62, 194, 148, 174, 58, 144, 151, 220, 61, 72, 173, 66, 62, 159, 185, 16, 190, 186, 62, 13, 191, 50, 129, 141, 190, 244, 132, 119, 62, 54, 132, 66, 189, 92, 209, 156, 189, 184, 147, 126, 190, 231, 89, 166, 61, 200, 248, 150, 61, 205, 55, 92, 62, 115, 226, 244, 189, 34, 237, 100, 189, 167, 15, 178, 61, 4, 92, 7, 187, 186, 99, 53, 62, 183, 44, 231, 61, 206, 78, 65, 190, 198, 213, 75, 189, 28, 28, 141, 191, 10, 163, 163, 59, 11, 121, 166, 190, 130, 64, 79, 62, 138, 66, 108, 188, 99, 245, 129, 190, 33, 21, 33, 191, 94, 49, 215, 60, 43, 175, 184, 188, 209, 135, 175, 189, 22, 212, 68, 191, 203, 95, 79, 62, 202, 21, 131, 189, 78, 23, 99, 190, 179, 180, 40, 62, 230, 31, 70, 62, 163, 153, 189, 62, 152, 48, 246, 61, 231, 91, 48, 188, 206, 85, 28, 62, 208, 219, 77, 62, 228, 235, 144, 59, 246, 3, 91, 62, 65, 27, 84, 62, 220, 255, 157, 190, 244, 51, 169, 189, 1, 153, 136, 191, 42, 203, 84, 190, 204, 203, 39, 191, 122, 53, 221, 190, 234, 184, 33, 190, 191, 240, 203, 62, 50, 231, 170, 61, 97, 191, 63, 188, 188, 159, 35, 191, 49, 230, 3, 61, 26, 233, 157, 62, 38, 219, 143, 191, 81, 57, 65, 191, 142, 149, 172, 190, 149, 235, 40, 62, 194, 14, 3, 191, 73, 21, 159, 190, 254, 158, 45, 61, 92, 187, 189, 62, 228, 65, 71, 62, 198, 133, 38, 190, 117, 125, 103, 188, 12, 153, 132, 189, 90, 122, 4, 190, 113, 55, 155, 189, 50, 77, 13, 62, 80, 87, 182, 61, 4, 92, 179, 61, 3, 40, 254, 62, 49, 146, 159, 62, 78, 101, 169, 190, 59, 45, 192, 190, 224, 165, 251, 191, 89, 215, 212, 188, 212, 31, 217, 190, 39, 110, 126, 191, 133, 220, 167, 62, 38, 199, 172, 62, 141, 168, 139, 62, 94, 102, 255, 188, 19, 145, 224, 189, 61, 62, 3, 62, 111, 171, 251, 188, 116, 208, 63, 60, 159, 114, 221, 188, 15, 17, 34, 190, 128, 60, 189, 61, 136, 205, 168, 189, 219, 32, 19, 190, 75, 249, 251, 189, 9, 127, 91, 60, 123, 241, 17, 61, 58, 177, 163, 60, 88, 235, 167, 189, 41, 219, 190, 61, 148, 164, 103, 188, 146, 62, 144, 61, 229, 136, 21, 190, 144, 29, 1, 62, 140, 111, 101, 60, 104, 62, 129, 61, 38, 47, 221, 189, 221, 8, 52, 61, 27, 200, 30, 190, 224, 50, 254, 189, 120, 59, 0, 190, 231, 117, 249, 61, 157, 240, 166, 61, 146, 241, 69, 61, 16, 209, 84, 61, 93, 171, 64, 190, 42, 121, 51, 190, 146, 130, 4, 191, 94, 169, 121, 62, 242, 56, 77, 62, 156, 123, 153, 190, 100, 57, 4, 191, 174, 11, 139, 190, 28, 139, 86, 63, 221, 252, 246, 61, 17, 95, 143, 190, 11, 194, 102, 61, 36, 6, 154, 190, 124, 241, 172, 190, 143, 173, 199, 60, 182, 204, 116, 62, 114, 197, 161, 61, 110, 243, 214, 189, 119, 186, 85, 189, 64, 210, 249, 189, 29, 120, 63, 60, 125, 230, 161, 61, 32, 192, 30, 189, 192, 72, 36, 62, 88, 56, 148, 61, 204, 83, 50, 190, 252, 224, 138, 61, 168, 115, 128, 59, 66, 213, 60, 190, 191, 59, 206, 190, 98, 68, 37, 191, 188, 192, 201, 190, 16, 59, 53, 62, 245, 188, 111, 62, 32, 236, 164, 190, 229, 111, 150, 190, 19, 185, 200, 61, 235, 49, 146, 61, 253, 11, 16, 190, 67, 107, 249, 190, 152, 129, 159, 189, 39, 142, 135, 190, 27, 182, 73, 190, 166, 89, 222, 190, 221, 228, 50, 62, 248, 220, 86, 62, 195, 59, 71, 62, 68, 110, 177, 62, 12, 108, 86, 62, 106, 253, 131, 61, 116, 123, 219, 61, 72, 214, 158, 191, 125, 207, 248, 61, 1, 227, 150, 191, 124, 93, 197, 190, 126, 226, 178, 189, 37, 145, 137, 61, 244, 5, 145, 62, 60, 177, 50, 189, 183, 252, 225, 60, 173, 163, 25, 62, 205, 68, 140, 190, 232, 145, 233, 62, 82, 45, 156, 61, 27, 216, 33, 190, 95, 207, 41, 62, 220, 200, 58, 61, 29, 245, 154, 189, 141, 172, 107, 61, 46, 109, 252, 189, 17, 165, 162, 189, 119, 196, 182, 189, 209, 87, 250, 189, 40, 80, 68, 61, 138, 151, 6, 62, 223, 219, 127, 61, 0, 56, 175, 189, 210, 219, 44, 190, 171, 208, 244, 61, 187, 167, 198, 189, 238, 41, 34, 190, 101, 246, 108, 189, 178, 180, 11, 62, 133, 177, 218, 61, 54, 44, 153, 61, 171, 101, 8, 190, 34, 189, 2, 59, 127, 136, 130, 189, 179, 108, 252, 60, 134, 243, 52, 188, 226, 225, 119, 188, 5, 71, 158, 189, 58, 253, 54, 61, 227, 202, 190, 189, 120, 44, 10, 62, 251, 204, 198, 189, 209, 65, 47, 190, 118, 104, 144, 62, 11, 229, 241, 190, 106, 175, 51, 190, 85, 149, 40, 62, 219, 149, 50, 190, 235, 189, 85, 190, 134, 77, 190, 190, 123, 68, 161, 61, 120, 68, 246, 190, 90, 220, 36, 189, 75, 163, 173, 188, 149, 60, 6, 62, 3, 192, 180, 62, 133, 83, 167, 188, 11, 217, 224, 62, 74, 16, 122, 62, 198, 105, 15, 190, 220, 68, 43, 188, 32, 25, 225, 190, 2, 164, 11, 62, 172, 93, 208, 190, 187, 83, 2, 191, 150, 214, 104, 58, 191, 170, 179, 190, 179, 225, 136, 62, 226, 128, 126, 188, 10, 248, 136, 62, 130, 22, 174, 61, 41, 61, 49, 190, 163, 142, 146, 62, 60, 217, 179, 187, 65, 78, 170, 61, 137, 215, 91, 61, 8, 232, 83, 191, 168, 208, 22, 189, 248, 121, 83, 62, 106, 167, 140, 190, 8, 21, 4, 191, 110, 140, 1, 191, 181, 248, 99, 62, 70, 101, 48, 191, 9, 239, 7, 191, 181, 240, 226, 61, 187, 198, 93, 59, 251, 133, 140, 188, 7, 196, 26, 188, 112, 33, 163, 62, 49, 206, 236, 62, 173, 211, 187, 189, 157, 72, 187, 190, 239, 77, 219, 188, 8, 42, 141, 61, 231, 114, 248, 61, 113, 245, 138, 189, 164, 139, 160, 61, 7, 67, 200, 190, 148, 209, 42, 62, 209, 31, 116, 190, 251, 180, 44, 62, 53, 200, 5, 190, 23, 162, 254, 190, 129, 197, 178, 62, 243, 114, 178, 62, 31, 183, 39, 61, 75, 249, 157, 190, 24, 65, 214, 62, 40, 202, 16, 191, 39, 186, 239, 189, 101, 172, 115, 61, 226, 158, 178, 62, 75, 46, 122, 62, 206, 82, 161, 190, 250, 137, 144, 62, 74, 165, 14, 63, 21, 157, 112, 61, 123, 249, 7, 62, 49, 241, 8, 63, 180, 211, 3, 191, 135, 207, 33, 190, 44, 143, 157, 190, 190, 26, 65, 62, 14, 22, 99, 62, 147, 17, 34, 62, 204, 43, 57, 62, 209, 124, 8, 61, 59, 97, 201, 189, 189, 148, 133, 189, 62, 57, 99, 62, 43, 42, 183, 190, 14, 246, 52, 61, 23, 103, 179, 190, 216, 3, 223, 62, 163, 196, 227, 62, 1, 41, 142, 62, 233, 205, 75, 190, 18, 93, 192, 190, 203, 76, 61, 60, 148, 209, 73, 62, 189, 232, 67, 191, 217, 224, 209, 190, 217, 74, 169, 190, 213, 64, 17, 62, 45, 182, 79, 61, 83, 171, 243, 190, 223, 14, 131, 190, 0, 9, 249, 61, 187, 53, 173, 61, 146, 91, 1, 62, 234, 168, 177, 62, 146, 24, 29, 190, 253, 178, 149, 190, 100, 28, 85, 189, 74, 237, 239, 61, 198, 150, 107, 62, 225, 81, 7, 190, 216, 75, 117, 61, 154, 125, 30, 62, 30, 188, 89, 62, 197, 230, 80, 62, 188, 167, 91, 60, 240, 48, 67, 190, 214, 164, 139, 60, 43, 2, 151, 190, 171, 208, 172, 190, 250, 80, 139, 62, 56, 171, 197, 62, 147, 199, 127, 190, 109, 19, 128, 191, 120, 76, 132, 61, 233, 147, 65, 189, 127, 129, 7, 62, 117, 70, 10, 190, 44, 206, 130, 189, 107, 247, 146, 189, 73, 187, 237, 189, 88, 11, 64, 189, 102, 90, 120, 61, 185, 101, 244, 61, 170, 9, 81, 189, 138, 238, 147, 188, 143, 17, 29, 190, 71, 67, 6, 62, 135, 213, 0, 189, 19, 143, 161, 189, 142, 136, 113, 188, 16, 151, 146, 61, 182, 239, 19, 190, 142, 216, 229, 61, 154, 246, 7, 61, 73, 146, 82, 188, 72, 71, 87, 60, 172, 119, 9, 190, 19, 4, 230, 61, 148, 75, 98, 60, 86, 137, 22, 190, 173, 44, 12, 190, 147, 224, 254, 189, 1, 250, 32, 189, 134, 39, 190, 189, 113, 143, 152, 61, 255, 69, 109, 190, 166, 240, 19, 189, 134, 85, 134, 191, 214, 150, 106, 190, 78, 209, 26, 189, 188, 91, 153, 62, 156, 177, 183, 189, 230, 48, 78, 190, 200, 62, 10, 191, 148, 52, 31, 61, 52, 34, 229, 61, 248, 92, 91, 61, 97, 17, 203, 61, 151, 72, 45, 190, 232, 192, 6, 62, 77, 243, 19, 62, 125, 112, 118, 61, 69, 170, 137, 189, 25, 177, 214, 190, 116, 104, 33, 62, 104, 181, 131, 191, 10, 206, 152, 61, 160, 244, 95, 190, 183, 152, 42, 189, 71, 118, 230, 189, 19, 2, 25, 189, 69, 225, 86, 62, 227, 122, 31, 190, 5, 172, 110, 189, 44, 170, 196, 62, 214, 53, 181, 189, 253, 81, 51, 190, 208, 239, 177, 190, 44, 160, 177, 62, 111, 202, 115, 190, 53, 125, 59, 190, 44, 161, 211, 61, 98, 230, 42, 189, 84, 123, 84, 190, 248, 180, 212, 61, 6, 255, 106, 189, 105, 251, 164, 62, 21, 244, 162, 61, 56, 202, 41, 62, 52, 119, 168, 62, 143, 147, 25, 191, 162, 98, 147, 189, 186, 170, 143, 190, 208, 201, 68, 189, 36, 13, 146, 190, 223, 198, 75, 62, 8, 152, 32, 62, 45, 108, 201, 62, 160, 154, 104, 62, 217, 36, 39, 62, 9, 79, 26, 190, 243, 71, 143, 190, 100, 107, 81, 190, 160, 230, 112, 190, 121, 68, 187, 61, 234, 110, 226, 189, 212, 198, 141, 62, 56, 210, 56, 189, 171, 119, 28, 61, 115, 163, 232, 188, 159, 96, 91, 191, 122, 16, 117, 189, 149, 186, 81, 62, 99, 217, 178, 60, 170, 66, 127, 190, 12, 131, 17, 191, 186, 157, 156, 62, 71, 8, 49, 191, 205, 127, 186, 190, 205, 193, 17, 62, 128, 230, 9, 190, 87, 121, 195, 60, 158, 93, 173, 62, 182, 128, 203, 62, 2, 42, 144, 62, 198, 214, 118, 190, 57, 114, 81, 190, 227, 159, 176, 190, 17, 221, 139, 62, 118, 69, 190, 60, 57, 37, 11, 189, 170, 64, 68, 62, 76, 233, 94, 190, 111, 8, 47, 62, 39, 118, 219, 190, 219, 115, 123, 62, 198, 226, 152, 190, 145, 55, 173, 190, 4, 22, 175, 62, 48, 88, 79, 62, 33, 52, 170, 189, 156, 213, 197, 62, 4, 101, 199, 190, 43, 218, 175, 189, 85, 115, 55, 62, 68, 40, 38, 189, 116, 250, 0, 191, 135, 148, 21, 191, 140, 233, 131, 61, 244, 195, 5, 191, 47, 95, 128, 190, 149, 235, 19, 61, 150, 216, 18, 189, 56, 86, 251, 189, 13, 24, 224, 61, 113, 110, 240, 62, 233, 73, 19, 63, 28, 228, 63, 190, 31, 160, 154, 190, 192, 108, 1, 191, 132, 222, 39, 62, 17, 229, 175, 190, 225, 144, 194, 190, 177, 52, 9, 190, 71, 162, 185, 190, 187, 115, 133, 62, 248, 87, 104, 61, 30, 246, 136, 62, 36, 122, 156, 189, 124, 94, 7, 190, 132, 61, 180, 62, 186, 159, 36, 61, 176, 76, 227, 61, 175, 10, 118, 60, 62, 128, 48, 189, 18, 154, 29, 190, 200, 61, 11, 190, 34, 169, 48, 188, 111, 200, 26, 62, 237, 170, 44, 190, 67, 169, 152, 61, 81, 227, 48, 190, 26, 44, 211, 61, 122, 101, 254, 189, 135, 238, 145, 60, 218, 97, 121, 189, 151, 207, 203, 189, 45, 53, 160, 61, 192, 74, 232, 189, 57, 250, 58, 61, 104, 50, 10, 60, 141, 227, 37, 188, 231, 138, 230, 189, 67, 142, 191, 189, 5, 233, 228, 189, 31, 192, 7, 190, 72, 13, 23, 60, 61, 135, 195, 61, 78, 136, 43, 190, 232, 111, 255, 188, 164, 131, 200, 189, 239, 192, 186, 189, 152, 155, 85, 61, 20, 72, 3, 61, 173, 181, 6, 190, 160, 110, 115, 189, 132, 34, 130, 62, 171, 75, 132, 190, 232, 49, 2, 190, 108, 138, 151, 61, 59, 5, 56, 61, 153, 43, 192, 62, 117, 224, 76, 61, 52, 103, 150, 62, 176, 58, 155, 188, 15, 140, 174, 188, 199, 36, 199, 61, 249, 223, 245, 62, 198, 23, 149, 190, 28, 175, 106, 190, 252, 67, 208, 189, 243, 164, 164, 62, 155, 237, 59, 62, 161, 101, 61, 190, 19, 105, 209, 190, 242, 178, 107, 57, 28, 130, 163, 190, 192, 130, 6, 190, 230, 3, 216, 62, 105, 55, 214, 189, 38, 128, 188, 188, 197, 137, 180, 188, 87, 235, 222, 61, 30, 114, 129, 189, 182, 97, 113, 190, 134, 238, 124, 190, 254, 253, 21, 190, 61, 46, 234, 189, 56, 26, 218, 62, 42, 98, 112, 62, 185, 231, 231, 189, 215, 7, 16, 188, 218, 209, 97, 190, 172, 51, 218, 62, 191, 132, 102, 62, 110, 69, 159, 62, 214, 251, 192, 60, 226, 171, 170, 61, 181, 211, 48, 190, 225, 233, 136, 189, 17, 226, 32, 190, 198, 33, 99, 190, 22, 62, 141, 190, 104, 188, 159, 61, 41, 252, 27, 62, 122, 94, 188, 61, 248, 113, 152, 191, 78, 183, 135, 189, 240, 30, 103, 191, 201, 96, 60, 190, 248, 76, 152, 62, 140, 41, 3, 191, 67, 226, 174, 190, 136, 197, 87, 188, 126, 31, 173, 190, 249, 137, 183, 189, 215, 156, 90, 62, 184, 57, 47, 190, 254, 51, 227, 61, 65, 100, 11, 190, 117, 65, 27, 188, 191, 75, 214, 60, 197, 129, 39, 190, 115, 241, 0, 61, 253, 228, 20, 62, 158, 230, 84, 61, 12, 109, 139, 189, 21, 99, 211, 189, 254, 102, 247, 189, 112, 89, 145, 61, 215, 47, 2, 61, 112, 113, 23, 189, 246, 226, 132, 61, 117, 1, 49, 190, 49, 95, 123, 189, 153, 101, 11, 190, 168, 188, 153, 60, 219, 145, 208, 61, 101, 171, 30, 190, 126, 116, 28, 60, 54, 52, 211, 56, 246, 245, 162, 189, 211, 131, 166, 61, 72, 112, 49, 190, 50, 201, 196, 189, 185, 238, 13, 190, 254, 118, 249, 60, 147, 132, 13, 190, 202, 105, 205, 61, 89, 7, 78, 189, 0, 196, 60, 189, 166, 97, 139, 189, 29, 152, 77, 62, 227, 49, 157, 190, 220, 64, 75, 190, 20, 141, 240, 60, 137, 100, 32, 189, 223, 172, 148, 62, 21, 219, 39, 62, 17, 72, 220, 62, 167, 237, 158, 62, 251, 31, 1, 60, 174, 212, 104, 62, 1, 86, 243, 62, 34, 169, 50, 191, 12, 193, 174, 190, 62, 200, 145, 190, 103, 80, 170, 62, 223, 207, 217, 62, 103, 195, 200, 187, 55, 102, 23, 190, 29, 249, 156, 189, 24, 253, 96, 190, 229, 23, 125, 188, 177, 97, 185, 62, 212, 248, 129, 190, 59, 144, 179, 188, 56, 106, 159, 189, 122, 110, 36, 62, 216, 174, 161, 190, 45, 188, 163, 190, 22, 74, 24, 190, 47, 118, 76, 61, 66, 50, 158, 190, 103, 248, 155, 62, 199, 179, 150, 191, 171, 16, 127, 190, 79, 255, 190, 189, 103, 101, 169, 62, 92, 7, 157, 61, 222, 2, 59, 190, 25, 91, 248, 189, 167, 70, 246, 62, 40, 134, 50, 190, 110, 105, 18, 62, 65, 119, 174, 62, 176, 96, 173, 190, 53, 137, 164, 190, 175, 148, 237, 60, 187, 211, 215, 62, 191, 50, 109, 62, 117, 185, 108, 59, 88, 230, 7, 62, 31, 153, 251, 61, 219, 156, 18, 62, 106, 171, 207, 61, 115, 134, 49, 187, 1, 196, 174, 189, 33, 33, 57, 189, 79, 112, 54, 190, 28, 69, 152, 62, 60, 245, 142, 62, 108, 33, 251, 61, 240, 13, 254, 189, 141, 103, 146, 191, 192, 164, 80, 190, 26, 180, 5, 62, 8, 183, 124, 189, 178, 110, 103, 190, 154, 213, 40, 60, 177, 218, 76, 61, 14, 189, 104, 190, 52, 25, 24, 190, 68, 92, 121, 61, 167, 43, 141, 62, 67, 146, 0, 62, 88, 81, 26, 62, 4, 245, 13, 63, 193, 150, 198, 190, 77, 1, 175, 190, 75, 59, 119, 190, 27, 191, 136, 61, 235, 213, 70, 189, 90, 229, 28, 62, 8, 18, 41, 62, 156, 175, 152, 62, 8, 77, 97, 62, 181, 141, 86, 62, 10, 75, 136, 189, 142, 14, 34, 190, 125, 207, 1, 62, 11, 130, 155, 189, 239, 6, 4, 61, 126, 138, 183, 60, 173, 196, 107, 62, 234, 65, 39, 190, 79, 110, 210, 189, 20, 49, 169, 189, 238, 129, 189, 190, 52, 36, 112, 190, 169, 243, 107, 62, 39, 194, 32, 62, 199, 253, 146, 190, 33, 87, 0, 190, 108, 249, 65, 62, 67, 7, 64, 191, 131, 194, 130, 60, 195, 250, 162, 188, 30, 84, 29, 61, 76, 118, 7, 61, 193, 160, 108, 190, 197, 28, 65, 62, 24, 252, 125, 62, 109, 154, 91, 189, 76, 10, 155, 190, 43, 136, 94, 190, 29, 73, 169, 60, 115, 58, 233, 189, 65, 129, 115, 62, 216, 14, 117, 62, 103, 130, 211, 189, 104, 243, 17, 62, 89, 223, 129, 189, 155, 180, 54, 62, 55, 43, 221, 60, 87, 2, 181, 190, 114, 166, 221, 62, 49, 91, 62, 62, 25, 56, 172, 189, 52, 246, 159, 61, 160, 13, 125, 62, 104, 192, 35, 190, 8, 56, 55, 60, 218, 171, 89, 189, 131, 122, 2, 191, 251, 211, 18, 62, 207, 4, 20, 62, 182, 113, 138, 61, 201, 239, 184, 61, 27, 249, 221, 61, 51, 249, 40, 62, 26, 255, 7, 63, 32, 114, 68, 191, 177, 127, 100, 189, 242, 44, 196, 189, 142, 231, 163, 61, 218, 86, 37, 190, 221, 182, 143, 61, 22, 178, 59, 190, 64, 62, 98, 190, 224, 209, 11, 191, 188, 161, 128, 190, 181, 1, 92, 60, 91, 170, 147, 190, 47, 122, 213, 189, 26, 173, 47, 62, 82, 236, 126, 62, 25, 188, 17, 191, 121, 248, 244, 62, 22, 39, 66, 189, 228, 117, 115, 60, 217, 40, 8, 190, 237, 14, 76, 60, 93, 185, 187, 60, 163, 55, 249, 61, 208, 217, 191, 189, 74, 73, 113, 189, 55, 237, 232, 189, 62, 53, 16, 62, 29, 44, 17, 190, 98, 136, 4, 190, 125, 2, 18, 62, 39, 164, 174, 61, 173, 203, 214, 189, 87, 220, 179, 61, 145, 141, 80, 189, 99, 224, 25, 190, 14, 55, 32, 190, 76, 89, 218, 61, 58, 199, 164, 61, 99, 65, 168, 189, 68, 100, 45, 190, 254, 99, 16, 190, 36, 17, 220, 188, 94, 151, 27, 188, 236, 105, 31, 190, 153, 254, 52, 190, 216, 76, 252, 189, 72, 26, 212, 189, 213, 191, 176, 189, 208, 117, 3, 62, 169, 161, 140, 189, 211, 22, 205, 189};
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
                alignas(float) const unsigned char memory[] = {179, 95, 27, 190, 214, 89, 233, 188, 191, 164, 92, 189, 254, 144, 157, 62, 101, 129, 93, 189, 235, 70, 194, 61, 63, 11, 220, 60, 29, 142, 192, 61, 92, 102, 166, 62, 211, 84, 150, 189, 197, 154, 18, 190, 107, 80, 17, 62, 23, 221, 32, 189, 121, 105, 9, 60, 251, 213, 12, 62, 88, 76, 4, 189, 72, 77, 196, 188, 212, 11, 202, 189, 212, 219, 30, 62, 19, 241, 164, 62, 51, 12, 211, 61, 148, 54, 0, 190, 79, 37, 239, 189, 253, 178, 37, 189, 145, 38, 149, 190, 214, 153, 41, 190, 18, 246, 209, 188, 39, 25, 2, 62, 212, 173, 178, 61, 214, 70, 17, 189, 20, 17, 178, 61, 208, 27, 50, 190};
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
                alignas(float) const unsigned char memory[] = {54, 152, 136, 61, 84, 60, 41, 190, 6, 147, 111, 63, 201, 135, 54, 62, 2, 22, 229, 62, 51, 243, 41, 62, 40, 216, 106, 62, 241, 33, 172, 190, 73, 30, 151, 191, 212, 64, 239, 60, 185, 100, 193, 62, 250, 26, 42, 191, 131, 117, 40, 190, 160, 231, 183, 190, 111, 144, 175, 190, 0, 43, 36, 63, 212, 112, 240, 62, 60, 247, 141, 189, 105, 116, 222, 189, 103, 163, 194, 62, 94, 52, 14, 191, 170, 24, 192, 190, 71, 246, 203, 61, 41, 150, 134, 62, 242, 177, 89, 191, 234, 178, 222, 61, 102, 47, 211, 62, 232, 4, 5, 63, 203, 230, 109, 62, 51, 193, 62, 190, 8, 113, 144, 62, 176, 159, 174, 189, 176, 40, 236, 61, 82, 55, 65, 62, 56, 195, 32, 63, 0, 155, 57, 190, 186, 254, 110, 189, 19, 201, 214, 61, 78, 199, 13, 190, 226, 208, 139, 190, 10, 209, 136, 62, 166, 123, 166, 61, 243, 56, 67, 62, 140, 146, 92, 61, 153, 207, 96, 61, 160, 5, 225, 189, 194, 240, 58, 190, 15, 234, 75, 62, 206, 200, 140, 188, 4, 57, 88, 189, 115, 161, 25, 191, 13, 189, 77, 60, 55, 22, 139, 61, 157, 223, 67, 62, 19, 40, 241, 189, 31, 68, 89, 61, 191, 49, 178, 61, 127, 12, 175, 61, 44, 213, 20, 62, 91, 148, 29, 190, 227, 12, 147, 189, 181, 157, 126, 190, 97, 3, 187, 190, 89, 124, 19, 62};
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
                alignas(float) const unsigned char memory[] = {50, 141, 184, 189, 61, 67, 217, 190};
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
    alignas(float) const unsigned char memory[] = {195, 218, 28, 63, 219, 22, 208, 191, 6, 173, 75, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {58, 6, 232, 63, 208, 173, 94, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0088/steps/000000000010000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}