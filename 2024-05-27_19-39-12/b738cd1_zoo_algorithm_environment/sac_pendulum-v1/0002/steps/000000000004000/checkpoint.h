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
                alignas(float) const unsigned char memory[] = {191, 96, 196, 61, 91, 200, 186, 190, 255, 79, 111, 190, 50, 181, 154, 62, 98, 129, 36, 191, 56, 133, 244, 190, 35, 133, 169, 187, 84, 39, 55, 191, 49, 156, 243, 62, 203, 74, 182, 190, 145, 205, 39, 191, 235, 206, 17, 63, 197, 112, 51, 191, 22, 60, 14, 191, 174, 149, 9, 191, 147, 77, 2, 62, 229, 17, 10, 63, 187, 169, 69, 62, 164, 220, 238, 62, 64, 218, 27, 190, 121, 238, 37, 63, 62, 97, 27, 191, 54, 51, 206, 61, 221, 15, 161, 190, 82, 175, 58, 190, 210, 56, 6, 62, 3, 224, 119, 63, 136, 236, 143, 190, 251, 43, 169, 62, 65, 181, 34, 191, 27, 144, 54, 63, 246, 75, 88, 190, 7, 184, 35, 190, 179, 135, 24, 190, 224, 214, 31, 63, 11, 155, 204, 61, 108, 170, 204, 190, 233, 193, 189, 190, 199, 248, 205, 188, 32, 54, 151, 62, 26, 174, 27, 191, 3, 112, 44, 63, 72, 103, 10, 189, 211, 84, 174, 62, 67, 149, 10, 191, 111, 28, 50, 63, 18, 9, 166, 62, 99, 251, 14, 63, 132, 190, 96, 62, 71, 180, 247, 62, 128, 86, 224, 190, 23, 202, 14, 191, 49, 184, 164, 190, 183, 88, 92, 189, 221, 107, 141, 62, 201, 5, 252, 189, 200, 30, 68, 189, 77, 198, 12, 191, 71, 68, 169, 190, 209, 240, 132, 189, 181, 36, 162, 190, 57, 230, 88, 191, 241, 179, 174, 190, 24, 89, 230, 62, 154, 224, 199, 190, 25, 30, 219, 190, 185, 210, 249, 62, 170, 229, 2, 63, 86, 96, 221, 62, 202, 77, 156, 62, 233, 48, 218, 62, 174, 193, 153, 61, 50, 225, 82, 190, 35, 89, 4, 63, 121, 62, 253, 190, 114, 163, 9, 62, 17, 35, 250, 62, 246, 225, 84, 190, 69, 191, 215, 62, 157, 105, 75, 190, 51, 71, 217, 190, 166, 236, 54, 60, 141, 241, 13, 63, 227, 204, 201, 190, 99, 95, 12, 63, 3, 183, 250, 62, 9, 211, 25, 190, 190, 166, 38, 58, 187, 112, 38, 191, 149, 175, 207, 62, 213, 128, 35, 63, 29, 250, 86, 191, 250, 49, 136, 190, 217, 212, 182, 188, 249, 228, 148, 62, 173, 71, 195, 62};
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
                alignas(float) const unsigned char memory[] = {7, 110, 37, 191, 183, 220, 197, 188, 173, 93, 80, 190, 12, 9, 204, 189, 199, 84, 202, 190, 36, 25, 55, 191, 221, 191, 64, 190, 189, 48, 138, 190, 99, 184, 66, 62, 100, 15, 5, 63, 122, 225, 16, 63, 120, 78, 36, 63, 210, 172, 17, 63, 254, 173, 203, 62, 134, 24, 21, 62, 26, 134, 133, 189, 234, 170, 14, 63, 128, 125, 36, 63, 216, 250, 21, 63, 36, 115, 57, 63, 131, 236, 252, 61, 115, 143, 210, 61, 177, 83, 24, 63, 150, 67, 45, 191, 224, 126, 138, 190, 147, 11, 16, 62, 200, 86, 100, 189, 135, 234, 109, 188, 115, 59, 111, 62, 2, 218, 47, 62, 187, 201, 92, 190, 123, 160, 31, 191};
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
                alignas(float) const unsigned char memory[] = {103, 169, 13, 188, 156, 65, 241, 60, 92, 212, 37, 62, 145, 46, 3, 190, 83, 241, 216, 189, 247, 210, 162, 189, 59, 236, 186, 189, 191, 186, 77, 61, 208, 34, 77, 189, 20, 117, 246, 61, 126, 179, 250, 61, 27, 64, 28, 62, 148, 36, 22, 62, 93, 224, 30, 61, 60, 89, 79, 60, 107, 177, 93, 62, 253, 23, 10, 189, 196, 246, 108, 189, 12, 223, 34, 62, 19, 73, 86, 61, 44, 192, 93, 188, 56, 240, 151, 189, 235, 248, 64, 62, 159, 36, 114, 190, 119, 152, 86, 188, 38, 142, 120, 62, 172, 249, 187, 61, 183, 208, 110, 189, 75, 88, 135, 62, 106, 148, 40, 61, 196, 8, 153, 189, 237, 120, 229, 61, 233, 94, 181, 190, 37, 186, 15, 189, 239, 133, 104, 62, 196, 221, 11, 62, 7, 205, 133, 190, 248, 143, 244, 188, 168, 177, 109, 62, 126, 231, 88, 190, 71, 182, 122, 61, 219, 38, 123, 61, 253, 175, 25, 189, 9, 187, 238, 60, 84, 186, 53, 190, 101, 0, 99, 189, 227, 95, 177, 61, 254, 5, 117, 61, 78, 8, 76, 61, 139, 124, 251, 189, 195, 130, 50, 190, 72, 216, 52, 190, 27, 29, 41, 190, 47, 253, 240, 61, 219, 227, 110, 62, 126, 115, 182, 190, 44, 209, 5, 190, 177, 177, 22, 62, 221, 87, 46, 62, 209, 8, 165, 61, 155, 248, 104, 62, 70, 137, 143, 61, 16, 85, 152, 190, 179, 45, 201, 60, 124, 6, 36, 189, 68, 130, 247, 61, 109, 43, 16, 62, 89, 136, 141, 189, 46, 177, 79, 188, 146, 200, 28, 190, 54, 107, 14, 190, 33, 50, 36, 62, 197, 172, 255, 61, 148, 219, 20, 60, 100, 226, 4, 62, 173, 146, 11, 61, 25, 19, 10, 60, 11, 95, 137, 189, 6, 192, 186, 189, 119, 165, 166, 61, 205, 140, 35, 61, 51, 24, 148, 189, 237, 123, 230, 189, 113, 34, 238, 60, 124, 25, 5, 190, 118, 211, 13, 189, 238, 188, 9, 190, 171, 3, 199, 189, 99, 72, 32, 190, 199, 14, 95, 61, 110, 194, 202, 60, 78, 53, 42, 189, 38, 108, 220, 189, 51, 90, 2, 190, 233, 36, 64, 188, 117, 235, 51, 190, 201, 152, 49, 61, 22, 182, 45, 62, 186, 157, 12, 191, 136, 121, 167, 62, 131, 20, 112, 190, 92, 56, 184, 188, 159, 95, 51, 190, 113, 200, 7, 189, 48, 192, 121, 62, 255, 201, 76, 190, 72, 12, 149, 62, 63, 100, 80, 62, 99, 131, 27, 62, 249, 57, 31, 62, 126, 77, 152, 190, 51, 104, 147, 189, 176, 203, 143, 190, 124, 164, 82, 61, 138, 245, 107, 62, 79, 95, 125, 61, 115, 73, 55, 189, 20, 94, 146, 62, 252, 45, 42, 189, 59, 45, 171, 62, 19, 244, 176, 187, 186, 182, 28, 190, 218, 9, 129, 62, 143, 205, 141, 189, 235, 18, 204, 190, 24, 162, 89, 189, 16, 18, 124, 62, 19, 51, 95, 189, 182, 122, 103, 190, 174, 101, 77, 189, 249, 187, 62, 189, 176, 198, 245, 189, 54, 6, 4, 62, 116, 215, 237, 189, 249, 83, 145, 61, 237, 199, 237, 188, 233, 47, 113, 190, 35, 54, 29, 62, 60, 204, 151, 62, 140, 196, 167, 190, 235, 100, 62, 62, 252, 23, 51, 62, 16, 224, 67, 62, 23, 39, 210, 189, 121, 194, 234, 187, 31, 104, 166, 189, 227, 195, 129, 62, 236, 55, 127, 61, 95, 57, 62, 190, 106, 93, 130, 61, 207, 214, 227, 61, 144, 229, 245, 57, 44, 222, 91, 61, 164, 211, 21, 189, 85, 94, 220, 189, 25, 201, 53, 62, 215, 29, 220, 188, 42, 32, 5, 62, 165, 60, 67, 61, 56, 129, 215, 187, 118, 126, 79, 189, 28, 184, 191, 187, 171, 74, 11, 191, 241, 59, 234, 62, 10, 24, 121, 190, 12, 186, 50, 190, 206, 56, 166, 190, 200, 198, 176, 189, 54, 193, 219, 59, 39, 156, 33, 62, 184, 131, 28, 60, 168, 185, 156, 62, 31, 69, 158, 62, 91, 74, 10, 63, 219, 120, 57, 190, 123, 18, 49, 190, 171, 207, 111, 189, 186, 212, 19, 62, 39, 227, 101, 62, 13, 206, 146, 62, 63, 240, 9, 62, 157, 46, 54, 189, 250, 168, 151, 61, 53, 202, 229, 62, 149, 4, 207, 61, 41, 152, 96, 61, 233, 165, 155, 60, 89, 227, 35, 62, 43, 59, 79, 190, 155, 195, 173, 62, 173, 226, 234, 61, 52, 125, 221, 190, 14, 155, 190, 62, 112, 204, 144, 61, 93, 174, 5, 189, 24, 110, 102, 60, 55, 84, 129, 189, 87, 72, 231, 189, 69, 235, 142, 189, 119, 89, 221, 188, 12, 31, 215, 189, 142, 11, 166, 61, 198, 215, 131, 189, 147, 231, 238, 190, 125, 23, 25, 62, 237, 248, 83, 190, 184, 65, 70, 190, 108, 53, 90, 58, 4, 48, 61, 190, 202, 248, 185, 189, 170, 26, 163, 61, 70, 154, 172, 187, 28, 93, 62, 62, 31, 81, 89, 62, 11, 41, 7, 190, 115, 249, 148, 60, 106, 217, 13, 62, 77, 149, 161, 190, 72, 235, 3, 62, 148, 61, 198, 61, 230, 185, 155, 190, 215, 202, 38, 190, 5, 205, 53, 188, 88, 53, 53, 61, 122, 130, 68, 190, 164, 66, 141, 190, 16, 209, 37, 62, 231, 199, 90, 190, 49, 250, 109, 62, 162, 90, 168, 61, 102, 201, 45, 62, 174, 208, 165, 62, 51, 206, 125, 190, 154, 0, 169, 62, 63, 177, 44, 190, 173, 204, 191, 59, 16, 32, 48, 189, 48, 78, 99, 191, 29, 252, 26, 61, 108, 38, 180, 189, 60, 194, 128, 62, 203, 98, 215, 59, 133, 17, 131, 62, 180, 102, 150, 60, 190, 157, 84, 62, 172, 60, 180, 190, 176, 6, 10, 189, 242, 141, 163, 189, 198, 24, 150, 190, 11, 247, 170, 61, 230, 210, 14, 190, 173, 242, 37, 190, 86, 139, 169, 62, 9, 77, 46, 191, 131, 56, 148, 190, 164, 238, 22, 60, 7, 251, 144, 190, 1, 213, 243, 61, 252, 198, 7, 191, 79, 95, 21, 61, 170, 3, 252, 188, 198, 224, 179, 189, 167, 195, 193, 189, 9, 229, 206, 189, 93, 52, 135, 62, 131, 227, 63, 62, 220, 119, 223, 188, 135, 120, 131, 62, 255, 238, 141, 62, 223, 142, 106, 62, 76, 108, 49, 190, 202, 177, 74, 190, 18, 139, 52, 62, 69, 249, 186, 189, 24, 3, 163, 61, 9, 39, 23, 62, 78, 84, 238, 189, 19, 92, 222, 61, 147, 216, 78, 61, 46, 223, 105, 62, 0, 245, 170, 61, 220, 49, 50, 189, 10, 167, 17, 62, 196, 114, 68, 189, 75, 31, 147, 189, 151, 151, 115, 61, 156, 27, 9, 62, 210, 34, 93, 190, 198, 148, 240, 61, 86, 213, 105, 58, 195, 141, 21, 190, 64, 213, 169, 61, 110, 46, 44, 190, 210, 172, 50, 62, 204, 104, 237, 189, 54, 138, 18, 62, 21, 7, 59, 61, 190, 29, 52, 190, 89, 228, 73, 60, 30, 75, 24, 190, 153, 64, 19, 190, 250, 118, 177, 188, 181, 67, 124, 61, 17, 12, 205, 189, 59, 191, 57, 190, 197, 73, 21, 61, 232, 34, 30, 190, 197, 51, 97, 189, 21, 218, 25, 62, 10, 48, 93, 60, 179, 65, 33, 190, 55, 232, 247, 61, 245, 70, 204, 61, 99, 146, 91, 189, 200, 22, 78, 61, 246, 239, 228, 61, 78, 82, 32, 190, 116, 90, 126, 187, 201, 185, 15, 62, 170, 153, 200, 61, 116, 131, 244, 190, 166, 130, 37, 189, 106, 253, 38, 62, 180, 18, 41, 189, 151, 164, 26, 188, 103, 189, 235, 189, 142, 232, 136, 60, 130, 148, 2, 62, 232, 118, 11, 62, 101, 79, 253, 60, 181, 182, 80, 62, 114, 18, 199, 188, 43, 244, 129, 61, 3, 134, 78, 190, 53, 12, 218, 61, 96, 33, 62, 62, 217, 197, 166, 61, 42, 77, 29, 190, 146, 69, 216, 188, 114, 207, 58, 190, 117, 144, 53, 58, 202, 156, 168, 189, 231, 86, 65, 62, 38, 33, 224, 190, 87, 115, 81, 190, 96, 142, 151, 61, 187, 221, 8, 190, 214, 189, 242, 61, 241, 178, 103, 62, 142, 87, 128, 190, 136, 247, 108, 190, 168, 170, 12, 61, 72, 1, 131, 190, 90, 42, 208, 190, 18, 83, 207, 189, 206, 223, 25, 191, 136, 203, 138, 62, 62, 39, 220, 61, 177, 105, 75, 61, 192, 247, 175, 62, 216, 77, 151, 190, 251, 65, 182, 61, 41, 173, 146, 190, 101, 180, 154, 61, 95, 166, 47, 62, 241, 36, 152, 191, 8, 167, 2, 190, 15, 223, 149, 59, 203, 88, 24, 61, 91, 30, 139, 62, 193, 24, 136, 189, 13, 7, 59, 62, 26, 45, 214, 60, 122, 120, 85, 190, 137, 79, 141, 190, 157, 21, 33, 190, 211, 157, 190, 190, 25, 83, 69, 189, 149, 34, 123, 190, 135, 153, 6, 191, 228, 246, 17, 190, 251, 247, 59, 191, 123, 79, 131, 190, 191, 132, 117, 61, 1, 60, 28, 62, 46, 140, 112, 189, 115, 226, 246, 61, 202, 221, 39, 190, 63, 161, 195, 189, 198, 148, 25, 62, 122, 160, 15, 61, 85, 117, 10, 190, 219, 119, 200, 61, 164, 4, 22, 62, 89, 245, 109, 190, 248, 123, 248, 189, 184, 243, 11, 191, 207, 43, 168, 189, 18, 60, 233, 59, 43, 204, 125, 61, 102, 201, 119, 190, 23, 74, 169, 190, 111, 182, 101, 190, 170, 7, 49, 191, 84, 225, 7, 62, 126, 188, 27, 190, 186, 60, 214, 61, 195, 138, 4, 63, 47, 142, 163, 189, 167, 188, 156, 189, 77, 229, 21, 190, 185, 100, 248, 189, 213, 103, 228, 60, 215, 57, 8, 190, 116, 180, 40, 190, 71, 34, 14, 62, 246, 128, 181, 190, 26, 162, 14, 187, 42, 193, 65, 190, 152, 103, 219, 190, 80, 214, 234, 61, 15, 42, 171, 189, 199, 51, 193, 189, 140, 52, 94, 62, 154, 83, 23, 191, 53, 155, 77, 62, 101, 179, 97, 190, 106, 156, 223, 61, 91, 174, 109, 62, 136, 237, 152, 191, 229, 192, 85, 62, 6, 209, 192, 190, 132, 198, 144, 61, 160, 25, 213, 61, 84, 215, 70, 62, 117, 47, 238, 61, 237, 221, 207, 61, 89, 227, 145, 190, 228, 64, 184, 190, 8, 140, 50, 62, 5, 212, 156, 190, 151, 32, 40, 62, 95, 101, 40, 61, 62, 52, 48, 190, 208, 182, 201, 58, 252, 10, 178, 190, 206, 140, 62, 190, 28, 25, 117, 62, 72, 109, 179, 190, 87, 187, 21, 61, 36, 168, 68, 62, 68, 81, 101, 190, 229, 53, 53, 62, 148, 191, 32, 190, 130, 76, 65, 62, 207, 238, 28, 62, 25, 156, 9, 190, 155, 122, 1, 62, 219, 51, 28, 190, 77, 251, 73, 188, 115, 117, 24, 189, 27, 190, 23, 191, 140, 37, 124, 61, 218, 174, 167, 61, 147, 34, 158, 62, 19, 4, 115, 62, 158, 182, 5, 61, 235, 62, 191, 59, 122, 212, 141, 187, 122, 148, 38, 190, 115, 173, 178, 189, 99, 121, 242, 189, 20, 88, 192, 190, 97, 207, 58, 62, 246, 104, 180, 188, 253, 66, 73, 190, 149, 114, 3, 62, 53, 85, 234, 190, 241, 141, 62, 189, 172, 226, 247, 188, 1, 81, 250, 60, 29, 144, 35, 190, 51, 170, 101, 189, 1, 73, 95, 61, 239, 103, 126, 188, 208, 208, 37, 62, 85, 216, 136, 61, 135, 230, 227, 57, 80, 159, 190, 189, 116, 150, 32, 190, 51, 151, 18, 62, 16, 48, 217, 61, 221, 22, 182, 189, 166, 40, 201, 60, 162, 209, 247, 61, 208, 153, 231, 188, 241, 160, 196, 61, 212, 255, 204, 61, 83, 187, 174, 189, 207, 53, 180, 60, 12, 197, 36, 190, 51, 212, 14, 189, 78, 3, 239, 60, 241, 243, 153, 61, 49, 12, 19, 189, 174, 152, 172, 61, 20, 101, 7, 189, 96, 192, 88, 189, 51, 57, 25, 190, 184, 26, 51, 190, 106, 167, 143, 189, 223, 62, 139, 189, 83, 175, 28, 190, 145, 142, 133, 61, 193, 143, 204, 60, 209, 233, 146, 60, 12, 124, 44, 190, 225, 224, 208, 189, 220, 124, 18, 190, 162, 65, 28, 190, 120, 250, 219, 60, 150, 82, 48, 190, 179, 102, 39, 190, 114, 10, 218, 189, 11, 136, 225, 188, 3, 176, 190, 61, 180, 230, 110, 61, 159, 53, 2, 190, 163, 216, 186, 61, 163, 167, 51, 58, 80, 105, 24, 190, 3, 116, 26, 190, 159, 52, 154, 189, 213, 240, 1, 190, 131, 18, 194, 189, 51, 22, 195, 61, 202, 54, 200, 61, 111, 83, 209, 61, 98, 22, 151, 189, 83, 122, 207, 59, 78, 102, 16, 187, 205, 153, 186, 61, 209, 199, 220, 61, 69, 218, 237, 189, 223, 112, 95, 188, 15, 46, 229, 188, 106, 61, 238, 61, 4, 193, 99, 61, 178, 122, 221, 61, 168, 157, 8, 61, 209, 148, 64, 190, 74, 216, 62, 190, 55, 77, 1, 190, 94, 128, 142, 60, 233, 125, 157, 61, 3, 61, 86, 190, 176, 129, 62, 189, 105, 223, 241, 60, 127, 76, 122, 61, 153, 182, 221, 189, 75, 81, 93, 189, 234, 23, 136, 188, 121, 170, 29, 190, 158, 105, 49, 190, 51, 89, 11, 190, 163, 159, 0, 188, 222, 57, 222, 61, 206, 240, 14, 190, 124, 55, 103, 61, 20, 162, 182, 189, 249, 82, 22, 190, 95, 69, 203, 60, 197, 145, 127, 61, 129, 135, 152, 61, 70, 21, 173, 61, 24, 42, 133, 189, 109, 58, 138, 188, 253, 102, 59, 62, 200, 120, 23, 62, 100, 192, 170, 189, 199, 61, 185, 60, 187, 88, 120, 60, 238, 216, 158, 189, 126, 74, 250, 61, 99, 96, 49, 189, 85, 168, 30, 62, 192, 49, 15, 62, 125, 29, 139, 190, 55, 167, 75, 61, 229, 198, 149, 62, 134, 20, 31, 62, 191, 170, 64, 190, 141, 196, 9, 62, 233, 21, 84, 189, 29, 172, 193, 61, 197, 105, 23, 190, 175, 58, 251, 59, 232, 74, 129, 61, 125, 104, 106, 189, 157, 4, 138, 188, 12, 115, 29, 62, 176, 159, 202, 61, 128, 15, 51, 62, 87, 72, 254, 189, 86, 174, 128, 61, 161, 42, 101, 62, 33, 26, 32, 62, 5, 13, 228, 61, 97, 114, 19, 190, 20, 27, 151, 189, 54, 245, 133, 62, 32, 238, 14, 191, 5, 239, 110, 61, 160, 249, 183, 189, 199, 137, 131, 62, 177, 130, 22, 61, 42, 126, 60, 190, 240, 14, 118, 189, 97, 188, 106, 62, 192, 10, 58, 188, 255, 44, 87, 190, 102, 110, 28, 61, 252, 16, 133, 60, 20, 33, 204, 62, 243, 86, 248, 61, 246, 53, 87, 61, 96, 236, 9, 62, 56, 153, 1, 62, 139, 197, 178, 61, 121, 238, 73, 189, 11, 224, 233, 188, 1, 34, 0, 62, 126, 233, 116, 189, 172, 225, 26, 62, 136, 124, 252, 189, 21, 158, 170, 188, 124, 8, 111, 62, 50, 224, 167, 190, 249, 115, 14, 190, 103, 163, 178, 189, 232, 205, 110, 62, 249, 155, 255, 61, 104, 3, 254, 187, 87, 252, 51, 190, 136, 77, 205, 61, 160, 121, 235, 61, 150, 142, 14, 61, 71, 138, 130, 59, 214, 6, 182, 189, 255, 29, 31, 62, 119, 105, 102, 190, 180, 110, 35, 188, 88, 142, 228, 189, 144, 181, 230, 189, 161, 215, 94, 62, 28, 235, 74, 60, 251, 197, 59, 62, 215, 142, 253, 189, 69, 152, 190, 188, 17, 226, 62, 188, 245, 110, 0, 62, 235, 233, 254, 189, 146, 72, 75, 61, 18, 85, 203, 189, 244, 246, 234, 61, 87, 255, 199, 187, 131, 47, 11, 188, 70, 243, 250, 188, 30, 193, 182, 61, 174, 104, 97, 189, 14, 63, 179, 189, 96, 219, 237, 189, 243, 186, 24, 190, 93, 219, 166, 189, 174, 239, 195, 187, 212, 188, 180, 189, 207, 146, 152, 189, 78, 77, 44, 190, 198, 1, 136, 61, 152, 68, 176, 188, 205, 226, 66, 61, 248, 246, 138, 189, 69, 217, 18, 62, 197, 67, 137, 61, 196, 216, 67, 61, 57, 28, 107, 188, 160, 216, 104, 189, 230, 16, 5, 190, 59, 250, 254, 189, 172, 78, 30, 190, 38, 47, 67, 189, 251, 41, 195, 189, 113, 3, 203, 188, 21, 71, 194, 188, 233, 124, 7, 190, 154, 254, 154, 61, 135, 216, 236, 189, 182, 210, 26, 62, 4, 219, 11, 62, 88, 60, 37, 190, 131, 177, 163, 61, 12, 115, 21, 190, 1, 222, 224, 60, 195, 172, 41, 189, 127, 69, 151, 190, 165, 10, 30, 190, 235, 44, 186, 62, 212, 86, 98, 190, 217, 139, 67, 62, 20, 219, 238, 188, 218, 243, 163, 62, 37, 39, 164, 62, 182, 85, 241, 189, 91, 191, 48, 62, 34, 221, 12, 188, 248, 184, 37, 62, 76, 94, 237, 189, 192, 129, 201, 189, 28, 190, 93, 62, 17, 140, 60, 62, 180, 222, 141, 62, 128, 31, 44, 189, 153, 245, 90, 62, 112, 74, 101, 190, 179, 122, 118, 62, 62, 46, 144, 190, 124, 25, 217, 61, 106, 79, 22, 191, 71, 16, 233, 190, 74, 206, 124, 188, 60, 138, 52, 189, 190, 25, 132, 190, 117, 176, 65, 62, 193, 20, 177, 190, 95, 35, 225, 189, 12, 96, 133, 61, 84, 139, 138, 60, 222, 235, 111, 188, 186, 96, 127, 61, 68, 208, 75, 190, 132, 149, 42, 190, 189, 72, 190, 61, 140, 237, 115, 62, 92, 28, 31, 62, 171, 95, 57, 62, 51, 131, 167, 189, 143, 27, 228, 190, 135, 47, 23, 190, 193, 206, 37, 191, 76, 107, 59, 190, 213, 27, 44, 190, 216, 27, 156, 61, 220, 66, 224, 189, 138, 30, 45, 191, 135, 222, 87, 59, 86, 76, 39, 191, 18, 182, 195, 188, 3, 28, 222, 61, 13, 193, 194, 189, 34, 147, 34, 63, 236, 53, 0, 190, 223, 194, 76, 189, 120, 240, 40, 190, 197, 13, 213, 61, 206, 185, 10, 62, 1, 209, 15, 190, 151, 170, 55, 189, 36, 71, 130, 62, 181, 110, 61, 189, 111, 103, 14, 190, 143, 146, 59, 188, 172, 76, 168, 189, 132, 78, 41, 62, 234, 126, 40, 190, 75, 14, 39, 189, 66, 234, 100, 61, 47, 126, 4, 62, 7, 99, 220, 189, 242, 187, 33, 62, 128, 82, 85, 60, 238, 214, 252, 189, 244, 94, 23, 60, 81, 164, 101, 61, 143, 6, 24, 189, 237, 244, 22, 190, 148, 245, 3, 190, 117, 194, 206, 189, 215, 181, 4, 61, 6, 38, 129, 61, 192, 110, 38, 188, 231, 59, 168, 189, 254, 3, 216, 59, 163, 206, 250, 61, 210, 251, 22, 60, 184, 135, 35, 190, 219, 52, 199, 61, 153, 184, 185, 61, 188, 60, 14, 190, 251, 200, 45, 189, 172, 214, 10, 62, 207, 42, 175, 190, 55, 169, 30, 190, 121, 3, 145, 62, 47, 152, 74, 190, 8, 123, 197, 61, 40, 14, 17, 189, 146, 37, 17, 62, 146, 174, 243, 60, 217, 243, 14, 188, 212, 172, 247, 61, 205, 5, 96, 62, 227, 152, 222, 61, 71, 104, 45, 61, 216, 186, 156, 190, 118, 7, 94, 62, 206, 5, 72, 62, 206, 140, 152, 62, 52, 131, 210, 189, 237, 195, 124, 62, 9, 206, 157, 190, 69, 127, 33, 62, 156, 207, 123, 189, 122, 226, 63, 185, 96, 239, 51, 62, 36, 17, 138, 190, 16, 178, 125, 62, 130, 93, 85, 190, 124, 38, 63, 183, 33, 50, 195, 62, 116, 218, 244, 189, 34, 203, 14, 190, 182, 2, 216, 189, 50, 226, 23, 61, 114, 246, 151, 61, 109, 104, 169, 62, 129, 12, 167, 190, 222, 110, 47, 62, 13, 97, 52, 62, 60, 186, 180, 62, 17, 180, 9, 62, 98, 40, 128, 189, 57, 54, 175, 61, 171, 104, 59, 62, 205, 209, 6, 62, 185, 185, 46, 189, 242, 196, 201, 189, 252, 77, 80, 62, 116, 90, 247, 61, 135, 77, 79, 62, 87, 219, 88, 189, 130, 142, 159, 61, 23, 23, 42, 190, 1, 194, 181, 61, 240, 255, 55, 61, 81, 114, 6, 62, 224, 240, 242, 190, 153, 122, 159, 190, 249, 217, 9, 189, 113, 151, 167, 187, 4, 145, 130, 190, 159, 174, 218, 61, 224, 43, 240, 190, 154, 204, 174, 190, 36, 27, 117, 62, 165, 73, 79, 190, 102, 249, 129, 190, 196, 52, 104, 190, 42, 97, 205, 190, 244, 91, 172, 188, 167, 142, 93, 62, 72, 180, 138, 61, 185, 55, 68, 60, 185, 128, 220, 190, 24, 127, 142, 62, 136, 146, 141, 189, 36, 45, 185, 61, 187, 49, 219, 61, 196, 44, 138, 191, 252, 113, 141, 62, 246, 220, 18, 62, 251, 165, 22, 61, 5, 64, 190, 60, 221, 13, 7, 62, 213, 165, 128, 62, 165, 101, 12, 62, 208, 245, 76, 190, 192, 76, 164, 190, 201, 89, 41, 61, 117, 133, 144, 190, 163, 105, 96, 62, 70, 22, 111, 187, 63, 128, 149, 189, 132, 113, 64, 62, 184, 195, 53, 191, 31, 248, 150, 190, 28, 159, 69, 62, 172, 115, 92, 61, 175, 137, 41, 190, 171, 79, 133, 61, 196, 68, 67, 190, 93, 162, 9, 62, 5, 55, 37, 62, 247, 191, 193, 61, 245, 63, 255, 188, 244, 150, 120, 189, 210, 200, 52, 189, 110, 237, 232, 188, 204, 20, 245, 61, 150, 53, 85, 190, 155, 87, 171, 187, 21, 242, 70, 189, 195, 179, 164, 61, 37, 27, 151, 190, 181, 148, 6, 60, 175, 184, 79, 190, 86, 88, 199, 190, 80, 61, 189, 187, 48, 127, 154, 61, 140, 29, 93, 189, 129, 49, 249, 189, 178, 211, 32, 62, 71, 157, 215, 58, 183, 122, 133, 60, 3, 127, 35, 190, 99, 24, 110, 189, 23, 165, 195, 189, 177, 193, 21, 190, 140, 246, 164, 188, 226, 157, 18, 61, 67, 127, 0, 189, 208, 3, 133, 61, 196, 189, 131, 189, 130, 6, 80, 62, 121, 110, 54, 62, 75, 151, 24, 62, 25, 60, 20, 189, 33, 163, 209, 189, 53, 132, 117, 62, 235, 98, 81, 190, 8, 154, 87, 189, 223, 3, 135, 190, 14, 13, 71, 190, 135, 43, 79, 62, 102, 186, 41, 61, 226, 88, 2, 62, 184, 89, 246, 61, 220, 151, 121, 61, 69, 195, 56, 189, 84, 200, 139, 61, 255, 6, 127, 190, 73, 202, 109, 62, 149, 48, 189, 62, 19, 75, 190, 187, 239, 16, 41, 62, 83, 50, 96, 190, 229, 159, 155, 60, 103, 115, 56, 62, 196, 55, 213, 189, 250, 143, 86, 190, 85, 171, 130, 62, 104, 216, 86, 190, 97, 160, 209, 189, 243, 238, 107, 62, 51, 78, 116, 189, 63, 146, 30, 190, 121, 168, 32, 62, 243, 123, 156, 187, 48, 195, 18, 189, 47, 30, 216, 61, 43, 159, 148, 60, 70, 161, 217, 62, 150, 153, 235, 61, 169, 191, 240, 190, 52, 29, 58, 187, 151, 17, 0, 61, 138, 36, 172, 61, 252, 208, 32, 62, 167, 111, 25, 191, 203, 151, 41, 59, 99, 155, 15, 191, 118, 67, 130, 190, 173, 184, 34, 61, 161, 191, 145, 62, 147, 78, 44, 191, 187, 193, 99, 190, 93, 129, 80, 62, 21, 244, 50, 62, 34, 204, 246, 189, 78, 114, 217, 62, 126, 224, 144, 190, 4, 145, 220, 190, 168, 60, 52, 189, 5, 154, 108, 189, 4, 103, 149, 61, 104, 10, 85, 191, 146, 57, 12, 63, 253, 192, 253, 190, 143, 95, 218, 190, 48, 22, 135, 190, 165, 63, 42, 190, 121, 48, 94, 62, 84, 188, 73, 190, 80, 28, 115, 62, 172, 170, 149, 58, 253, 65, 178, 62, 207, 111, 161, 62, 210, 69, 245, 190, 101, 105, 166, 190, 223, 116, 70, 189, 227, 143, 158, 61, 156, 214, 59, 62, 110, 37, 150, 60, 169, 80, 92, 190, 97, 56, 25, 62, 160, 87, 218, 61, 4, 79, 31, 189, 128, 224, 191, 61, 56, 167, 105, 187, 212, 183, 112, 62, 16, 199, 221, 188, 216, 145, 248, 190, 221, 169, 28, 62, 151, 117, 175, 62, 0, 35, 12, 191};
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
                alignas(float) const unsigned char memory[] = {74, 165, 253, 61, 83, 23, 169, 188, 70, 23, 186, 189, 225, 195, 48, 189, 239, 168, 136, 189, 96, 172, 189, 62, 190, 110, 198, 61, 126, 111, 208, 61, 107, 194, 36, 62, 196, 103, 21, 189, 248, 82, 57, 62, 242, 247, 187, 189, 13, 176, 63, 190, 251, 176, 182, 61, 217, 179, 54, 189, 120, 144, 78, 190, 162, 30, 163, 60, 36, 2, 226, 188, 96, 102, 156, 188, 101, 241, 108, 62, 95, 195, 19, 190, 69, 168, 70, 61, 151, 244, 23, 188, 171, 124, 63, 190, 240, 99, 4, 190, 94, 48, 25, 62, 145, 128, 165, 61, 240, 75, 222, 61, 197, 13, 157, 189, 23, 111, 21, 190, 24, 197, 13, 189, 11, 40, 25, 62};
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
                alignas(float) const unsigned char memory[] = {128, 94, 166, 186, 119, 140, 119, 190, 226, 179, 46, 189, 93, 92, 192, 62, 137, 202, 249, 61, 113, 155, 173, 62, 0, 166, 140, 190, 18, 97, 243, 190, 94, 5, 116, 62, 40, 217, 83, 188, 7, 184, 132, 189, 17, 133, 36, 191, 170, 188, 179, 62, 105, 0, 80, 191, 8, 215, 177, 190, 245, 203, 211, 186, 32, 117, 221, 188, 50, 145, 237, 188, 8, 76, 44, 62, 186, 222, 173, 190, 165, 239, 89, 62, 119, 146, 40, 62, 114, 208, 30, 191, 160, 153, 14, 63, 106, 70, 184, 188, 39, 145, 85, 190, 90, 38, 162, 190, 189, 44, 252, 190, 114, 74, 61, 62, 166, 22, 179, 62, 101, 185, 18, 191, 54, 98, 1, 63, 251, 198, 78, 190, 162, 217, 130, 61, 202, 190, 110, 61, 136, 120, 149, 61, 150, 142, 156, 190, 95, 4, 13, 190, 223, 1, 56, 61, 20, 202, 33, 62, 44, 215, 44, 190, 218, 176, 128, 60, 171, 78, 54, 190, 99, 94, 128, 60, 149, 220, 210, 60, 242, 208, 253, 188, 179, 238, 28, 62, 61, 246, 214, 61, 189, 31, 39, 62, 42, 21, 0, 62, 90, 229, 22, 61, 32, 147, 121, 190, 204, 75, 17, 62, 98, 123, 50, 61, 253, 22, 128, 62, 143, 169, 139, 62, 207, 109, 5, 190, 53, 105, 213, 189, 120, 34, 125, 189, 128, 54, 152, 189, 25, 40, 255, 61, 7, 97, 72, 61, 202, 10, 217, 60, 238, 65, 74, 61};
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
                alignas(float) const unsigned char memory[] = {86, 141, 36, 62, 157, 188, 219, 189};
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
    alignas(float) const unsigned char memory[] = {32, 127, 120, 62, 10, 54, 189, 62, 52, 141, 187, 63};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {178, 17, 245, 62, 215, 80, 62, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0002/steps/000000000004000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}