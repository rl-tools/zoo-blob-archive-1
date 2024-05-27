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
                alignas(float) const unsigned char memory[] = {219, 58, 2, 63, 180, 235, 141, 62, 113, 201, 246, 61, 69, 118, 174, 190, 190, 197, 214, 62, 133, 224, 2, 191, 255, 32, 48, 190, 69, 82, 31, 191, 114, 39, 176, 62, 203, 49, 21, 191, 81, 170, 88, 189, 233, 76, 72, 191, 128, 81, 32, 191, 78, 230, 20, 191, 205, 116, 192, 189, 68, 251, 247, 190, 244, 160, 81, 191, 236, 5, 78, 62, 45, 84, 93, 63, 73, 142, 24, 191, 211, 68, 60, 190, 71, 153, 110, 63, 139, 138, 75, 63, 240, 77, 24, 63, 121, 164, 223, 189, 201, 18, 129, 191, 52, 170, 107, 189, 47, 154, 146, 63, 126, 171, 214, 62, 174, 200, 130, 186, 247, 66, 133, 62, 136, 71, 199, 188, 0, 229, 98, 60, 147, 13, 14, 191, 7, 99, 32, 191, 100, 115, 6, 191, 141, 243, 2, 63, 157, 17, 131, 191, 194, 184, 88, 190, 19, 93, 84, 60, 48, 190, 88, 190, 29, 75, 253, 62, 174, 160, 25, 190, 175, 186, 172, 62, 231, 233, 20, 191, 8, 88, 173, 190, 160, 111, 136, 63, 83, 76, 14, 63, 101, 137, 48, 63, 189, 246, 74, 191, 87, 89, 180, 190, 3, 134, 30, 63, 237, 14, 139, 191, 208, 124, 185, 190, 20, 2, 210, 190, 65, 186, 184, 190, 250, 41, 78, 63, 217, 169, 219, 62, 3, 183, 166, 62, 136, 102, 8, 191, 48, 14, 37, 191, 173, 123, 25, 191, 68, 95, 132, 190, 127, 223, 220, 60, 159, 232, 92, 191, 195, 136, 28, 63, 99, 180, 161, 190, 130, 201, 90, 63, 216, 51, 7, 190, 103, 219, 36, 190, 57, 18, 7, 63, 97, 95, 65, 63, 214, 15, 57, 63, 91, 116, 35, 191, 255, 181, 176, 190, 69, 30, 69, 61, 235, 24, 70, 63, 157, 43, 16, 191, 195, 240, 26, 62, 102, 197, 220, 190, 180, 215, 177, 190, 146, 61, 81, 63, 170, 7, 131, 61, 138, 55, 50, 190, 21, 136, 154, 61, 26, 60, 219, 190, 61, 22, 55, 62, 146, 123, 179, 190, 152, 121, 56, 191, 156, 71, 0, 62, 106, 173, 38, 62, 25, 69, 61, 191, 53, 77, 249, 190, 176, 252, 38, 191, 238, 99, 59, 62, 100, 163, 198, 190};
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
                alignas(float) const unsigned char memory[] = {163, 163, 47, 191, 15, 180, 231, 190, 37, 41, 254, 61, 66, 244, 138, 190, 105, 245, 38, 63, 140, 153, 123, 190, 41, 147, 185, 62, 117, 185, 229, 190, 69, 150, 47, 63, 44, 204, 216, 62, 123, 185, 187, 190, 231, 135, 195, 190, 127, 82, 148, 190, 15, 4, 161, 190, 214, 221, 227, 61, 35, 75, 121, 62, 21, 149, 92, 189, 66, 3, 153, 190, 204, 23, 141, 190, 119, 40, 3, 63, 184, 144, 239, 190, 225, 71, 193, 189, 121, 176, 22, 63, 170, 173, 161, 62, 21, 68, 78, 191, 180, 152, 240, 61, 5, 238, 131, 190, 164, 133, 5, 191, 89, 225, 182, 62, 163, 206, 87, 190, 48, 235, 9, 191, 139, 172, 30, 63};
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
                alignas(float) const unsigned char memory[] = {44, 235, 133, 190, 0, 86, 191, 61, 166, 154, 10, 190, 222, 14, 200, 61, 92, 196, 2, 191, 182, 177, 75, 190, 243, 110, 38, 62, 169, 120, 213, 62, 8, 38, 128, 190, 169, 184, 0, 63, 67, 34, 60, 189, 164, 58, 183, 189, 98, 227, 0, 191, 169, 44, 103, 62, 115, 224, 11, 190, 137, 201, 14, 61, 216, 77, 141, 189, 45, 153, 243, 190, 16, 108, 69, 189, 224, 227, 47, 61, 191, 26, 134, 61, 207, 53, 76, 62, 27, 11, 31, 62, 103, 1, 55, 60, 114, 141, 178, 190, 216, 207, 119, 62, 185, 100, 104, 190, 8, 221, 198, 188, 25, 81, 120, 189, 101, 136, 215, 189, 159, 79, 179, 190, 197, 195, 80, 190, 164, 254, 251, 189, 119, 80, 246, 61, 51, 146, 207, 61, 155, 96, 207, 61, 174, 166, 214, 61, 147, 143, 123, 62, 202, 83, 36, 190, 86, 178, 220, 61, 161, 193, 145, 61, 180, 224, 230, 190, 99, 12, 32, 190, 199, 144, 146, 61, 15, 225, 23, 190, 251, 213, 160, 189, 205, 171, 27, 61, 238, 80, 254, 190, 102, 234, 184, 60, 8, 57, 140, 60, 241, 53, 49, 190, 190, 239, 151, 189, 239, 95, 60, 62, 35, 80, 112, 190, 241, 84, 27, 190, 215, 136, 33, 191, 0, 54, 55, 190, 135, 65, 126, 61, 133, 206, 243, 58, 90, 26, 209, 190, 230, 237, 37, 190, 146, 24, 92, 62, 153, 143, 149, 188, 25, 23, 22, 62, 15, 62, 202, 61, 0, 89, 34, 189, 173, 139, 112, 61, 69, 78, 10, 62, 72, 239, 127, 190, 243, 4, 168, 190, 206, 198, 163, 62, 113, 238, 162, 190, 74, 73, 79, 188, 8, 128, 193, 62, 232, 60, 239, 61, 201, 103, 202, 189, 17, 193, 66, 62, 249, 26, 58, 61, 232, 54, 4, 190, 182, 239, 52, 190, 184, 95, 133, 62, 130, 41, 133, 62, 36, 106, 90, 61, 97, 198, 114, 61, 167, 149, 10, 191, 34, 57, 25, 190, 50, 60, 158, 190, 113, 221, 141, 190, 224, 36, 39, 62, 218, 90, 175, 189, 166, 76, 43, 62, 219, 216, 126, 62, 157, 218, 200, 190, 89, 178, 186, 190, 181, 144, 180, 61, 27, 202, 100, 59, 219, 111, 38, 63, 120, 42, 242, 189, 94, 27, 175, 60, 150, 81, 173, 189, 246, 110, 93, 191, 252, 3, 200, 187, 35, 239, 112, 190, 157, 55, 78, 62, 147, 247, 29, 190, 62, 58, 36, 62, 161, 67, 158, 62, 52, 75, 18, 186, 59, 68, 65, 61, 112, 43, 60, 62, 127, 101, 15, 62, 15, 71, 157, 189, 101, 81, 154, 189, 240, 69, 223, 189, 152, 191, 224, 61, 38, 164, 209, 189, 102, 159, 183, 188, 73, 217, 21, 62, 43, 59, 175, 190, 97, 62, 72, 190, 197, 46, 149, 189, 138, 24, 166, 61, 24, 231, 254, 61, 88, 244, 163, 189, 62, 247, 237, 189, 73, 178, 15, 191, 186, 97, 45, 62, 5, 170, 43, 189, 18, 198, 183, 62, 136, 245, 132, 189, 231, 108, 100, 62, 146, 234, 111, 62, 67, 186, 136, 190, 134, 145, 165, 60, 204, 139, 83, 190, 112, 228, 8, 62, 118, 221, 197, 190, 251, 34, 155, 61, 178, 211, 128, 62, 2, 153, 189, 189, 124, 226, 163, 190, 3, 15, 65, 61, 163, 206, 95, 62, 7, 171, 148, 61, 209, 52, 145, 189, 213, 102, 110, 190, 106, 144, 80, 189, 113, 157, 109, 62, 189, 14, 222, 190, 234, 165, 51, 189, 11, 237, 144, 62, 24, 203, 12, 190, 4, 49, 152, 60, 170, 225, 8, 62, 21, 242, 178, 189, 138, 220, 109, 61, 238, 202, 26, 190, 62, 3, 16, 191, 197, 48, 73, 190, 229, 218, 42, 62, 215, 77, 177, 62, 4, 231, 5, 60, 244, 216, 162, 189, 254, 138, 45, 189, 82, 102, 7, 62, 130, 250, 151, 190, 130, 164, 68, 62, 154, 132, 88, 190, 6, 52, 63, 62, 249, 118, 136, 62, 171, 65, 43, 62, 244, 228, 213, 189, 177, 36, 142, 61, 14, 249, 13, 190, 210, 53, 174, 61, 178, 149, 120, 62, 16, 54, 103, 62, 99, 169, 6, 62, 173, 34, 102, 62, 117, 175, 75, 62, 126, 162, 199, 190, 164, 194, 172, 62, 13, 188, 149, 62, 96, 214, 205, 61, 61, 136, 3, 190, 157, 224, 35, 189, 72, 98, 200, 60, 41, 211, 96, 62, 44, 102, 25, 61, 176, 3, 54, 62, 113, 73, 8, 188, 33, 95, 114, 62, 222, 150, 51, 62, 19, 51, 140, 188, 100, 21, 61, 61, 137, 137, 132, 59, 229, 161, 17, 189, 46, 149, 99, 189, 146, 39, 217, 189, 168, 218, 204, 189, 177, 162, 22, 190, 104, 50, 19, 191, 192, 242, 107, 61, 172, 174, 113, 189, 188, 63, 118, 62, 27, 20, 234, 61, 107, 26, 136, 60, 190, 156, 116, 188, 124, 9, 8, 62, 49, 159, 241, 61, 240, 207, 25, 190, 244, 221, 250, 189, 107, 241, 165, 62, 27, 30, 131, 61, 101, 40, 162, 190, 158, 11, 222, 59, 169, 59, 57, 62, 165, 75, 19, 189, 182, 76, 136, 61, 117, 255, 189, 189, 247, 137, 237, 190, 121, 105, 115, 190, 202, 82, 14, 62, 234, 154, 83, 190, 143, 156, 180, 189, 46, 69, 98, 189, 201, 144, 222, 189, 85, 78, 39, 61, 38, 61, 201, 189, 204, 202, 109, 190, 255, 78, 224, 188, 102, 42, 203, 62, 169, 98, 17, 189, 67, 177, 160, 61, 114, 190, 134, 61, 154, 196, 252, 189, 194, 221, 168, 62, 201, 85, 191, 61, 69, 157, 98, 189, 10, 189, 22, 190, 7, 88, 81, 189, 37, 129, 137, 62, 183, 48, 45, 61, 9, 85, 145, 189, 94, 152, 103, 190, 22, 177, 204, 60, 206, 18, 100, 190, 133, 116, 128, 61, 226, 199, 177, 62, 100, 35, 199, 189, 247, 175, 103, 62, 234, 244, 187, 62, 182, 118, 163, 189, 84, 63, 219, 188, 153, 179, 29, 62, 20, 137, 238, 189, 103, 136, 185, 190, 40, 224, 173, 60, 236, 124, 73, 62, 102, 50, 103, 61, 82, 217, 214, 188, 90, 6, 104, 60, 237, 17, 18, 190, 207, 194, 50, 189, 75, 24, 81, 189, 168, 115, 93, 189, 177, 23, 14, 190, 193, 201, 40, 189, 249, 52, 130, 189, 107, 61, 68, 62, 114, 215, 44, 62, 73, 122, 123, 190, 135, 98, 222, 188, 110, 67, 210, 189, 35, 105, 144, 190, 246, 194, 67, 62, 123, 26, 18, 62, 57, 84, 174, 190, 201, 147, 65, 62, 205, 247, 85, 190, 219, 226, 139, 189, 35, 64, 131, 189, 30, 23, 51, 190, 249, 176, 202, 61, 210, 119, 143, 189, 252, 246, 161, 190, 94, 83, 9, 61, 76, 92, 208, 188, 39, 86, 162, 189, 128, 170, 128, 190, 123, 106, 218, 62, 7, 169, 55, 62, 245, 226, 9, 61, 27, 184, 10, 62, 83, 251, 176, 61, 192, 214, 76, 185, 228, 200, 67, 62, 114, 234, 239, 61, 252, 231, 113, 190, 98, 114, 38, 62, 155, 104, 174, 190, 19, 138, 13, 61, 132, 125, 25, 62, 223, 145, 17, 191, 73, 102, 142, 190, 79, 11, 184, 190, 236, 14, 142, 191, 55, 245, 193, 60, 30, 104, 127, 190, 163, 166, 109, 191, 29, 3, 158, 62, 243, 87, 157, 190, 13, 76, 146, 190, 145, 106, 138, 190, 217, 96, 2, 189, 114, 165, 97, 190, 143, 231, 103, 189, 127, 171, 149, 61, 83, 148, 147, 190, 0, 219, 140, 62, 9, 52, 40, 190, 169, 163, 60, 189, 27, 109, 12, 63, 77, 78, 156, 188, 214, 116, 78, 62, 170, 62, 237, 62, 118, 204, 53, 190, 144, 62, 23, 62, 196, 231, 193, 61, 76, 120, 137, 188, 234, 198, 183, 189, 141, 243, 6, 62, 127, 226, 101, 189, 93, 192, 222, 189, 8, 251, 62, 62, 153, 248, 185, 190, 206, 80, 14, 189, 58, 98, 22, 61, 202, 24, 23, 191, 206, 166, 185, 61, 185, 125, 37, 62, 53, 160, 3, 191, 37, 196, 189, 189, 251, 9, 251, 190, 206, 212, 187, 61, 95, 98, 194, 186, 135, 166, 36, 190, 52, 224, 10, 189, 49, 174, 251, 61, 225, 131, 156, 189, 197, 249, 32, 190, 24, 56, 98, 62, 65, 154, 249, 61, 176, 24, 236, 189, 251, 145, 145, 61, 179, 89, 195, 189, 3, 115, 171, 61, 179, 54, 64, 185, 236, 30, 15, 190, 54, 21, 225, 189, 96, 94, 3, 62, 51, 183, 55, 61, 65, 111, 79, 61, 161, 213, 24, 62, 189, 13, 236, 189, 99, 247, 76, 61, 19, 206, 153, 189, 39, 70, 200, 188, 110, 8, 18, 61, 35, 59, 163, 187, 46, 138, 206, 189, 208, 176, 177, 189, 49, 125, 158, 188, 45, 250, 28, 190, 68, 65, 34, 190, 244, 70, 227, 60, 68, 108, 242, 189, 37, 98, 21, 60, 218, 74, 5, 62, 92, 164, 234, 61, 41, 30, 66, 190, 41, 3, 33, 61, 235, 7, 193, 189, 131, 84, 255, 189, 228, 156, 9, 191, 243, 236, 4, 62, 65, 91, 253, 189, 182, 183, 24, 190, 221, 142, 23, 191, 77, 250, 42, 62, 137, 247, 132, 62, 15, 129, 187, 62, 219, 195, 3, 189, 22, 250, 138, 62, 63, 11, 131, 187, 116, 110, 165, 189, 93, 59, 203, 190, 17, 113, 149, 62, 48, 229, 117, 61, 157, 132, 91, 61, 223, 200, 3, 190, 178, 95, 77, 190, 163, 238, 3, 188, 205, 18, 88, 61, 233, 178, 29, 190, 70, 47, 237, 189, 176, 142, 202, 188, 25, 232, 163, 60, 248, 174, 174, 61, 51, 87, 157, 60, 50, 26, 25, 60, 10, 150, 142, 189, 36, 122, 173, 61, 199, 173, 37, 190, 10, 142, 104, 190, 238, 209, 141, 190, 57, 34, 100, 61, 95, 204, 19, 190, 85, 67, 235, 61, 68, 217, 178, 189, 47, 172, 61, 190, 35, 235, 254, 61, 59, 210, 174, 60, 48, 230, 78, 189, 133, 169, 203, 189, 11, 114, 53, 62, 72, 179, 173, 61, 13, 111, 168, 189, 132, 135, 198, 189, 62, 39, 222, 189, 221, 10, 22, 62, 108, 64, 47, 190, 7, 34, 160, 61, 102, 87, 181, 60, 152, 36, 23, 62, 209, 49, 42, 190, 21, 135, 34, 61, 119, 70, 13, 190, 34, 243, 39, 190, 212, 249, 15, 61, 109, 179, 60, 189, 126, 198, 136, 189, 88, 90, 133, 61, 157, 84, 144, 60, 14, 170, 31, 190, 204, 184, 243, 189, 231, 206, 174, 61, 5, 232, 33, 60, 202, 223, 217, 190, 156, 111, 106, 61, 206, 189, 203, 60, 102, 16, 107, 190, 182, 185, 20, 191, 10, 145, 42, 188, 191, 105, 11, 57, 128, 150, 37, 62, 180, 45, 206, 189, 70, 121, 187, 62, 42, 176, 73, 189, 105, 17, 133, 190, 90, 186, 186, 190, 212, 33, 107, 188, 9, 132, 162, 61, 157, 206, 31, 188, 15, 199, 57, 189, 244, 35, 202, 189, 57, 55, 109, 190, 234, 254, 58, 62, 10, 163, 133, 190, 44, 216, 47, 62, 98, 179, 216, 61, 43, 96, 186, 189, 162, 77, 26, 190, 9, 140, 197, 61, 131, 16, 94, 188, 235, 159, 242, 61, 214, 254, 112, 62, 142, 45, 183, 190, 129, 184, 138, 190, 92, 144, 151, 190, 126, 108, 190, 62, 228, 129, 156, 189, 228, 93, 183, 189, 255, 24, 184, 190, 8, 147, 77, 62, 230, 250, 53, 190, 174, 193, 79, 62, 23, 230, 171, 190, 181, 244, 138, 61, 170, 88, 23, 62, 125, 67, 56, 62, 219, 40, 86, 187, 117, 19, 140, 62, 243, 29, 79, 190, 22, 80, 80, 190, 134, 58, 141, 61, 10, 190, 145, 62, 172, 168, 123, 62, 239, 26, 174, 62, 177, 25, 194, 189, 224, 122, 221, 61, 39, 9, 110, 62, 19, 136, 138, 61, 220, 52, 30, 62, 159, 144, 41, 60, 159, 233, 180, 189, 222, 65, 138, 62, 166, 3, 196, 190, 166, 19, 23, 62, 214, 220, 223, 61, 86, 144, 107, 62, 93, 153, 167, 189, 140, 100, 171, 62, 114, 8, 128, 189, 232, 62, 62, 190, 160, 178, 136, 190, 75, 23, 43, 62, 99, 11, 187, 190, 156, 209, 55, 62, 96, 230, 191, 190, 90, 190, 214, 188, 7, 141, 184, 62, 100, 161, 61, 62, 218, 138, 245, 190, 37, 103, 204, 61, 207, 62, 4, 191, 166, 95, 62, 190, 126, 183, 104, 62, 199, 246, 78, 62, 11, 19, 33, 60, 167, 139, 188, 62, 4, 27, 17, 190, 108, 236, 248, 190, 204, 171, 154, 62, 205, 92, 53, 62, 83, 29, 3, 61, 21, 162, 87, 190, 61, 15, 31, 62, 164, 99, 37, 189, 237, 139, 173, 61, 64, 157, 43, 61, 187, 17, 30, 188, 113, 143, 241, 189, 246, 100, 196, 58, 71, 247, 135, 61, 97, 2, 136, 187, 1, 207, 13, 190, 145, 163, 35, 60, 172, 206, 161, 189, 193, 159, 47, 190, 50, 240, 128, 61, 8, 34, 6, 61, 2, 92, 184, 189, 39, 44, 218, 60, 238, 206, 185, 61, 78, 167, 152, 61, 158, 80, 221, 61, 153, 84, 65, 189, 6, 252, 44, 190, 135, 233, 81, 190, 74, 39, 253, 189, 167, 218, 24, 190, 11, 113, 211, 61, 83, 53, 25, 190, 222, 157, 184, 61, 37, 0, 132, 61, 29, 123, 17, 62, 102, 79, 9, 190, 160, 45, 111, 189, 203, 187, 80, 61, 42, 113, 45, 190, 77, 231, 189, 61, 202, 154, 200, 189, 41, 94, 184, 61, 147, 44, 216, 61, 193, 184, 181, 189, 43, 192, 133, 60, 55, 62, 15, 190, 38, 39, 80, 61, 2, 253, 0, 62, 168, 228, 58, 189, 66, 244, 189, 189, 137, 246, 26, 190, 228, 85, 251, 189, 207, 196, 167, 189, 15, 3, 252, 60, 230, 76, 177, 59, 90, 22, 22, 62, 189, 102, 37, 190, 116, 219, 252, 61, 186, 174, 51, 190, 187, 17, 61, 190, 76, 237, 149, 189, 180, 135, 42, 61, 162, 93, 227, 189, 32, 91, 236, 189, 28, 17, 24, 62, 97, 93, 236, 61, 152, 246, 136, 61, 191, 199, 204, 61, 38, 121, 242, 60, 205, 10, 140, 60, 90, 88, 252, 189, 40, 124, 243, 189, 94, 215, 160, 61, 137, 209, 184, 189, 45, 164, 218, 189, 105, 46, 196, 187, 188, 9, 190, 189, 28, 110, 197, 190, 52, 108, 153, 62, 80, 116, 189, 62, 120, 34, 96, 62, 20, 35, 188, 62, 164, 160, 201, 190, 232, 178, 23, 62, 9, 69, 153, 189, 208, 230, 16, 63, 40, 85, 216, 189, 148, 110, 113, 62, 192, 184, 25, 190, 3, 64, 169, 189, 237, 177, 149, 62, 4, 98, 253, 190, 68, 210, 22, 190, 70, 106, 153, 188, 237, 111, 180, 190, 242, 114, 201, 60, 77, 127, 234, 61, 255, 111, 46, 190, 213, 183, 191, 61, 130, 96, 2, 191, 202, 79, 204, 190, 160, 168, 187, 190, 77, 192, 104, 61, 154, 109, 79, 191, 148, 241, 133, 61, 104, 36, 91, 62, 38, 221, 125, 190, 48, 62, 28, 62, 233, 79, 220, 190, 138, 199, 98, 190, 110, 161, 211, 189, 223, 92, 11, 190, 13, 211, 210, 61, 4, 204, 91, 61, 34, 50, 224, 61, 90, 140, 140, 189, 237, 119, 26, 62, 193, 241, 68, 190, 217, 215, 164, 190, 81, 190, 86, 190, 119, 105, 68, 62, 129, 144, 154, 60, 219, 189, 53, 190, 88, 0, 42, 62, 168, 9, 76, 62, 37, 212, 22, 188, 179, 28, 162, 62, 142, 255, 12, 188, 154, 208, 78, 62, 124, 1, 245, 61, 52, 3, 173, 61, 93, 143, 48, 62, 13, 165, 139, 62, 214, 249, 104, 189, 55, 125, 131, 188, 11, 30, 144, 189, 120, 199, 143, 60, 54, 122, 152, 62, 249, 211, 91, 188, 215, 194, 16, 190, 187, 185, 193, 190, 88, 200, 159, 190, 146, 169, 165, 62, 124, 32, 167, 61, 249, 103, 194, 189, 229, 108, 244, 61, 22, 190, 19, 188, 119, 76, 205, 62, 4, 162, 150, 62, 219, 184, 180, 62, 190, 79, 137, 188, 187, 165, 145, 61, 195, 135, 21, 61, 68, 63, 192, 62, 65, 238, 194, 62, 93, 25, 114, 190, 91, 115, 33, 190, 48, 39, 10, 190, 160, 185, 193, 190, 41, 120, 151, 62, 130, 38, 170, 62, 145, 60, 49, 190, 71, 163, 226, 189, 237, 218, 180, 190, 239, 138, 219, 190, 191, 40, 46, 190, 164, 78, 16, 190, 132, 163, 30, 190, 9, 247, 6, 62, 72, 100, 150, 190, 239, 21, 119, 190, 197, 155, 31, 189, 168, 122, 86, 190, 114, 156, 105, 62, 28, 27, 173, 190, 120, 124, 200, 190, 4, 210, 57, 62, 41, 110, 228, 190, 148, 19, 223, 61, 81, 179, 74, 191, 117, 189, 120, 61, 130, 7, 198, 61, 127, 115, 255, 61, 227, 52, 15, 191, 201, 7, 83, 62, 218, 9, 52, 191, 169, 236, 26, 190, 185, 233, 11, 62, 36, 115, 246, 61, 68, 185, 144, 189, 173, 211, 160, 62, 10, 164, 76, 190, 121, 232, 89, 191, 4, 164, 231, 62, 90, 200, 155, 62, 0, 119, 149, 62, 12, 27, 54, 189, 111, 39, 157, 62, 211, 100, 196, 189, 234, 170, 108, 62, 16, 235, 13, 188, 53, 15, 169, 62, 184, 140, 129, 61, 84, 91, 49, 60, 96, 113, 175, 190, 98, 23, 169, 61, 120, 68, 34, 62, 108, 156, 27, 61, 77, 190, 150, 189, 26, 40, 186, 189, 47, 170, 111, 62, 59, 196, 86, 61, 122, 45, 130, 62, 183, 65, 36, 62, 203, 15, 149, 60, 131, 225, 43, 190, 122, 25, 49, 190, 201, 170, 51, 190, 10, 71, 124, 60, 192, 213, 175, 61, 18, 75, 65, 62, 39, 244, 140, 188, 184, 89, 53, 190, 233, 21, 247, 61, 102, 121, 43, 189, 242, 165, 70, 61, 123, 95, 132, 189, 193, 236, 134, 189, 171, 78, 177, 189, 58, 2, 164, 188, 107, 82, 35, 188, 155, 135, 51, 62, 184, 107, 133, 62, 157, 156, 23, 189, 141, 56, 75, 190, 94, 177, 238, 187, 23, 99, 111, 190, 98, 211, 104, 61, 77, 160, 176, 187, 171, 164, 145, 189, 187, 211, 58, 61, 59, 50, 240, 60, 118, 174, 15, 190, 170, 69, 60, 190, 105, 28, 64, 61, 10, 90, 126, 191, 146, 111, 50, 187, 18, 93, 203, 189, 134, 207, 123, 62, 139, 176, 182, 61, 211, 162, 151, 189, 75, 117, 31, 62, 126, 146, 42, 62, 190, 29, 120, 62, 151, 56, 225, 61, 99, 189, 183, 189, 225, 93, 167, 61, 163, 246, 219, 61, 44, 199, 145, 190, 131, 20, 28, 62, 253, 220, 216, 62, 12, 248, 80, 190, 5, 244, 105, 189, 186, 114, 133, 62, 232, 185, 82, 190, 2, 1, 189, 187, 198, 159, 58, 62, 217, 56, 101, 190, 105, 46, 191, 61, 145, 229, 114, 61, 184, 232, 57, 190, 85, 65, 210, 189, 21, 11, 32, 189, 198, 113, 128, 189, 191, 83, 19, 189, 86, 17, 166, 60, 237, 206, 191, 60, 80, 183, 163, 189, 168, 157, 194, 61, 84, 129, 98, 189, 160, 115, 101, 189, 126, 191, 17, 61, 244, 134, 161, 189, 41, 155, 50, 61, 222, 103, 251, 61, 72, 159, 168, 61, 172, 231, 88, 188, 173, 25, 254, 188, 184, 200, 51, 190, 244, 31, 226, 188, 112, 212, 123, 189, 61, 90, 206, 188, 237, 37, 210, 61, 217, 180, 223, 61, 117, 31, 241, 61, 33, 166, 247, 189, 35, 91, 230, 60, 194, 6, 41, 62, 39, 23, 169, 58, 160, 11, 60, 190, 119, 204, 56, 191, 135, 245, 69, 190, 179, 116, 81, 62, 131, 61, 133, 190, 87, 131, 81, 191, 172, 38, 24, 62, 71, 121, 165, 61, 119, 45, 205, 62, 167, 249, 207, 190, 108, 239, 7, 63, 135, 244, 31, 190, 143, 113, 145, 190, 137, 205, 180, 190, 198, 249, 143, 59, 79, 3, 53, 62, 53, 140, 12, 189, 60, 121, 148, 189, 95, 165, 255, 190, 67, 42, 157, 61, 218, 56, 146, 62, 156, 105, 65, 189, 186, 55, 200, 59, 2, 20, 80, 60, 44, 235, 78, 61, 226, 80, 149, 190, 71, 220, 44, 62, 109, 189, 169, 190, 44, 70, 135, 62, 254, 74, 47, 62, 47, 147, 1, 191, 184, 102, 137, 190, 229, 129, 19, 190, 80, 4, 34, 60, 23, 216, 17, 190, 172, 44, 21, 62, 98, 169, 26, 190, 235, 81, 168, 189, 159, 7, 240, 188, 38, 148, 177, 188, 48, 225, 3, 190, 183, 240, 33, 190, 40, 252, 206, 58, 36, 96, 249, 189, 178, 101, 52, 62, 175, 110, 8, 190, 171, 224, 105, 59, 166, 106, 175, 61, 177, 219, 0, 190, 147, 81, 27, 190, 60, 67, 242, 187, 69, 8, 74, 188, 184, 114, 41, 189, 92, 112, 131, 188, 91, 169, 65, 61, 142, 81, 228, 189, 5, 32, 217, 61, 133, 247, 47, 189, 159, 144, 171, 189, 41, 184, 215, 189, 81, 82, 140, 189, 117, 163, 146, 189, 244, 105, 19, 190, 17, 160, 129, 189, 205, 221, 135, 61, 65, 198, 237, 190, 114, 245, 109, 190, 91, 110, 72, 62, 21, 179, 167, 62, 61, 11, 7, 60, 235, 37, 168, 62, 100, 226, 7, 190, 223, 168, 224, 62, 23, 169, 89, 61, 43, 123, 149, 61, 217, 153, 136, 190, 38, 230, 37, 188, 19, 51, 222, 190, 36, 83, 248, 62, 59, 210, 86, 61, 255, 173, 216, 189, 95, 5, 92, 189, 105, 158, 247, 189, 82, 186, 158, 190, 181, 72, 122, 62, 242, 39, 206, 188, 213, 73, 141, 190, 203, 81, 5, 189, 167, 17, 9, 189, 187, 233, 92, 190, 233, 232, 211, 189, 221, 151, 209, 61, 135, 210, 112, 189, 189, 9, 129, 60, 32, 35, 163, 188, 220, 203, 173, 189, 90, 10, 250, 61, 170, 40, 61, 190, 81, 175, 147, 61, 231, 84, 250, 190, 178, 146, 73, 189, 58, 36, 33, 61, 174, 129, 137, 190, 221, 242, 217, 61, 5, 139, 241, 60, 78, 25, 233, 58, 179, 214, 242, 61, 28, 211, 50, 60, 62, 131, 134, 187, 223, 232, 200, 188, 200, 148, 247, 190, 238, 151, 172, 60, 103, 58, 164, 62, 78, 212, 43, 62, 89, 3, 15, 187, 183, 246, 115, 190, 51, 123, 106, 62, 129, 52, 175, 190, 125, 30, 9, 191, 41, 171, 228, 62, 59, 18, 70, 189, 118, 169, 136, 190, 112, 184, 33, 61, 233, 149, 121, 189, 37, 92, 130, 188, 117, 144, 35, 188, 19, 107, 72, 190, 87, 197, 67, 190, 26, 162, 5, 62, 229, 194, 184, 62, 9, 243, 188, 59, 229, 21, 88, 61, 204, 248, 40, 190, 21, 20, 59, 189, 76, 28, 44, 190, 79, 171, 142, 62, 215, 160, 191, 190, 167, 165, 136, 60, 77, 253, 198, 62, 108, 181, 167, 62, 235, 112, 139, 190, 179, 136, 148, 189, 2, 190, 24, 190, 40, 238, 243, 189, 242, 66, 150, 62, 130, 164, 105, 62, 194, 113, 153, 61, 253, 18, 97, 62, 160, 21, 51, 190, 77, 94, 5, 191, 16, 174, 99, 62, 9, 4, 1, 61, 85, 217, 142, 62, 199, 208, 148, 190, 181, 52, 37, 60, 112, 83, 1, 190, 63, 223, 128, 62, 44, 33, 22, 188, 135, 16, 15, 62, 83, 34, 192, 189, 115, 5, 149, 61, 198, 121, 17, 191, 61, 51, 154, 189, 62, 198, 204, 61, 154, 38, 132, 190, 133, 159, 1, 191, 18, 149, 68, 62, 6, 205, 144, 62, 234, 84, 159, 61, 145, 103, 241, 189, 69, 41, 174, 62, 41, 236, 7, 190, 218, 226, 157, 60, 236, 152, 242, 189, 136, 198, 64, 62, 110, 73, 110, 62, 56, 194, 40, 62, 247, 235, 26, 61, 148, 155, 210, 190, 118, 165, 52, 189, 115, 33, 117, 61, 107, 232, 184, 189, 78, 190, 236, 185, 58, 156, 17, 62, 157, 42, 34, 62, 87, 178, 47, 191, 52, 38, 41, 62, 56, 168, 4, 190, 106, 33, 197, 61, 39, 219, 166, 61, 50, 235, 57, 190, 38, 128, 210, 189, 83, 21, 100, 190};
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
                alignas(float) const unsigned char memory[] = {92, 49, 111, 189, 131, 191, 25, 190, 228, 237, 19, 61, 41, 49, 53, 190, 149, 77, 237, 58, 181, 142, 164, 62, 243, 13, 143, 190, 38, 217, 170, 189, 198, 167, 12, 62, 47, 11, 49, 61, 123, 199, 229, 59, 211, 99, 11, 189, 80, 31, 130, 190, 177, 85, 31, 188, 253, 250, 240, 188, 8, 51, 228, 60, 230, 227, 72, 62, 32, 171, 244, 60, 221, 233, 109, 189, 112, 205, 32, 189, 179, 40, 20, 190, 179, 211, 122, 62, 47, 168, 202, 61, 114, 65, 132, 62, 190, 215, 85, 190, 69, 141, 30, 190, 121, 200, 142, 189, 79, 206, 158, 189, 56, 249, 26, 190, 152, 41, 75, 62, 205, 81, 69, 62, 28, 149, 205, 60};
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
                alignas(float) const unsigned char memory[] = {106, 152, 231, 190, 146, 227, 53, 62, 224, 180, 141, 62, 193, 22, 225, 62, 70, 167, 233, 62, 43, 182, 64, 62, 228, 94, 161, 190, 17, 221, 144, 190, 73, 184, 169, 190, 50, 84, 137, 191, 165, 255, 147, 190, 8, 186, 37, 188, 228, 175, 227, 190, 153, 104, 89, 61, 113, 48, 247, 190, 238, 140, 148, 62, 42, 147, 234, 62, 217, 131, 179, 189, 225, 219, 30, 61, 183, 230, 48, 191, 148, 122, 90, 190, 95, 71, 39, 191, 178, 242, 32, 63, 128, 112, 149, 61, 239, 187, 147, 190, 241, 235, 33, 190, 113, 166, 31, 191, 183, 130, 250, 60, 31, 187, 195, 190, 122, 228, 64, 62, 71, 51, 179, 62, 84, 63, 126, 190, 116, 255, 12, 62, 78, 93, 246, 189, 140, 133, 29, 62, 199, 125, 196, 62, 69, 230, 190, 60, 227, 198, 227, 189, 145, 166, 35, 62, 16, 3, 55, 62, 179, 105, 37, 60, 60, 251, 135, 59, 138, 232, 163, 61, 117, 230, 190, 189, 207, 132, 64, 62, 182, 161, 106, 61, 45, 89, 109, 190, 8, 40, 158, 189, 89, 163, 154, 189, 144, 146, 12, 62, 235, 3, 202, 61, 170, 201, 42, 62, 25, 11, 132, 61, 201, 141, 191, 190, 115, 172, 93, 62, 156, 148, 79, 190, 42, 190, 213, 61, 20, 139, 0, 190, 131, 143, 149, 189, 96, 240, 15, 61, 97, 28, 103, 62, 227, 222, 204, 189, 231, 168, 109, 189, 193, 213, 83, 190};
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
                alignas(float) const unsigned char memory[] = {248, 185, 149, 62, 12, 181, 163, 190};
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
    alignas(float) const unsigned char memory[] = {19, 197, 64, 191, 75, 96, 44, 63, 168, 210, 120, 63};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {223, 72, 55, 64, 158, 31, 18, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0033/steps/000000000006000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}