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
                alignas(float) const unsigned char memory[] = {114, 52, 63, 63, 127, 141, 24, 191, 93, 156, 179, 190, 241, 14, 240, 62, 249, 42, 64, 191, 165, 168, 237, 190, 173, 132, 178, 62, 53, 143, 178, 191, 247, 250, 165, 190, 46, 52, 72, 61, 83, 218, 194, 191, 232, 94, 235, 190, 131, 144, 128, 190, 33, 12, 96, 190, 197, 139, 186, 62, 111, 29, 246, 62, 245, 90, 140, 191, 198, 169, 206, 60, 2, 241, 180, 62, 27, 169, 86, 191, 130, 228, 64, 190, 97, 237, 58, 63, 141, 85, 180, 63, 80, 101, 162, 62, 184, 178, 28, 191, 245, 134, 135, 190, 196, 240, 16, 190, 162, 128, 188, 62, 123, 119, 6, 190, 165, 44, 225, 62, 191, 156, 81, 62, 234, 10, 156, 191, 176, 255, 163, 190, 103, 151, 7, 190, 232, 31, 155, 63, 132, 81, 204, 190, 118, 44, 199, 61, 181, 174, 68, 191, 31, 32, 4, 187, 245, 109, 39, 191, 132, 30, 48, 191, 177, 128, 20, 190, 167, 236, 252, 190, 160, 202, 14, 191, 141, 218, 33, 191, 48, 255, 119, 190, 123, 110, 174, 62, 251, 136, 45, 63, 209, 144, 118, 63, 188, 137, 55, 191, 109, 101, 70, 190, 177, 184, 54, 191, 15, 126, 57, 191, 141, 176, 56, 188, 120, 52, 239, 190, 32, 127, 121, 190, 218, 223, 174, 62, 237, 120, 240, 61, 51, 164, 64, 63, 109, 104, 147, 190, 197, 29, 152, 187, 149, 254, 144, 191, 16, 172, 181, 62, 196, 148, 59, 63, 173, 249, 100, 191, 188, 28, 51, 190, 203, 2, 18, 191, 115, 241, 140, 63, 221, 195, 37, 61, 59, 72, 177, 62, 105, 26, 170, 191, 130, 113, 82, 190, 117, 83, 198, 190, 130, 136, 40, 191, 59, 94, 193, 190, 211, 136, 173, 62, 170, 54, 198, 60, 150, 156, 252, 190, 134, 248, 26, 60, 11, 31, 39, 62, 50, 71, 220, 190, 209, 147, 69, 63, 27, 127, 179, 63, 225, 93, 163, 62, 22, 38, 197, 190, 140, 249, 196, 191, 187, 170, 215, 190, 195, 15, 241, 61, 80, 40, 153, 63, 168, 115, 186, 62, 199, 13, 152, 62, 149, 22, 82, 191, 183, 86, 210, 190, 179, 153, 53, 191, 177, 154, 168, 190, 197, 35, 3, 191};
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
                alignas(float) const unsigned char memory[] = {225, 144, 58, 191, 248, 216, 14, 190, 189, 97, 18, 190, 235, 9, 156, 189, 226, 124, 73, 62, 134, 62, 18, 190, 207, 171, 149, 58, 16, 240, 65, 190, 161, 97, 55, 63, 2, 15, 134, 191, 224, 180, 168, 62, 192, 132, 101, 62, 180, 199, 60, 62, 70, 206, 134, 190, 33, 50, 52, 191, 54, 216, 121, 190, 3, 142, 131, 191, 253, 68, 17, 63, 120, 39, 125, 62, 41, 165, 19, 63, 168, 13, 11, 62, 123, 96, 25, 191, 226, 201, 206, 62, 114, 196, 22, 63, 156, 154, 100, 191, 186, 86, 249, 61, 40, 198, 186, 60, 202, 62, 141, 189, 187, 60, 47, 60, 238, 5, 202, 61, 186, 25, 235, 189, 195, 204, 22, 189};
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
                alignas(float) const unsigned char memory[] = {40, 217, 145, 190, 234, 255, 124, 190, 67, 32, 177, 190, 7, 228, 178, 61, 202, 57, 162, 190, 164, 3, 71, 190, 40, 14, 211, 190, 41, 251, 174, 62, 111, 138, 154, 190, 82, 98, 226, 188, 29, 148, 156, 190, 103, 40, 171, 190, 162, 59, 49, 60, 79, 114, 198, 61, 156, 137, 152, 187, 150, 129, 35, 190, 93, 52, 76, 190, 132, 55, 66, 190, 27, 207, 45, 190, 7, 28, 52, 189, 94, 15, 18, 190, 48, 54, 42, 191, 80, 64, 74, 190, 184, 231, 112, 189, 235, 193, 176, 61, 212, 233, 252, 189, 145, 196, 11, 188, 98, 201, 55, 62, 88, 101, 202, 60, 32, 59, 100, 190, 136, 87, 162, 189, 135, 253, 199, 62, 140, 144, 25, 62, 227, 163, 172, 62, 134, 192, 172, 62, 129, 70, 231, 190, 113, 135, 201, 60, 162, 27, 69, 62, 147, 108, 150, 62, 163, 56, 168, 190, 7, 148, 95, 62, 206, 184, 254, 190, 252, 215, 66, 62, 135, 214, 221, 59, 43, 178, 249, 61, 186, 71, 67, 189, 182, 173, 51, 191, 214, 36, 77, 62, 238, 147, 85, 190, 162, 135, 160, 61, 129, 215, 210, 62, 106, 199, 150, 60, 193, 80, 191, 190, 0, 251, 139, 190, 172, 186, 154, 60, 131, 236, 83, 62, 212, 225, 85, 191, 154, 138, 149, 62, 107, 101, 117, 187, 84, 177, 190, 190, 51, 225, 13, 191, 235, 223, 33, 61, 130, 111, 136, 62, 193, 147, 95, 190, 218, 1, 10, 62, 94, 148, 39, 62, 241, 86, 177, 190, 36, 158, 19, 191, 194, 61, 228, 189, 76, 97, 61, 62, 217, 39, 175, 62, 32, 199, 245, 190, 187, 152, 15, 190, 112, 157, 253, 61, 41, 169, 179, 62, 141, 133, 167, 190, 69, 22, 166, 62, 84, 247, 45, 190, 170, 94, 22, 191, 244, 255, 7, 189, 125, 136, 65, 191, 72, 126, 26, 190, 88, 201, 107, 61, 144, 229, 53, 190, 231, 157, 251, 61, 124, 75, 63, 190, 38, 255, 105, 190, 111, 102, 178, 62, 161, 68, 179, 189, 163, 48, 200, 187, 252, 22, 234, 189, 30, 13, 207, 188, 53, 39, 124, 191, 80, 175, 208, 61, 73, 224, 25, 190, 54, 47, 173, 190, 25, 224, 113, 189, 167, 246, 206, 189, 117, 171, 142, 190, 255, 188, 151, 190, 211, 245, 162, 62, 10, 68, 119, 62, 49, 225, 120, 188, 165, 14, 196, 191, 12, 211, 70, 62, 232, 104, 237, 190, 26, 234, 236, 188, 154, 209, 216, 62, 229, 210, 154, 62, 70, 230, 238, 189, 209, 211, 245, 189, 125, 177, 9, 62, 239, 196, 230, 190, 6, 73, 130, 190, 91, 187, 134, 62, 237, 110, 97, 62, 172, 75, 157, 189, 15, 43, 236, 190, 187, 107, 95, 62, 234, 21, 27, 190, 79, 145, 228, 190, 64, 86, 117, 61, 42, 7, 63, 62, 166, 197, 115, 191, 61, 66, 169, 190, 82, 93, 164, 190, 172, 143, 177, 60, 97, 33, 23, 62, 179, 207, 9, 62, 1, 149, 74, 62, 114, 21, 112, 62, 130, 82, 105, 189, 240, 79, 183, 61, 188, 158, 103, 62, 24, 235, 182, 62, 231, 68, 109, 190, 1, 124, 62, 188, 225, 2, 185, 189, 107, 50, 170, 62, 125, 179, 199, 185, 53, 76, 34, 189, 159, 151, 175, 190, 112, 13, 215, 190, 27, 154, 253, 61, 119, 179, 117, 189, 168, 220, 32, 189, 227, 98, 19, 190, 228, 254, 12, 190, 85, 195, 129, 188, 117, 93, 19, 190, 124, 38, 2, 62, 80, 150, 72, 62, 10, 23, 13, 191, 125, 154, 227, 61, 245, 162, 137, 189, 185, 254, 81, 60, 43, 29, 216, 190, 74, 201, 59, 189, 125, 99, 116, 62, 62, 229, 152, 190, 120, 175, 24, 191, 215, 151, 133, 189, 9, 127, 217, 189, 59, 222, 167, 62, 241, 36, 107, 190, 239, 210, 197, 190, 56, 16, 37, 190, 12, 24, 204, 61, 127, 158, 89, 190, 142, 230, 118, 61, 243, 246, 156, 61, 201, 197, 192, 190, 20, 132, 13, 60, 193, 157, 69, 189, 159, 27, 103, 61, 7, 240, 185, 189, 225, 114, 35, 191, 51, 96, 252, 61, 141, 100, 153, 61, 118, 5, 23, 62, 44, 111, 69, 62, 77, 190, 60, 191, 223, 112, 4, 190, 84, 231, 195, 62, 48, 183, 16, 191, 210, 71, 38, 190, 113, 237, 247, 190, 229, 157, 173, 62, 157, 55, 170, 62, 29, 232, 190, 189, 64, 173, 122, 190, 29, 218, 55, 62, 160, 216, 30, 62, 196, 154, 230, 190, 54, 254, 150, 191, 209, 37, 163, 60, 94, 226, 172, 189, 95, 239, 160, 62, 31, 118, 68, 191, 108, 129, 192, 62, 230, 12, 148, 191, 122, 4, 182, 62, 75, 29, 40, 191, 97, 207, 44, 190, 6, 131, 186, 189, 15, 243, 60, 61, 185, 25, 29, 62, 83, 109, 90, 62, 185, 99, 240, 59, 40, 19, 62, 191, 164, 72, 98, 190, 160, 173, 57, 189, 25, 106, 25, 62, 105, 139, 62, 190, 21, 159, 145, 189, 149, 48, 184, 188, 206, 64, 14, 62, 20, 217, 141, 191, 88, 198, 133, 191, 70, 163, 58, 62, 178, 35, 108, 191, 139, 145, 254, 61, 27, 125, 255, 190, 237, 225, 96, 60, 150, 123, 91, 61, 105, 252, 205, 188, 68, 67, 113, 62, 82, 106, 227, 61, 220, 47, 227, 61, 62, 40, 158, 62, 215, 58, 166, 62, 60, 155, 207, 190, 200, 53, 194, 61, 148, 39, 64, 190, 92, 168, 66, 62, 228, 104, 199, 190, 97, 211, 182, 62, 182, 188, 63, 190, 132, 25, 193, 189, 175, 217, 45, 61, 107, 136, 18, 190, 150, 191, 72, 189, 123, 119, 125, 62, 67, 28, 82, 190, 251, 236, 186, 189, 147, 30, 18, 189, 112, 20, 253, 190, 190, 102, 66, 62, 158, 203, 247, 190, 82, 106, 71, 189, 190, 135, 116, 189, 50, 133, 193, 190, 68, 233, 60, 190, 219, 205, 137, 189, 20, 97, 189, 60, 40, 13, 133, 188, 5, 181, 185, 60, 124, 43, 32, 190, 172, 253, 185, 190, 196, 20, 216, 190, 88, 139, 23, 62, 157, 37, 91, 191, 232, 209, 106, 190, 89, 117, 97, 190, 193, 229, 10, 63, 68, 164, 252, 190, 136, 92, 128, 191, 136, 185, 20, 189, 178, 221, 11, 191, 126, 87, 134, 191, 159, 144, 235, 189, 0, 171, 21, 62, 158, 29, 199, 187, 97, 113, 198, 62, 113, 247, 79, 189, 143, 144, 46, 190, 190, 226, 110, 190, 78, 211, 191, 61, 62, 201, 243, 62, 108, 211, 211, 190, 106, 188, 58, 190, 30, 82, 22, 190, 182, 146, 130, 188, 97, 122, 137, 190, 173, 186, 216, 190, 1, 196, 104, 187, 189, 70, 181, 190, 211, 190, 96, 190, 193, 195, 149, 60, 251, 190, 214, 190, 226, 96, 147, 191, 78, 26, 72, 190, 210, 212, 29, 190, 85, 58, 42, 191, 127, 221, 14, 191, 108, 198, 111, 190, 67, 163, 152, 62, 223, 186, 195, 190, 229, 140, 192, 191, 186, 78, 243, 190, 183, 186, 25, 61, 242, 17, 0, 191, 46, 144, 41, 62, 84, 163, 255, 190, 232, 22, 76, 190, 27, 117, 126, 62, 52, 253, 135, 60, 248, 183, 4, 190, 161, 44, 77, 62, 23, 18, 227, 189, 156, 61, 36, 190, 228, 177, 15, 62, 239, 184, 179, 189, 166, 244, 206, 189, 157, 60, 4, 191, 226, 136, 102, 61, 125, 72, 74, 190, 2, 238, 37, 191, 146, 27, 61, 191, 211, 139, 55, 62, 79, 97, 147, 190, 37, 171, 122, 190, 4, 24, 68, 191, 127, 90, 54, 62, 138, 220, 7, 190, 247, 164, 4, 191, 63, 30, 24, 190, 199, 152, 31, 63, 106, 215, 162, 190, 252, 251, 174, 190, 1, 124, 138, 190, 79, 133, 5, 62, 29, 132, 146, 190, 180, 30, 43, 190, 247, 154, 128, 62, 81, 52, 60, 190, 133, 7, 28, 190, 166, 187, 205, 190, 81, 55, 133, 61, 53, 118, 155, 62, 58, 101, 43, 191, 201, 169, 23, 191, 228, 121, 243, 61, 69, 53, 227, 61, 124, 5, 177, 189, 153, 232, 22, 189, 95, 193, 44, 190, 40, 65, 215, 62, 14, 129, 72, 190, 192, 76, 26, 62, 199, 112, 144, 190, 251, 99, 185, 62, 39, 216, 15, 191, 86, 106, 224, 189, 14, 164, 51, 190, 201, 157, 148, 62, 84, 0, 18, 190, 234, 146, 128, 190, 38, 194, 181, 188, 114, 112, 25, 61, 25, 126, 111, 62, 78, 5, 141, 190, 112, 62, 3, 61, 209, 91, 240, 188, 82, 26, 57, 61, 160, 25, 125, 188, 4, 125, 233, 61, 78, 155, 223, 189, 120, 27, 138, 191, 160, 74, 127, 61, 88, 173, 130, 61, 121, 254, 154, 61, 70, 126, 119, 62, 108, 127, 74, 191, 5, 109, 45, 189, 101, 78, 254, 61, 173, 207, 130, 190, 121, 255, 87, 190, 203, 209, 66, 60, 227, 205, 6, 62, 55, 204, 145, 62, 132, 218, 115, 189, 130, 228, 77, 189, 113, 233, 187, 61, 50, 3, 102, 188, 223, 155, 184, 61, 83, 34, 177, 60, 236, 57, 239, 189, 130, 121, 188, 60, 179, 116, 65, 62, 23, 150, 97, 61, 245, 177, 134, 189, 216, 102, 233, 61, 101, 33, 31, 61, 15, 224, 196, 189, 177, 129, 179, 187, 74, 37, 104, 188, 201, 98, 221, 61, 65, 58, 191, 61, 10, 41, 176, 189, 147, 46, 158, 189, 210, 250, 222, 189, 133, 235, 64, 190, 227, 8, 1, 189, 182, 148, 173, 189, 212, 63, 169, 61, 8, 117, 188, 190, 144, 37, 57, 190, 239, 168, 56, 61, 218, 18, 145, 61, 126, 161, 48, 189, 52, 218, 34, 189, 167, 144, 11, 189, 253, 84, 7, 190, 241, 42, 228, 60, 238, 191, 238, 188, 215, 41, 167, 189, 57, 139, 139, 189, 241, 99, 38, 61, 249, 250, 48, 61, 195, 23, 19, 190, 222, 101, 107, 61, 112, 65, 9, 190, 182, 35, 155, 61, 242, 110, 192, 186, 112, 116, 4, 62, 31, 187, 182, 188, 119, 70, 131, 61, 52, 21, 131, 60, 218, 38, 101, 189, 51, 188, 10, 62, 230, 123, 41, 190, 14, 132, 74, 188, 162, 197, 202, 189, 166, 153, 232, 61, 57, 154, 38, 190, 128, 104, 0, 189, 30, 104, 219, 189, 2, 42, 15, 190, 132, 33, 233, 189, 60, 89, 5, 62, 115, 113, 102, 61, 11, 149, 38, 188, 228, 129, 11, 190, 213, 235, 26, 190, 118, 177, 116, 189, 73, 207, 7, 61, 23, 241, 243, 189, 218, 230, 212, 62, 164, 82, 74, 62, 99, 163, 102, 62, 199, 235, 71, 189, 152, 245, 194, 190, 103, 141, 233, 190, 44, 195, 209, 61, 141, 53, 92, 190, 13, 193, 0, 62, 114, 18, 57, 190, 255, 247, 213, 61, 229, 44, 139, 190, 248, 20, 101, 191, 158, 83, 132, 190, 63, 157, 125, 189, 42, 209, 44, 191, 193, 184, 66, 63, 137, 184, 54, 61, 126, 117, 122, 189, 103, 12, 25, 189, 132, 17, 10, 59, 85, 57, 21, 63, 200, 174, 149, 190, 37, 125, 189, 61, 152, 168, 184, 188, 220, 227, 34, 61, 231, 55, 156, 188, 212, 114, 52, 191, 229, 1, 37, 62, 186, 84, 225, 190, 6, 134, 127, 60, 33, 151, 162, 189, 114, 88, 57, 191, 185, 232, 139, 190, 73, 134, 182, 190, 49, 91, 105, 62, 89, 86, 36, 189, 59, 114, 131, 190, 24, 179, 187, 61, 243, 62, 27, 62, 166, 106, 180, 189, 161, 24, 255, 60, 81, 206, 134, 189, 198, 43, 227, 189, 83, 90, 70, 62, 111, 125, 211, 61, 65, 75, 175, 61, 112, 78, 190, 190, 127, 124, 143, 191, 172, 187, 138, 60, 33, 242, 5, 62, 209, 67, 254, 61, 98, 243, 115, 62, 7, 5, 69, 191, 159, 71, 22, 62, 117, 181, 190, 62, 255, 134, 73, 189, 133, 49, 73, 190, 163, 36, 44, 189, 107, 197, 46, 62, 99, 250, 250, 62, 193, 186, 145, 188, 7, 174, 33, 190, 128, 177, 107, 62, 10, 26, 10, 190, 166, 226, 62, 61, 53, 237, 75, 191, 7, 173, 173, 191, 5, 144, 181, 60, 22, 38, 54, 191, 45, 116, 92, 190, 248, 142, 152, 62, 194, 182, 147, 189, 175, 55, 12, 190, 54, 182, 190, 190, 114, 218, 195, 60, 188, 0, 131, 190, 49, 24, 165, 189, 176, 37, 120, 191, 0, 180, 2, 62, 130, 103, 123, 190, 179, 188, 213, 189, 111, 209, 34, 62, 91, 124, 223, 62, 114, 116, 234, 189, 77, 102, 162, 190, 215, 148, 30, 62, 213, 24, 38, 191, 2, 104, 138, 188, 104, 111, 37, 63, 226, 64, 130, 188, 129, 182, 41, 62, 254, 174, 10, 192, 81, 188, 12, 62, 108, 42, 74, 62, 17, 107, 252, 190, 172, 54, 52, 189, 205, 132, 44, 62, 158, 198, 51, 189, 128, 144, 32, 190, 227, 209, 234, 60, 84, 102, 3, 190, 158, 51, 53, 58, 52, 81, 106, 189, 4, 158, 53, 61, 73, 71, 149, 189, 137, 182, 46, 60, 39, 237, 226, 188, 39, 12, 116, 61, 120, 23, 5, 62, 24, 243, 36, 190, 149, 203, 56, 190, 142, 78, 157, 189, 138, 9, 250, 189, 141, 50, 155, 61, 140, 75, 6, 190, 152, 9, 101, 187, 198, 246, 233, 56, 209, 102, 204, 61, 8, 190, 69, 189, 141, 184, 117, 61, 27, 78, 153, 189, 96, 221, 37, 190, 124, 222, 148, 58, 216, 157, 27, 61, 155, 186, 70, 60, 127, 158, 12, 61, 134, 45, 96, 186, 51, 62, 100, 191, 213, 174, 158, 190, 220, 227, 168, 190, 171, 154, 14, 63, 56, 148, 16, 191, 106, 252, 126, 190, 179, 38, 208, 189, 121, 39, 148, 62, 100, 129, 3, 62, 157, 76, 130, 190, 35, 94, 28, 190, 197, 168, 148, 189, 134, 241, 231, 189, 214, 61, 41, 62, 34, 51, 159, 61, 234, 151, 4, 191, 138, 64, 158, 191, 55, 164, 34, 61, 61, 128, 7, 190, 25, 137, 196, 61, 43, 176, 150, 62, 251, 46, 36, 191, 44, 207, 196, 186, 212, 199, 184, 62, 5, 208, 43, 190, 213, 233, 133, 190, 53, 8, 126, 190, 10, 161, 130, 62, 28, 182, 5, 63, 102, 19, 239, 61, 67, 17, 29, 190, 23, 252, 229, 62, 208, 226, 0, 191, 144, 148, 38, 190, 47, 62, 105, 59, 183, 147, 175, 62, 188, 15, 137, 190, 56, 128, 11, 61, 132, 22, 46, 190, 133, 111, 25, 62, 129, 83, 172, 189, 171, 78, 67, 190, 39, 101, 229, 189, 108, 224, 10, 190, 217, 101, 72, 190, 3, 77, 164, 61, 131, 97, 173, 61, 173, 161, 239, 190, 102, 208, 94, 191, 53, 93, 196, 62, 238, 159, 215, 59, 52, 214, 223, 189, 180, 48, 195, 62, 163, 96, 116, 191, 191, 49, 61, 190, 212, 5, 151, 62, 34, 230, 129, 190, 126, 134, 190, 188, 122, 227, 182, 61, 194, 85, 30, 190, 93, 97, 10, 63, 228, 88, 158, 190, 248, 69, 34, 190, 84, 214, 133, 62, 95, 88, 139, 190, 205, 191, 50, 62, 23, 232, 146, 190, 207, 230, 4, 190, 186, 66, 195, 189, 137, 84, 121, 62, 188, 170, 148, 61, 107, 43, 18, 191, 19, 21, 129, 62, 23, 194, 145, 61, 75, 200, 95, 61, 124, 70, 134, 61, 156, 43, 121, 62, 102, 213, 253, 188, 27, 83, 12, 62, 143, 150, 104, 190, 167, 30, 162, 190, 35, 165, 223, 61, 121, 3, 9, 190, 103, 164, 92, 62, 113, 247, 149, 62, 229, 125, 102, 190, 39, 26, 138, 61, 224, 135, 238, 62, 102, 117, 83, 189, 138, 147, 103, 62, 104, 25, 238, 61, 49, 83, 57, 190, 255, 250, 218, 61, 58, 189, 56, 190, 29, 118, 197, 61, 46, 175, 157, 188, 126, 16, 128, 62, 191, 223, 59, 189, 190, 30, 26, 63, 144, 109, 141, 188, 219, 55, 153, 61, 77, 45, 243, 61, 68, 180, 0, 63, 80, 177, 22, 191, 101, 177, 102, 61, 63, 3, 190, 190, 232, 103, 214, 62, 224, 211, 254, 190, 244, 73, 139, 61, 102, 47, 143, 190, 148, 114, 171, 58, 140, 243, 70, 62, 192, 211, 29, 63, 185, 239, 12, 61, 107, 149, 11, 61, 229, 240, 255, 190, 224, 194, 194, 188, 115, 113, 241, 62, 112, 1, 214, 61, 106, 206, 224, 189, 213, 156, 245, 62, 192, 31, 226, 190, 199, 113, 221, 62, 199, 115, 199, 190, 88, 96, 188, 191, 236, 9, 137, 62, 126, 125, 223, 62, 200, 131, 196, 190, 18, 121, 6, 63, 210, 155, 158, 62, 223, 64, 193, 62, 215, 202, 152, 190, 254, 174, 170, 62, 59, 89, 4, 62, 50, 208, 146, 62, 2, 88, 12, 191, 77, 150, 189, 60, 30, 132, 19, 191, 177, 34, 21, 62, 180, 1, 111, 189, 134, 107, 64, 61, 42, 207, 174, 190, 54, 208, 17, 191, 236, 220, 142, 62, 45, 15, 59, 62, 241, 73, 82, 189, 249, 98, 100, 62, 112, 9, 129, 190, 53, 159, 233, 190, 177, 197, 186, 61, 13, 100, 25, 62, 146, 2, 219, 61, 236, 193, 86, 191, 164, 10, 77, 62, 42, 26, 35, 62, 221, 41, 15, 191, 39, 8, 24, 191, 208, 76, 13, 62, 214, 124, 70, 62, 85, 100, 164, 190, 6, 144, 3, 62, 139, 113, 250, 61, 179, 33, 102, 190, 11, 156, 33, 190, 67, 211, 149, 61, 13, 179, 176, 189, 224, 237, 246, 189, 52, 40, 180, 61, 57, 137, 65, 189, 155, 238, 154, 189, 182, 79, 48, 61, 149, 141, 4, 61, 10, 166, 52, 61, 177, 249, 205, 61, 67, 54, 94, 190, 46, 209, 30, 62, 249, 254, 244, 61, 86, 132, 207, 189, 156, 185, 216, 189, 40, 247, 209, 61, 188, 63, 129, 61, 194, 168, 57, 62, 199, 204, 219, 61, 139, 45, 171, 61, 163, 87, 60, 62, 53, 194, 106, 61, 187, 97, 134, 62, 161, 176, 1, 62, 101, 63, 70, 190, 69, 161, 3, 62, 185, 66, 37, 189, 76, 94, 241, 189, 130, 52, 61, 191, 156, 214, 17, 190, 250, 103, 62, 191, 153, 135, 180, 60, 205, 165, 108, 191, 31, 39, 174, 190, 225, 182, 130, 190, 84, 223, 153, 189, 9, 94, 45, 62, 150, 223, 87, 190, 122, 124, 136, 188, 153, 145, 7, 62, 142, 123, 155, 189, 46, 193, 163, 190, 255, 211, 26, 62, 105, 220, 96, 191, 101, 26, 10, 191, 210, 235, 88, 61, 149, 50, 77, 189, 219, 42, 156, 62, 120, 76, 84, 191, 155, 36, 59, 191, 51, 92, 206, 62, 21, 104, 28, 62, 224, 163, 53, 190, 26, 112, 220, 189, 150, 101, 53, 190, 13, 126, 13, 62, 223, 174, 49, 190, 74, 28, 62, 190, 250, 210, 153, 190, 191, 218, 161, 62, 0, 164, 58, 191, 206, 186, 8, 61, 11, 47, 77, 191, 84, 206, 142, 189, 236, 104, 32, 62, 58, 32, 52, 62, 157, 111, 153, 61, 161, 17, 145, 189, 251, 35, 91, 191, 223, 103, 167, 62, 226, 200, 123, 61, 236, 78, 77, 62, 160, 31, 140, 62, 14, 90, 166, 189, 101, 101, 25, 61, 207, 1, 49, 189, 91, 24, 1, 192, 77, 38, 32, 191, 191, 26, 206, 61, 109, 212, 181, 62, 43, 102, 151, 186, 38, 87, 171, 190, 165, 227, 136, 62, 29, 110, 164, 62, 41, 63, 160, 61, 136, 246, 128, 62, 73, 208, 142, 62, 73, 27, 197, 61, 252, 130, 60, 191, 161, 242, 146, 62, 217, 130, 85, 190, 142, 66, 227, 189, 16, 150, 25, 63, 237, 173, 85, 62, 255, 35, 165, 62, 2, 98, 203, 189, 100, 206, 202, 62, 198, 149, 67, 189, 169, 70, 10, 62, 153, 253, 166, 188, 17, 26, 107, 190, 98, 233, 33, 62, 123, 213, 23, 190, 18, 159, 133, 189, 177, 121, 97, 61, 192, 30, 1, 191, 165, 168, 184, 189, 131, 175, 136, 62, 136, 17, 62, 63, 92, 106, 47, 190, 130, 42, 221, 61, 26, 38, 66, 190, 127, 49, 76, 62, 42, 55, 34, 63, 163, 45, 168, 190, 175, 185, 37, 190, 200, 252, 44, 190, 121, 121, 42, 62, 18, 138, 69, 60, 224, 185, 130, 190, 93, 191, 3, 62, 164, 206, 88, 190, 168, 218, 142, 62, 244, 4, 220, 189, 67, 88, 87, 191, 77, 23, 132, 190, 9, 211, 73, 190, 173, 109, 39, 62, 182, 202, 189, 190, 44, 196, 162, 188, 137, 26, 28, 190, 24, 177, 134, 61, 226, 132, 6, 189, 149, 168, 122, 60, 168, 7, 225, 189, 66, 164, 2, 187, 188, 130, 155, 186, 8, 217, 42, 190, 7, 144, 24, 62, 17, 145, 147, 190, 19, 221, 195, 191, 107, 137, 131, 62, 250, 165, 179, 189, 117, 136, 57, 62, 153, 239, 176, 62, 56, 99, 100, 191, 41, 117, 53, 62, 78, 174, 199, 62, 205, 19, 203, 189, 44, 240, 139, 189, 223, 244, 17, 190, 117, 25, 143, 62, 114, 123, 228, 62, 33, 33, 7, 61, 45, 169, 136, 189, 116, 135, 174, 61, 4, 131, 223, 60, 48, 224, 99, 61, 106, 84, 54, 191, 29, 248, 182, 190, 33, 24, 50, 191, 229, 100, 101, 191, 171, 40, 236, 188, 190, 154, 64, 191, 172, 80, 22, 62, 52, 8, 79, 190, 218, 98, 100, 190, 208, 124, 232, 62, 235, 73, 73, 191, 0, 153, 219, 60, 60, 67, 3, 191, 4, 78, 166, 189, 214, 226, 2, 191, 91, 71, 220, 61, 80, 229, 46, 190, 235, 30, 107, 62, 186, 234, 129, 190, 127, 75, 27, 188, 68, 242, 15, 62, 238, 214, 133, 190, 228, 8, 45, 191, 48, 61, 128, 62, 225, 132, 229, 62, 8, 26, 36, 191, 30, 62, 101, 191, 226, 109, 125, 190, 189, 96, 109, 61, 69, 151, 0, 190, 52, 92, 188, 189, 174, 127, 16, 61, 26, 82, 62, 61, 237, 155, 223, 190, 198, 235, 196, 61, 37, 67, 235, 61, 238, 146, 184, 190, 122, 171, 170, 190, 168, 161, 42, 62, 231, 222, 74, 190, 245, 247, 195, 189, 211, 180, 227, 190, 34, 243, 103, 190, 59, 37, 88, 61, 4, 31, 133, 190, 38, 89, 75, 62, 74, 160, 149, 61, 27, 254, 206, 61, 10, 234, 146, 62, 223, 254, 170, 190, 247, 169, 177, 190, 102, 65, 8, 62, 253, 112, 216, 61, 82, 143, 216, 191, 17, 45, 151, 62, 175, 163, 121, 190, 0, 212, 174, 62, 5, 25, 182, 190, 23, 171, 248, 191, 147, 220, 52, 188, 19, 196, 120, 188, 120, 80, 232, 189, 64, 126, 45, 189, 168, 71, 252, 59, 206, 244, 159, 62, 115, 68, 47, 190, 178, 101, 29, 62, 55, 44, 134, 62, 207, 239, 155, 62, 218, 104, 31, 191, 57, 220, 73, 190, 154, 133, 37, 61, 78, 179, 73, 62, 120, 243, 75, 190, 91, 175, 128, 61, 131, 63, 134, 190, 12, 39, 116, 190, 78, 7, 193, 58, 148, 241, 153, 62, 191, 20, 110, 189, 115, 27, 33, 61, 3, 69, 185, 186, 166, 41, 157, 62, 76, 123, 222, 62, 166, 202, 20, 190, 14, 167, 9, 62, 83, 186, 151, 190, 144, 127, 183, 189, 148, 56, 54, 190, 57, 55, 7, 191, 214, 129, 138, 190, 128, 103, 185, 190, 234, 180, 222, 188, 116, 104, 119, 190, 3, 171, 8, 190, 237, 215, 235, 61, 67, 100, 153, 190, 191, 210, 237, 190, 235, 172, 202, 60, 224, 52, 148, 62, 51, 238, 224, 61, 203, 124, 203, 190, 217, 132, 94, 62, 39, 209, 185, 190, 110, 124, 10, 62, 199, 169, 23, 62, 95, 236, 20, 62, 37, 26, 4, 190, 22, 100, 129, 61, 231, 92, 157, 188, 143, 54, 53, 191, 109, 191, 73, 190, 227, 10, 41, 189, 247, 250, 96, 62, 17, 133, 211, 189, 162, 109, 121, 190, 45, 247, 9, 62, 177, 45, 79, 62, 119, 114, 209, 190, 19, 166, 133, 61, 32, 73, 206, 60, 167, 175, 144, 190, 59, 143, 165, 190, 16, 15, 161, 190, 64, 183, 155, 60, 159, 71, 65, 61};
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
                alignas(float) const unsigned char memory[] = {41, 239, 83, 190, 96, 132, 42, 62, 155, 116, 17, 62, 38, 61, 111, 62, 11, 66, 220, 60, 0, 250, 198, 60, 33, 189, 233, 190, 123, 39, 125, 62, 209, 142, 55, 62, 43, 26, 52, 190, 58, 59, 25, 59, 4, 192, 141, 62, 117, 66, 155, 190, 144, 118, 17, 62, 139, 69, 70, 190, 28, 241, 230, 61, 241, 26, 83, 62, 119, 222, 149, 189, 170, 162, 120, 62, 116, 254, 112, 189, 159, 74, 183, 60, 150, 16, 141, 62, 174, 207, 236, 188, 154, 191, 168, 61, 223, 194, 30, 62, 51, 93, 150, 60, 242, 198, 130, 190, 214, 218, 155, 62, 101, 235, 200, 189, 95, 31, 243, 60, 86, 96, 205, 189, 96, 53, 138, 62};
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
                alignas(float) const unsigned char memory[] = {233, 203, 41, 190, 110, 77, 65, 63, 51, 109, 114, 61, 184, 221, 80, 63, 72, 246, 42, 62, 145, 10, 3, 190, 63, 228, 91, 191, 29, 106, 157, 189, 229, 212, 161, 191, 124, 6, 156, 191, 161, 25, 31, 191, 56, 51, 8, 190, 87, 46, 225, 189, 113, 38, 248, 189, 130, 140, 13, 191, 230, 182, 63, 190, 46, 3, 11, 63, 194, 88, 220, 187, 179, 105, 22, 191, 1, 54, 10, 191, 247, 175, 102, 62, 125, 188, 101, 63, 76, 243, 41, 63, 59, 191, 247, 187, 164, 28, 102, 191, 205, 140, 206, 190, 147, 113, 195, 190, 60, 249, 172, 190, 199, 0, 155, 191, 29, 32, 146, 63, 41, 61, 188, 61, 220, 193, 129, 62, 252, 127, 213, 62, 157, 119, 44, 190, 242, 68, 43, 191, 247, 155, 140, 62, 106, 176, 211, 190, 15, 40, 44, 189, 89, 10, 19, 63, 39, 240, 189, 190, 29, 118, 136, 59, 7, 164, 238, 61, 155, 21, 219, 62, 109, 137, 2, 189, 237, 175, 36, 62, 56, 108, 194, 188, 28, 211, 189, 186, 233, 122, 99, 189, 126, 14, 148, 189, 172, 101, 222, 61, 89, 168, 10, 62, 38, 133, 175, 62, 184, 70, 38, 190, 201, 56, 249, 61, 244, 5, 117, 62, 231, 174, 98, 190, 84, 174, 56, 60, 82, 24, 24, 191, 186, 246, 5, 62, 52, 40, 79, 190, 246, 61, 75, 189, 75, 146, 125, 62, 131, 216, 17, 63, 151, 11, 170, 190};
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
                alignas(float) const unsigned char memory[] = {206, 9, 118, 62, 135, 170, 29, 191};
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
    alignas(float) const unsigned char memory[] = {9, 153, 91, 63, 99, 58, 191, 191, 214, 207, 157, 63};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {91, 54, 63, 64, 58, 147, 232, 190};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0067/steps/000000000020000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}