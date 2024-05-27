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
                alignas(float) const unsigned char memory[] = {81, 220, 154, 191, 204, 186, 43, 190, 1, 169, 218, 62, 3, 36, 236, 62, 81, 189, 97, 63, 222, 217, 211, 62, 150, 180, 128, 63, 142, 169, 31, 191, 57, 177, 245, 189, 170, 146, 190, 190, 197, 251, 34, 63, 59, 20, 22, 190, 200, 238, 151, 190, 95, 250, 207, 191, 80, 251, 143, 190, 123, 100, 70, 63, 128, 53, 49, 62, 28, 212, 15, 63, 197, 89, 55, 191, 63, 126, 108, 62, 158, 145, 196, 61, 186, 145, 87, 190, 252, 218, 119, 61, 99, 45, 133, 190, 120, 244, 253, 189, 40, 91, 148, 61, 165, 90, 220, 190, 171, 183, 69, 63, 24, 90, 91, 63, 49, 30, 204, 62, 1, 175, 159, 61, 253, 71, 120, 189, 87, 219, 36, 191, 99, 237, 9, 191, 144, 195, 176, 191, 234, 97, 203, 189, 66, 211, 131, 62, 126, 15, 251, 190, 151, 172, 226, 62, 57, 152, 186, 190, 57, 182, 55, 63, 145, 6, 20, 62, 195, 201, 238, 189, 20, 216, 175, 63, 148, 127, 185, 62, 226, 154, 79, 191, 133, 13, 219, 191, 41, 7, 175, 190, 150, 147, 152, 62, 244, 255, 207, 190, 222, 115, 32, 188, 87, 85, 185, 62, 149, 113, 134, 191, 241, 173, 241, 190, 98, 121, 108, 62, 243, 135, 97, 191, 222, 225, 46, 190, 43, 87, 61, 63, 72, 183, 131, 191, 188, 201, 151, 190, 233, 74, 98, 191, 195, 83, 139, 191, 184, 247, 12, 191, 95, 205, 199, 190, 240, 207, 87, 63, 62, 196, 9, 62, 28, 133, 212, 190, 174, 81, 180, 63, 41, 8, 176, 62, 102, 192, 98, 191, 232, 207, 226, 190, 200, 28, 218, 189, 164, 185, 8, 62, 101, 189, 67, 191, 80, 53, 125, 62, 181, 222, 199, 190, 16, 204, 77, 63, 14, 199, 255, 62, 245, 149, 176, 61, 146, 6, 73, 63, 145, 70, 58, 190, 127, 23, 19, 63, 128, 230, 166, 190, 140, 234, 18, 63, 214, 43, 212, 188, 5, 186, 160, 63, 240, 221, 246, 189, 61, 234, 13, 63, 178, 170, 69, 191, 167, 232, 47, 190, 239, 111, 178, 189, 218, 217, 191, 190, 252, 203, 32, 63, 199, 202, 3, 191, 104, 177, 5, 62, 211, 165, 34, 63};
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
                alignas(float) const unsigned char memory[] = {16, 18, 29, 190, 138, 250, 93, 190, 195, 201, 223, 62, 200, 37, 138, 190, 130, 217, 36, 62, 41, 23, 18, 62, 156, 100, 43, 62, 254, 74, 163, 62, 196, 52, 208, 190, 105, 70, 133, 191, 128, 32, 187, 62, 255, 197, 220, 62, 183, 86, 214, 189, 0, 248, 19, 63, 115, 4, 144, 62, 164, 190, 199, 189, 57, 167, 20, 63, 45, 5, 53, 191, 55, 211, 182, 61, 99, 216, 206, 190, 74, 183, 32, 191, 47, 36, 252, 62, 186, 93, 19, 63, 7, 40, 32, 190, 117, 188, 0, 61, 83, 153, 150, 189, 239, 189, 20, 190, 237, 187, 121, 189, 73, 3, 1, 63, 232, 97, 187, 61, 15, 68, 40, 190, 82, 31, 149, 190};
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
                alignas(float) const unsigned char memory[] = {193, 68, 41, 63, 98, 218, 134, 190, 22, 238, 94, 190, 243, 184, 202, 190, 122, 215, 75, 62, 199, 6, 134, 189, 11, 223, 32, 61, 166, 121, 118, 62, 143, 248, 211, 189, 173, 185, 196, 186, 5, 83, 94, 61, 171, 215, 86, 62, 188, 43, 224, 62, 24, 27, 250, 62, 223, 158, 176, 191, 231, 170, 152, 62, 109, 85, 81, 189, 170, 181, 95, 190, 26, 88, 165, 190, 65, 82, 198, 190, 240, 119, 103, 62, 232, 190, 249, 61, 175, 77, 243, 189, 219, 225, 180, 62, 125, 232, 130, 189, 86, 84, 129, 191, 112, 249, 74, 61, 207, 223, 117, 189, 100, 110, 134, 61, 215, 205, 46, 61, 17, 121, 14, 59, 77, 122, 8, 191, 112, 73, 245, 189, 72, 205, 154, 189, 150, 30, 44, 189, 63, 244, 222, 188, 52, 157, 181, 61, 104, 137, 136, 189, 214, 19, 27, 190, 254, 143, 133, 185, 90, 142, 15, 190, 152, 172, 223, 189, 161, 60, 241, 188, 208, 160, 43, 60, 243, 105, 3, 190, 214, 152, 212, 61, 206, 156, 29, 190, 22, 122, 20, 190, 64, 30, 10, 189, 168, 209, 189, 189, 96, 212, 236, 60, 59, 145, 190, 189, 107, 209, 12, 62, 130, 3, 252, 61, 251, 154, 39, 189, 238, 182, 86, 189, 188, 103, 246, 61, 189, 184, 247, 60, 245, 222, 70, 190, 184, 170, 221, 61, 9, 241, 184, 187, 240, 156, 33, 190, 76, 168, 226, 60, 199, 180, 15, 190, 114, 185, 22, 189, 135, 97, 201, 189, 39, 49, 8, 190, 191, 106, 42, 190, 163, 186, 220, 189, 227, 112, 44, 190, 157, 168, 191, 189, 192, 29, 213, 61, 85, 19, 166, 189, 252, 59, 46, 61, 212, 229, 58, 61, 73, 24, 15, 61, 68, 207, 194, 189, 153, 97, 96, 61, 46, 59, 52, 61, 228, 85, 197, 189, 33, 243, 43, 190, 88, 80, 38, 190, 74, 210, 126, 61, 150, 202, 19, 62, 28, 3, 144, 188, 128, 145, 225, 61, 25, 130, 141, 189, 94, 8, 5, 62, 65, 217, 140, 189, 149, 61, 234, 189, 120, 27, 17, 189, 48, 129, 251, 188, 45, 106, 37, 190, 196, 227, 246, 188, 75, 241, 233, 61, 142, 104, 132, 61, 77, 253, 200, 61, 164, 19, 27, 190, 172, 139, 129, 62, 117, 62, 98, 62, 194, 141, 55, 191, 31, 100, 151, 189, 247, 119, 26, 190, 121, 31, 181, 60, 59, 113, 237, 61, 202, 138, 116, 191, 198, 107, 197, 189, 174, 173, 95, 191, 40, 4, 67, 188, 88, 30, 115, 62, 245, 55, 226, 189, 19, 166, 28, 191, 1, 199, 147, 62, 199, 254, 41, 191, 190, 71, 177, 190, 83, 142, 63, 191, 101, 94, 196, 190, 8, 143, 205, 62, 137, 223, 224, 189, 151, 71, 192, 190, 178, 196, 30, 190, 137, 237, 25, 62, 91, 107, 138, 61, 62, 124, 134, 61, 30, 198, 198, 62, 210, 174, 23, 62, 232, 173, 191, 187, 237, 75, 65, 62, 5, 68, 174, 189, 178, 17, 148, 59, 153, 42, 139, 189, 3, 202, 199, 189, 83, 137, 26, 190, 63, 248, 226, 188, 10, 31, 241, 188, 231, 1, 147, 189, 167, 228, 201, 189, 243, 51, 192, 189, 12, 170, 245, 189, 212, 244, 189, 189, 107, 110, 139, 189, 69, 249, 25, 190, 178, 15, 129, 60, 193, 42, 203, 188, 197, 97, 114, 60, 106, 203, 187, 61, 36, 235, 167, 59, 68, 142, 15, 190, 0, 240, 230, 189, 22, 249, 27, 190, 72, 210, 167, 61, 238, 147, 18, 62, 77, 41, 11, 190, 155, 84, 229, 189, 185, 211, 59, 189, 89, 56, 40, 61, 249, 1, 239, 61, 167, 91, 178, 189, 75, 71, 9, 60, 52, 73, 222, 61, 153, 116, 78, 61, 196, 140, 86, 60, 226, 217, 105, 188, 183, 117, 249, 189, 97, 189, 3, 190, 155, 227, 184, 60, 17, 235, 3, 190, 149, 252, 35, 190, 89, 190, 153, 61, 71, 247, 7, 190, 127, 235, 17, 62, 64, 189, 122, 60, 81, 242, 82, 58, 177, 239, 20, 190, 101, 110, 25, 190, 154, 53, 9, 62, 248, 131, 4, 190, 199, 147, 237, 188, 161, 149, 0, 62, 180, 124, 5, 189, 119, 41, 163, 189, 72, 41, 195, 189, 38, 169, 229, 189, 75, 101, 228, 60, 22, 159, 66, 61, 12, 227, 39, 61, 119, 149, 48, 190, 9, 105, 182, 61, 209, 143, 234, 61, 226, 179, 32, 190, 104, 111, 48, 190, 131, 127, 143, 189, 231, 223, 24, 61, 70, 236, 116, 190, 14, 196, 140, 62, 55, 65, 128, 62, 149, 154, 218, 189, 10, 7, 173, 190, 37, 25, 35, 62, 103, 47, 60, 60, 120, 3, 224, 61, 211, 182, 233, 190, 65, 145, 156, 190, 237, 192, 90, 62, 140, 67, 19, 191, 106, 220, 128, 62, 109, 147, 154, 62, 19, 163, 101, 191, 6, 54, 253, 61, 24, 53, 143, 61, 192, 192, 60, 61, 129, 177, 166, 60, 79, 234, 154, 191, 130, 182, 5, 62, 253, 165, 18, 62, 88, 209, 197, 61, 24, 38, 46, 62, 98, 20, 188, 61, 229, 242, 136, 190, 154, 220, 106, 190, 118, 194, 71, 62, 149, 128, 188, 61, 127, 24, 135, 62, 0, 29, 92, 62, 211, 239, 204, 189, 49, 213, 188, 189, 111, 99, 164, 189, 253, 95, 212, 189, 181, 200, 70, 61, 193, 92, 134, 61, 222, 245, 216, 189, 33, 237, 224, 188, 217, 187, 255, 61, 215, 25, 167, 58, 16, 187, 50, 190, 36, 173, 215, 189, 150, 93, 26, 190, 7, 64, 83, 189, 216, 123, 208, 60, 49, 216, 208, 189, 224, 106, 138, 189, 146, 178, 9, 62, 34, 80, 175, 189, 249, 255, 79, 190, 199, 19, 190, 61, 136, 67, 11, 190, 227, 26, 33, 188, 13, 72, 44, 190, 135, 244, 172, 61, 195, 96, 28, 190, 41, 120, 234, 61, 138, 66, 160, 189, 78, 39, 14, 60, 45, 73, 87, 189, 229, 115, 33, 60, 108, 200, 33, 62, 63, 250, 253, 189, 42, 96, 14, 190, 124, 69, 128, 61, 123, 228, 205, 190, 100, 108, 29, 61, 127, 122, 249, 189, 196, 147, 87, 60, 242, 11, 59, 189, 54, 215, 212, 190, 19, 72, 164, 189, 26, 108, 177, 61, 74, 238, 148, 62, 0, 121, 215, 189, 13, 9, 102, 190, 11, 204, 1, 62, 68, 61, 40, 62, 116, 110, 234, 62, 184, 46, 116, 188, 234, 238, 6, 61, 82, 193, 9, 190, 251, 54, 48, 190, 69, 53, 61, 189, 42, 39, 174, 61, 200, 97, 78, 190, 254, 88, 159, 61, 70, 12, 84, 61, 82, 132, 130, 188, 104, 57, 66, 61, 142, 88, 133, 62, 38, 188, 69, 62, 101, 1, 14, 61, 88, 199, 133, 189, 164, 107, 232, 61, 182, 200, 251, 189, 42, 92, 248, 189, 91, 140, 37, 189, 250, 17, 199, 189, 188, 98, 9, 188, 91, 33, 164, 62, 226, 49, 86, 61, 55, 146, 5, 190, 159, 152, 152, 190, 207, 97, 45, 61, 106, 246, 69, 60, 99, 32, 105, 190, 157, 217, 224, 61, 152, 236, 205, 189, 14, 171, 249, 60, 19, 146, 138, 62, 26, 222, 124, 190, 59, 252, 194, 190, 104, 218, 253, 190, 22, 134, 186, 189, 228, 42, 87, 190, 212, 215, 62, 60, 195, 149, 115, 62, 225, 46, 123, 62, 107, 174, 47, 189, 204, 175, 168, 61, 103, 128, 69, 189, 144, 78, 57, 62, 47, 82, 83, 60, 254, 55, 70, 62, 107, 72, 18, 61, 57, 55, 146, 188, 185, 111, 94, 190, 96, 35, 246, 187, 205, 168, 21, 62, 179, 100, 224, 189, 46, 224, 56, 190, 52, 217, 94, 190, 41, 177, 201, 189, 8, 108, 19, 61, 110, 197, 205, 61, 1, 245, 91, 188, 186, 228, 124, 61, 72, 206, 236, 61, 11, 121, 62, 190, 14, 184, 120, 61, 14, 141, 229, 59, 196, 7, 39, 62, 65, 68, 181, 189, 196, 202, 38, 62, 196, 130, 60, 190, 210, 93, 136, 189, 135, 213, 235, 61, 34, 53, 232, 188, 20, 174, 152, 189, 13, 250, 40, 190, 67, 33, 169, 61, 63, 153, 177, 189, 79, 15, 223, 61, 6, 1, 78, 190, 151, 2, 181, 61, 60, 162, 36, 190, 82, 199, 222, 61, 206, 35, 191, 189, 122, 254, 176, 188, 93, 182, 63, 188, 203, 11, 140, 190, 254, 58, 66, 62, 216, 181, 109, 188, 40, 62, 54, 191, 129, 146, 110, 190, 233, 0, 68, 190, 196, 126, 11, 191, 75, 154, 121, 190, 186, 155, 6, 63, 242, 227, 72, 62, 102, 24, 41, 191, 35, 169, 73, 189, 243, 150, 66, 190, 231, 100, 116, 62, 50, 77, 29, 190, 244, 132, 235, 62, 103, 74, 128, 189, 152, 120, 255, 189, 32, 91, 20, 191, 226, 13, 150, 190, 244, 14, 82, 191, 105, 62, 173, 61, 189, 126, 203, 189, 160, 175, 52, 191, 158, 254, 70, 62, 185, 176, 90, 191, 189, 173, 75, 189, 244, 236, 161, 188, 167, 249, 114, 190, 245, 84, 67, 61, 22, 247, 186, 187, 119, 59, 170, 189, 54, 48, 4, 190, 150, 33, 4, 62, 198, 87, 155, 189, 218, 210, 168, 61, 33, 185, 28, 62, 224, 32, 40, 190, 253, 171, 180, 188, 252, 58, 34, 190, 114, 21, 9, 190, 201, 89, 46, 62, 5, 89, 25, 189, 56, 167, 134, 60, 102, 38, 171, 189, 174, 121, 132, 61, 134, 124, 73, 188, 46, 186, 15, 62, 125, 94, 204, 61, 196, 91, 198, 189, 89, 73, 32, 189, 64, 130, 216, 189, 144, 23, 27, 62, 56, 65, 5, 190, 22, 184, 37, 189, 136, 118, 239, 189, 201, 37, 199, 189, 218, 1, 30, 62, 193, 56, 120, 61, 63, 102, 212, 61, 195, 67, 63, 61, 59, 83, 206, 190, 96, 207, 131, 62, 238, 10, 31, 190, 188, 98, 81, 61, 235, 25, 12, 190, 99, 78, 21, 62, 84, 191, 55, 191, 128, 61, 134, 189, 18, 125, 172, 61, 243, 175, 163, 62, 214, 155, 18, 61, 166, 125, 7, 191, 182, 96, 143, 62, 150, 111, 78, 190, 78, 10, 1, 190, 152, 0, 40, 190, 87, 81, 83, 190, 104, 230, 169, 189, 155, 2, 114, 191, 216, 170, 56, 61, 8, 144, 195, 61, 77, 178, 183, 190, 201, 162, 77, 190, 149, 145, 58, 190, 99, 121, 150, 187, 20, 100, 68, 62, 199, 96, 6, 190, 106, 209, 170, 188, 96, 78, 203, 190, 252, 106, 100, 190, 118, 209, 0, 189, 248, 177, 92, 61, 0, 146, 211, 190, 162, 210, 164, 62, 227, 36, 107, 191, 139, 240, 98, 190, 219, 15, 123, 62, 159, 43, 72, 62, 0, 144, 108, 189, 152, 110, 144, 62, 155, 3, 171, 190, 42, 152, 10, 63, 135, 63, 186, 61, 141, 169, 240, 189, 125, 108, 22, 189, 38, 187, 227, 62, 13, 167, 125, 61, 118, 37, 33, 63, 233, 64, 142, 190, 139, 19, 178, 190, 158, 28, 238, 61, 227, 77, 142, 190, 131, 91, 208, 188, 140, 157, 205, 62, 243, 213, 227, 60, 204, 229, 120, 62, 215, 240, 19, 191, 173, 130, 79, 189, 9, 43, 209, 189, 239, 23, 72, 62, 172, 171, 124, 62, 75, 32, 230, 190, 105, 85, 8, 190, 36, 114, 61, 190, 114, 240, 63, 191, 61, 3, 0, 63, 95, 153, 204, 190, 237, 134, 131, 190, 10, 213, 189, 58, 117, 150, 25, 62, 118, 0, 202, 189, 99, 45, 88, 62, 142, 135, 109, 190, 212, 191, 161, 62, 218, 228, 202, 61, 219, 176, 57, 62, 6, 160, 49, 62, 58, 142, 158, 62, 222, 229, 73, 61, 75, 131, 94, 62, 110, 92, 75, 62, 55, 229, 42, 191, 66, 255, 141, 191, 65, 118, 154, 191, 165, 222, 19, 189, 140, 89, 254, 187, 17, 11, 128, 60, 84, 37, 71, 190, 126, 68, 34, 189, 103, 64, 174, 190, 101, 124, 191, 62, 155, 7, 56, 62, 72, 214, 223, 62, 117, 66, 96, 190, 184, 98, 14, 190, 68, 111, 33, 191, 109, 118, 5, 191, 55, 138, 165, 62, 198, 223, 212, 61, 74, 63, 14, 190, 214, 112, 9, 191, 75, 52, 173, 62, 61, 89, 233, 190, 100, 84, 255, 61, 79, 34, 185, 190, 157, 60, 186, 62, 234, 4, 129, 62, 37, 61, 102, 191, 67, 229, 154, 61, 223, 7, 111, 189, 113, 56, 159, 189, 38, 51, 33, 189, 85, 14, 137, 61, 196, 123, 12, 191, 238, 7, 114, 191, 14, 178, 64, 191, 16, 115, 112, 189, 114, 211, 55, 190, 28, 6, 83, 190, 110, 253, 100, 62, 65, 149, 230, 61, 107, 58, 177, 61, 56, 106, 239, 62, 101, 40, 184, 61, 4, 31, 148, 61, 33, 113, 19, 62, 167, 111, 2, 190, 74, 60, 150, 189, 252, 87, 45, 62, 239, 205, 254, 59, 151, 5, 39, 61, 206, 206, 169, 62, 107, 123, 39, 190, 168, 171, 170, 189, 40, 3, 116, 61, 38, 68, 52, 62, 6, 19, 28, 62, 12, 194, 104, 188, 209, 106, 30, 62, 211, 8, 114, 62, 228, 11, 238, 188, 19, 93, 68, 61, 51, 161, 7, 62, 241, 75, 9, 191, 153, 182, 84, 60, 149, 170, 208, 189, 77, 134, 212, 189, 115, 208, 58, 190, 25, 248, 231, 189, 73, 10, 41, 62, 243, 15, 113, 60, 78, 222, 207, 61, 199, 243, 195, 62, 193, 227, 92, 62, 15, 196, 117, 189, 77, 198, 105, 187, 175, 145, 178, 62, 110, 120, 13, 62, 224, 213, 239, 62, 133, 143, 5, 62, 68, 211, 234, 190, 32, 53, 24, 190, 195, 73, 93, 61, 233, 74, 46, 190, 46, 3, 134, 62, 36, 20, 92, 62, 171, 40, 166, 190, 98, 240, 28, 61, 147, 217, 90, 190, 245, 147, 177, 191, 165, 41, 206, 61, 248, 236, 155, 61, 52, 81, 29, 61, 245, 113, 30, 191, 196, 13, 235, 191, 86, 211, 143, 61, 131, 248, 131, 62, 141, 161, 139, 188, 228, 154, 183, 188, 149, 103, 86, 190, 235, 178, 48, 190, 81, 139, 252, 190, 202, 34, 31, 192, 168, 158, 217, 190, 116, 79, 115, 190, 230, 113, 94, 191, 163, 127, 156, 190, 140, 156, 214, 188, 191, 191, 8, 189, 175, 29, 108, 61, 135, 191, 151, 190, 222, 73, 19, 191, 242, 164, 15, 191, 62, 62, 191, 62, 196, 239, 130, 61, 88, 235, 230, 189, 164, 192, 220, 190, 26, 71, 185, 62, 162, 11, 163, 190, 61, 204, 33, 62, 78, 126, 217, 190, 38, 223, 142, 62, 246, 111, 154, 62, 30, 240, 79, 191, 11, 207, 90, 62, 197, 38, 130, 189, 20, 89, 211, 61, 75, 27, 210, 60, 42, 55, 76, 62, 36, 203, 53, 191, 177, 232, 99, 191, 38, 9, 54, 191, 167, 153, 76, 62, 53, 223, 214, 61, 178, 18, 222, 61, 205, 186, 9, 63, 103, 164, 29, 60, 78, 63, 190, 60, 175, 92, 229, 62, 251, 202, 116, 62, 98, 182, 50, 62, 164, 214, 36, 190, 141, 209, 142, 190, 163, 226, 44, 61, 140, 137, 131, 62, 192, 126, 109, 62, 177, 99, 29, 61, 25, 219, 47, 190, 148, 227, 30, 62, 27, 85, 28, 62, 215, 254, 13, 60, 56, 251, 186, 190, 210, 212, 204, 190, 24, 57, 72, 61, 79, 63, 227, 189, 201, 79, 35, 190, 16, 128, 61, 62, 97, 208, 79, 188, 235, 51, 149, 61, 115, 145, 62, 62, 64, 161, 150, 189, 94, 191, 198, 190, 136, 181, 85, 191, 6, 184, 124, 191, 11, 184, 66, 189, 55, 125, 49, 60, 20, 128, 39, 189, 140, 81, 107, 62, 140, 208, 133, 59, 6, 212, 166, 61, 13, 28, 0, 62, 212, 9, 140, 62, 189, 26, 212, 190, 68, 148, 68, 191, 86, 224, 158, 61, 21, 222, 215, 61, 142, 207, 210, 188, 138, 151, 163, 188, 145, 155, 187, 62, 62, 14, 149, 62, 18, 251, 164, 191, 168, 222, 55, 62, 238, 197, 3, 190, 82, 203, 145, 190, 208, 194, 40, 62, 8, 235, 94, 187, 68, 146, 234, 61, 143, 225, 122, 191, 84, 98, 112, 190, 65, 146, 87, 62, 65, 151, 15, 62, 50, 11, 14, 191, 53, 10, 22, 62, 215, 126, 33, 191, 92, 30, 38, 191, 192, 96, 53, 191, 173, 36, 77, 190, 207, 227, 242, 61, 176, 135, 129, 188, 255, 139, 32, 63, 189, 66, 41, 60, 70, 34, 3, 62, 178, 96, 12, 61, 128, 56, 79, 62, 4, 16, 140, 62, 110, 220, 170, 62, 222, 224, 230, 61, 171, 114, 11, 62, 90, 23, 136, 61, 143, 132, 131, 189, 166, 227, 165, 62, 27, 191, 248, 62, 86, 140, 97, 62, 28, 83, 201, 61, 171, 98, 127, 190, 98, 218, 93, 62, 215, 223, 3, 62, 236, 83, 164, 191, 185, 3, 20, 62, 204, 162, 15, 61, 66, 201, 236, 61, 46, 181, 194, 190, 235, 253, 4, 191, 176, 16, 45, 191, 120, 224, 247, 61, 241, 255, 40, 190, 117, 81, 74, 190, 239, 201, 156, 190, 116, 90, 176, 57, 155, 159, 68, 191, 123, 165, 170, 191, 48, 220, 191, 189, 123, 162, 127, 62, 30, 51, 187, 190, 74, 227, 81, 62, 55, 14, 237, 61, 38, 29, 53, 188, 9, 38, 74, 62, 63, 186, 169, 62, 96, 86, 133, 189, 151, 23, 0, 61, 68, 80, 12, 190, 219, 141, 140, 61, 223, 171, 48, 62, 160, 186, 250, 189, 189, 137, 127, 61, 159, 44, 199, 189, 243, 5, 98, 189, 73, 132, 131, 189, 113, 10, 206, 61, 68, 83, 39, 190, 125, 73, 161, 61, 31, 12, 194, 189, 246, 205, 90, 189, 253, 191, 17, 190, 157, 133, 131, 189, 204, 21, 110, 61, 242, 192, 117, 61, 36, 245, 117, 61, 52, 72, 40, 190, 206, 68, 140, 189, 93, 239, 68, 61, 39, 166, 20, 190, 70, 232, 168, 61, 105, 187, 12, 190, 131, 132, 170, 189, 189, 199, 130, 59, 154, 76, 198, 189, 81, 232, 97, 61, 149, 16, 106, 189, 108, 125, 49, 62, 104, 152, 250, 189, 163, 55, 210, 188, 254, 187, 150, 190, 19, 225, 136, 61, 66, 75, 109, 62, 6, 119, 188, 189, 24, 110, 126, 190, 129, 103, 51, 62, 239, 23, 137, 62, 187, 105, 35, 62, 220, 154, 87, 190, 170, 51, 59, 189, 19, 114, 35, 60, 37, 33, 37, 190, 12, 196, 204, 61, 20, 209, 49, 62, 48, 207, 235, 190, 130, 161, 128, 62, 35, 211, 61, 62, 242, 81, 75, 190, 87, 195, 154, 190, 151, 200, 165, 190, 164, 52, 150, 61, 155, 101, 12, 62, 5, 116, 74, 60, 69, 227, 14, 62, 59, 122, 86, 62, 134, 0, 253, 61, 223, 219, 45, 188, 208, 118, 162, 62, 37, 185, 81, 62, 92, 249, 67, 62, 125, 146, 46, 189, 51, 71, 34, 190, 240, 4, 62, 62, 120, 209, 4, 191, 236, 28, 202, 59, 18, 41, 223, 61, 162, 241, 40, 62, 160, 111, 57, 191, 69, 42, 218, 60, 177, 136, 81, 61, 204, 96, 239, 61, 66, 10, 201, 189, 66, 117, 8, 62, 172, 201, 37, 62, 186, 9, 28, 190, 153, 27, 88, 61, 219, 45, 25, 190, 209, 32, 93, 190, 65, 122, 61, 189, 64, 253, 251, 189, 217, 168, 193, 59, 154, 219, 149, 188, 229, 89, 21, 190, 83, 226, 4, 190, 66, 62, 28, 190, 16, 181, 156, 189, 54, 174, 164, 189, 52, 173, 82, 59, 139, 51, 153, 61, 112, 86, 247, 189, 31, 178, 230, 189, 93, 188, 157, 60, 111, 246, 69, 190, 205, 134, 68, 190, 7, 254, 172, 189, 124, 95, 232, 62, 180, 0, 229, 61, 67, 114, 220, 191, 94, 91, 165, 61, 155, 36, 250, 190, 146, 57, 177, 190, 107, 122, 214, 61, 218, 239, 129, 188, 26, 30, 117, 62, 30, 59, 4, 191, 187, 131, 213, 61, 12, 219, 138, 190, 12, 198, 230, 187, 139, 251, 187, 191, 10, 106, 252, 62, 247, 148, 192, 190, 61, 219, 20, 191, 8, 98, 229, 190, 45, 169, 25, 190, 10, 100, 250, 189, 175, 181, 91, 61, 33, 11, 57, 190, 161, 106, 72, 62, 169, 93, 136, 188, 236, 225, 19, 62, 1, 73, 22, 62, 120, 240, 142, 62, 213, 6, 8, 60, 60, 68, 33, 62, 242, 12, 192, 189, 26, 115, 21, 190, 138, 168, 14, 190, 242, 230, 119, 62, 99, 159, 162, 62, 45, 98, 58, 62, 49, 119, 53, 61, 166, 190, 224, 189, 82, 153, 166, 62, 81, 82, 35, 62, 111, 53, 131, 191, 171, 160, 198, 61, 19, 165, 236, 62, 44, 238, 74, 62, 52, 77, 7, 191, 214, 179, 61, 61, 205, 232, 136, 190, 187, 119, 131, 62, 97, 139, 42, 190, 127, 142, 4, 62, 202, 124, 146, 190, 170, 211, 210, 189, 115, 184, 105, 190, 0, 129, 9, 191, 82, 127, 27, 191, 56, 35, 50, 62, 11, 61, 22, 190, 45, 170, 195, 189, 37, 208, 92, 62, 109, 45, 54, 189, 100, 37, 75, 62, 190, 184, 186, 188, 177, 142, 15, 189, 152, 118, 15, 191, 33, 181, 248, 189, 145, 124, 230, 188, 80, 245, 224, 61, 155, 86, 109, 190, 209, 6, 7, 189, 51, 110, 22, 190, 124, 74, 153, 60, 30, 159, 98, 190, 162, 167, 47, 186, 125, 253, 3, 189, 33, 135, 36, 189, 18, 103, 113, 190, 6, 146, 69, 61, 205, 45, 49, 62, 117, 84, 37, 189, 103, 200, 7, 62, 42, 147, 43, 190, 103, 39, 115, 191, 36, 78, 155, 191, 140, 134, 85, 189, 201, 168, 118, 62, 240, 182, 95, 62, 95, 46, 42, 61, 13, 83, 175, 190, 42, 120, 136, 189, 13, 199, 22, 62, 157, 93, 223, 188, 235, 122, 188, 62, 233, 217, 192, 189, 2, 0, 173, 61, 233, 38, 157, 188, 18, 236, 136, 61, 204, 82, 152, 190, 230, 129, 144, 62, 151, 17, 222, 62, 126, 217, 13, 62, 19, 79, 129, 190, 5, 34, 103, 62, 150, 9, 226, 61, 174, 149, 179, 62, 59, 193, 39, 191, 114, 59, 46, 190, 126, 48, 175, 60, 123, 61, 148, 190, 6, 225, 145, 61, 129, 92, 27, 62, 111, 218, 14, 191, 114, 39, 23, 62, 147, 244, 124, 62, 25, 151, 62, 62, 163, 13, 215, 62, 12, 108, 30, 191, 35, 180, 15, 62, 171, 227, 183, 62, 214, 94, 175, 190, 158, 54, 155, 62, 216, 243, 33, 62, 232, 107, 167, 55, 129, 59, 218, 190, 62, 144, 115, 62, 255, 6, 142, 62, 203, 26, 77, 62, 196, 137, 114, 62, 104, 230, 208, 190, 124, 224, 16, 62, 245, 187, 19, 62, 245, 77, 87, 62, 85, 69, 194, 61, 189, 254, 162, 189, 37, 52, 13, 191, 235, 157, 119, 188, 119, 156, 153, 62, 17, 47, 147, 191, 8, 90, 81, 62, 37, 69, 10, 189, 169, 183, 181, 62, 205, 250, 176, 190, 60, 206, 60, 60, 101, 29, 134, 188, 200, 12, 200, 60, 27, 147, 173, 189, 79, 88, 182, 61, 200, 90, 173, 62, 192, 218, 47, 62, 249, 85, 154, 190, 77, 75, 208, 190, 65, 40, 15, 191, 131, 208, 227, 61, 67, 105, 93, 190, 247, 87, 152, 60, 11, 48, 118, 62, 1, 32, 139, 61, 54, 161, 218, 61, 127, 237, 125, 62, 118, 37, 94, 61, 128, 48, 239, 62, 0, 55, 182, 190, 103, 2, 15, 190, 0, 110, 234, 190, 157, 244, 191, 62, 142, 218, 45, 60, 54, 177, 2, 62, 230, 110, 162, 188, 227, 10, 76, 190, 9, 160, 231, 62, 241, 177, 129, 62, 18, 21, 133, 62, 123, 254, 155, 62, 83, 100, 124, 62, 97, 179, 65, 191, 2, 251, 219, 62, 6, 146, 146, 188, 186, 15, 65, 189, 93, 147, 174, 190, 55, 136, 145, 190, 172, 204, 132, 62, 154, 53, 12, 189, 131, 66, 146, 190, 155, 114, 10, 63, 139, 219, 64, 62, 103, 179, 233, 190, 50, 193, 55, 62, 92, 51, 80, 189, 140, 124, 107, 62, 36, 250, 44, 190, 115, 218, 146, 189, 21, 205, 177, 190};
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
                alignas(float) const unsigned char memory[] = {216, 127, 98, 62, 82, 80, 119, 60, 132, 43, 19, 190, 75, 17, 191, 62, 105, 192, 99, 189, 5, 17, 36, 190, 76, 109, 156, 62, 83, 235, 163, 189, 255, 82, 207, 62, 147, 167, 27, 62, 161, 101, 101, 190, 189, 110, 29, 61, 239, 77, 32, 190, 92, 113, 251, 190, 244, 205, 88, 190, 231, 81, 31, 62, 252, 231, 9, 187, 115, 197, 1, 62, 168, 175, 230, 60, 215, 89, 163, 188, 235, 237, 59, 190, 189, 180, 174, 61, 225, 11, 48, 62, 121, 169, 162, 188, 255, 98, 132, 62, 76, 253, 221, 190, 25, 177, 84, 62, 15, 169, 73, 61, 88, 24, 145, 62, 32, 227, 49, 62, 204, 150, 70, 61, 196, 199, 165, 60};
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
                alignas(float) const unsigned char memory[] = {153, 199, 65, 191, 215, 49, 199, 189, 41, 233, 99, 189, 15, 236, 80, 191, 79, 129, 184, 61, 78, 53, 245, 189, 213, 203, 46, 63, 50, 136, 148, 186, 188, 41, 212, 60, 130, 138, 148, 189, 103, 202, 20, 62, 31, 19, 24, 63, 170, 60, 14, 190, 197, 117, 110, 63, 243, 112, 135, 63, 125, 123, 145, 191, 245, 79, 223, 190, 52, 90, 55, 62, 99, 61, 5, 62, 222, 56, 174, 190, 23, 42, 132, 190, 103, 3, 128, 190, 26, 132, 188, 62, 167, 14, 204, 61, 8, 149, 38, 62, 57, 149, 161, 62, 58, 194, 142, 190, 21, 39, 158, 62, 194, 188, 133, 190, 62, 123, 239, 62, 226, 31, 144, 62, 66, 48, 26, 191, 224, 115, 204, 61, 89, 147, 80, 189, 105, 160, 175, 60, 112, 78, 185, 61, 106, 231, 43, 190, 152, 41, 242, 189, 121, 20, 0, 189, 111, 84, 205, 61, 48, 229, 129, 190, 63, 239, 228, 189, 12, 184, 29, 190, 77, 61, 120, 62, 65, 61, 146, 61, 188, 66, 240, 62, 68, 173, 141, 190, 101, 4, 5, 62, 30, 183, 30, 62, 58, 197, 124, 190, 244, 227, 123, 191, 64, 128, 24, 62, 12, 36, 217, 61, 192, 20, 140, 189, 51, 116, 131, 191, 38, 107, 40, 62, 153, 131, 88, 190, 34, 166, 162, 62, 4, 1, 179, 190, 0, 95, 162, 190, 160, 10, 178, 190, 76, 229, 20, 62, 157, 45, 27, 61, 250, 225, 167, 189};
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
                alignas(float) const unsigned char memory[] = {63, 44, 11, 189, 156, 67, 147, 190};
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
    alignas(float) const unsigned char memory[] = {96, 134, 125, 191, 228, 146, 50, 191, 25, 48, 211, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {175, 105, 53, 192, 91, 22, 142, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0015/steps/000000000018000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}