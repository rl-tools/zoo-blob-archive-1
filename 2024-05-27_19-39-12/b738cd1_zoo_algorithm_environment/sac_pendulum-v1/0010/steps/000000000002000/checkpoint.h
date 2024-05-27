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
                alignas(float) const unsigned char memory[] = {28, 131, 117, 62, 1, 238, 1, 190, 108, 70, 2, 191, 187, 214, 181, 189, 24, 147, 101, 61, 126, 42, 113, 188, 124, 40, 7, 190, 9, 3, 166, 190, 116, 23, 150, 62, 216, 243, 174, 61, 57, 76, 108, 62, 8, 114, 201, 62, 52, 38, 233, 190, 96, 219, 11, 191, 36, 34, 163, 62, 157, 76, 194, 61, 231, 136, 216, 190, 102, 134, 113, 190, 160, 192, 208, 62, 136, 250, 53, 191, 148, 141, 220, 190, 54, 251, 174, 61, 231, 139, 107, 191, 172, 223, 61, 59, 3, 117, 205, 189, 35, 133, 94, 191, 250, 131, 29, 62, 214, 21, 131, 190, 94, 223, 250, 62, 22, 17, 38, 191, 248, 110, 132, 62, 149, 29, 42, 63, 235, 58, 96, 190, 132, 77, 249, 62, 143, 61, 26, 63, 12, 253, 198, 62, 160, 235, 177, 62, 244, 153, 129, 190, 201, 199, 161, 190, 132, 122, 8, 191, 202, 77, 51, 63, 254, 114, 122, 62, 0, 75, 6, 63, 118, 27, 90, 191, 92, 223, 59, 62, 247, 83, 206, 189, 32, 17, 118, 60, 196, 212, 164, 189, 8, 14, 83, 61, 1, 87, 97, 63, 10, 149, 5, 63, 112, 94, 188, 62, 191, 178, 182, 59, 25, 168, 198, 190, 179, 12, 219, 190, 13, 42, 137, 62, 215, 124, 1, 191, 136, 42, 20, 61, 152, 192, 148, 189, 17, 73, 196, 188, 128, 122, 215, 189, 104, 40, 139, 190, 140, 64, 2, 62, 62, 99, 44, 63, 227, 199, 219, 190, 178, 85, 23, 63, 77, 75, 146, 62, 228, 69, 199, 61, 197, 247, 165, 189, 82, 135, 143, 61, 4, 207, 197, 190, 109, 248, 139, 189, 233, 34, 165, 190, 71, 100, 61, 63, 89, 57, 119, 189, 71, 63, 195, 190, 247, 56, 231, 189, 19, 98, 239, 62, 39, 51, 83, 190, 255, 121, 73, 63, 171, 255, 134, 190, 202, 114, 247, 189, 33, 92, 198, 190, 31, 234, 115, 190, 35, 218, 192, 62, 47, 89, 43, 63, 184, 235, 172, 190, 102, 179, 83, 190, 228, 34, 72, 63, 141, 140, 93, 190, 84, 87, 48, 191, 162, 35, 75, 191, 118, 83, 39, 62, 228, 70, 171, 62, 201, 1, 160, 190, 71, 191, 33, 62};
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
                alignas(float) const unsigned char memory[] = {187, 128, 44, 191, 120, 247, 230, 62, 217, 108, 155, 188, 76, 249, 212, 190, 6, 43, 92, 190, 165, 134, 97, 61, 102, 254, 158, 189, 21, 74, 78, 62, 58, 184, 230, 62, 97, 251, 177, 62, 219, 246, 2, 63, 10, 134, 65, 190, 232, 161, 19, 63, 225, 172, 83, 62, 88, 10, 68, 187, 55, 255, 11, 63, 14, 184, 235, 62, 49, 92, 73, 61, 85, 105, 51, 191, 122, 170, 108, 190, 53, 206, 8, 191, 39, 22, 244, 60, 146, 143, 39, 63, 41, 59, 7, 63, 124, 52, 112, 61, 155, 182, 225, 62, 6, 72, 107, 62, 18, 226, 10, 63, 79, 193, 174, 190, 91, 83, 172, 62, 129, 176, 2, 191, 14, 199, 82, 190};
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
                alignas(float) const unsigned char memory[] = {14, 216, 132, 190, 233, 243, 42, 62, 142, 139, 3, 191, 213, 177, 152, 189, 15, 20, 82, 190, 181, 213, 195, 189, 224, 15, 138, 190, 60, 154, 136, 190, 91, 24, 131, 188, 26, 153, 247, 61, 221, 35, 181, 189, 105, 137, 22, 189, 94, 65, 178, 60, 63, 99, 183, 189, 35, 155, 214, 189, 120, 236, 72, 62, 236, 43, 9, 190, 85, 19, 114, 190, 159, 201, 228, 189, 230, 188, 191, 61, 162, 255, 54, 189, 46, 42, 144, 190, 213, 123, 34, 60, 67, 78, 189, 188, 7, 243, 131, 61, 197, 117, 172, 189, 133, 114, 159, 62, 118, 110, 110, 61, 242, 52, 148, 190, 56, 55, 138, 62, 7, 22, 150, 189, 88, 7, 144, 188, 207, 132, 157, 189, 88, 237, 63, 190, 67, 192, 197, 189, 43, 127, 11, 62, 208, 110, 39, 61, 196, 61, 180, 60, 136, 157, 183, 188, 1, 71, 173, 189, 124, 85, 153, 189, 133, 82, 175, 61, 64, 52, 91, 190, 198, 131, 179, 61, 153, 11, 164, 61, 101, 194, 69, 190, 67, 242, 114, 61, 114, 75, 138, 189, 44, 30, 237, 59, 67, 252, 49, 190, 16, 163, 249, 61, 225, 19, 44, 62, 122, 242, 25, 62, 54, 18, 0, 190, 34, 9, 65, 190, 219, 168, 170, 189, 15, 251, 223, 188, 26, 109, 14, 62, 254, 49, 240, 59, 7, 51, 54, 188, 41, 228, 228, 189, 163, 7, 114, 189, 145, 251, 167, 60, 206, 214, 20, 62, 172, 160, 180, 190, 44, 176, 164, 61, 118, 145, 204, 61, 202, 21, 14, 62, 245, 142, 110, 190, 235, 28, 209, 189, 55, 166, 108, 190, 245, 190, 8, 189, 52, 228, 165, 189, 245, 143, 142, 61, 2, 217, 157, 61, 139, 208, 103, 62, 152, 208, 231, 61, 34, 251, 190, 189, 251, 68, 129, 61, 4, 171, 96, 61, 96, 1, 184, 61, 50, 61, 148, 189, 20, 75, 78, 190, 242, 209, 178, 60, 14, 64, 35, 62, 168, 171, 19, 62, 113, 33, 64, 62, 9, 246, 31, 190, 20, 54, 155, 61, 132, 35, 118, 61, 108, 8, 225, 62, 216, 46, 30, 190, 16, 145, 199, 189, 24, 118, 213, 62, 61, 239, 137, 190, 202, 94, 12, 188, 148, 210, 145, 188, 208, 32, 147, 189, 220, 61, 10, 62, 185, 91, 26, 189, 77, 139, 165, 62, 187, 225, 125, 61, 28, 231, 135, 62, 84, 244, 176, 62, 229, 53, 133, 62, 86, 7, 22, 62, 11, 156, 152, 189, 162, 190, 166, 190, 203, 121, 254, 61, 77, 222, 190, 189, 197, 125, 11, 61, 208, 233, 58, 62, 233, 180, 177, 190, 178, 133, 110, 60, 225, 165, 114, 62, 120, 58, 54, 61, 50, 67, 73, 61, 125, 53, 161, 61, 185, 55, 17, 190, 238, 53, 197, 189, 169, 254, 133, 189, 52, 26, 8, 190, 251, 168, 63, 189, 217, 111, 182, 61, 188, 76, 5, 61, 139, 165, 100, 189, 181, 222, 39, 62, 158, 83, 64, 190, 10, 110, 212, 189, 42, 143, 244, 189, 79, 248, 89, 62, 224, 131, 229, 189, 74, 153, 92, 62, 86, 248, 10, 189, 218, 65, 79, 59, 111, 35, 148, 62, 233, 218, 170, 60, 55, 83, 2, 189, 70, 183, 115, 189, 216, 8, 138, 190, 9, 108, 63, 62, 221, 2, 115, 188, 85, 168, 0, 190, 68, 50, 65, 61, 199, 66, 197, 60, 221, 22, 192, 61, 102, 232, 224, 189, 208, 63, 5, 190, 126, 39, 119, 190, 183, 209, 43, 190, 107, 216, 10, 62, 28, 233, 205, 61, 201, 177, 142, 190, 118, 176, 200, 60, 155, 211, 223, 189, 62, 108, 42, 61, 208, 47, 12, 62, 108, 153, 72, 190, 132, 222, 96, 62, 177, 189, 216, 60, 227, 213, 2, 58, 237, 163, 75, 190, 45, 31, 244, 188, 140, 248, 71, 62, 184, 194, 48, 61, 72, 222, 79, 61, 125, 195, 230, 60, 11, 103, 242, 189, 67, 158, 176, 189, 5, 204, 1, 62, 238, 157, 224, 60, 168, 187, 179, 61, 154, 2, 42, 189, 196, 23, 113, 59, 52, 141, 183, 61, 223, 169, 6, 190, 139, 39, 214, 188, 91, 84, 172, 61, 174, 3, 69, 190, 127, 240, 39, 60, 121, 225, 148, 61, 27, 99, 208, 61, 22, 138, 117, 187, 188, 17, 72, 61, 72, 168, 113, 189, 159, 181, 128, 188, 227, 125, 255, 61, 110, 67, 56, 190, 219, 198, 235, 189, 16, 135, 251, 188, 78, 223, 157, 189, 158, 199, 32, 62, 241, 22, 66, 188, 90, 133, 182, 59, 118, 210, 173, 61, 88, 115, 251, 61, 135, 198, 26, 190, 240, 63, 162, 189, 241, 214, 18, 62, 30, 89, 2, 190, 167, 246, 47, 190, 181, 14, 49, 190, 171, 180, 7, 62, 55, 220, 28, 190, 78, 137, 172, 61, 212, 177, 31, 189, 115, 113, 118, 189, 204, 202, 225, 59, 182, 118, 50, 190, 38, 136, 30, 62, 178, 222, 127, 189, 196, 1, 25, 190, 55, 27, 101, 189, 91, 30, 60, 187, 69, 250, 54, 190, 19, 74, 47, 61, 106, 35, 20, 190, 167, 250, 244, 188, 27, 115, 95, 60, 100, 74, 199, 61, 210, 193, 205, 61, 55, 209, 178, 189, 82, 47, 204, 61, 216, 16, 33, 62, 52, 183, 147, 189, 23, 225, 219, 188, 43, 42, 159, 188, 242, 249, 137, 190, 142, 193, 157, 188, 204, 151, 176, 189, 82, 243, 114, 62, 13, 99, 102, 62, 69, 252, 147, 62, 85, 222, 67, 189, 157, 41, 50, 61, 89, 145, 205, 190, 136, 206, 117, 62, 216, 2, 81, 190, 85, 212, 45, 62, 45, 226, 40, 62, 146, 2, 33, 61, 91, 219, 54, 62, 114, 241, 12, 61, 82, 61, 12, 190, 155, 96, 160, 61, 149, 240, 25, 61, 36, 51, 215, 189, 39, 255, 209, 59, 164, 204, 173, 61, 15, 215, 212, 189, 111, 44, 11, 189, 186, 54, 76, 62, 85, 162, 246, 61, 61, 230, 17, 62, 52, 146, 226, 62, 85, 199, 30, 190, 124, 148, 77, 190, 106, 0, 213, 60, 128, 139, 137, 61, 172, 16, 177, 61, 224, 184, 20, 62, 132, 27, 131, 190, 227, 236, 12, 190, 72, 114, 1, 190, 0, 253, 198, 61, 3, 85, 44, 189, 43, 38, 162, 62, 29, 115, 48, 62, 34, 236, 251, 189, 149, 84, 68, 62, 82, 61, 169, 189, 8, 24, 126, 61, 121, 153, 87, 60, 212, 27, 25, 190, 168, 234, 31, 190, 229, 240, 166, 61, 102, 173, 144, 60, 67, 113, 97, 60, 114, 178, 254, 61, 92, 88, 10, 60, 235, 56, 70, 62, 96, 34, 41, 62, 177, 15, 25, 62, 211, 186, 233, 189, 117, 87, 186, 189, 180, 186, 195, 60, 143, 233, 67, 189, 211, 233, 38, 62, 4, 1, 33, 190, 69, 154, 139, 61, 72, 190, 195, 61, 235, 255, 42, 190, 22, 159, 228, 61, 241, 143, 197, 61, 183, 96, 42, 62, 177, 214, 185, 62, 74, 167, 210, 62, 96, 162, 147, 190, 215, 255, 114, 190, 174, 226, 204, 190, 44, 255, 109, 189, 121, 23, 131, 61, 209, 27, 176, 189, 89, 75, 55, 61, 156, 69, 228, 189, 171, 158, 64, 62, 224, 161, 139, 190, 250, 80, 128, 189, 60, 112, 149, 189, 55, 190, 157, 190, 173, 123, 92, 62, 192, 14, 139, 62, 109, 82, 34, 61, 196, 168, 56, 60, 110, 250, 250, 190, 216, 64, 232, 61, 114, 8, 30, 189, 186, 172, 172, 190, 204, 147, 152, 62, 10, 245, 180, 189, 33, 19, 253, 186, 165, 67, 64, 62, 242, 31, 10, 62, 183, 4, 156, 61, 114, 18, 138, 189, 85, 226, 158, 60, 86, 176, 219, 61, 10, 60, 216, 61, 209, 86, 202, 189, 29, 133, 167, 189, 12, 59, 178, 60, 168, 16, 129, 189, 154, 8, 52, 190, 217, 28, 251, 189, 139, 237, 91, 62, 214, 62, 148, 61, 211, 24, 13, 62, 201, 152, 194, 61, 230, 73, 248, 187, 81, 242, 199, 189, 175, 44, 203, 189, 81, 64, 23, 187, 48, 249, 243, 61, 186, 23, 215, 189, 50, 219, 105, 62, 166, 114, 106, 188, 254, 193, 112, 61, 110, 49, 9, 190, 129, 37, 31, 60, 178, 29, 134, 62, 97, 31, 8, 190, 206, 76, 161, 60, 240, 24, 62, 189, 50, 241, 88, 61, 210, 20, 7, 189, 164, 155, 134, 189, 234, 151, 125, 61, 241, 59, 73, 61, 48, 206, 217, 189, 18, 44, 45, 187, 56, 160, 43, 62, 70, 223, 154, 190, 108, 149, 107, 190, 254, 95, 98, 188, 159, 142, 251, 189, 120, 210, 6, 62, 143, 131, 78, 190, 247, 59, 45, 62, 46, 194, 129, 59, 222, 155, 4, 190, 157, 252, 147, 190, 16, 171, 171, 188, 123, 89, 219, 189, 16, 6, 152, 61, 160, 184, 245, 189, 160, 137, 7, 62, 198, 84, 58, 189, 54, 199, 60, 62, 55, 95, 153, 190, 52, 21, 94, 62, 73, 152, 1, 62, 136, 214, 152, 189, 209, 65, 56, 62, 128, 86, 140, 60, 126, 172, 254, 189, 200, 137, 54, 189, 6, 5, 44, 189, 53, 199, 41, 62, 32, 100, 83, 190, 59, 9, 26, 190, 62, 204, 166, 189, 91, 182, 181, 190, 70, 117, 16, 190, 72, 202, 172, 61, 59, 171, 134, 62, 97, 100, 61, 62, 199, 88, 222, 59, 182, 34, 249, 61, 91, 114, 65, 62, 147, 153, 19, 62, 204, 94, 210, 189, 49, 206, 122, 190, 12, 136, 141, 190, 177, 192, 107, 61, 207, 20, 108, 62, 184, 211, 42, 62, 177, 34, 130, 61, 94, 217, 149, 61, 176, 135, 167, 61, 88, 4, 26, 190, 154, 79, 137, 62, 201, 64, 89, 189, 146, 38, 137, 190, 133, 180, 127, 62, 42, 118, 118, 60, 164, 236, 148, 62, 189, 125, 133, 188, 181, 144, 119, 60, 112, 214, 212, 61, 88, 30, 108, 60, 184, 90, 26, 190, 131, 17, 53, 190, 242, 160, 27, 190, 96, 21, 202, 189, 167, 202, 41, 188, 160, 219, 33, 62, 16, 58, 143, 61, 246, 127, 203, 188, 102, 90, 165, 61, 34, 102, 236, 61, 14, 212, 5, 62, 17, 22, 8, 190, 176, 54, 15, 62, 85, 103, 220, 189, 209, 125, 183, 60, 27, 53, 180, 61, 21, 109, 40, 189, 183, 144, 74, 190, 16, 62, 87, 62, 176, 74, 42, 190, 101, 65, 254, 61, 203, 250, 88, 190, 36, 21, 231, 61, 234, 193, 138, 189, 183, 169, 79, 62, 60, 58, 3, 61, 171, 35, 209, 61, 56, 190, 53, 61, 100, 199, 76, 62, 191, 157, 134, 189, 156, 236, 0, 62, 255, 210, 146, 190, 156, 29, 10, 61, 220, 177, 86, 62, 40, 71, 27, 62, 135, 58, 143, 62, 241, 187, 183, 62, 240, 83, 28, 189, 50, 213, 250, 189, 154, 74, 196, 189, 211, 65, 211, 186, 242, 51, 198, 189, 119, 1, 149, 61, 204, 211, 171, 189, 198, 156, 246, 189, 185, 90, 185, 188, 80, 137, 76, 62, 76, 237, 24, 61, 63, 22, 216, 188, 118, 63, 235, 189, 7, 47, 1, 62, 186, 232, 51, 62, 213, 40, 132, 190, 20, 124, 65, 189, 141, 209, 178, 189, 119, 78, 19, 62, 92, 136, 188, 189, 245, 225, 221, 189, 254, 113, 215, 62, 241, 29, 59, 61, 95, 37, 104, 61, 61, 8, 17, 189, 254, 175, 18, 190, 234, 67, 150, 60, 30, 246, 96, 190, 167, 58, 23, 61, 217, 243, 96, 189, 238, 116, 90, 188, 102, 216, 44, 185, 255, 194, 160, 60, 247, 154, 38, 62, 123, 12, 245, 61, 108, 108, 135, 189, 199, 16, 72, 61, 116, 177, 10, 189, 142, 15, 168, 61, 40, 95, 59, 62, 119, 246, 95, 190, 32, 103, 18, 190, 37, 97, 24, 189, 220, 181, 157, 61, 165, 29, 51, 62, 95, 31, 34, 62, 118, 212, 186, 189, 144, 198, 80, 62, 208, 162, 101, 189, 234, 132, 70, 189, 234, 174, 166, 61, 0, 20, 217, 187, 26, 255, 111, 62, 160, 154, 137, 190, 141, 213, 230, 189, 69, 244, 231, 189, 172, 241, 179, 188, 22, 117, 36, 189, 248, 18, 239, 60, 81, 66, 176, 189, 183, 222, 199, 189, 13, 6, 204, 61, 242, 189, 39, 61, 117, 21, 174, 189, 79, 75, 230, 58, 221, 69, 23, 62, 50, 170, 135, 61, 203, 172, 194, 61, 168, 164, 52, 190, 69, 161, 197, 60, 136, 245, 253, 188, 178, 177, 30, 189, 27, 215, 252, 61, 155, 118, 122, 189, 206, 57, 21, 61, 145, 207, 207, 189, 2, 136, 10, 62, 14, 68, 79, 62, 172, 1, 160, 61, 36, 139, 131, 189, 188, 140, 0, 190, 78, 103, 3, 62, 236, 95, 191, 61, 178, 169, 120, 190, 206, 153, 160, 189, 192, 209, 13, 190, 62, 225, 35, 62, 14, 115, 160, 189, 219, 222, 87, 62, 177, 243, 83, 62, 246, 249, 224, 189, 182, 8, 75, 189, 106, 105, 46, 62, 48, 67, 246, 61, 80, 39, 255, 61, 158, 172, 55, 60, 190, 187, 219, 189, 56, 193, 8, 62, 90, 195, 49, 190, 75, 84, 155, 61, 138, 167, 184, 189, 201, 212, 76, 61, 100, 245, 72, 62, 33, 200, 129, 61, 200, 133, 114, 61, 46, 204, 16, 190, 196, 36, 164, 189, 212, 188, 91, 189, 44, 100, 204, 61, 88, 234, 200, 61, 66, 162, 137, 61, 192, 45, 238, 60, 99, 191, 80, 189, 92, 163, 82, 189, 176, 189, 134, 189, 254, 198, 150, 188, 111, 164, 187, 61, 176, 200, 86, 62, 74, 192, 127, 189, 71, 179, 112, 189, 203, 13, 84, 190, 180, 245, 65, 61, 35, 129, 178, 60, 250, 123, 162, 189, 231, 144, 177, 189, 93, 218, 203, 61, 158, 87, 37, 61, 17, 26, 103, 190, 215, 240, 70, 61, 53, 240, 11, 190, 165, 39, 16, 62, 86, 182, 108, 61, 179, 181, 137, 189, 93, 73, 138, 60, 246, 113, 129, 189, 27, 33, 184, 60, 35, 166, 248, 60, 214, 145, 8, 190, 20, 191, 63, 187, 61, 152, 30, 190, 71, 31, 221, 61, 144, 185, 228, 188, 147, 240, 0, 189, 176, 121, 17, 62, 169, 168, 148, 61, 107, 7, 70, 190, 90, 9, 63, 190, 181, 196, 148, 189, 134, 161, 78, 190, 39, 44, 164, 189, 213, 82, 251, 189, 159, 73, 245, 188, 132, 92, 193, 188, 160, 194, 218, 60, 153, 132, 167, 61, 177, 170, 171, 61, 76, 219, 68, 190, 81, 71, 179, 189, 199, 233, 66, 190, 199, 62, 170, 61, 225, 243, 164, 61, 155, 94, 161, 61, 7, 82, 40, 189, 79, 208, 160, 61, 81, 146, 143, 61, 119, 35, 189, 61, 167, 238, 31, 189, 234, 148, 125, 188, 135, 166, 20, 190, 173, 69, 245, 189, 134, 49, 163, 61, 26, 118, 84, 186, 31, 15, 200, 59, 141, 71, 207, 189, 203, 22, 61, 61, 69, 238, 63, 62, 121, 110, 192, 61, 248, 93, 30, 62, 254, 255, 146, 189, 110, 169, 82, 190, 66, 48, 7, 61, 1, 135, 40, 189, 248, 245, 134, 61, 164, 29, 243, 189, 75, 193, 40, 190, 158, 163, 56, 60, 250, 42, 31, 62, 18, 87, 170, 61, 89, 11, 17, 190, 18, 99, 10, 62, 165, 193, 87, 190, 22, 247, 255, 60, 198, 137, 160, 189, 193, 29, 184, 189, 144, 9, 1, 62, 153, 6, 50, 61, 73, 223, 26, 189, 186, 212, 104, 190, 191, 233, 170, 189, 129, 35, 96, 189, 247, 65, 167, 189, 236, 251, 27, 62, 174, 117, 204, 61, 185, 41, 98, 189, 128, 29, 217, 54, 247, 222, 16, 190, 212, 82, 104, 190, 41, 238, 56, 61, 45, 151, 196, 60, 138, 23, 153, 190, 71, 232, 23, 190, 199, 192, 19, 62, 43, 132, 196, 188, 222, 103, 43, 61, 126, 81, 185, 61, 212, 96, 154, 61, 184, 67, 58, 62, 215, 131, 194, 61, 252, 207, 135, 61, 91, 142, 74, 190, 141, 99, 172, 189, 214, 77, 90, 190, 231, 95, 82, 61, 115, 153, 141, 187, 81, 8, 231, 188, 202, 96, 122, 62, 45, 141, 73, 62, 207, 54, 197, 60, 124, 179, 214, 59, 138, 0, 34, 189, 161, 40, 199, 189, 151, 133, 0, 189, 217, 59, 120, 189, 252, 167, 230, 189, 210, 246, 35, 62, 112, 139, 149, 60, 75, 61, 197, 188, 157, 116, 246, 61, 14, 162, 7, 189, 245, 209, 129, 61, 242, 37, 212, 61, 193, 27, 93, 62, 125, 60, 158, 189, 196, 38, 174, 61, 64, 146, 138, 62, 106, 24, 75, 190, 85, 61, 251, 61, 238, 99, 48, 61, 244, 10, 209, 61, 110, 245, 249, 60, 121, 55, 6, 62, 13, 146, 208, 61, 172, 227, 28, 190, 153, 212, 78, 189, 177, 190, 243, 61, 165, 92, 63, 62, 254, 98, 109, 190, 180, 108, 38, 61, 246, 172, 60, 189, 226, 167, 148, 60, 114, 161, 141, 61, 89, 185, 48, 61, 47, 223, 54, 189, 166, 162, 194, 189, 84, 118, 2, 189, 68, 152, 149, 190, 188, 242, 218, 61, 15, 238, 8, 190, 151, 221, 254, 61, 228, 77, 237, 60, 136, 48, 54, 62, 52, 1, 134, 190, 21, 11, 210, 188, 151, 75, 97, 190, 232, 131, 154, 61, 51, 195, 13, 189, 85, 157, 100, 190, 97, 66, 178, 62, 185, 150, 176, 186, 113, 184, 100, 189, 89, 169, 47, 190, 100, 131, 164, 61, 244, 192, 10, 190, 179, 193, 14, 190, 117, 15, 161, 189, 31, 74, 42, 190, 207, 171, 12, 190, 66, 8, 19, 190, 8, 137, 209, 61, 29, 179, 252, 189, 12, 68, 29, 62, 244, 8, 156, 189, 198, 110, 128, 61, 34, 128, 59, 61, 242, 240, 7, 61, 141, 80, 212, 189, 122, 86, 110, 189, 35, 176, 19, 189, 176, 237, 93, 188, 24, 212, 247, 60, 205, 165, 52, 61, 199, 195, 30, 190, 105, 69, 6, 190, 78, 34, 216, 189, 180, 171, 131, 61, 40, 68, 209, 61, 140, 203, 18, 62, 47, 128, 216, 189, 7, 218, 238, 189, 165, 185, 62, 189, 186, 18, 46, 62, 116, 180, 66, 190, 251, 238, 5, 190, 110, 99, 155, 61, 67, 97, 134, 189, 231, 103, 124, 189, 101, 145, 32, 190, 126, 42, 127, 61, 117, 123, 251, 189, 193, 72, 235, 189, 159, 49, 72, 60, 127, 219, 236, 58, 77, 107, 104, 61, 255, 3, 7, 62, 76, 165, 169, 189, 172, 153, 146, 60, 90, 114, 22, 190, 100, 76, 14, 190, 117, 199, 121, 58, 186, 4, 168, 61, 234, 182, 197, 189, 74, 241, 196, 189, 83, 197, 255, 189, 206, 37, 47, 61, 227, 156, 219, 189, 134, 67, 200, 189, 106, 138, 50, 62, 221, 45, 16, 62, 186, 20, 202, 189, 48, 181, 184, 188, 181, 68, 42, 190, 172, 29, 19, 190, 62, 9, 19, 62, 178, 144, 82, 188, 248, 40, 160, 60, 140, 104, 14, 62, 166, 223, 159, 60, 174, 120, 194, 189, 14, 103, 8, 59, 199, 37, 170, 188, 50, 40, 253, 189, 18, 128, 131, 189, 49, 1, 241, 189, 177, 78, 25, 189, 9, 251, 184, 189, 251, 237, 218, 61, 28, 96, 211, 189, 133, 181, 3, 190, 120, 205, 1, 190, 179, 234, 81, 61, 201, 196, 183, 61, 40, 218, 28, 190, 39, 61, 23, 62, 10, 168, 229, 186, 178, 128, 211, 189, 166, 138, 230, 189, 140, 172, 174, 189, 139, 95, 40, 190, 247, 123, 26, 190, 21, 173, 249, 61, 78, 228, 10, 62, 253, 190, 140, 189, 19, 43, 167, 60, 2, 223, 176, 60, 99, 136, 4, 62, 97, 5, 55, 190, 239, 241, 62, 189, 195, 92, 185, 189, 42, 6, 131, 60, 170, 146, 232, 189, 123, 99, 245, 59, 247, 216, 0, 61, 61, 190, 132, 61, 104, 105, 223, 61, 111, 243, 31, 62, 230, 92, 249, 189, 171, 182, 178, 189, 185, 175, 238, 60, 251, 184, 125, 189, 5, 47, 150, 187, 26, 236, 143, 189, 56, 29, 116, 61, 130, 28, 137, 61, 124, 162, 9, 190, 84, 37, 189, 61, 180, 153, 228, 189, 183, 156, 201, 60, 25, 71, 190, 61, 30, 220, 5, 190, 61, 254, 51, 189, 70, 60, 177, 189, 23, 220, 109, 60, 196, 175, 175, 189, 132, 139, 194, 189, 229, 108, 69, 190, 233, 72, 183, 188, 6, 102, 2, 62, 196, 30, 134, 190, 169, 178, 112, 61, 73, 163, 131, 61, 14, 38, 72, 188, 100, 112, 108, 190, 21, 121, 22, 190, 108, 63, 172, 190, 55, 1, 1, 189, 19, 188, 43, 190, 79, 196, 10, 61, 103, 225, 171, 62, 107, 86, 115, 62, 238, 104, 140, 189, 10, 85, 33, 62, 51, 162, 92, 62, 68, 243, 10, 62, 172, 36, 145, 188, 7, 61, 4, 190, 65, 229, 181, 189, 158, 203, 171, 189, 154, 136, 36, 62, 194, 74, 15, 62, 203, 80, 25, 62, 198, 138, 107, 189, 133, 164, 204, 61, 68, 199, 21, 62, 130, 236, 159, 62, 150, 155, 3, 62, 149, 14, 76, 190, 95, 9, 76, 62, 122, 13, 134, 190, 197, 27, 178, 61, 238, 28, 29, 189, 89, 28, 25, 190, 150, 69, 27, 61, 120, 88, 157, 60, 109, 134, 175, 60, 216, 16, 33, 190, 171, 116, 139, 189, 146, 0, 58, 59, 173, 59, 233, 188, 85, 90, 27, 190, 139, 60, 236, 59, 62, 136, 206, 189, 47, 45, 161, 60, 123, 180, 210, 61, 111, 25, 143, 189, 195, 252, 28, 62, 30, 182, 77, 189, 140, 171, 33, 190, 252, 71, 178, 189, 43, 41, 140, 189, 43, 150, 1, 190, 83, 141, 122, 61, 28, 205, 77, 189, 249, 230, 48, 190, 235, 96, 6, 190, 85, 136, 207, 189, 142, 1, 110, 189, 87, 97, 182, 189, 176, 83, 245, 189, 30, 124, 28, 190, 250, 99, 42, 62, 137, 210, 220, 60, 31, 204, 51, 189, 102, 91, 234, 189, 175, 15, 190, 61, 223, 99, 146, 61, 128, 10, 253, 189, 15, 88, 245, 61, 58, 36, 206, 187, 60, 197, 196, 189, 10, 69, 75, 189, 145, 3, 117, 61, 71, 69, 22, 190, 200, 157, 182, 61, 194, 65, 151, 61, 104, 218, 45, 61, 21, 182, 66, 190, 162, 173, 111, 59, 5, 36, 204, 189, 248, 242, 18, 190, 51, 212, 3, 62, 126, 59, 245, 61, 240, 150, 222, 61, 182, 78, 118, 61, 132, 211, 190, 61, 255, 188, 219, 189, 86, 202, 252, 189, 238, 29, 169, 61, 115, 54, 195, 188, 34, 10, 7, 58, 78, 185, 182, 188, 237, 9, 241, 187, 1, 101, 6, 189, 88, 30, 242, 189, 7, 28, 224, 189, 3, 8, 18, 61, 251, 113, 223, 60, 165, 50, 6, 62, 200, 135, 251, 189, 219, 232, 84, 190, 32, 87, 164, 190, 172, 246, 230, 189, 225, 31, 27, 190, 201, 212, 75, 61, 193, 219, 145, 62, 237, 36, 199, 59, 188, 25, 106, 62, 253, 226, 78, 62, 192, 58, 64, 60, 131, 212, 50, 61, 66, 237, 225, 61, 13, 30, 163, 189, 138, 219, 135, 190, 218, 148, 197, 189, 228, 249, 57, 189, 62, 112, 49, 62, 113, 224, 57, 61, 145, 75, 15, 62, 241, 9, 103, 61, 130, 17, 146, 189, 107, 105, 154, 62, 9, 186, 206, 189, 83, 91, 169, 190, 67, 229, 152, 62, 36, 175, 125, 190, 4, 13, 181, 189, 34, 241, 254, 60, 111, 228, 190, 189, 163, 251, 11, 62, 166, 77, 149, 188, 237, 248, 85, 62, 154, 152, 99, 62, 101, 171, 14, 62, 136, 195, 251, 188, 111, 237, 129, 61, 248, 240, 195, 189, 44, 42, 201, 189, 88, 47, 99, 62, 79, 251, 249, 189, 110, 238, 152, 61, 242, 36, 138, 62, 205, 121, 239, 60, 55, 29, 18, 190, 51, 47, 30, 190, 207, 106, 205, 61, 238, 234, 226, 189, 246, 14, 87, 62, 43, 180, 139, 61, 211, 47, 41, 61, 41, 82, 206, 60, 66, 94, 38, 190, 133, 52, 50, 59, 225, 4, 78, 188, 185, 152, 19, 61, 45, 192, 26, 190, 131, 231, 83, 190, 109, 158, 54, 62, 167, 24, 165, 61};
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
                alignas(float) const unsigned char memory[] = {106, 42, 101, 62, 183, 149, 41, 190, 97, 194, 113, 60, 234, 86, 170, 61, 211, 248, 22, 62, 130, 165, 141, 61, 164, 239, 175, 189, 79, 169, 47, 62, 226, 7, 29, 62, 47, 234, 100, 62, 20, 127, 14, 62, 4, 104, 47, 189, 151, 164, 80, 62, 4, 237, 79, 190, 182, 45, 205, 61, 161, 143, 229, 188, 90, 103, 32, 62, 32, 165, 50, 62, 71, 179, 137, 188, 85, 242, 204, 60, 67, 185, 194, 189, 220, 220, 178, 61, 11, 70, 52, 62, 249, 86, 202, 188, 125, 221, 44, 59, 229, 200, 32, 189, 176, 106, 50, 190, 81, 13, 166, 189, 151, 119, 206, 188, 105, 39, 135, 61, 185, 166, 53, 188, 128, 12, 30, 190};
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
                alignas(float) const unsigned char memory[] = {149, 254, 172, 190, 39, 128, 211, 61, 250, 123, 144, 190, 250, 249, 20, 62, 169, 28, 86, 62, 56, 11, 255, 189, 191, 176, 10, 189, 200, 97, 130, 62, 144, 183, 31, 189, 86, 125, 30, 63, 245, 104, 139, 189, 191, 206, 87, 62, 159, 142, 184, 190, 41, 204, 42, 62, 10, 187, 64, 62, 18, 105, 110, 190, 62, 225, 159, 59, 90, 138, 2, 62, 202, 108, 112, 61, 85, 98, 9, 189, 88, 51, 240, 60, 205, 39, 221, 189, 79, 201, 67, 62, 43, 109, 253, 61, 195, 141, 12, 62, 146, 1, 143, 60, 77, 177, 72, 189, 40, 185, 90, 190, 26, 172, 158, 61, 76, 48, 165, 59, 212, 170, 86, 190, 109, 135, 130, 190, 78, 141, 146, 62, 96, 125, 251, 59, 154, 84, 116, 189, 117, 230, 59, 60, 170, 27, 49, 190, 109, 10, 41, 62, 146, 27, 84, 60, 81, 209, 207, 189, 94, 53, 233, 189, 151, 178, 7, 62, 31, 98, 56, 190, 236, 140, 183, 188, 161, 219, 47, 61, 57, 143, 31, 62, 216, 99, 56, 61, 145, 203, 176, 61, 144, 165, 86, 190, 49, 208, 116, 190, 41, 218, 34, 62, 89, 172, 166, 189, 218, 237, 0, 62, 149, 236, 215, 189, 60, 59, 94, 190, 170, 153, 243, 189, 69, 53, 246, 189, 42, 170, 121, 189, 210, 65, 10, 62, 20, 94, 190, 188, 207, 196, 162, 188, 170, 248, 241, 61, 225, 115, 176, 189, 187, 227, 123, 61};
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
                alignas(float) const unsigned char memory[] = {148, 24, 152, 189, 209, 88, 230, 188};
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
    alignas(float) const unsigned char memory[] = {0, 95, 158, 63, 182, 41, 70, 191, 18, 215, 141, 63};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {190, 246, 38, 63, 114, 172, 61, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0010/steps/000000000002000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}