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
                alignas(float) const unsigned char memory[] = {3, 191, 29, 191, 182, 247, 48, 62, 75, 184, 191, 190, 14, 166, 217, 190, 99, 21, 214, 190, 59, 231, 166, 189, 49, 226, 25, 63, 86, 35, 77, 190, 138, 118, 170, 62, 59, 96, 80, 190, 101, 198, 113, 63, 68, 77, 140, 61, 82, 29, 32, 63, 93, 30, 204, 190, 117, 59, 178, 190, 150, 242, 251, 190, 240, 54, 227, 190, 39, 188, 109, 62, 241, 103, 20, 189, 151, 208, 253, 189, 104, 181, 182, 190, 40, 118, 145, 190, 213, 4, 15, 63, 198, 125, 221, 190, 209, 117, 221, 190, 185, 16, 216, 62, 30, 101, 169, 190, 33, 8, 216, 61, 22, 183, 142, 190, 235, 227, 64, 62, 101, 28, 253, 189, 245, 171, 131, 62, 95, 51, 8, 190, 2, 156, 92, 62, 117, 18, 22, 191, 148, 200, 104, 59, 232, 112, 83, 190, 168, 86, 4, 63, 232, 92, 193, 62, 141, 241, 50, 190, 183, 107, 70, 191, 168, 61, 35, 190, 17, 187, 64, 62, 138, 47, 16, 63, 119, 3, 26, 61, 108, 62, 188, 189, 252, 110, 78, 189, 171, 184, 8, 190, 219, 77, 18, 190, 96, 35, 205, 190, 22, 75, 123, 189, 112, 46, 225, 62, 21, 10, 27, 191, 168, 200, 152, 190, 88, 14, 173, 190, 205, 240, 24, 63, 50, 212, 69, 61, 1, 179, 220, 189, 217, 92, 56, 191, 212, 240, 192, 62, 181, 23, 51, 62, 18, 243, 36, 190, 178, 133, 135, 190, 211, 83, 234, 62, 136, 39, 58, 63, 56, 3, 11, 62, 244, 187, 2, 63, 222, 232, 167, 190, 38, 175, 171, 190, 70, 56, 205, 189, 60, 220, 182, 188, 99, 29, 186, 62, 11, 89, 145, 189, 234, 241, 226, 62, 148, 6, 137, 190, 7, 53, 28, 191, 152, 161, 227, 190, 85, 242, 45, 189, 249, 163, 121, 190, 80, 78, 152, 62, 68, 87, 5, 191, 197, 189, 35, 63, 209, 100, 15, 63, 201, 157, 177, 62, 172, 98, 4, 63, 187, 39, 131, 188, 236, 7, 25, 189, 86, 156, 186, 62, 133, 236, 10, 63, 86, 74, 4, 63, 246, 6, 154, 190, 133, 102, 101, 190, 65, 142, 212, 190, 85, 229, 31, 62, 72, 45, 234, 190, 135, 250, 226, 190};
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
                alignas(float) const unsigned char memory[] = {161, 254, 244, 190, 148, 50, 250, 190, 116, 197, 171, 61, 209, 85, 24, 62, 50, 252, 86, 62, 15, 15, 148, 189, 64, 254, 200, 62, 233, 135, 32, 189, 61, 220, 107, 190, 242, 114, 205, 190, 222, 99, 161, 62, 153, 200, 49, 63, 24, 213, 16, 191, 124, 25, 15, 63, 135, 215, 213, 62, 114, 182, 176, 190, 93, 234, 175, 62, 148, 57, 15, 190, 154, 32, 51, 60, 59, 38, 154, 62, 191, 214, 177, 190, 23, 191, 239, 62, 218, 99, 195, 62, 164, 75, 162, 190, 175, 119, 35, 63, 4, 223, 24, 189, 132, 88, 89, 190, 214, 149, 210, 190, 7, 98, 13, 191, 14, 123, 214, 61, 230, 215, 27, 190, 220, 8, 189, 189};
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
                alignas(float) const unsigned char memory[] = {172, 231, 197, 189, 208, 228, 73, 186, 118, 96, 76, 62, 52, 204, 83, 62, 76, 160, 188, 59, 75, 237, 177, 189, 157, 130, 130, 61, 242, 131, 41, 62, 81, 55, 91, 60, 120, 14, 153, 189, 248, 87, 11, 62, 90, 25, 244, 189, 170, 100, 40, 62, 49, 147, 42, 190, 122, 245, 40, 62, 134, 38, 136, 189, 7, 210, 73, 60, 172, 103, 96, 190, 82, 31, 82, 62, 28, 209, 15, 190, 9, 34, 136, 61, 159, 168, 22, 62, 43, 157, 119, 189, 56, 129, 13, 61, 197, 19, 23, 59, 226, 71, 43, 189, 245, 148, 203, 61, 15, 96, 2, 62, 228, 94, 22, 62, 79, 219, 118, 189, 111, 109, 5, 62, 175, 128, 163, 61, 224, 178, 43, 62, 216, 35, 63, 188, 185, 179, 46, 61, 13, 179, 80, 62, 28, 41, 9, 190, 244, 123, 51, 190, 19, 244, 188, 189, 193, 40, 63, 62, 233, 23, 121, 189, 33, 104, 126, 60, 34, 26, 107, 61, 235, 186, 42, 62, 185, 243, 156, 58, 133, 101, 49, 189, 46, 2, 23, 61, 223, 92, 192, 189, 173, 194, 75, 190, 190, 251, 191, 189, 210, 45, 226, 189, 111, 32, 158, 60, 125, 23, 18, 190, 248, 181, 23, 62, 160, 41, 72, 62, 222, 131, 182, 61, 53, 55, 62, 62, 44, 228, 224, 189, 24, 146, 0, 190, 137, 117, 216, 189, 2, 87, 80, 189, 90, 166, 101, 61, 96, 176, 199, 189, 12, 193, 16, 190, 235, 3, 92, 59, 221, 126, 194, 189, 72, 144, 35, 189, 159, 245, 132, 61, 30, 68, 61, 61, 211, 72, 152, 189, 105, 35, 194, 60, 105, 138, 226, 61, 98, 199, 181, 61, 203, 213, 83, 61, 153, 0, 110, 61, 188, 172, 45, 189, 120, 138, 231, 188, 106, 155, 164, 189, 201, 105, 51, 61, 112, 6, 141, 190, 104, 101, 182, 59, 149, 235, 103, 190, 133, 131, 203, 189, 237, 70, 59, 62, 221, 26, 136, 189, 182, 134, 80, 62, 21, 120, 81, 190, 14, 239, 146, 189, 216, 161, 28, 62, 25, 100, 164, 189, 29, 117, 254, 189, 121, 5, 195, 61, 106, 60, 52, 62, 43, 152, 9, 62, 247, 145, 21, 62, 59, 72, 165, 189, 248, 34, 76, 189, 168, 185, 117, 189, 218, 102, 16, 61, 153, 91, 230, 61, 254, 92, 37, 190, 79, 129, 188, 61, 254, 243, 30, 189, 50, 74, 45, 190, 1, 46, 238, 61, 96, 167, 40, 190, 199, 248, 48, 190, 184, 127, 168, 189, 183, 163, 32, 190, 86, 219, 217, 188, 96, 166, 76, 190, 66, 175, 208, 189, 86, 90, 12, 60, 241, 47, 105, 188, 214, 142, 2, 62, 95, 147, 23, 190, 225, 60, 51, 190, 104, 16, 61, 61, 82, 192, 57, 190, 104, 82, 39, 190, 244, 150, 33, 190, 3, 44, 14, 62, 156, 117, 68, 189, 28, 190, 65, 189, 36, 153, 209, 61, 152, 177, 131, 60, 54, 205, 8, 62, 73, 4, 33, 62, 73, 255, 242, 189, 65, 79, 142, 61, 147, 5, 14, 59, 60, 51, 0, 190, 164, 96, 76, 62, 135, 207, 58, 62, 255, 202, 105, 61, 17, 66, 5, 189, 100, 204, 173, 61, 107, 55, 30, 189, 121, 191, 239, 189, 183, 158, 106, 62, 116, 183, 173, 61, 219, 68, 240, 61, 0, 8, 2, 190, 168, 240, 149, 60, 71, 227, 220, 189, 152, 128, 40, 62, 21, 28, 45, 62, 18, 218, 50, 62, 14, 152, 229, 189, 83, 216, 72, 61, 156, 66, 135, 60, 100, 134, 110, 187, 13, 237, 37, 189, 152, 132, 191, 60, 180, 89, 118, 61, 97, 25, 42, 190, 181, 94, 164, 189, 137, 152, 238, 189, 40, 251, 14, 188, 224, 104, 21, 62, 108, 55, 48, 61, 24, 166, 229, 189, 183, 24, 63, 190, 250, 105, 233, 61, 109, 141, 83, 190, 48, 19, 202, 190, 110, 53, 145, 189, 112, 146, 161, 188, 222, 141, 100, 61, 159, 1, 185, 190, 138, 197, 119, 61, 153, 152, 206, 189, 86, 121, 149, 61, 72, 29, 138, 189, 136, 146, 121, 62, 39, 22, 192, 188, 35, 247, 167, 189, 106, 228, 156, 190, 152, 101, 91, 62, 175, 131, 179, 190, 5, 221, 117, 190, 167, 235, 137, 62, 35, 147, 125, 189, 26, 179, 242, 60, 209, 197, 162, 62, 198, 78, 200, 189, 111, 70, 197, 61, 227, 21, 198, 189, 218, 143, 48, 62, 8, 156, 125, 189, 20, 43, 178, 58, 75, 113, 202, 60, 3, 145, 15, 190, 135, 90, 230, 61, 235, 187, 153, 187, 128, 248, 1, 61, 152, 50, 182, 189, 33, 179, 215, 188, 95, 46, 230, 189, 15, 156, 201, 61, 210, 28, 134, 61, 70, 119, 127, 60, 191, 19, 172, 189, 231, 160, 148, 189, 161, 82, 184, 189, 208, 194, 67, 62, 120, 75, 79, 190, 224, 202, 136, 188, 184, 75, 237, 189, 151, 6, 119, 61, 40, 148, 219, 61, 97, 107, 241, 188, 169, 11, 194, 61, 226, 0, 38, 189, 80, 36, 121, 188, 20, 176, 202, 58, 183, 245, 222, 61, 32, 188, 105, 62, 235, 155, 219, 61, 221, 225, 84, 61, 83, 118, 243, 61, 49, 88, 130, 187, 197, 145, 153, 61, 202, 253, 35, 62, 158, 21, 152, 189, 65, 93, 52, 189, 143, 117, 197, 189, 55, 125, 250, 189, 252, 243, 184, 189, 183, 3, 168, 188, 126, 168, 36, 60, 126, 124, 182, 189, 177, 106, 144, 61, 153, 11, 83, 61, 46, 142, 253, 61, 41, 94, 27, 62, 45, 138, 236, 189, 229, 138, 41, 190, 146, 47, 209, 61, 179, 193, 38, 190, 76, 145, 9, 190, 96, 105, 238, 189, 11, 166, 239, 60, 225, 30, 248, 189, 69, 253, 201, 189, 234, 30, 52, 190, 27, 188, 155, 61, 88, 113, 81, 189, 193, 231, 179, 61, 125, 83, 29, 189, 150, 255, 21, 61, 172, 208, 85, 189, 138, 196, 51, 190, 3, 121, 15, 190, 140, 64, 40, 190, 215, 209, 140, 61, 171, 167, 241, 60, 89, 186, 217, 61, 21, 98, 130, 61, 98, 204, 10, 190, 238, 154, 34, 190, 242, 141, 1, 62, 197, 2, 4, 62, 68, 115, 85, 187, 163, 253, 119, 61, 138, 234, 80, 61, 162, 95, 172, 189, 190, 225, 184, 186, 46, 214, 213, 61, 216, 58, 53, 190, 63, 49, 235, 189, 248, 21, 9, 190, 160, 183, 149, 187, 85, 152, 1, 62, 189, 201, 14, 60, 155, 113, 21, 62, 52, 88, 44, 189, 214, 97, 159, 189, 230, 228, 21, 190, 66, 206, 253, 186, 169, 162, 182, 61, 191, 208, 10, 60, 243, 237, 123, 189, 30, 95, 117, 61, 13, 208, 37, 62, 227, 48, 33, 190, 66, 45, 245, 61, 164, 32, 25, 190, 191, 26, 148, 189, 205, 145, 225, 59, 216, 167, 120, 62, 70, 74, 45, 189, 185, 161, 2, 188, 217, 119, 191, 188, 209, 150, 191, 189, 47, 49, 212, 61, 48, 62, 7, 62, 34, 135, 175, 188, 25, 145, 204, 61, 44, 37, 3, 61, 203, 156, 219, 61, 70, 28, 132, 190, 253, 129, 165, 58, 137, 179, 185, 61, 93, 244, 121, 189, 56, 95, 89, 190, 179, 187, 59, 189, 73, 48, 104, 189, 54, 171, 217, 189, 75, 40, 141, 61, 106, 127, 183, 189, 83, 54, 121, 60, 10, 172, 69, 62, 14, 196, 160, 189, 205, 103, 192, 61, 164, 109, 7, 62, 193, 21, 244, 61, 239, 196, 93, 189, 236, 29, 169, 60, 35, 25, 138, 61, 210, 228, 83, 190, 161, 174, 34, 61, 47, 199, 13, 61, 100, 23, 51, 58, 103, 159, 21, 62, 178, 244, 0, 62, 167, 214, 108, 186, 180, 170, 240, 189, 77, 62, 7, 190, 91, 208, 145, 61, 246, 113, 221, 189, 103, 132, 245, 188, 39, 29, 129, 189, 18, 135, 3, 188, 65, 209, 201, 189, 235, 163, 41, 190, 80, 254, 97, 61, 240, 193, 200, 60, 55, 183, 186, 189, 94, 122, 133, 60, 69, 35, 240, 61, 38, 123, 3, 189, 160, 250, 142, 187, 236, 211, 91, 61, 204, 162, 130, 189, 170, 20, 119, 189, 53, 108, 146, 61, 175, 247, 27, 62, 252, 216, 47, 190, 46, 125, 55, 190, 174, 113, 98, 61, 240, 105, 17, 62, 199, 203, 25, 62, 108, 186, 59, 60, 38, 188, 82, 61, 48, 66, 246, 187, 38, 193, 206, 189, 146, 41, 95, 189, 215, 24, 11, 62, 170, 207, 234, 189, 80, 205, 249, 61, 203, 219, 181, 189, 183, 243, 10, 62, 171, 54, 230, 60, 220, 35, 31, 190, 8, 209, 247, 189, 240, 3, 209, 61, 40, 99, 8, 60, 110, 89, 233, 188, 253, 171, 80, 189, 53, 222, 75, 60, 55, 149, 159, 189, 206, 130, 173, 189, 110, 210, 89, 189, 187, 54, 178, 189, 87, 30, 42, 61, 222, 139, 38, 62, 28, 152, 248, 189, 47, 231, 160, 61, 155, 205, 35, 62, 145, 140, 60, 61, 73, 16, 11, 62, 98, 80, 21, 190, 223, 34, 46, 190, 83, 134, 20, 62, 249, 106, 21, 190, 241, 192, 230, 189, 125, 174, 89, 190, 16, 186, 59, 58, 147, 157, 64, 62, 34, 17, 219, 61, 135, 239, 144, 189, 192, 215, 49, 182, 229, 49, 7, 61, 55, 147, 64, 188, 34, 251, 20, 61, 86, 102, 126, 189, 121, 93, 128, 59, 126, 36, 97, 61, 49, 124, 144, 61, 150, 231, 168, 61, 123, 217, 135, 188, 3, 253, 251, 61, 241, 33, 45, 62, 168, 118, 202, 189, 237, 130, 209, 60, 195, 229, 242, 189, 10, 42, 245, 189, 21, 146, 200, 61, 103, 79, 33, 62, 190, 36, 87, 188, 16, 233, 87, 61, 60, 187, 37, 190, 142, 29, 83, 61, 185, 123, 114, 189, 9, 83, 132, 61, 118, 137, 30, 62, 244, 160, 77, 190, 156, 105, 24, 62, 148, 88, 76, 62, 158, 194, 93, 189, 159, 229, 32, 62, 223, 217, 250, 60, 172, 16, 21, 62, 3, 87, 204, 61, 182, 90, 234, 61, 192, 197, 147, 182, 77, 114, 254, 188, 242, 149, 167, 185, 172, 95, 190, 189, 102, 245, 144, 61, 115, 255, 34, 190, 241, 191, 156, 189, 241, 204, 59, 190, 119, 235, 33, 61, 80, 179, 248, 188, 229, 81, 67, 190, 175, 109, 109, 61, 236, 50, 197, 188, 97, 133, 150, 189, 26, 55, 236, 189, 121, 237, 113, 190, 75, 206, 1, 61, 84, 148, 195, 189, 7, 171, 203, 189, 63, 30, 128, 189, 149, 14, 132, 61, 9, 176, 89, 61, 60, 101, 241, 61, 156, 88, 41, 62, 179, 38, 59, 62, 32, 212, 144, 189, 122, 101, 30, 62, 71, 95, 160, 62, 195, 158, 174, 189, 100, 142, 34, 61, 20, 206, 55, 190, 158, 245, 43, 190, 57, 35, 154, 61, 160, 4, 81, 187, 160, 47, 10, 189, 73, 62, 26, 62, 236, 74, 98, 189, 111, 160, 73, 61, 223, 193, 39, 189, 230, 70, 144, 62, 33, 15, 30, 190, 92, 42, 106, 61, 243, 61, 137, 62, 203, 166, 2, 190, 133, 177, 11, 190, 109, 41, 0, 61, 5, 220, 32, 61, 99, 60, 59, 61, 158, 144, 57, 189, 46, 211, 165, 190, 2, 171, 221, 189, 7, 224, 85, 190, 236, 149, 4, 62, 228, 66, 35, 62, 86, 91, 37, 190, 193, 66, 183, 61, 193, 173, 234, 188, 210, 92, 167, 59, 248, 242, 36, 61, 232, 200, 182, 60, 244, 133, 165, 189, 206, 15, 192, 189, 253, 172, 151, 187, 177, 169, 166, 189, 82, 189, 188, 61, 159, 229, 38, 62, 177, 113, 135, 189, 27, 36, 147, 61, 86, 18, 46, 62, 59, 152, 41, 186, 44, 16, 149, 61, 42, 134, 113, 61, 87, 143, 4, 190, 175, 55, 28, 62, 161, 253, 67, 189, 204, 216, 156, 189, 215, 207, 190, 61, 189, 239, 210, 61, 129, 22, 62, 61, 242, 160, 227, 61, 187, 210, 151, 188, 72, 175, 154, 189, 254, 237, 201, 61, 115, 2, 222, 61, 193, 195, 58, 190, 110, 51, 182, 61, 237, 214, 30, 190, 133, 127, 98, 61, 148, 178, 128, 61, 157, 115, 39, 61, 213, 56, 0, 190, 83, 239, 169, 61, 11, 24, 210, 189, 189, 15, 18, 190, 135, 125, 107, 61, 57, 248, 3, 189, 185, 235, 14, 188, 181, 165, 136, 190, 8, 72, 26, 62, 228, 2, 130, 61, 209, 63, 46, 189, 206, 90, 42, 62, 170, 17, 32, 62, 143, 74, 37, 189, 237, 119, 137, 188, 16, 83, 166, 188, 206, 233, 3, 190, 172, 122, 40, 61, 19, 36, 219, 189, 178, 173, 214, 189, 49, 235, 66, 190, 236, 125, 158, 61, 108, 99, 18, 61, 86, 213, 58, 60, 20, 161, 13, 188, 234, 207, 218, 59, 88, 67, 88, 189, 161, 156, 6, 61, 185, 10, 24, 190, 45, 79, 10, 62, 121, 183, 186, 61, 204, 160, 90, 189, 46, 27, 23, 61, 255, 130, 139, 62, 218, 131, 3, 59, 215, 27, 24, 189, 44, 42, 45, 62, 207, 94, 210, 189, 167, 95, 12, 189, 24, 238, 38, 62, 217, 137, 7, 189, 35, 141, 59, 62, 56, 74, 86, 190, 222, 200, 148, 61, 188, 21, 137, 62, 175, 93, 179, 59, 46, 11, 6, 190, 127, 179, 75, 62, 82, 19, 28, 62, 152, 153, 134, 190, 254, 60, 11, 62, 126, 144, 213, 189, 243, 62, 86, 61, 157, 107, 20, 62, 81, 152, 56, 189, 19, 101, 213, 189, 242, 29, 31, 62, 125, 200, 48, 190, 224, 90, 23, 190, 225, 193, 234, 189, 6, 215, 159, 61, 4, 184, 39, 62, 53, 213, 89, 189, 204, 218, 132, 190, 50, 131, 66, 62, 86, 97, 238, 61, 64, 194, 6, 189, 251, 25, 39, 190, 110, 56, 36, 189, 21, 162, 149, 188, 136, 173, 217, 61, 65, 245, 128, 62, 201, 23, 29, 61, 103, 23, 128, 61, 175, 135, 241, 188, 77, 170, 192, 189, 63, 124, 117, 62, 250, 44, 171, 60, 80, 171, 83, 61, 65, 177, 85, 62, 25, 9, 250, 61, 135, 20, 112, 189, 207, 198, 139, 189, 178, 99, 73, 189, 130, 110, 131, 61, 192, 162, 9, 189, 191, 156, 38, 62, 101, 170, 129, 190, 203, 154, 14, 190, 120, 237, 44, 190, 140, 128, 33, 190, 88, 51, 212, 61, 99, 93, 108, 190, 224, 221, 217, 55, 21, 135, 225, 188, 203, 182, 73, 59, 55, 58, 184, 189, 168, 42, 205, 62, 120, 149, 198, 59, 8, 114, 4, 191, 77, 33, 192, 190, 58, 217, 119, 60, 233, 250, 56, 189, 201, 210, 132, 62, 44, 76, 42, 190, 194, 189, 58, 62, 68, 71, 247, 189, 248, 244, 138, 61, 238, 119, 57, 62, 44, 92, 66, 62, 27, 156, 219, 61, 132, 121, 62, 62, 255, 78, 72, 60, 179, 163, 33, 190, 26, 22, 175, 61, 141, 233, 67, 189, 176, 83, 198, 61, 75, 66, 151, 62, 75, 185, 147, 190, 161, 212, 19, 190, 246, 93, 29, 190, 124, 65, 37, 190, 81, 114, 60, 190, 95, 164, 83, 190, 41, 204, 28, 62, 204, 27, 214, 189, 4, 178, 81, 61, 103, 41, 120, 62, 143, 149, 121, 189, 69, 9, 138, 189, 230, 52, 247, 61, 48, 62, 251, 61, 64, 5, 132, 61, 233, 62, 41, 62, 123, 232, 14, 62, 209, 191, 110, 61, 41, 187, 13, 190, 121, 184, 61, 190, 50, 33, 248, 61, 219, 79, 198, 61, 244, 231, 221, 61, 17, 162, 62, 189, 30, 144, 200, 61, 225, 233, 146, 189, 113, 157, 12, 190, 210, 187, 15, 62, 1, 201, 223, 189, 217, 208, 28, 62, 120, 148, 9, 190, 70, 236, 81, 190, 86, 142, 126, 189, 92, 36, 182, 60, 224, 30, 2, 190, 120, 75, 75, 62, 190, 201, 94, 61, 235, 24, 220, 189, 229, 178, 10, 190, 120, 137, 57, 190, 180, 54, 6, 62, 39, 53, 10, 60, 180, 233, 154, 61, 34, 70, 54, 190, 231, 39, 195, 61, 174, 3, 9, 62, 86, 48, 240, 61, 203, 150, 33, 62, 51, 200, 190, 59, 49, 142, 71, 188, 203, 66, 238, 61, 66, 167, 251, 187, 115, 165, 213, 61, 148, 156, 2, 188, 55, 205, 33, 190, 4, 250, 168, 190, 113, 198, 168, 189, 13, 168, 44, 190, 157, 66, 130, 190, 93, 41, 128, 62, 179, 60, 213, 189, 26, 18, 12, 62, 204, 189, 132, 62, 183, 123, 218, 188, 142, 41, 228, 61, 130, 116, 167, 61, 101, 35, 16, 61, 216, 62, 100, 184, 96, 132, 39, 190, 127, 252, 61, 190, 226, 111, 175, 61, 40, 221, 42, 62, 144, 33, 44, 59, 98, 34, 179, 189, 141, 178, 107, 62, 193, 255, 0, 61, 39, 78, 4, 62, 185, 187, 20, 61, 106, 109, 53, 188, 249, 32, 87, 190, 148, 199, 222, 188, 111, 228, 198, 61, 108, 154, 22, 188, 27, 237, 104, 62, 190, 222, 109, 188, 88, 14, 221, 61, 107, 93, 79, 189, 213, 203, 97, 62, 54, 162, 32, 190, 250, 217, 54, 189, 88, 23, 114, 62, 238, 21, 229, 188, 52, 78, 51, 62, 178, 111, 242, 61, 130, 172, 252, 61, 34, 176, 152, 189, 177, 52, 146, 189, 16, 150, 148, 189, 122, 114, 136, 61, 166, 94, 158, 60, 200, 27, 20, 61, 203, 46, 143, 189, 61, 90, 34, 190, 134, 193, 103, 60, 250, 110, 9, 62, 34, 18, 116, 189, 244, 190, 79, 62, 253, 217, 149, 189, 114, 164, 223, 61, 28, 154, 98, 189, 223, 164, 182, 189, 54, 90, 232, 189, 50, 87, 149, 61, 88, 39, 88, 62, 156, 141, 211, 61, 225, 217, 70, 62, 138, 57, 57, 61, 150, 250, 66, 60, 230, 104, 61, 62, 210, 188, 211, 61, 240, 255, 50, 61, 60, 111, 36, 62, 176, 227, 183, 60, 93, 136, 172, 189, 28, 192, 246, 60, 163, 49, 141, 61, 118, 52, 39, 190, 8, 67, 212, 61, 176, 254, 142, 61, 153, 122, 204, 189, 141, 239, 196, 61, 159, 95, 28, 61, 241, 206, 157, 188, 79, 84, 14, 188, 103, 168, 238, 189, 56, 57, 249, 61, 134, 224, 22, 189, 32, 9, 158, 189, 172, 1, 224, 187, 45, 140, 55, 190, 131, 242, 8, 190, 39, 206, 9, 61, 61, 177, 238, 60, 48, 199, 211, 189, 72, 198, 254, 188, 100, 26, 131, 60, 30, 68, 7, 190, 237, 188, 186, 60, 147, 237, 72, 190, 19, 237, 36, 62, 252, 1, 98, 189, 112, 12, 90, 62, 223, 208, 90, 61, 90, 65, 88, 61, 23, 206, 76, 189, 57, 226, 127, 189, 129, 195, 42, 62, 67, 208, 205, 189, 124, 172, 208, 61, 21, 61, 254, 60, 140, 237, 37, 62, 115, 148, 236, 61, 35, 252, 197, 189, 48, 31, 235, 61, 220, 200, 130, 61, 149, 227, 12, 62, 3, 74, 235, 189, 59, 65, 82, 187, 175, 138, 58, 62, 253, 65, 58, 62, 245, 14, 83, 61, 0, 40, 39, 60, 216, 134, 109, 190, 164, 84, 120, 188, 176, 128, 47, 190, 73, 196, 14, 62, 148, 147, 26, 189, 126, 89, 251, 60, 4, 70, 24, 189, 3, 148, 131, 189, 55, 51, 112, 62, 86, 45, 197, 61, 234, 64, 136, 190, 20, 63, 127, 190, 20, 250, 172, 61, 235, 21, 162, 189, 2, 183, 1, 190, 195, 114, 131, 189, 237, 143, 132, 61, 36, 234, 169, 61, 223, 55, 37, 189, 188, 22, 173, 190, 85, 185, 68, 190, 78, 215, 130, 189, 20, 65, 16, 190, 204, 218, 35, 62, 151, 243, 194, 61, 212, 230, 134, 188, 175, 155, 24, 189, 137, 226, 139, 61, 220, 226, 5, 62, 184, 208, 182, 190, 132, 237, 113, 62, 232, 217, 120, 62, 101, 58, 109, 61, 57, 179, 98, 189, 119, 63, 160, 189, 251, 133, 79, 190, 79, 225, 243, 60, 235, 215, 166, 62, 192, 189, 36, 190, 238, 76, 23, 62, 43, 55, 231, 61, 24, 0, 197, 61, 62, 38, 20, 62, 212, 77, 21, 62, 111, 143, 40, 190, 174, 89, 151, 62, 150, 99, 121, 62, 227, 217, 76, 189, 11, 40, 145, 188, 65, 94, 210, 189, 179, 198, 172, 61, 6, 21, 190, 189, 121, 153, 198, 189, 142, 200, 159, 190, 78, 171, 68, 61, 196, 209, 97, 190, 105, 101, 206, 189, 225, 34, 33, 62, 148, 15, 246, 61, 168, 183, 41, 62, 28, 30, 207, 189, 236, 169, 251, 60, 199, 19, 16, 190, 237, 53, 143, 61, 141, 235, 122, 190, 187, 72, 86, 59, 168, 127, 78, 187, 141, 45, 55, 60, 214, 77, 30, 190, 222, 135, 130, 190, 235, 109, 6, 189, 231, 183, 100, 189, 76, 227, 21, 190, 37, 136, 107, 61, 167, 196, 110, 190, 127, 86, 194, 60, 91, 178, 184, 61, 214, 151, 181, 189, 125, 60, 7, 189, 218, 185, 222, 61, 147, 251, 215, 189, 4, 87, 54, 61, 95, 115, 131, 190, 55, 51, 48, 190, 61, 108, 3, 190, 136, 124, 171, 188, 151, 230, 144, 61, 52, 19, 181, 61, 248, 16, 139, 61, 120, 169, 138, 188, 212, 39, 58, 190, 163, 151, 81, 61, 135, 66, 35, 62, 179, 105, 91, 60, 25, 169, 162, 189, 156, 44, 52, 190, 241, 114, 85, 61, 56, 242, 214, 60, 188, 37, 247, 61, 49, 98, 4, 62, 200, 195, 30, 190, 91, 144, 177, 189, 165, 112, 76, 188, 211, 30, 77, 189, 150, 87, 210, 61, 37, 122, 25, 190, 172, 111, 228, 188, 100, 146, 91, 60, 227, 24, 18, 188, 151, 6, 48, 190, 241, 124, 98, 188, 236, 118, 160, 189, 49, 170, 172, 189, 128, 127, 51, 190, 214, 234, 181, 58, 163, 171, 247, 187, 131, 178, 34, 190, 173, 218, 42, 190, 206, 81, 153, 61, 134, 204, 202, 189, 151, 41, 230, 189, 41, 191, 141, 61, 11, 122, 10, 190, 57, 48, 163, 188, 21, 252, 219, 189, 57, 39, 226, 189, 97, 48, 94, 62, 24, 242, 175, 189, 184, 111, 182, 61, 131, 5, 132, 61, 225, 189, 11, 190, 195, 104, 124, 60, 146, 90, 111, 189, 224, 137, 212, 59, 211, 69, 225, 189, 197, 139, 130, 60, 195, 216, 24, 61, 54, 249, 166, 61, 228, 11, 209, 189, 222, 70, 141, 62, 37, 116, 247, 189, 203, 140, 87, 60, 141, 11, 104, 190, 145, 82, 173, 60, 23, 197, 67, 62, 109, 82, 54, 190, 160, 174, 190, 189, 42, 58, 49, 190, 217, 192, 43, 190, 224, 234, 109, 190, 150, 171, 86, 61, 35, 140, 13, 61, 100, 236, 51, 190, 229, 132, 123, 61, 240, 177, 80, 190, 165, 230, 15, 188, 18, 60, 201, 61, 104, 140, 191, 60, 90, 249, 71, 62, 127, 14, 94, 62, 132, 247, 177, 189, 3, 106, 223, 190, 23, 64, 153, 190, 55, 223, 84, 190, 83, 223, 13, 62, 29, 162, 113, 62, 20, 11, 145, 61, 32, 119, 79, 62, 92, 117, 22, 190, 196, 128, 123, 57, 84, 156, 143, 62, 253, 235, 222, 61, 17, 30, 92, 61, 110, 10, 212, 61, 149, 13, 46, 61, 136, 20, 238, 189, 193, 196, 62, 187, 72, 177, 193, 61, 214, 194, 150, 189, 109, 199, 161, 62, 149, 253, 33, 190, 183, 6, 142, 187, 215, 229, 8, 190, 10, 26, 8, 190, 162, 12, 51, 190, 163, 125, 212, 189, 94, 131, 1, 62, 45, 228, 32, 62, 128, 76, 24, 61, 164, 240, 254, 61, 82, 185, 42, 189, 128, 77, 148, 57, 217, 12, 132, 60, 62, 106, 182, 61, 69, 27, 182, 60, 22, 62, 113, 61, 59, 69, 122, 60, 21, 136, 133, 189, 94, 192, 1, 190, 170, 238, 230, 189, 86, 75, 1, 61, 131, 127, 5, 190, 11, 170, 60, 62, 120, 34, 36, 61, 169, 123, 193, 61, 171, 37, 39, 61, 128, 150, 55, 60, 192, 136, 250, 60, 246, 108, 173, 189, 139, 70, 123, 189, 159, 96, 201, 61, 76, 169, 74, 62, 2, 119, 88, 62, 91, 200, 10, 61, 20, 75, 50, 189, 191, 26, 138, 189, 107, 158, 231, 189, 190, 235, 85, 61};
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
                alignas(float) const unsigned char memory[] = {41, 142, 174, 61, 185, 22, 115, 62, 230, 147, 221, 61, 51, 81, 105, 61, 251, 72, 88, 188, 123, 46, 158, 62, 56, 239, 238, 58, 109, 109, 17, 190, 37, 207, 13, 190, 248, 115, 78, 62, 38, 106, 17, 190, 109, 26, 139, 62, 51, 65, 243, 61, 159, 223, 60, 62, 243, 104, 11, 62, 247, 32, 61, 189, 107, 95, 54, 61, 133, 181, 69, 62, 123, 40, 200, 188, 88, 184, 67, 62, 224, 219, 34, 62, 193, 45, 130, 62, 213, 81, 14, 61, 60, 150, 33, 190, 235, 190, 245, 189, 153, 60, 121, 62, 29, 34, 168, 61, 220, 84, 110, 188, 17, 183, 172, 61, 159, 77, 21, 190, 235, 120, 253, 61, 65, 163, 111, 61};
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
                alignas(float) const unsigned char memory[] = {121, 172, 81, 190, 29, 99, 223, 189, 30, 10, 17, 190, 196, 86, 19, 61, 45, 211, 5, 62, 41, 133, 254, 190, 231, 136, 253, 61, 19, 28, 208, 187, 59, 255, 158, 189, 74, 144, 50, 190, 21, 191, 2, 190, 118, 71, 45, 190, 47, 29, 118, 61, 118, 66, 247, 189, 9, 96, 146, 61, 23, 195, 4, 61, 200, 114, 38, 62, 193, 54, 91, 62, 18, 158, 125, 62, 126, 94, 211, 62, 146, 179, 75, 190, 18, 66, 83, 190, 114, 151, 60, 62, 103, 124, 239, 61, 186, 123, 216, 61, 247, 253, 128, 190, 101, 120, 151, 62, 39, 130, 9, 62, 83, 191, 32, 61, 94, 222, 80, 62, 104, 80, 50, 62, 204, 8, 10, 62, 28, 235, 24, 62, 217, 202, 240, 189, 7, 92, 132, 186, 160, 13, 17, 62, 2, 148, 10, 190, 64, 86, 24, 190, 198, 178, 31, 61, 10, 167, 243, 61, 7, 207, 5, 190, 94, 198, 208, 189, 169, 73, 116, 61, 74, 144, 49, 190, 115, 93, 64, 190, 58, 200, 30, 190, 67, 48, 35, 60, 176, 169, 59, 189, 10, 67, 243, 189, 222, 1, 57, 190, 182, 95, 171, 61, 97, 91, 68, 189, 214, 74, 155, 61, 189, 138, 37, 190, 219, 25, 33, 190, 45, 73, 107, 60, 107, 217, 166, 60, 133, 6, 64, 190, 191, 176, 194, 189, 130, 76, 39, 61, 107, 182, 234, 61, 162, 125, 31, 62, 157, 12, 241, 188, 214, 138, 21, 61};
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
                alignas(float) const unsigned char memory[] = {15, 228, 103, 188, 106, 95, 100, 61};
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
    alignas(float) const unsigned char memory[] = {181, 14, 20, 63, 126, 182, 103, 191, 70, 22, 47, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {27, 93, 14, 64, 232, 241, 27, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0091/steps/000000000002000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}