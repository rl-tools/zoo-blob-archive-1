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
                alignas(float) const unsigned char memory[] = {63, 70, 50, 63, 8, 102, 10, 191, 130, 163, 155, 190, 189, 77, 245, 62, 245, 154, 53, 191, 54, 98, 245, 190, 12, 32, 186, 62, 120, 109, 163, 191, 35, 223, 121, 190, 227, 10, 7, 60, 109, 213, 142, 191, 91, 118, 18, 191, 20, 14, 190, 189, 212, 204, 176, 190, 181, 131, 201, 62, 71, 219, 6, 63, 154, 184, 128, 191, 85, 226, 10, 62, 89, 252, 184, 62, 204, 53, 87, 191, 22, 240, 50, 190, 204, 160, 39, 63, 179, 232, 163, 63, 213, 83, 166, 62, 34, 94, 20, 191, 183, 186, 137, 190, 154, 112, 249, 189, 97, 217, 7, 63, 112, 174, 79, 190, 192, 96, 249, 62, 172, 167, 142, 62, 0, 194, 152, 191, 67, 247, 139, 190, 225, 245, 21, 62, 81, 189, 134, 63, 3, 188, 160, 190, 101, 8, 84, 62, 238, 130, 3, 191, 59, 29, 28, 62, 70, 198, 91, 190, 226, 8, 149, 190, 172, 20, 140, 190, 185, 242, 208, 190, 117, 102, 202, 190, 171, 20, 36, 191, 72, 31, 132, 190, 230, 55, 143, 62, 188, 161, 56, 63, 23, 101, 56, 63, 220, 153, 47, 191, 65, 199, 135, 190, 115, 246, 92, 191, 48, 7, 208, 190, 152, 49, 92, 60, 29, 41, 204, 190, 213, 212, 144, 190, 30, 96, 164, 62, 225, 236, 49, 62, 126, 118, 205, 62, 144, 64, 151, 190, 74, 116, 26, 61, 116, 173, 128, 191, 39, 141, 206, 62, 137, 79, 50, 63, 147, 253, 41, 191, 75, 13, 120, 190, 145, 160, 77, 190, 31, 141, 113, 63, 200, 110, 131, 61, 214, 33, 3, 63, 8, 21, 149, 191, 254, 55, 72, 190, 2, 144, 12, 191, 54, 160, 142, 190, 157, 248, 180, 190, 103, 9, 186, 62, 234, 128, 182, 189, 250, 178, 4, 191, 95, 49, 16, 189, 6, 92, 100, 62, 200, 32, 205, 190, 192, 6, 71, 63, 221, 208, 144, 63, 37, 89, 179, 62, 26, 109, 101, 190, 34, 210, 173, 191, 103, 169, 180, 190, 48, 219, 107, 62, 166, 255, 133, 63, 21, 241, 200, 62, 243, 190, 153, 62, 0, 172, 61, 191, 60, 114, 219, 190, 231, 150, 167, 190, 27, 143, 45, 190, 29, 73, 27, 191};
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
                alignas(float) const unsigned char memory[] = {169, 18, 58, 191, 118, 138, 201, 189, 246, 43, 235, 189, 7, 0, 104, 189, 5, 46, 167, 61, 248, 0, 199, 189, 38, 21, 57, 60, 92, 201, 82, 190, 60, 128, 47, 63, 217, 248, 86, 191, 130, 221, 168, 62, 146, 229, 157, 62, 82, 23, 89, 62, 86, 78, 31, 190, 98, 69, 32, 191, 237, 24, 95, 190, 199, 205, 65, 191, 235, 38, 40, 63, 143, 11, 199, 62, 86, 212, 27, 63, 175, 244, 34, 62, 250, 178, 10, 191, 229, 109, 17, 63, 194, 48, 61, 63, 22, 232, 35, 191, 207, 86, 33, 62, 194, 22, 137, 61, 162, 41, 17, 187, 17, 71, 34, 62, 225, 157, 129, 62, 63, 245, 173, 189, 178, 178, 98, 62};
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
                alignas(float) const unsigned char memory[] = {174, 134, 140, 190, 237, 143, 98, 190, 85, 113, 167, 190, 248, 118, 237, 61, 143, 1, 95, 190, 189, 178, 169, 190, 146, 87, 187, 190, 66, 80, 218, 62, 229, 27, 134, 190, 55, 188, 184, 61, 82, 213, 104, 190, 179, 149, 104, 190, 197, 101, 176, 61, 41, 73, 242, 61, 56, 197, 92, 60, 130, 50, 202, 189, 103, 147, 87, 190, 6, 12, 54, 189, 152, 221, 231, 189, 239, 214, 10, 62, 77, 244, 115, 189, 119, 170, 30, 191, 12, 120, 18, 190, 11, 177, 1, 62, 236, 92, 238, 61, 211, 227, 41, 189, 236, 162, 74, 60, 219, 115, 138, 62, 126, 149, 172, 61, 17, 124, 30, 190, 150, 237, 115, 189, 160, 67, 216, 62, 215, 252, 70, 62, 216, 121, 179, 62, 110, 29, 173, 62, 237, 197, 164, 190, 138, 149, 151, 60, 76, 182, 116, 62, 100, 124, 157, 62, 197, 232, 141, 190, 203, 76, 44, 62, 208, 70, 235, 190, 208, 240, 48, 62, 113, 244, 35, 61, 242, 206, 32, 62, 233, 110, 13, 62, 235, 1, 1, 191, 46, 149, 74, 62, 193, 220, 194, 189, 24, 138, 131, 188, 194, 33, 202, 62, 198, 178, 225, 60, 143, 182, 189, 190, 40, 221, 145, 190, 148, 244, 43, 61, 9, 47, 57, 62, 16, 250, 213, 190, 203, 88, 160, 62, 131, 216, 187, 60, 45, 128, 172, 190, 226, 18, 227, 190, 184, 84, 203, 61, 154, 42, 147, 62, 16, 203, 12, 190, 201, 83, 182, 189, 235, 149, 106, 62, 0, 93, 253, 190, 188, 59, 140, 190, 239, 242, 223, 189, 125, 170, 212, 61, 51, 39, 123, 62, 84, 33, 192, 190, 203, 58, 2, 59, 172, 253, 238, 61, 194, 126, 135, 62, 58, 187, 127, 61, 252, 135, 138, 62, 241, 155, 134, 190, 181, 197, 183, 190, 119, 229, 67, 60, 113, 160, 200, 190, 196, 143, 71, 189, 122, 109, 142, 61, 78, 53, 71, 189, 233, 64, 9, 61, 141, 45, 174, 190, 19, 205, 84, 189, 35, 51, 134, 62, 161, 68, 179, 189, 53, 251, 42, 62, 78, 58, 102, 60, 207, 97, 149, 188, 114, 92, 44, 191, 75, 76, 202, 61, 238, 33, 245, 189, 40, 123, 166, 190, 182, 39, 229, 60, 94, 254, 187, 189, 90, 150, 49, 62, 55, 142, 42, 190, 89, 231, 159, 62, 47, 59, 141, 62, 165, 116, 215, 62, 238, 38, 123, 191, 68, 138, 131, 61, 226, 224, 230, 190, 148, 74, 85, 62, 117, 88, 103, 62, 106, 68, 170, 62, 249, 158, 180, 189, 86, 229, 11, 190, 27, 168, 20, 62, 227, 180, 3, 61, 253, 207, 135, 190, 158, 142, 106, 62, 27, 147, 14, 61, 196, 21, 70, 189, 111, 199, 165, 188, 64, 76, 81, 190, 17, 171, 88, 61, 35, 173, 163, 190, 107, 61, 180, 188, 162, 107, 154, 61, 79, 136, 26, 191, 213, 158, 61, 190, 63, 27, 83, 190, 112, 182, 168, 61, 81, 90, 44, 61, 193, 120, 173, 61, 13, 38, 63, 62, 94, 253, 26, 62, 237, 241, 158, 188, 165, 57, 24, 62, 187, 174, 108, 62, 2, 177, 165, 62, 72, 22, 38, 190, 30, 42, 54, 60, 215, 247, 191, 187, 23, 105, 148, 62, 44, 150, 7, 62, 118, 207, 100, 188, 52, 106, 28, 190, 117, 159, 134, 190, 123, 165, 74, 62, 254, 150, 192, 189, 225, 0, 131, 188, 113, 222, 169, 189, 217, 79, 187, 189, 136, 92, 52, 59, 61, 92, 138, 190, 66, 121, 92, 62, 157, 53, 34, 62, 20, 203, 1, 190, 195, 76, 42, 62, 207, 255, 93, 188, 42, 185, 63, 61, 116, 142, 183, 190, 26, 223, 160, 60, 152, 218, 83, 62, 6, 130, 94, 190, 199, 114, 206, 190, 63, 32, 32, 189, 154, 71, 33, 190, 178, 43, 223, 61, 118, 36, 157, 190, 197, 165, 219, 190, 188, 178, 69, 190, 157, 224, 162, 61, 13, 177, 185, 189, 225, 153, 107, 189, 209, 24, 163, 61, 2, 58, 73, 190, 195, 207, 46, 189, 50, 138, 99, 189, 93, 13, 133, 62, 23, 14, 38, 190, 57, 227, 11, 191, 251, 164, 18, 62, 134, 147, 0, 61, 188, 222, 95, 62, 44, 228, 13, 62, 135, 165, 31, 191, 70, 105, 95, 188, 99, 81, 210, 62, 74, 28, 35, 190, 207, 178, 253, 189, 130, 79, 138, 190, 177, 170, 171, 62, 90, 155, 36, 62, 246, 195, 5, 190, 99, 151, 116, 190, 232, 84, 138, 62, 160, 216, 30, 62, 245, 60, 161, 190, 160, 113, 79, 191, 209, 37, 163, 60, 239, 104, 160, 189, 107, 92, 219, 62, 111, 138, 216, 190, 169, 105, 160, 62, 39, 168, 119, 191, 64, 4, 187, 62, 42, 27, 172, 190, 121, 20, 68, 189, 212, 163, 194, 60, 15, 243, 60, 61, 185, 25, 29, 62, 9, 46, 51, 62, 185, 99, 240, 59, 96, 79, 51, 191, 30, 162, 99, 190, 176, 61, 9, 62, 26, 57, 101, 62, 36, 211, 206, 189, 210, 209, 56, 190, 138, 128, 92, 62, 206, 64, 14, 62, 78, 135, 159, 190, 36, 119, 55, 191, 227, 239, 61, 62, 239, 145, 103, 191, 234, 136, 179, 61, 172, 53, 168, 190, 57, 122, 197, 61, 63, 57, 166, 188, 149, 182, 186, 189, 190, 202, 243, 60, 249, 118, 175, 59, 200, 45, 254, 61, 250, 232, 215, 61, 173, 72, 35, 62, 13, 36, 126, 190, 222, 103, 62, 62, 94, 50, 129, 190, 74, 242, 172, 61, 52, 123, 45, 62, 235, 93, 99, 62, 242, 212, 152, 189, 221, 194, 149, 61, 255, 186, 28, 61, 218, 172, 52, 190, 52, 84, 202, 58, 64, 202, 134, 62, 204, 138, 153, 189, 132, 121, 67, 190, 147, 160, 112, 190, 37, 224, 65, 190, 101, 177, 9, 62, 193, 114, 158, 189, 104, 89, 153, 60, 45, 135, 146, 61, 78, 116, 149, 190, 102, 17, 107, 190, 109, 144, 95, 188, 100, 193, 156, 189, 255, 237, 135, 61, 5, 181, 185, 60, 75, 80, 5, 190, 228, 178, 183, 190, 31, 250, 185, 190, 39, 104, 20, 62, 200, 148, 224, 190, 20, 242, 112, 190, 38, 104, 147, 190, 229, 18, 163, 62, 169, 20, 161, 190, 145, 158, 45, 191, 105, 125, 140, 190, 47, 128, 155, 190, 117, 219, 56, 191, 134, 6, 126, 190, 172, 32, 191, 61, 158, 29, 199, 187, 138, 126, 192, 62, 8, 183, 17, 189, 81, 246, 183, 190, 253, 39, 197, 189, 78, 211, 191, 61, 110, 146, 137, 62, 218, 24, 130, 190, 174, 170, 66, 190, 168, 191, 228, 190, 65, 121, 248, 190, 91, 211, 163, 190, 32, 44, 110, 189, 107, 67, 245, 189, 237, 91, 207, 190, 87, 155, 181, 190, 193, 195, 149, 60, 251, 190, 214, 190, 35, 95, 144, 191, 108, 159, 240, 189, 134, 156, 239, 189, 0, 237, 44, 191, 205, 70, 14, 191, 108, 198, 111, 190, 101, 85, 167, 62, 255, 192, 192, 190, 3, 85, 165, 191, 76, 89, 17, 191, 67, 90, 99, 61, 193, 12, 188, 190, 1, 125, 45, 62, 101, 52, 1, 191, 232, 22, 76, 190, 80, 1, 143, 62, 101, 223, 74, 61, 50, 15, 32, 190, 216, 67, 96, 62, 23, 18, 227, 189, 16, 87, 45, 190, 26, 121, 113, 62, 224, 141, 180, 189, 204, 253, 189, 189, 146, 234, 11, 191, 226, 136, 102, 61, 240, 75, 148, 189, 53, 89, 42, 191, 25, 240, 60, 191, 188, 63, 70, 62, 164, 53, 39, 190, 176, 174, 87, 190, 63, 174, 251, 190, 211, 255, 83, 62, 226, 189, 34, 190, 2, 57, 215, 190, 185, 167, 202, 189, 214, 28, 220, 62, 187, 202, 148, 190, 167, 186, 157, 61, 121, 160, 65, 190, 40, 115, 4, 60, 211, 5, 107, 190, 52, 254, 183, 189, 29, 59, 129, 62, 55, 29, 69, 190, 106, 91, 181, 190, 2, 206, 26, 190, 31, 89, 91, 189, 173, 148, 98, 62, 74, 221, 211, 61, 206, 177, 26, 191, 23, 203, 68, 190, 59, 22, 21, 62, 74, 154, 32, 187, 248, 150, 99, 189, 252, 111, 19, 190, 158, 137, 137, 62, 185, 41, 103, 189, 241, 169, 184, 189, 213, 59, 54, 190, 34, 162, 177, 62, 224, 4, 170, 190, 127, 203, 181, 189, 141, 120, 141, 190, 93, 245, 18, 62, 58, 237, 7, 190, 170, 57, 152, 190, 174, 131, 148, 189, 182, 234, 150, 60, 185, 58, 55, 62, 54, 181, 99, 190, 208, 102, 22, 60, 11, 89, 227, 60, 2, 141, 79, 60, 76, 64, 23, 190, 68, 147, 5, 62, 131, 26, 245, 189, 112, 9, 39, 191, 146, 22, 236, 188, 39, 51, 135, 61, 242, 253, 11, 62, 70, 6, 113, 62, 226, 119, 26, 191, 36, 114, 113, 189, 254, 80, 29, 62, 2, 235, 9, 190, 7, 16, 53, 190, 172, 214, 138, 59, 120, 225, 10, 62, 253, 7, 148, 61, 239, 135, 208, 189, 114, 138, 93, 189, 241, 114, 107, 61, 50, 3, 102, 188, 223, 155, 184, 61, 83, 34, 177, 60, 236, 57, 239, 189, 130, 121, 188, 60, 179, 116, 65, 62, 23, 150, 97, 61, 245, 177, 134, 189, 216, 102, 233, 61, 101, 33, 31, 61, 15, 224, 196, 189, 177, 129, 179, 187, 74, 37, 104, 188, 201, 98, 221, 61, 65, 58, 191, 61, 10, 41, 176, 189, 147, 46, 158, 189, 210, 250, 222, 189, 133, 235, 64, 190, 227, 8, 1, 189, 182, 148, 173, 189, 212, 63, 169, 61, 8, 117, 188, 190, 144, 37, 57, 190, 239, 168, 56, 61, 218, 18, 145, 61, 126, 161, 48, 189, 52, 218, 34, 189, 167, 144, 11, 189, 253, 84, 7, 190, 241, 42, 228, 60, 238, 191, 238, 188, 215, 41, 167, 189, 57, 139, 139, 189, 241, 99, 38, 61, 249, 250, 48, 61, 195, 23, 19, 190, 222, 101, 107, 61, 112, 65, 9, 190, 182, 35, 155, 61, 242, 110, 192, 186, 112, 116, 4, 62, 31, 187, 182, 188, 119, 70, 131, 61, 52, 21, 131, 60, 218, 38, 101, 189, 51, 188, 10, 62, 230, 123, 41, 190, 14, 132, 74, 188, 162, 197, 202, 189, 166, 153, 232, 61, 57, 154, 38, 190, 128, 104, 0, 189, 30, 104, 219, 189, 2, 42, 15, 190, 132, 33, 233, 189, 60, 89, 5, 62, 115, 113, 102, 61, 11, 149, 38, 188, 228, 129, 11, 190, 213, 235, 26, 190, 118, 177, 116, 189, 73, 207, 7, 61, 23, 241, 243, 189, 159, 81, 6, 62, 46, 12, 12, 62, 159, 94, 17, 62, 190, 165, 68, 189, 251, 162, 143, 190, 147, 81, 141, 190, 210, 233, 38, 60, 34, 157, 141, 60, 220, 143, 155, 62, 224, 67, 85, 190, 190, 34, 238, 61, 4, 187, 210, 190, 203, 30, 5, 191, 170, 231, 238, 189, 215, 63, 126, 189, 81, 158, 25, 191, 234, 26, 184, 62, 201, 201, 189, 62, 3, 64, 49, 188, 113, 32, 128, 189, 224, 137, 93, 190, 144, 251, 173, 62, 48, 160, 241, 60, 11, 223, 19, 62, 83, 207, 232, 60, 53, 2, 113, 188, 182, 128, 152, 189, 131, 215, 25, 190, 174, 157, 116, 62, 246, 165, 178, 190, 232, 226, 12, 189, 143, 226, 118, 189, 13, 68, 242, 190, 92, 50, 116, 190, 182, 195, 240, 190, 11, 20, 220, 61, 132, 79, 70, 189, 147, 225, 187, 190, 245, 151, 218, 60, 200, 210, 10, 62, 69, 229, 1, 190, 168, 183, 208, 188, 200, 156, 202, 189, 66, 24, 127, 189, 165, 117, 228, 61, 56, 102, 43, 60, 189, 158, 198, 61, 248, 22, 196, 190, 67, 225, 16, 191, 170, 201, 34, 189, 140, 41, 13, 62, 168, 4, 65, 62, 78, 36, 44, 62, 58, 157, 16, 191, 115, 53, 32, 62, 211, 152, 198, 62, 67, 84, 7, 60, 200, 5, 23, 190, 198, 210, 242, 188, 229, 183, 41, 62, 25, 58, 159, 62, 155, 190, 163, 189, 52, 10, 21, 190, 37, 75, 74, 62, 83, 215, 3, 60, 180, 87, 1, 190, 73, 24, 54, 190, 56, 25, 14, 191, 100, 44, 251, 61, 48, 19, 238, 190, 42, 21, 18, 190, 16, 76, 57, 61, 238, 158, 77, 188, 101, 100, 161, 189, 184, 130, 154, 190, 119, 99, 213, 190, 143, 1, 213, 189, 216, 251, 57, 61, 130, 23, 19, 191, 74, 53, 77, 62, 18, 118, 252, 61, 10, 176, 192, 60, 77, 121, 132, 62, 23, 39, 9, 61, 47, 92, 29, 189, 76, 172, 29, 60, 85, 74, 250, 61, 217, 95, 36, 191, 175, 67, 27, 62, 112, 5, 225, 189, 213, 224, 197, 190, 167, 187, 147, 189, 250, 64, 200, 191, 149, 112, 9, 62, 35, 90, 8, 62, 250, 212, 165, 190, 172, 54, 52, 189, 205, 132, 44, 62, 158, 198, 51, 189, 128, 144, 32, 190, 227, 209, 234, 60, 84, 102, 3, 190, 158, 51, 53, 58, 52, 81, 106, 189, 4, 158, 53, 61, 73, 71, 149, 189, 137, 182, 46, 60, 39, 237, 226, 188, 39, 12, 116, 61, 120, 23, 5, 62, 24, 243, 36, 190, 149, 203, 56, 190, 142, 78, 157, 189, 138, 9, 250, 189, 141, 50, 155, 61, 140, 75, 6, 190, 152, 9, 101, 187, 198, 246, 233, 56, 209, 102, 204, 61, 8, 190, 69, 189, 141, 184, 117, 61, 27, 78, 153, 189, 96, 221, 37, 190, 124, 222, 148, 58, 216, 157, 27, 61, 155, 186, 70, 60, 127, 158, 12, 61, 134, 45, 96, 186, 130, 205, 44, 191, 3, 239, 158, 190, 111, 205, 227, 190, 227, 155, 168, 62, 101, 32, 195, 190, 202, 184, 139, 190, 215, 78, 27, 190, 96, 15, 127, 62, 196, 87, 217, 60, 63, 188, 102, 61, 5, 153, 65, 190, 181, 132, 138, 60, 86, 26, 23, 190, 140, 204, 138, 188, 176, 195, 74, 61, 204, 54, 254, 190, 206, 53, 47, 191, 58, 116, 15, 190, 129, 120, 25, 189, 93, 187, 51, 62, 44, 170, 182, 62, 16, 71, 0, 191, 165, 27, 144, 61, 27, 35, 198, 62, 92, 23, 65, 190, 189, 135, 96, 190, 156, 113, 98, 190, 137, 103, 121, 62, 151, 185, 146, 62, 184, 203, 116, 61, 165, 209, 72, 190, 232, 197, 203, 62, 39, 239, 223, 190, 106, 46, 70, 190, 193, 170, 99, 190, 111, 71, 75, 62, 123, 129, 116, 190, 99, 5, 67, 189, 0, 196, 152, 190, 43, 215, 136, 62, 191, 97, 42, 190, 254, 247, 164, 61, 1, 248, 91, 190, 160, 134, 153, 189, 25, 241, 53, 190, 118, 155, 136, 189, 22, 191, 196, 61, 100, 23, 156, 190, 57, 213, 154, 190, 191, 47, 65, 62, 124, 165, 198, 58, 106, 147, 58, 187, 88, 229, 133, 62, 10, 143, 46, 191, 164, 243, 162, 61, 57, 15, 157, 62, 75, 208, 101, 190, 230, 220, 20, 188, 207, 99, 183, 61, 241, 125, 156, 59, 132, 72, 159, 62, 162, 88, 73, 189, 103, 4, 120, 190, 77, 225, 109, 62, 39, 4, 243, 189, 139, 53, 86, 62, 136, 93, 70, 190, 182, 163, 8, 189, 29, 139, 251, 189, 57, 178, 92, 62, 31, 235, 19, 62, 61, 34, 250, 190, 59, 151, 8, 62, 70, 83, 148, 61, 26, 167, 138, 61, 187, 61, 18, 61, 123, 120, 70, 62, 189, 251, 161, 189, 17, 212, 38, 62, 231, 65, 69, 190, 156, 4, 42, 61, 56, 7, 149, 188, 110, 206, 45, 190, 247, 39, 48, 62, 123, 145, 118, 62, 165, 133, 24, 190, 101, 12, 9, 190, 108, 110, 216, 62, 156, 98, 113, 60, 231, 132, 116, 62, 73, 31, 174, 61, 43, 204, 21, 190, 186, 78, 31, 62, 251, 162, 210, 189, 1, 61, 12, 62, 59, 73, 130, 189, 80, 247, 98, 189, 94, 84, 141, 190, 64, 234, 232, 62, 254, 147, 37, 191, 49, 226, 112, 61, 243, 106, 2, 62, 200, 136, 205, 62, 226, 20, 25, 191, 134, 173, 231, 61, 172, 208, 185, 190, 246, 190, 164, 62, 2, 170, 19, 190, 2, 20, 69, 61, 162, 221, 168, 61, 52, 27, 16, 190, 23, 216, 54, 62, 69, 162, 73, 190, 219, 176, 7, 61, 194, 49, 183, 60, 115, 34, 186, 190, 159, 168, 130, 189, 1, 236, 165, 60, 14, 155, 81, 61, 112, 208, 32, 190, 149, 144, 14, 63, 140, 49, 177, 190, 229, 73, 35, 62, 35, 224, 209, 190, 112, 10, 189, 191, 87, 183, 107, 62, 29, 246, 186, 60, 231, 135, 183, 190, 132, 178, 198, 62, 106, 218, 158, 62, 243, 83, 186, 62, 237, 65, 102, 190, 248, 25, 160, 62, 95, 149, 82, 62, 221, 244, 166, 62, 14, 24, 197, 190, 79, 34, 251, 61, 126, 11, 15, 191, 12, 56, 56, 62, 194, 109, 11, 60, 46, 219, 250, 61, 103, 90, 80, 189, 47, 54, 181, 190, 119, 119, 133, 62, 255, 164, 147, 187, 230, 95, 153, 189, 168, 117, 72, 62, 54, 217, 56, 190, 228, 143, 234, 190, 72, 36, 66, 188, 199, 187, 159, 62, 94, 198, 14, 62, 94, 195, 220, 190, 101, 212, 125, 62, 245, 1, 111, 62, 189, 226, 215, 190, 147, 65, 241, 190, 222, 232, 137, 62, 70, 114, 50, 62, 150, 219, 33, 190, 233, 125, 220, 60, 108, 16, 7, 62, 47, 179, 21, 190, 228, 241, 53, 190, 85, 52, 46, 61, 92, 209, 199, 189, 231, 29, 155, 189, 39, 65, 25, 62, 91, 84, 207, 59, 222, 29, 119, 189, 23, 96, 223, 61, 53, 121, 214, 59, 179, 112, 97, 61, 168, 228, 214, 61, 136, 146, 156, 190, 248, 215, 238, 61, 108, 228, 14, 61, 205, 121, 243, 59, 249, 158, 252, 189, 28, 141, 253, 61, 191, 166, 40, 61, 123, 76, 103, 61, 150, 254, 71, 61, 127, 14, 40, 62, 70, 223, 42, 62, 82, 191, 133, 61, 115, 77, 38, 62, 45, 62, 48, 62, 77, 204, 5, 190, 146, 160, 155, 61, 197, 204, 30, 189, 11, 144, 103, 190, 174, 199, 213, 190, 98, 227, 169, 189, 244, 249, 218, 190, 237, 164, 181, 61, 179, 153, 98, 191, 161, 220, 147, 190, 191, 220, 36, 190, 187, 21, 35, 190, 64, 39, 40, 62, 150, 223, 87, 190, 219, 83, 198, 61, 141, 95, 139, 60, 40, 248, 160, 189, 234, 26, 134, 190, 198, 227, 46, 62, 65, 36, 122, 191, 11, 205, 31, 191, 126, 130, 228, 61, 43, 236, 32, 190, 245, 79, 116, 62, 238, 243, 94, 188, 184, 84, 31, 191, 6, 97, 22, 62, 97, 168, 69, 62, 173, 216, 163, 59, 65, 251, 13, 190, 73, 103, 61, 190, 17, 75, 164, 61, 183, 124, 168, 189, 228, 119, 183, 190, 31, 80, 38, 190, 247, 208, 137, 62, 161, 215, 253, 190, 136, 209, 29, 61, 151, 45, 40, 191, 198, 55, 207, 189, 129, 198, 15, 62, 33, 223, 225, 61, 24, 240, 201, 61, 108, 105, 198, 189, 40, 139, 91, 191, 208, 89, 158, 62, 153, 45, 183, 61, 75, 165, 50, 62, 18, 117, 100, 62, 6, 111, 57, 189, 166, 137, 19, 60, 89, 118, 165, 189, 182, 4, 172, 191, 47, 217, 22, 191, 6, 219, 161, 61, 224, 65, 163, 62, 223, 233, 138, 60, 93, 86, 164, 190, 96, 170, 219, 61, 253, 119, 171, 62, 196, 150, 78, 62, 137, 190, 126, 62, 157, 187, 114, 62, 178, 62, 137, 61, 51, 192, 44, 191, 217, 153, 72, 62, 54, 42, 54, 190, 157, 42, 56, 190, 20, 175, 130, 62, 138, 99, 47, 62, 163, 207, 171, 62, 82, 181, 228, 188, 167, 20, 178, 62, 150, 21, 102, 61, 75, 238, 35, 62, 84, 11, 126, 61, 165, 144, 156, 61, 146, 85, 195, 61, 142, 167, 12, 189, 14, 230, 116, 190, 183, 2, 95, 62, 4, 200, 152, 189, 108, 194, 15, 187, 153, 151, 40, 62, 40, 184, 87, 62, 16, 230, 99, 61, 33, 159, 93, 61, 201, 172, 120, 190, 213, 156, 91, 62, 180, 54, 232, 62, 165, 131, 241, 189, 149, 37, 188, 187, 163, 5, 98, 61, 154, 161, 174, 61, 55, 255, 56, 189, 161, 204, 234, 189, 214, 53, 122, 62, 63, 192, 83, 190, 232, 79, 135, 62, 195, 162, 20, 61, 78, 129, 17, 191, 85, 174, 109, 190, 121, 208, 156, 190, 35, 95, 81, 61, 113, 229, 200, 190, 26, 184, 10, 190, 28, 160, 102, 190, 247, 140, 25, 61, 12, 66, 199, 188, 144, 121, 137, 189, 53, 3, 21, 190, 136, 48, 93, 61, 138, 34, 187, 189, 3, 165, 135, 190, 62, 198, 52, 62, 230, 171, 150, 190, 124, 202, 100, 191, 136, 124, 115, 62, 45, 17, 173, 189, 108, 21, 101, 62, 137, 83, 138, 62, 231, 64, 54, 191, 219, 207, 73, 62, 241, 181, 201, 62, 198, 249, 37, 61, 132, 230, 19, 189, 23, 17, 15, 190, 139, 50, 131, 62, 194, 0, 148, 62, 199, 94, 14, 189, 153, 160, 108, 189, 222, 100, 130, 61, 2, 131, 181, 61, 125, 121, 19, 61, 222, 13, 170, 190, 1, 18, 156, 190, 41, 62, 221, 190, 72, 125, 245, 190, 22, 125, 36, 62, 68, 33, 173, 190, 200, 80, 54, 61, 52, 8, 79, 190, 214, 19, 20, 190, 120, 243, 207, 62, 246, 223, 9, 191, 132, 179, 242, 188, 78, 137, 9, 191, 192, 174, 253, 188, 90, 226, 254, 186, 175, 102, 239, 60, 19, 135, 10, 190, 166, 3, 82, 62, 42, 146, 128, 190, 218, 225, 141, 61, 4, 204, 8, 62, 55, 33, 51, 190, 219, 214, 35, 191, 106, 115, 80, 62, 196, 35, 181, 62, 79, 189, 139, 190, 152, 221, 89, 191, 56, 203, 137, 62, 251, 74, 4, 61, 42, 99, 129, 190, 52, 92, 188, 189, 46, 106, 8, 60, 26, 82, 62, 61, 244, 20, 217, 190, 123, 156, 188, 61, 49, 193, 132, 61, 238, 146, 184, 190, 50, 150, 12, 190, 246, 91, 4, 62, 19, 134, 62, 190, 41, 118, 168, 190, 242, 64, 145, 190, 50, 138, 154, 190, 252, 145, 162, 62, 133, 36, 226, 188, 183, 215, 91, 62, 74, 160, 149, 61, 104, 220, 173, 59, 231, 252, 133, 62, 184, 145, 2, 190, 9, 82, 211, 190, 102, 65, 8, 62, 111, 197, 124, 62, 221, 215, 235, 191, 164, 4, 202, 62, 169, 136, 215, 189, 54, 34, 1, 63, 152, 96, 61, 190, 169, 112, 239, 191, 113, 119, 150, 61, 231, 142, 249, 188, 162, 106, 105, 61, 216, 86, 29, 190, 134, 52, 133, 61, 215, 235, 174, 62, 178, 186, 221, 188, 142, 177, 40, 59, 176, 167, 183, 61, 136, 120, 137, 62, 48, 154, 143, 190, 60, 109, 167, 189, 127, 127, 187, 61, 8, 192, 70, 62, 241, 249, 107, 190, 52, 92, 94, 189, 224, 178, 245, 59, 161, 229, 157, 189, 118, 187, 234, 188, 90, 87, 38, 62, 169, 183, 224, 60, 171, 200, 158, 189, 25, 173, 200, 188, 241, 255, 51, 62, 127, 166, 144, 62, 153, 35, 85, 190, 251, 203, 94, 61, 209, 58, 113, 190, 147, 69, 92, 189, 100, 59, 221, 189, 157, 123, 149, 190, 16, 30, 169, 189, 177, 8, 128, 190, 126, 17, 128, 61, 240, 85, 189, 188, 184, 202, 25, 61, 94, 20, 48, 62, 28, 136, 186, 189, 37, 219, 106, 190, 32, 63, 243, 61, 90, 65, 149, 62, 238, 16, 114, 62, 30, 52, 148, 190, 92, 177, 45, 62, 240, 184, 120, 190, 11, 44, 78, 62, 221, 55, 192, 60, 221, 189, 47, 62, 56, 251, 92, 189, 194, 250, 211, 61, 237, 45, 43, 62, 191, 185, 101, 190, 16, 109, 119, 189, 203, 27, 146, 61, 149, 28, 6, 62, 92, 180, 179, 189, 108, 148, 171, 189, 14, 9, 176, 189, 202, 71, 66, 62, 214, 8, 133, 190, 228, 145, 80, 61, 34, 19, 130, 189, 59, 227, 104, 190, 32, 197, 15, 190, 215, 134, 24, 190, 188, 52, 218, 61, 56, 85, 187, 57};
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
                alignas(float) const unsigned char memory[] = {91, 185, 56, 189, 168, 213, 8, 62, 216, 208, 206, 61, 34, 123, 80, 62, 87, 94, 109, 59, 236, 202, 147, 61, 129, 207, 148, 190, 70, 66, 136, 62, 197, 32, 244, 61, 205, 112, 27, 190, 10, 116, 138, 189, 211, 53, 159, 62, 117, 66, 155, 190, 144, 118, 17, 62, 9, 157, 243, 188, 62, 201, 16, 62, 251, 194, 227, 61, 119, 222, 149, 189, 56, 185, 145, 62, 79, 32, 3, 62, 209, 69, 67, 189, 79, 71, 114, 62, 37, 142, 17, 61, 196, 153, 244, 61, 140, 253, 185, 61, 101, 50, 23, 188, 220, 238, 59, 189, 186, 80, 160, 62, 93, 170, 162, 189, 161, 48, 167, 61, 218, 8, 89, 190, 137, 251, 92, 62};
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
                alignas(float) const unsigned char memory[] = {98, 193, 219, 190, 169, 96, 58, 63, 49, 141, 105, 61, 78, 179, 217, 62, 136, 59, 81, 62, 188, 219, 82, 190, 129, 42, 65, 191, 139, 242, 26, 61, 68, 179, 92, 191, 206, 163, 157, 191, 226, 238, 155, 190, 57, 236, 87, 190, 87, 46, 225, 189, 113, 38, 248, 189, 73, 118, 244, 190, 139, 193, 81, 190, 140, 97, 123, 62, 194, 88, 220, 187, 41, 77, 4, 191, 183, 231, 110, 190, 202, 113, 61, 62, 229, 130, 75, 63, 255, 17, 235, 62, 21, 88, 21, 190, 72, 239, 3, 191, 250, 164, 203, 190, 174, 225, 46, 190, 229, 137, 186, 190, 53, 5, 80, 191, 10, 153, 157, 63, 48, 202, 141, 186, 6, 239, 20, 62, 191, 6, 181, 62, 81, 233, 238, 189, 11, 98, 244, 190, 105, 251, 71, 62, 157, 3, 114, 190, 79, 112, 229, 60, 17, 55, 187, 62, 64, 35, 124, 189, 169, 116, 86, 59, 71, 156, 202, 61, 224, 91, 131, 62, 121, 175, 30, 61, 237, 175, 36, 62, 56, 108, 194, 188, 76, 239, 20, 189, 198, 179, 249, 188, 175, 52, 35, 190, 172, 101, 222, 61, 120, 89, 12, 62, 211, 174, 150, 62, 84, 60, 103, 190, 30, 88, 88, 189, 144, 89, 36, 62, 151, 89, 57, 190, 156, 59, 4, 190, 155, 136, 250, 190, 107, 65, 82, 62, 115, 142, 207, 189, 110, 153, 96, 62, 244, 29, 145, 62, 70, 167, 90, 62, 232, 76, 104, 190};
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
                alignas(float) const unsigned char memory[] = {180, 153, 57, 62, 143, 203, 222, 190};
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
    alignas(float) const unsigned char memory[] = {115, 87, 162, 62, 166, 30, 158, 191, 75, 9, 163, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {233, 245, 3, 64, 173, 82, 2, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0067/steps/000000000010000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}