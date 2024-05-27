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
                alignas(float) const unsigned char memory[] = {161, 219, 69, 63, 19, 125, 151, 191, 49, 17, 169, 190, 5, 198, 150, 62, 195, 24, 192, 191, 61, 156, 134, 190, 19, 25, 10, 62, 217, 206, 49, 63, 10, 132, 202, 61, 185, 75, 4, 191, 57, 102, 15, 63, 136, 108, 234, 60, 68, 202, 4, 63, 136, 147, 134, 190, 102, 91, 20, 191, 32, 102, 43, 62, 74, 123, 168, 190, 221, 210, 176, 62, 202, 136, 239, 189, 154, 75, 186, 63, 88, 213, 128, 62, 183, 193, 90, 191, 132, 34, 127, 189, 212, 57, 156, 190, 1, 106, 169, 189, 131, 247, 90, 63, 208, 30, 47, 62, 185, 207, 13, 191, 240, 6, 85, 62, 41, 154, 163, 62, 164, 136, 236, 189, 44, 113, 11, 62, 56, 119, 2, 63, 24, 148, 19, 61, 42, 137, 86, 63, 237, 219, 169, 190, 247, 231, 200, 62, 124, 124, 194, 63, 66, 167, 226, 62, 190, 90, 5, 63, 177, 47, 138, 190, 80, 212, 27, 63, 245, 198, 37, 62, 200, 247, 35, 63, 171, 30, 218, 190, 111, 162, 88, 63, 220, 223, 25, 63, 115, 64, 126, 62, 150, 11, 9, 62, 155, 2, 126, 191, 201, 33, 174, 190, 144, 208, 119, 62, 53, 86, 21, 191, 224, 210, 135, 62, 43, 25, 215, 190, 142, 166, 130, 63, 48, 216, 50, 190, 34, 198, 233, 189, 26, 119, 111, 191, 21, 57, 222, 189, 75, 197, 11, 191, 240, 18, 73, 63, 190, 159, 0, 63, 14, 246, 0, 190, 218, 186, 81, 191, 29, 27, 130, 190, 130, 64, 79, 63, 92, 86, 39, 63, 66, 244, 29, 62, 120, 100, 209, 190, 83, 124, 235, 191, 44, 136, 162, 190, 120, 85, 58, 63, 207, 20, 17, 191, 177, 253, 113, 190, 141, 253, 52, 191, 45, 185, 196, 60, 245, 169, 109, 191, 103, 201, 147, 190, 204, 13, 122, 63, 8, 172, 2, 63, 194, 71, 167, 188, 64, 242, 41, 63, 185, 192, 235, 190, 3, 208, 101, 191, 252, 1, 144, 188, 51, 133, 144, 62, 116, 212, 36, 190, 143, 157, 136, 190, 27, 0, 185, 62, 92, 201, 2, 63, 78, 241, 119, 191, 38, 183, 131, 190, 243, 75, 29, 63, 228, 11, 110, 190, 17, 50, 140, 62};
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
                alignas(float) const unsigned char memory[] = {158, 163, 170, 190, 7, 157, 138, 62, 12, 222, 111, 191, 195, 81, 203, 62, 183, 102, 133, 190, 34, 33, 182, 61, 125, 251, 230, 190, 246, 216, 174, 190, 18, 127, 76, 190, 85, 114, 17, 63, 44, 247, 125, 190, 19, 219, 169, 190, 25, 129, 184, 189, 218, 77, 230, 190, 140, 155, 246, 62, 57, 64, 243, 190, 38, 106, 90, 61, 86, 87, 142, 61, 149, 214, 177, 62, 146, 168, 145, 62, 240, 67, 192, 61, 190, 130, 183, 190, 61, 250, 182, 61, 180, 26, 199, 190, 84, 199, 23, 191, 73, 170, 130, 190, 180, 42, 165, 62, 0, 38, 143, 190, 21, 222, 45, 63, 143, 154, 174, 190, 166, 140, 62, 190, 181, 71, 62, 191};
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
                alignas(float) const unsigned char memory[] = {233, 133, 242, 190, 205, 76, 108, 61, 78, 66, 217, 190, 46, 83, 141, 62, 249, 216, 19, 190, 32, 226, 158, 61, 162, 185, 186, 61, 76, 101, 247, 188, 212, 81, 201, 61, 204, 126, 150, 62, 171, 100, 215, 189, 133, 225, 127, 191, 159, 117, 120, 188, 22, 110, 242, 190, 206, 249, 180, 191, 129, 149, 102, 191, 238, 169, 13, 189, 253, 123, 60, 62, 161, 102, 44, 62, 73, 178, 122, 62, 240, 241, 66, 62, 40, 165, 106, 190, 60, 213, 32, 191, 103, 72, 16, 191, 94, 254, 15, 62, 221, 154, 119, 191, 61, 219, 191, 61, 8, 147, 53, 190, 163, 209, 154, 62, 122, 219, 36, 60, 67, 41, 27, 191, 19, 148, 22, 191, 107, 144, 172, 190, 107, 104, 247, 61, 232, 223, 165, 189, 78, 118, 232, 60, 133, 119, 137, 186, 135, 156, 226, 61, 88, 15, 203, 189, 199, 18, 48, 62, 233, 242, 127, 189, 232, 58, 44, 62, 49, 236, 64, 190, 172, 193, 227, 61, 49, 198, 12, 190, 227, 81, 69, 62, 86, 213, 196, 62, 25, 246, 237, 189, 21, 12, 146, 61, 211, 214, 124, 62, 154, 134, 62, 62, 104, 20, 111, 62, 145, 49, 36, 62, 149, 90, 40, 61, 220, 217, 117, 62, 107, 244, 177, 59, 15, 96, 70, 191, 52, 180, 51, 62, 215, 234, 248, 61, 14, 192, 86, 190, 213, 13, 84, 61, 116, 17, 226, 188, 72, 171, 67, 190, 148, 170, 234, 61, 67, 250, 204, 190, 112, 115, 172, 62, 214, 25, 80, 62, 126, 35, 234, 189, 39, 26, 76, 190, 63, 59, 5, 189, 30, 143, 139, 191, 168, 67, 37, 62, 187, 192, 121, 191, 133, 79, 158, 189, 82, 70, 233, 187, 251, 199, 38, 190, 10, 65, 68, 190, 34, 41, 92, 61, 67, 167, 136, 188, 97, 178, 148, 188, 186, 130, 118, 62, 144, 165, 208, 62, 135, 90, 248, 187, 37, 197, 109, 62, 19, 101, 87, 191, 202, 178, 178, 190, 172, 134, 101, 189, 216, 201, 198, 62, 22, 155, 106, 191, 234, 197, 56, 62, 159, 5, 164, 191, 199, 220, 64, 190, 230, 132, 2, 191, 26, 247, 1, 63, 3, 44, 193, 190, 66, 227, 116, 191, 137, 114, 8, 63, 5, 42, 250, 188, 141, 164, 110, 190, 251, 55, 128, 190, 25, 8, 176, 62, 181, 146, 72, 62, 47, 58, 182, 62, 22, 206, 253, 189, 24, 4, 230, 62, 2, 218, 130, 60, 24, 30, 190, 61, 103, 102, 134, 189, 27, 121, 149, 190, 1, 78, 32, 190, 109, 245, 53, 190, 69, 211, 138, 191, 146, 87, 57, 61, 247, 126, 214, 61, 68, 180, 48, 61, 57, 88, 164, 189, 102, 9, 128, 62, 103, 117, 130, 61, 43, 112, 155, 190, 89, 193, 11, 191, 80, 232, 138, 62, 237, 61, 237, 188, 84, 95, 226, 61, 5, 223, 117, 62, 110, 103, 0, 62, 123, 161, 15, 190, 84, 242, 107, 62, 25, 88, 140, 190, 19, 223, 12, 191, 146, 16, 113, 190, 173, 116, 80, 188, 106, 74, 132, 62, 223, 88, 140, 189, 185, 124, 171, 189, 222, 90, 26, 190, 173, 132, 133, 188, 89, 42, 99, 189, 131, 18, 99, 62, 253, 218, 66, 190, 137, 199, 56, 62, 214, 130, 153, 59, 155, 234, 7, 62, 165, 92, 212, 62, 164, 101, 208, 62, 137, 248, 163, 190, 171, 175, 99, 190, 83, 169, 95, 62, 182, 4, 169, 190, 23, 197, 138, 189, 113, 250, 51, 191, 225, 169, 135, 62, 104, 60, 136, 191, 0, 141, 75, 191, 56, 183, 141, 188, 42, 79, 163, 62, 168, 134, 39, 190, 234, 123, 162, 62, 76, 212, 203, 60, 226, 6, 255, 190, 153, 166, 215, 62, 78, 189, 208, 190, 201, 203, 159, 190, 99, 145, 94, 189, 222, 61, 123, 189, 174, 91, 53, 61, 232, 213, 3, 191, 192, 126, 147, 62, 227, 70, 111, 62, 227, 17, 109, 62, 207, 252, 111, 191, 118, 80, 216, 190, 121, 117, 233, 62, 11, 146, 187, 62, 151, 93, 134, 190, 14, 107, 171, 62, 192, 87, 18, 60, 81, 9, 188, 61, 13, 61, 203, 190, 125, 33, 131, 62, 143, 49, 207, 190, 226, 195, 196, 190, 1, 140, 124, 190, 5, 111, 87, 62, 11, 42, 9, 190, 125, 230, 18, 62, 41, 101, 247, 61, 211, 195, 136, 190, 136, 122, 37, 189, 115, 177, 253, 190, 241, 65, 22, 190, 202, 98, 142, 190, 168, 119, 85, 59, 12, 235, 73, 62, 205, 108, 121, 62, 57, 11, 127, 190, 133, 250, 151, 61, 21, 159, 124, 190, 193, 246, 89, 61, 215, 74, 171, 61, 44, 190, 119, 189, 173, 30, 25, 60, 100, 99, 33, 61, 92, 174, 209, 188, 170, 107, 217, 190, 99, 179, 10, 191, 33, 130, 235, 61, 125, 18, 83, 61, 80, 29, 225, 190, 35, 88, 178, 187, 187, 12, 132, 62, 164, 164, 69, 191, 46, 0, 127, 62, 190, 220, 38, 62, 255, 160, 46, 190, 127, 38, 158, 61, 24, 99, 227, 60, 139, 137, 224, 190, 219, 71, 11, 191, 109, 234, 130, 188, 185, 215, 220, 190, 2, 46, 234, 62, 125, 247, 102, 61, 85, 44, 86, 60, 234, 209, 189, 62, 180, 126, 247, 190, 159, 137, 55, 191, 222, 127, 146, 61, 89, 161, 130, 62, 138, 124, 215, 188, 186, 48, 68, 190, 14, 61, 194, 60, 92, 61, 176, 62, 37, 104, 138, 190, 97, 34, 84, 62, 128, 152, 85, 190, 79, 253, 38, 60, 180, 58, 57, 190, 166, 162, 250, 61, 146, 144, 9, 63, 79, 9, 234, 62, 251, 106, 96, 189, 120, 98, 246, 190, 82, 102, 116, 62, 182, 10, 192, 190, 162, 244, 101, 189, 78, 20, 236, 190, 126, 41, 87, 62, 80, 157, 117, 191, 176, 239, 196, 190, 149, 182, 187, 190, 70, 62, 177, 61, 200, 165, 23, 62, 62, 77, 173, 62, 151, 183, 164, 190, 33, 221, 252, 190, 210, 148, 109, 62, 46, 138, 125, 62, 16, 129, 2, 62, 42, 193, 253, 190, 22, 66, 202, 190, 234, 113, 159, 62, 153, 230, 27, 190, 230, 215, 118, 190, 34, 253, 0, 62, 159, 30, 77, 190, 38, 115, 6, 190, 219, 47, 28, 62, 27, 70, 90, 62, 175, 131, 60, 191, 168, 182, 25, 62, 120, 107, 22, 62, 197, 225, 123, 190, 137, 154, 121, 62, 139, 251, 135, 62, 237, 21, 216, 189, 192, 34, 253, 61, 71, 70, 17, 188, 1, 120, 185, 61, 174, 236, 75, 62, 31, 104, 210, 190, 92, 209, 236, 189, 106, 85, 26, 190, 7, 130, 239, 189, 119, 111, 61, 60, 238, 130, 102, 190, 174, 199, 214, 190, 85, 226, 90, 62, 14, 37, 113, 62, 68, 11, 210, 190, 88, 43, 135, 62, 226, 93, 15, 190, 210, 174, 162, 61, 71, 30, 170, 189, 46, 44, 79, 62, 132, 248, 162, 191, 17, 211, 36, 62, 109, 46, 138, 191, 74, 110, 127, 189, 148, 41, 64, 189, 74, 182, 178, 189, 100, 116, 237, 62, 167, 186, 186, 189, 210, 226, 88, 62, 92, 88, 90, 62, 227, 243, 184, 61, 241, 209, 139, 62, 127, 108, 9, 190, 216, 202, 132, 62, 166, 175, 68, 190, 193, 213, 22, 190, 94, 132, 72, 62, 39, 212, 113, 62, 142, 86, 17, 191, 10, 188, 118, 61, 28, 37, 85, 62, 67, 161, 34, 190, 46, 11, 20, 191, 255, 26, 197, 62, 255, 52, 86, 190, 43, 41, 42, 190, 39, 85, 13, 63, 13, 233, 248, 61, 34, 202, 168, 190, 194, 218, 47, 191, 222, 46, 203, 190, 200, 79, 77, 62, 5, 12, 60, 189, 137, 145, 202, 62, 187, 89, 25, 62, 45, 101, 91, 189, 145, 237, 122, 62, 216, 60, 24, 191, 160, 206, 246, 190, 50, 52, 184, 59, 6, 118, 173, 190, 19, 203, 110, 190, 253, 73, 12, 62, 75, 6, 177, 62, 2, 30, 141, 60, 201, 218, 76, 62, 16, 98, 108, 190, 185, 121, 161, 190, 70, 112, 165, 61, 92, 194, 222, 190, 147, 35, 4, 61, 104, 8, 227, 189, 178, 39, 110, 190, 56, 188, 88, 62, 44, 69, 1, 190, 176, 226, 145, 190, 40, 41, 233, 62, 165, 167, 187, 62, 49, 142, 65, 62, 236, 45, 228, 61, 220, 235, 224, 190, 192, 98, 222, 190, 133, 28, 58, 62, 9, 206, 19, 189, 101, 230, 122, 189, 52, 31, 152, 190, 95, 88, 177, 189, 128, 84, 143, 190, 120, 232, 90, 190, 229, 34, 204, 60, 190, 38, 137, 190, 2, 145, 207, 57, 115, 88, 144, 62, 93, 121, 195, 190, 70, 239, 67, 190, 105, 201, 130, 61, 84, 104, 213, 190, 114, 139, 30, 189, 89, 1, 10, 190, 53, 192, 80, 190, 248, 24, 84, 189, 136, 177, 187, 190, 210, 179, 8, 190, 174, 159, 148, 190, 114, 159, 27, 191, 74, 239, 156, 190, 86, 17, 25, 189, 240, 59, 72, 189, 180, 166, 128, 61, 1, 95, 2, 189, 198, 62, 21, 63, 75, 120, 36, 189, 130, 150, 119, 190, 165, 90, 151, 190, 226, 125, 196, 62, 169, 36, 130, 60, 187, 105, 20, 190, 8, 55, 27, 62, 40, 68, 28, 61, 56, 191, 181, 61, 71, 201, 152, 62, 172, 164, 147, 190, 68, 84, 204, 190, 161, 210, 20, 190, 196, 154, 153, 189, 124, 27, 249, 190, 231, 20, 150, 59, 117, 41, 64, 62, 59, 244, 135, 190, 102, 93, 249, 189, 122, 79, 150, 189, 207, 146, 31, 190, 202, 24, 224, 60, 120, 71, 51, 191, 194, 16, 220, 188, 15, 195, 151, 189, 252, 106, 53, 190, 167, 17, 232, 62, 21, 184, 5, 189, 1, 180, 10, 189, 38, 215, 184, 62, 138, 54, 16, 190, 72, 106, 86, 191, 39, 49, 219, 60, 113, 71, 244, 189, 146, 20, 113, 62, 111, 163, 88, 190, 118, 47, 137, 190, 167, 84, 205, 191, 86, 226, 163, 62, 208, 136, 199, 191, 96, 19, 23, 190, 190, 50, 186, 189, 83, 157, 248, 61, 252, 233, 201, 62, 246, 95, 167, 62, 26, 12, 28, 62, 221, 53, 71, 62, 248, 101, 34, 189, 219, 152, 135, 60, 232, 182, 48, 62, 173, 243, 148, 61, 244, 144, 27, 191, 78, 151, 140, 190, 216, 63, 106, 62, 16, 167, 229, 62, 35, 163, 139, 191, 45, 99, 154, 62, 51, 58, 20, 189, 82, 154, 180, 190, 168, 129, 8, 191, 44, 244, 169, 60, 227, 191, 4, 191, 75, 54, 61, 61, 221, 136, 165, 189, 156, 121, 189, 189, 234, 173, 5, 62, 250, 201, 182, 189, 99, 228, 42, 190, 180, 82, 104, 189, 69, 230, 87, 61, 97, 50, 238, 189, 104, 48, 0, 62, 235, 83, 36, 190, 48, 249, 164, 61, 126, 174, 138, 61, 194, 186, 61, 190, 250, 32, 139, 186, 9, 30, 69, 61, 158, 107, 49, 61, 138, 13, 186, 61, 101, 110, 33, 189, 103, 179, 82, 190, 165, 78, 9, 62, 120, 182, 229, 60, 207, 157, 202, 59, 163, 43, 134, 188, 27, 71, 46, 190, 184, 78, 34, 190, 166, 229, 48, 190, 108, 71, 6, 62, 125, 30, 237, 189, 62, 144, 203, 189, 248, 41, 31, 59, 64, 104, 34, 62, 194, 235, 79, 190, 157, 166, 47, 62, 11, 154, 143, 62, 36, 92, 184, 189, 74, 234, 127, 61, 102, 226, 217, 189, 118, 10, 243, 61, 241, 51, 125, 61, 73, 14, 79, 62, 144, 42, 29, 62, 51, 141, 84, 60, 190, 203, 85, 62, 0, 223, 21, 191, 117, 143, 251, 189, 22, 163, 142, 190, 129, 14, 177, 190, 1, 123, 197, 190, 152, 161, 80, 62, 65, 96, 225, 61, 145, 34, 109, 190, 1, 127, 187, 62, 19, 24, 203, 189, 211, 12, 33, 190, 119, 11, 231, 61, 182, 38, 31, 190, 87, 188, 211, 190, 255, 43, 94, 191, 97, 81, 192, 61, 28, 4, 23, 62, 20, 210, 163, 62, 229, 165, 201, 60, 139, 209, 161, 62, 30, 224, 96, 189, 159, 14, 190, 190, 143, 240, 143, 189, 151, 25, 189, 190, 214, 216, 111, 59, 76, 136, 8, 62, 242, 1, 21, 191, 113, 52, 11, 62, 217, 25, 37, 61, 90, 232, 97, 62, 229, 67, 86, 191, 141, 18, 199, 190, 123, 180, 209, 62, 252, 201, 194, 62, 90, 109, 50, 62, 252, 115, 143, 62, 190, 103, 148, 190, 233, 7, 135, 62, 205, 20, 16, 191, 132, 77, 37, 188, 96, 44, 149, 190, 129, 227, 222, 190, 181, 96, 176, 61, 172, 249, 134, 187, 160, 14, 150, 188, 11, 148, 215, 61, 80, 17, 196, 62, 121, 62, 212, 189, 65, 191, 142, 62, 148, 57, 210, 190, 120, 152, 242, 189, 227, 162, 172, 189, 63, 211, 236, 189, 112, 115, 15, 191, 99, 71, 162, 190, 16, 191, 145, 62, 83, 63, 121, 189, 87, 117, 86, 189, 248, 172, 200, 188, 212, 28, 150, 61, 184, 122, 9, 60, 14, 163, 41, 189, 177, 103, 78, 190, 30, 5, 140, 61, 4, 163, 181, 190, 181, 29, 16, 188, 218, 49, 241, 61, 202, 133, 19, 62, 150, 71, 153, 62, 10, 29, 129, 61, 65, 64, 154, 190, 200, 57, 158, 189, 183, 225, 56, 189, 212, 12, 112, 189, 55, 77, 150, 62, 103, 84, 107, 61, 159, 191, 165, 188, 56, 184, 145, 190, 96, 152, 92, 62, 158, 215, 16, 190, 125, 123, 31, 62, 130, 88, 229, 189, 136, 114, 37, 62, 249, 105, 165, 190, 140, 92, 103, 62, 189, 100, 165, 187, 158, 211, 197, 61, 171, 59, 236, 189, 64, 148, 4, 190, 244, 44, 49, 62, 113, 175, 96, 191, 66, 159, 77, 190, 18, 164, 203, 190, 16, 251, 184, 190, 243, 230, 30, 191, 90, 171, 164, 190, 54, 36, 196, 61, 205, 225, 203, 189, 237, 88, 90, 190, 138, 15, 251, 61, 155, 168, 57, 190, 9, 254, 136, 61, 108, 63, 60, 191, 246, 53, 158, 61, 171, 27, 45, 190, 18, 98, 131, 189, 77, 239, 131, 190, 175, 194, 169, 62, 223, 106, 170, 61, 129, 107, 38, 190, 71, 251, 173, 189, 79, 59, 76, 190, 160, 0, 202, 190, 41, 13, 249, 190, 171, 139, 64, 189, 251, 90, 18, 190, 181, 16, 144, 190, 58, 121, 33, 61, 239, 7, 42, 190, 193, 76, 174, 188, 66, 126, 248, 189, 227, 63, 156, 189, 89, 224, 104, 61, 164, 203, 22, 62, 238, 163, 48, 62, 204, 225, 126, 61, 184, 243, 64, 190, 17, 248, 143, 61, 71, 110, 227, 189, 170, 157, 242, 188, 157, 129, 168, 61, 157, 94, 51, 190, 240, 99, 146, 60, 4, 129, 126, 61, 125, 213, 223, 189, 197, 38, 197, 189, 48, 218, 115, 61, 135, 86, 198, 61, 218, 172, 169, 189, 185, 96, 49, 190, 143, 109, 198, 188, 182, 106, 14, 61, 226, 148, 71, 189, 142, 13, 251, 189, 129, 35, 195, 188, 61, 87, 23, 190, 72, 176, 205, 189, 80, 149, 65, 60, 51, 214, 2, 190, 70, 7, 163, 62, 7, 228, 128, 62, 182, 252, 157, 189, 223, 186, 132, 190, 207, 92, 255, 61, 35, 98, 12, 62, 242, 72, 124, 191, 115, 134, 187, 61, 52, 135, 250, 190, 162, 248, 108, 60, 155, 149, 186, 59, 43, 224, 189, 61, 31, 145, 154, 190, 237, 244, 214, 189, 157, 155, 120, 62, 22, 250, 153, 190, 68, 25, 124, 62, 221, 29, 10, 62, 171, 219, 186, 190, 240, 241, 100, 61, 131, 82, 206, 190, 74, 33, 204, 61, 250, 1, 7, 189, 203, 205, 13, 189, 15, 121, 164, 61, 2, 197, 236, 60, 251, 170, 26, 191, 114, 203, 138, 61, 79, 27, 44, 63, 80, 8, 44, 191, 83, 165, 2, 62, 236, 246, 15, 63, 211, 121, 140, 62, 126, 253, 59, 62, 88, 123, 149, 190, 184, 173, 9, 190, 110, 100, 13, 62, 210, 198, 232, 61, 76, 66, 117, 190, 153, 188, 20, 190, 47, 223, 214, 190, 76, 243, 120, 189, 169, 163, 15, 190, 65, 93, 246, 61, 10, 191, 15, 191, 152, 23, 88, 61, 251, 26, 138, 189, 104, 134, 217, 189, 36, 146, 187, 61, 170, 64, 155, 62, 141, 209, 21, 190, 193, 233, 212, 62, 37, 139, 12, 189, 8, 52, 51, 62, 10, 105, 140, 61, 226, 130, 71, 57, 70, 5, 8, 60, 40, 225, 36, 62, 141, 217, 142, 190, 216, 141, 231, 189, 35, 3, 150, 62, 246, 158, 175, 189, 159, 2, 171, 61, 23, 249, 225, 61, 137, 29, 241, 62, 203, 246, 165, 61, 106, 243, 255, 189, 204, 119, 36, 190, 126, 92, 158, 62, 83, 57, 57, 62, 245, 92, 69, 62, 153, 201, 143, 190, 43, 186, 77, 61, 241, 189, 62, 62, 178, 49, 51, 61, 63, 10, 123, 190, 105, 31, 5, 191, 234, 211, 180, 189, 58, 240, 22, 189, 109, 122, 172, 191, 194, 153, 190, 189, 142, 127, 196, 62, 195, 13, 54, 190, 59, 147, 218, 189, 182, 105, 233, 61, 23, 111, 185, 190, 159, 4, 138, 190, 165, 132, 36, 191, 39, 36, 199, 189, 253, 63, 76, 190, 252, 126, 182, 190, 128, 167, 23, 63, 172, 109, 189, 188, 50, 64, 210, 187, 181, 129, 168, 62, 35, 127, 8, 190, 60, 53, 150, 189, 20, 31, 30, 191, 160, 224, 156, 61, 193, 147, 141, 62, 97, 230, 19, 62, 201, 7, 72, 190, 139, 46, 249, 61, 193, 88, 26, 189, 15, 2, 235, 189, 213, 24, 116, 62, 249, 250, 60, 62, 36, 121, 88, 191, 56, 238, 2, 188, 22, 53, 133, 190, 56, 206, 160, 191, 68, 100, 2, 190, 232, 203, 145, 190, 46, 99, 66, 191, 179, 87, 176, 62, 146, 223, 199, 190, 63, 0, 146, 62, 84, 194, 126, 190, 76, 31, 211, 60, 232, 12, 244, 190, 252, 48, 95, 189, 26, 173, 38, 191, 198, 119, 246, 188, 196, 143, 192, 190, 249, 149, 19, 60, 115, 132, 169, 190, 254, 223, 12, 190, 125, 97, 9, 191, 69, 170, 81, 62, 4, 195, 102, 62, 230, 52, 56, 190, 19, 194, 164, 190, 65, 78, 56, 62, 150, 224, 20, 62, 39, 252, 254, 189, 213, 159, 35, 191, 141, 220, 245, 189, 97, 150, 48, 61, 131, 157, 3, 191, 12, 206, 187, 61, 29, 147, 197, 61, 36, 153, 10, 63, 29, 138, 152, 62, 59, 77, 236, 61, 96, 44, 11, 189, 113, 208, 34, 62, 220, 189, 57, 190, 13, 249, 216, 188, 42, 80, 51, 189, 67, 106, 255, 57, 147, 123, 22, 188, 36, 197, 49, 190, 135, 80, 212, 62, 186, 47, 177, 190, 165, 206, 74, 60, 136, 70, 6, 190, 132, 56, 75, 191, 68, 219, 165, 190, 32, 194, 144, 62, 134, 170, 112, 190, 107, 153, 240, 59, 252, 23, 123, 60, 20, 205, 39, 190, 146, 64, 65, 61, 239, 31, 92, 189, 74, 112, 199, 61, 55, 124, 211, 61, 116, 118, 254, 188, 182, 192, 8, 62, 189, 145, 51, 190, 58, 122, 133, 189, 150, 15, 164, 189, 138, 141, 41, 189, 78, 149, 146, 61, 103, 154, 28, 62, 30, 109, 244, 59, 99, 152, 18, 190, 210, 80, 25, 190, 218, 217, 19, 190, 25, 217, 203, 61, 181, 223, 1, 190, 167, 132, 107, 189, 14, 196, 8, 190, 237, 119, 31, 189, 23, 6, 174, 61, 233, 210, 6, 62, 221, 132, 117, 188, 102, 191, 2, 190, 183, 219, 197, 61, 197, 179, 13, 190, 125, 187, 197, 189, 209, 223, 226, 61, 201, 120, 55, 187, 206, 4, 165, 190, 94, 96, 169, 190, 51, 141, 41, 62, 210, 34, 84, 190, 163, 178, 154, 61, 203, 2, 194, 62, 126, 63, 55, 190, 177, 63, 49, 62, 188, 93, 197, 61, 103, 111, 28, 62, 121, 129, 19, 191, 27, 167, 138, 61, 42, 78, 132, 189, 176, 14, 245, 190, 175, 22, 111, 191, 100, 221, 180, 190, 32, 198, 77, 62, 64, 152, 4, 61, 72, 87, 59, 190, 49, 54, 189, 187, 245, 40, 153, 190, 163, 134, 52, 191, 2, 235, 78, 191, 28, 232, 227, 187, 54, 199, 8, 191, 203, 253, 127, 61, 164, 34, 13, 62, 17, 43, 62, 61, 134, 5, 101, 190, 178, 143, 128, 61, 5, 113, 177, 190, 116, 21, 231, 189, 125, 68, 128, 188, 170, 222, 8, 190, 207, 146, 183, 62, 190, 147, 123, 188, 244, 136, 144, 189, 28, 195, 171, 61, 175, 91, 94, 61, 176, 230, 137, 190, 115, 101, 210, 189, 2, 34, 180, 61, 221, 178, 142, 62, 228, 146, 168, 190, 198, 226, 136, 61, 35, 3, 252, 61, 45, 33, 210, 190, 158, 45, 9, 61, 4, 234, 176, 189, 60, 36, 197, 62, 207, 116, 96, 190, 213, 211, 216, 61, 25, 53, 235, 190, 198, 70, 212, 61, 158, 74, 108, 191, 192, 19, 150, 191, 146, 83, 116, 189, 143, 175, 135, 188, 178, 41, 17, 62, 192, 26, 142, 62, 56, 171, 157, 61, 185, 203, 151, 190, 77, 150, 173, 61, 241, 9, 29, 62, 187, 58, 96, 62, 134, 236, 227, 188, 133, 73, 31, 191, 253, 52, 1, 62, 230, 54, 24, 61, 38, 170, 22, 191, 104, 230, 243, 190, 15, 45, 44, 191, 52, 53, 30, 191, 191, 90, 147, 190, 93, 85, 149, 190, 147, 213, 49, 191, 27, 223, 191, 189, 46, 35, 228, 62, 56, 26, 103, 190, 55, 24, 139, 61, 107, 120, 214, 189, 254, 26, 159, 190, 164, 156, 134, 60, 124, 152, 216, 190, 135, 73, 189, 190, 80, 111, 135, 62, 176, 153, 225, 190, 242, 204, 85, 191, 178, 159, 1, 190, 216, 113, 8, 191, 246, 251, 210, 189, 31, 253, 150, 62, 171, 126, 173, 190, 192, 194, 82, 60, 254, 59, 133, 62, 125, 172, 17, 62, 149, 231, 224, 189, 234, 210, 24, 61, 91, 66, 33, 190, 15, 103, 220, 189, 24, 135, 18, 190, 208, 167, 11, 190, 223, 131, 112, 189, 134, 66, 235, 188, 95, 184, 156, 61, 24, 159, 12, 190, 37, 46, 130, 61, 72, 30, 159, 189, 161, 60, 9, 62, 167, 118, 67, 190, 23, 17, 195, 189, 228, 178, 146, 189, 124, 166, 137, 189, 6, 204, 165, 61, 133, 55, 226, 189, 152, 46, 69, 190, 236, 51, 58, 57, 75, 217, 181, 61, 191, 38, 176, 188, 54, 135, 41, 62, 143, 170, 147, 61, 142, 62, 235, 189, 42, 79, 40, 187, 248, 17, 246, 189, 11, 162, 33, 190, 154, 116, 10, 62, 235, 212, 68, 60, 233, 223, 244, 190, 126, 67, 89, 189, 49, 218, 221, 189, 44, 70, 66, 190, 114, 133, 112, 190, 34, 200, 202, 188, 93, 254, 148, 191, 139, 115, 190, 62, 78, 55, 94, 191, 105, 235, 248, 61, 252, 31, 2, 190, 121, 29, 78, 189, 89, 1, 234, 189, 101, 74, 128, 62, 10, 129, 184, 62, 193, 165, 132, 62, 221, 55, 75, 62, 93, 230, 50, 62, 232, 59, 65, 188, 188, 41, 195, 61, 22, 103, 125, 190, 74, 231, 223, 188, 21, 84, 216, 62, 12, 238, 8, 62, 62, 229, 19, 191, 165, 242, 160, 62, 54, 241, 46, 62, 200, 168, 145, 190, 8, 208, 170, 190, 188, 245, 81, 62, 237, 133, 157, 190, 92, 200, 4, 62, 75, 146, 140, 191, 228, 132, 202, 190, 123, 226, 157, 62, 91, 36, 242, 61, 198, 6, 183, 190, 196, 27, 146, 61, 10, 57, 96, 190, 70, 123, 158, 62, 35, 72, 220, 189, 207, 19, 94, 62, 124, 181, 66, 189, 255, 131, 68, 189, 249, 222, 149, 61, 51, 42, 11, 62, 136, 131, 137, 62, 232, 249, 232, 62, 100, 20, 224, 60, 164, 157, 95, 61, 85, 151, 217, 189, 223, 78, 127, 190, 21, 147, 193, 189, 102, 213, 141, 190, 130, 207, 191, 61, 99, 115, 209, 190, 74, 51, 55, 191, 121, 73, 150, 62, 107, 12, 186, 60, 37, 192, 147, 190, 45, 75, 43, 62, 10, 3, 127, 62, 76, 235, 36, 191, 56, 126, 184, 62};
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
                alignas(float) const unsigned char memory[] = {40, 190, 169, 62, 228, 74, 198, 62, 160, 11, 210, 188, 153, 200, 181, 189, 171, 159, 66, 62, 20, 138, 172, 190, 122, 135, 227, 62, 165, 66, 195, 189, 113, 17, 207, 60, 145, 184, 150, 62, 240, 247, 87, 62, 141, 171, 16, 62, 15, 21, 77, 62, 163, 207, 158, 62, 169, 218, 78, 61, 73, 109, 47, 62, 5, 74, 103, 190, 51, 100, 99, 190, 81, 236, 6, 61, 144, 186, 115, 61, 10, 182, 47, 189, 61, 193, 210, 188, 23, 164, 59, 189, 146, 157, 139, 189, 19, 82, 172, 189, 107, 197, 52, 190, 0, 50, 232, 61, 37, 106, 172, 62, 221, 192, 97, 60, 133, 130, 240, 60, 203, 137, 132, 62, 250, 164, 60, 61};
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
                alignas(float) const unsigned char memory[] = {144, 26, 134, 63, 92, 96, 150, 189, 152, 199, 111, 191, 169, 154, 228, 62, 205, 65, 182, 190, 62, 20, 198, 62, 163, 150, 9, 63, 222, 113, 213, 190, 145, 104, 83, 188, 37, 145, 209, 190, 239, 175, 85, 63, 208, 106, 17, 61, 199, 239, 213, 62, 133, 172, 124, 191, 160, 76, 172, 188, 22, 116, 229, 61, 250, 45, 170, 62, 96, 138, 9, 190, 105, 188, 50, 61, 88, 119, 186, 61, 182, 71, 111, 62, 57, 104, 237, 61, 118, 112, 108, 63, 144, 186, 116, 63, 201, 168, 152, 190, 59, 45, 201, 189, 121, 16, 85, 63, 109, 167, 171, 189, 190, 47, 216, 62, 126, 72, 250, 189, 63, 235, 218, 190, 138, 78, 4, 191, 118, 134, 122, 62, 67, 240, 173, 190, 45, 160, 231, 62, 50, 133, 205, 62, 124, 52, 123, 190, 237, 228, 21, 190, 186, 3, 10, 190, 34, 132, 108, 62, 26, 44, 24, 191, 0, 82, 52, 190, 81, 108, 251, 188, 158, 68, 83, 190, 21, 150, 78, 190, 203, 242, 224, 62, 205, 214, 206, 61, 237, 190, 153, 190, 247, 130, 56, 62, 172, 237, 149, 62, 104, 8, 28, 191, 148, 245, 116, 188, 66, 206, 0, 190, 196, 114, 28, 189, 190, 241, 124, 63, 74, 176, 65, 62, 187, 116, 224, 190, 54, 30, 3, 62, 227, 144, 183, 62, 171, 68, 202, 190, 192, 211, 18, 191, 121, 133, 237, 61, 171, 94, 16, 190, 152, 135, 167, 62};
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
                alignas(float) const unsigned char memory[] = {252, 84, 29, 190, 190, 89, 244, 190};
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
    alignas(float) const unsigned char memory[] = {215, 7, 252, 190, 27, 2, 168, 62, 99, 2, 106, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {148, 145, 30, 192, 110, 44, 156, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0089/steps/000000000020000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}