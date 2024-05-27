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
                alignas(float) const unsigned char memory[] = {184, 26, 26, 63, 114, 86, 158, 63, 120, 209, 34, 62, 76, 82, 163, 62, 151, 183, 69, 63, 18, 205, 129, 61, 59, 15, 237, 190, 46, 237, 166, 62, 233, 108, 213, 61, 35, 89, 32, 63, 240, 13, 74, 191, 137, 243, 138, 190, 121, 49, 27, 62, 70, 177, 141, 189, 85, 32, 179, 188, 53, 116, 23, 63, 50, 98, 186, 190, 126, 115, 167, 190, 167, 242, 121, 190, 150, 133, 232, 62, 141, 93, 180, 190, 115, 113, 51, 187, 38, 255, 44, 62, 190, 215, 144, 57, 173, 237, 150, 62, 217, 229, 209, 190, 40, 254, 105, 63, 209, 93, 119, 191, 68, 58, 80, 63, 120, 17, 169, 62, 37, 186, 29, 190, 31, 132, 189, 61, 45, 61, 68, 63, 231, 206, 21, 63, 197, 179, 248, 62, 190, 11, 185, 61, 123, 100, 200, 61, 5, 24, 35, 63, 194, 163, 3, 191, 68, 207, 34, 190, 158, 180, 133, 63, 183, 229, 124, 60, 242, 190, 119, 189, 254, 172, 131, 63, 242, 192, 11, 63, 239, 119, 174, 62, 151, 160, 222, 190, 73, 114, 9, 191, 183, 190, 217, 62, 244, 178, 129, 63, 114, 40, 66, 190, 60, 237, 48, 191, 185, 137, 93, 189, 27, 70, 157, 62, 90, 62, 46, 63, 53, 140, 27, 191, 62, 158, 3, 191, 227, 81, 22, 191, 91, 32, 129, 191, 160, 62, 246, 190, 175, 116, 224, 190, 24, 56, 177, 190, 117, 113, 199, 189, 185, 234, 16, 62, 143, 58, 25, 190, 178, 100, 153, 188, 215, 214, 60, 63, 170, 70, 176, 191, 29, 212, 87, 190, 25, 251, 44, 191, 9, 157, 205, 62, 122, 165, 250, 190, 21, 26, 159, 190, 146, 172, 213, 191, 132, 123, 187, 190, 132, 102, 126, 62, 47, 252, 157, 61, 240, 231, 116, 62, 120, 216, 112, 62, 97, 36, 169, 63, 162, 203, 184, 62, 83, 42, 207, 62, 221, 174, 141, 191, 123, 134, 74, 61, 71, 251, 144, 190, 174, 213, 233, 191, 237, 27, 219, 190, 89, 97, 43, 63, 162, 31, 186, 62, 183, 154, 154, 62, 106, 103, 58, 62, 249, 253, 10, 63, 78, 166, 8, 63, 67, 210, 87, 190, 111, 52, 223, 62, 120, 45, 8, 191};
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
                alignas(float) const unsigned char memory[] = {100, 193, 217, 190, 53, 168, 69, 62, 20, 206, 154, 62, 197, 214, 197, 190, 106, 173, 9, 191, 65, 16, 61, 191, 54, 149, 129, 189, 92, 107, 229, 190, 96, 219, 177, 62, 199, 90, 5, 63, 61, 193, 159, 61, 189, 222, 163, 61, 170, 118, 204, 61, 4, 191, 216, 61, 14, 204, 143, 62, 196, 226, 45, 191, 78, 242, 69, 62, 107, 147, 108, 62, 20, 83, 107, 62, 138, 44, 29, 191, 77, 32, 38, 63, 253, 145, 179, 190, 131, 211, 172, 62, 114, 250, 202, 62, 56, 178, 57, 189, 44, 128, 73, 191, 22, 15, 7, 62, 188, 118, 149, 62, 175, 160, 31, 190, 73, 74, 80, 191, 182, 230, 71, 190, 94, 127, 134, 190};
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
                alignas(float) const unsigned char memory[] = {156, 44, 39, 190, 88, 98, 140, 61, 213, 255, 209, 188, 245, 226, 142, 189, 103, 24, 6, 62, 168, 10, 42, 61, 34, 128, 212, 61, 209, 84, 45, 62, 216, 21, 22, 190, 112, 193, 254, 189, 242, 192, 107, 189, 163, 235, 95, 189, 124, 99, 149, 189, 26, 18, 19, 61, 50, 64, 4, 190, 59, 210, 27, 61, 10, 52, 77, 188, 152, 5, 30, 61, 190, 130, 166, 189, 218, 152, 105, 61, 255, 95, 49, 190, 52, 188, 34, 190, 16, 127, 187, 61, 27, 117, 141, 189, 76, 36, 95, 189, 107, 207, 232, 189, 137, 220, 198, 60, 101, 255, 105, 189, 138, 6, 50, 189, 78, 154, 43, 62, 186, 11, 250, 61, 233, 36, 128, 189, 17, 105, 8, 191, 119, 176, 157, 190, 89, 168, 169, 61, 60, 52, 167, 188, 224, 42, 43, 62, 133, 173, 254, 58, 190, 25, 132, 190, 125, 243, 82, 61, 136, 143, 148, 61, 96, 218, 97, 62, 121, 10, 238, 61, 16, 239, 81, 190, 200, 74, 118, 190, 140, 0, 100, 62, 251, 237, 20, 62, 239, 176, 92, 190, 139, 178, 239, 191, 253, 49, 61, 62, 48, 203, 99, 189, 65, 10, 90, 191, 255, 175, 59, 62, 106, 185, 20, 189, 191, 31, 6, 62, 233, 166, 165, 61, 117, 91, 190, 188, 221, 165, 9, 190, 86, 60, 155, 190, 35, 26, 95, 190, 22, 94, 53, 191, 110, 219, 128, 190, 19, 171, 11, 190, 71, 70, 220, 190, 6, 5, 38, 62, 177, 65, 150, 61, 78, 20, 86, 62, 64, 112, 18, 191, 206, 73, 53, 61, 205, 45, 157, 186, 133, 197, 79, 189, 186, 113, 33, 62, 4, 230, 2, 191, 29, 194, 247, 61, 124, 28, 247, 190, 218, 240, 175, 60, 124, 37, 163, 189, 163, 47, 52, 62, 224, 22, 44, 62, 2, 37, 5, 189, 23, 5, 33, 62, 158, 208, 104, 190, 201, 239, 128, 62, 180, 161, 164, 189, 204, 115, 77, 62, 115, 90, 102, 61, 70, 101, 155, 62, 122, 123, 79, 62, 234, 107, 107, 60, 142, 247, 132, 61, 17, 116, 128, 60, 200, 157, 92, 62, 154, 59, 66, 59, 11, 92, 182, 190, 69, 209, 9, 191, 74, 245, 72, 187, 251, 78, 13, 191, 68, 140, 202, 189, 12, 110, 138, 190, 179, 25, 41, 189, 35, 67, 22, 61, 142, 251, 189, 189, 67, 217, 12, 61, 40, 199, 6, 190, 200, 109, 76, 61, 26, 4, 79, 59, 108, 31, 244, 61, 126, 205, 71, 189, 31, 64, 253, 189, 28, 189, 116, 190, 198, 127, 2, 190, 207, 122, 79, 190, 89, 88, 61, 62, 231, 11, 62, 190, 181, 195, 52, 62, 168, 117, 33, 61, 252, 46, 232, 187, 240, 238, 107, 60, 184, 142, 122, 189, 36, 39, 102, 190, 90, 205, 39, 189, 116, 106, 41, 62, 59, 84, 21, 190, 44, 90, 90, 187, 17, 230, 254, 61, 86, 12, 80, 61, 138, 174, 17, 62, 4, 40, 28, 60, 84, 106, 38, 62, 32, 115, 130, 62, 224, 146, 30, 62, 173, 83, 66, 191, 97, 220, 52, 61, 99, 157, 237, 190, 93, 69, 118, 61, 140, 219, 84, 61, 138, 226, 14, 62, 240, 1, 81, 190, 83, 15, 161, 189, 149, 242, 207, 62, 160, 146, 149, 190, 90, 238, 109, 61, 142, 182, 24, 190, 152, 101, 68, 190, 127, 182, 73, 62, 11, 89, 86, 62, 254, 172, 122, 189, 107, 133, 210, 62, 53, 109, 239, 62, 31, 55, 166, 61, 163, 2, 142, 61, 156, 254, 111, 62, 236, 95, 68, 188, 3, 242, 250, 189, 255, 248, 84, 62, 117, 41, 248, 61, 215, 2, 59, 62, 138, 80, 99, 62, 135, 24, 237, 61, 202, 157, 37, 190, 154, 56, 26, 191, 143, 128, 208, 189, 203, 111, 35, 62, 218, 195, 26, 62, 86, 188, 26, 190, 146, 199, 57, 190, 110, 58, 99, 190, 199, 149, 174, 61, 244, 5, 220, 62, 226, 190, 169, 62, 17, 138, 192, 62, 114, 57, 206, 188, 79, 238, 224, 189, 157, 113, 107, 191, 240, 202, 120, 188, 72, 63, 174, 189, 109, 4, 186, 61, 147, 78, 129, 62, 195, 12, 237, 60, 84, 42, 126, 190, 147, 178, 154, 189, 90, 44, 82, 61, 158, 93, 102, 62, 62, 172, 177, 190, 105, 38, 163, 188, 160, 29, 66, 62, 137, 64, 136, 189, 216, 187, 215, 62, 142, 205, 212, 190, 127, 2, 16, 63, 101, 180, 155, 59, 243, 177, 55, 190, 204, 65, 176, 189, 25, 112, 13, 189, 6, 21, 156, 189, 129, 23, 55, 190, 182, 213, 76, 189, 200, 111, 199, 189, 168, 204, 224, 60, 210, 131, 44, 190, 64, 126, 34, 61, 170, 170, 235, 61, 104, 57, 210, 189, 179, 18, 207, 189, 148, 217, 132, 61, 176, 255, 37, 190, 110, 214, 153, 189, 184, 103, 3, 190, 212, 21, 119, 61, 90, 15, 55, 190, 28, 43, 153, 189, 112, 26, 194, 61, 249, 38, 83, 190, 248, 66, 63, 189, 111, 205, 150, 60, 23, 49, 114, 189, 233, 198, 245, 189, 45, 194, 16, 62, 86, 252, 175, 60, 231, 243, 144, 61, 75, 141, 138, 189, 13, 252, 252, 61, 17, 245, 49, 190, 46, 98, 67, 189, 163, 31, 29, 191, 187, 235, 222, 189, 204, 80, 171, 61, 13, 116, 229, 62, 68, 15, 205, 61, 17, 19, 238, 62, 164, 39, 209, 190, 240, 111, 136, 60, 29, 73, 112, 190, 99, 9, 107, 61, 71, 64, 201, 62, 176, 157, 143, 61, 144, 96, 23, 62, 182, 240, 204, 62, 151, 100, 16, 189, 168, 19, 57, 63, 68, 138, 159, 190, 60, 209, 34, 62, 243, 1, 199, 62, 93, 113, 15, 191, 146, 52, 55, 189, 69, 122, 36, 190, 21, 88, 186, 62, 53, 45, 97, 190, 182, 127, 38, 191, 133, 155, 81, 191, 229, 61, 143, 190, 68, 121, 21, 61, 20, 112, 49, 191, 216, 70, 148, 191, 112, 23, 89, 190, 185, 37, 103, 191, 234, 85, 74, 63, 199, 59, 168, 62, 242, 16, 146, 61, 58, 63, 49, 191, 10, 25, 31, 61, 170, 231, 215, 190, 225, 191, 67, 62, 114, 189, 64, 61, 224, 56, 42, 191, 239, 129, 98, 191, 83, 249, 130, 191, 133, 146, 136, 62, 143, 90, 86, 190, 115, 57, 178, 60, 203, 249, 3, 191, 32, 21, 227, 190, 152, 196, 182, 61, 140, 104, 16, 189, 117, 42, 19, 190, 223, 68, 36, 62, 123, 74, 192, 61, 156, 50, 18, 190, 71, 178, 67, 190, 86, 139, 141, 62, 48, 130, 88, 62, 69, 119, 81, 62, 234, 133, 181, 62, 67, 239, 138, 190, 14, 55, 71, 62, 225, 42, 68, 189, 167, 98, 57, 62, 85, 91, 230, 61, 136, 111, 232, 190, 104, 175, 16, 61, 241, 181, 61, 61, 213, 247, 46, 190, 35, 179, 0, 62, 104, 69, 14, 62, 169, 230, 254, 190, 172, 166, 25, 62, 158, 0, 47, 61, 247, 133, 159, 188, 24, 5, 173, 61, 193, 218, 221, 60, 79, 46, 69, 62, 233, 211, 133, 187, 191, 141, 152, 61, 173, 82, 83, 62, 156, 25, 165, 189, 55, 89, 161, 62, 179, 190, 134, 62, 218, 179, 17, 190, 170, 116, 144, 62, 247, 201, 177, 188, 0, 224, 140, 62, 209, 197, 55, 189, 225, 213, 23, 62, 43, 21, 161, 190, 25, 241, 68, 190, 173, 123, 143, 189, 164, 182, 18, 189, 110, 171, 48, 191, 231, 77, 158, 61, 188, 252, 31, 191, 204, 35, 129, 191, 69, 103, 199, 189, 245, 79, 8, 190, 27, 148, 213, 62, 115, 93, 59, 189, 253, 219, 81, 63, 164, 177, 130, 190, 89, 59, 41, 61, 108, 107, 23, 189, 75, 21, 25, 62, 160, 164, 150, 62, 66, 180, 251, 188, 246, 49, 13, 63, 49, 62, 71, 62, 20, 233, 197, 60, 235, 20, 195, 62, 213, 23, 111, 189, 162, 169, 255, 61, 240, 226, 77, 62, 226, 63, 214, 189, 129, 166, 163, 189, 81, 246, 2, 190, 203, 186, 118, 62, 183, 55, 229, 60, 137, 51, 206, 190, 163, 208, 232, 190, 16, 237, 83, 191, 212, 229, 88, 60, 71, 252, 166, 190, 216, 5, 204, 190, 43, 78, 76, 190, 77, 201, 161, 190, 39, 10, 171, 191, 191, 32, 135, 60, 70, 223, 49, 62, 73, 0, 17, 62, 195, 79, 19, 62, 113, 186, 250, 190, 124, 4, 118, 62, 171, 191, 173, 59, 157, 30, 13, 62, 180, 82, 168, 62, 161, 177, 106, 62, 200, 83, 215, 59, 97, 154, 7, 62, 105, 5, 168, 62, 19, 152, 97, 60, 174, 239, 130, 191, 6, 17, 14, 191, 12, 96, 16, 62, 101, 184, 74, 190, 107, 8, 109, 190, 220, 170, 154, 62, 154, 34, 26, 62, 73, 86, 167, 62, 76, 153, 67, 62, 208, 143, 100, 190, 217, 38, 33, 191, 113, 69, 166, 190, 223, 122, 214, 188, 150, 250, 118, 191, 160, 238, 47, 191, 196, 71, 230, 189, 27, 103, 10, 60, 167, 101, 6, 190, 194, 72, 82, 189, 105, 15, 44, 62, 118, 100, 161, 60, 132, 92, 34, 62, 206, 91, 241, 61, 4, 203, 33, 190, 80, 7, 135, 60, 79, 53, 32, 190, 202, 94, 10, 190, 107, 44, 19, 62, 109, 174, 193, 61, 83, 19, 252, 189, 195, 102, 246, 189, 25, 27, 7, 190, 228, 21, 181, 188, 17, 63, 53, 61, 33, 89, 50, 190, 6, 208, 222, 189, 217, 237, 163, 61, 124, 209, 220, 61, 101, 160, 122, 59, 103, 213, 173, 189, 114, 38, 68, 188, 151, 233, 10, 190, 199, 75, 18, 61, 44, 159, 41, 189, 198, 112, 10, 62, 233, 249, 53, 61, 102, 217, 102, 61, 11, 50, 138, 61, 228, 180, 188, 189, 220, 175, 72, 191, 110, 231, 165, 189, 60, 181, 8, 62, 112, 160, 247, 62, 88, 69, 170, 61, 78, 6, 166, 62, 212, 184, 130, 61, 137, 110, 176, 61, 138, 129, 158, 189, 228, 49, 213, 61, 13, 62, 138, 62, 81, 105, 73, 62, 165, 177, 227, 62, 140, 232, 38, 62, 90, 94, 170, 58, 119, 97, 205, 189, 176, 160, 148, 190, 118, 143, 85, 62, 206, 7, 187, 58, 133, 92, 192, 190, 133, 182, 11, 61, 250, 84, 170, 189, 128, 231, 121, 62, 212, 193, 90, 189, 233, 18, 163, 190, 187, 134, 45, 191, 153, 112, 50, 191, 233, 222, 75, 62, 31, 87, 131, 191, 132, 108, 55, 191, 176, 222, 162, 190, 21, 77, 16, 190, 131, 107, 242, 190, 143, 31, 22, 62, 161, 148, 42, 62, 254, 167, 161, 62, 10, 1, 244, 188, 43, 245, 252, 60, 8, 160, 123, 191, 61, 42, 196, 61, 237, 99, 141, 188, 174, 110, 23, 62, 176, 219, 162, 59, 197, 167, 171, 61, 153, 26, 14, 63, 245, 193, 239, 61, 0, 182, 87, 61, 39, 67, 109, 62, 226, 104, 187, 190, 152, 91, 109, 62, 108, 98, 133, 62, 229, 161, 64, 191, 149, 41, 154, 62, 211, 2, 173, 60, 239, 131, 139, 62, 146, 221, 212, 190, 211, 21, 219, 190, 83, 233, 17, 191, 1, 61, 198, 190, 90, 46, 50, 62, 16, 54, 91, 191, 95, 202, 50, 191, 133, 200, 147, 190, 174, 152, 93, 191, 42, 251, 106, 62, 245, 142, 103, 62, 21, 11, 127, 62, 214, 90, 162, 191, 22, 219, 4, 188, 5, 82, 75, 191, 51, 186, 155, 189, 5, 83, 51, 62, 12, 233, 145, 60, 151, 106, 188, 189, 46, 201, 188, 61, 244, 236, 34, 62, 106, 101, 12, 190, 113, 200, 208, 189, 143, 95, 31, 61, 244, 75, 233, 190, 127, 134, 181, 62, 104, 134, 152, 62, 23, 112, 71, 190, 240, 114, 46, 61, 122, 142, 162, 62, 109, 140, 3, 62, 180, 227, 127, 190, 90, 30, 3, 63, 195, 87, 137, 190, 149, 102, 176, 188, 216, 108, 57, 62, 127, 226, 62, 62, 134, 227, 219, 189, 144, 247, 185, 189, 70, 251, 247, 189, 157, 141, 66, 62, 29, 43, 244, 61, 253, 241, 37, 190, 255, 98, 181, 189, 178, 106, 36, 189, 144, 212, 136, 189, 50, 240, 151, 188, 18, 211, 163, 189, 202, 203, 5, 62, 165, 176, 137, 61, 115, 178, 58, 190, 7, 36, 140, 189, 80, 239, 185, 188, 198, 159, 93, 60, 55, 17, 57, 60, 89, 97, 234, 189, 110, 35, 240, 189, 192, 44, 33, 190, 222, 17, 67, 61, 255, 210, 3, 190, 214, 133, 119, 61, 48, 192, 126, 188, 154, 83, 5, 60, 32, 214, 183, 189, 222, 112, 64, 189, 162, 213, 207, 61, 34, 185, 191, 189, 36, 76, 147, 189, 108, 187, 224, 188, 141, 238, 247, 189, 11, 153, 49, 189, 114, 2, 111, 189, 176, 147, 82, 189, 39, 5, 17, 191, 123, 142, 0, 191, 240, 175, 170, 190, 208, 7, 33, 191, 64, 69, 7, 189, 174, 147, 206, 190, 86, 199, 68, 191, 202, 101, 143, 61, 186, 4, 226, 62, 241, 150, 218, 190, 80, 211, 241, 188, 115, 158, 116, 190, 181, 122, 51, 191, 47, 190, 149, 59, 124, 0, 43, 191, 0, 140, 28, 191, 246, 188, 11, 191, 216, 96, 147, 60, 127, 5, 17, 190, 55, 202, 142, 190, 68, 231, 101, 62, 60, 227, 223, 61, 232, 150, 207, 62, 26, 12, 250, 190, 140, 46, 243, 61, 145, 229, 242, 190, 246, 118, 37, 191, 222, 199, 26, 63, 190, 71, 38, 62, 177, 132, 21, 191, 197, 225, 129, 189, 191, 243, 25, 191, 72, 230, 95, 190, 21, 191, 61, 62, 22, 123, 237, 190, 27, 207, 238, 190, 67, 168, 24, 62, 86, 6, 178, 189, 144, 104, 78, 190, 41, 84, 220, 61, 249, 141, 19, 62, 84, 87, 187, 191, 199, 59, 11, 62, 162, 88, 160, 62, 246, 86, 213, 59, 98, 92, 96, 62, 212, 108, 137, 189, 46, 36, 4, 62, 84, 158, 7, 62, 74, 118, 158, 190, 4, 229, 128, 61, 88, 152, 147, 61, 125, 61, 248, 188, 137, 144, 182, 189, 196, 229, 178, 62, 156, 148, 166, 61, 124, 80, 54, 60, 157, 63, 238, 190, 86, 23, 120, 61, 206, 81, 66, 62, 223, 135, 85, 61, 212, 249, 176, 61, 207, 138, 168, 60, 184, 99, 22, 61, 247, 144, 171, 60, 244, 120, 24, 190, 83, 45, 0, 190, 114, 44, 11, 61, 245, 161, 211, 61, 123, 180, 232, 61, 250, 244, 216, 61, 226, 51, 225, 189, 165, 253, 228, 189, 175, 51, 177, 189, 71, 207, 75, 189, 223, 201, 7, 190, 34, 0, 155, 61, 240, 27, 13, 190, 224, 109, 173, 60, 236, 203, 61, 190, 82, 126, 169, 61, 143, 17, 21, 61, 93, 197, 91, 189, 173, 222, 249, 61, 37, 57, 11, 62, 209, 210, 116, 189, 135, 178, 13, 190, 13, 37, 73, 190, 66, 179, 153, 189, 152, 12, 22, 190, 176, 233, 168, 61, 208, 198, 189, 189, 123, 45, 130, 189, 161, 17, 210, 189, 132, 204, 81, 188, 203, 190, 168, 61, 181, 210, 156, 62, 237, 212, 45, 60, 168, 113, 164, 62, 111, 40, 45, 191, 202, 52, 28, 61, 98, 166, 40, 191, 25, 24, 33, 62, 107, 244, 0, 190, 232, 91, 250, 190, 142, 39, 78, 61, 108, 29, 43, 191, 90, 77, 135, 62, 31, 254, 98, 189, 111, 15, 46, 62, 98, 102, 83, 190, 124, 233, 173, 190, 126, 129, 16, 60, 194, 225, 88, 62, 177, 34, 16, 190, 22, 171, 77, 189, 188, 96, 35, 62, 153, 188, 164, 188, 9, 146, 5, 190, 81, 19, 157, 62, 248, 229, 160, 62, 34, 89, 147, 190, 53, 246, 60, 62, 203, 102, 172, 61, 50, 224, 226, 62, 21, 254, 152, 191, 137, 88, 187, 190, 187, 255, 248, 189, 231, 235, 50, 188, 17, 57, 63, 189, 116, 11, 214, 189, 156, 168, 233, 189, 162, 102, 19, 62, 156, 178, 125, 189, 157, 115, 4, 190, 156, 244, 117, 61, 29, 198, 48, 190, 171, 84, 21, 190, 123, 148, 21, 190, 205, 97, 173, 59, 72, 53, 42, 190, 80, 105, 13, 62, 25, 62, 165, 189, 192, 68, 36, 62, 128, 76, 53, 189, 220, 196, 43, 189, 95, 188, 46, 62, 230, 66, 145, 189, 105, 147, 181, 61, 174, 114, 241, 189, 61, 74, 15, 190, 80, 187, 203, 59, 103, 144, 31, 190, 247, 248, 44, 190, 99, 126, 170, 60, 72, 184, 1, 62, 141, 72, 146, 59, 14, 253, 156, 61, 243, 246, 128, 188, 49, 171, 5, 190, 245, 224, 189, 61, 156, 48, 109, 62, 53, 150, 69, 62, 0, 208, 164, 191, 177, 216, 42, 62, 44, 111, 45, 191, 4, 94, 15, 62, 207, 69, 31, 61, 219, 91, 122, 62, 148, 73, 125, 190, 57, 85, 62, 61, 9, 76, 133, 62, 16, 229, 203, 62, 124, 111, 208, 62, 57, 255, 69, 62, 109, 226, 133, 61, 128, 125, 56, 61, 127, 221, 255, 60, 46, 116, 147, 188, 2, 16, 232, 61, 15, 221, 67, 189, 253, 24, 16, 190, 79, 152, 165, 190, 42, 76, 240, 61, 141, 12, 131, 191, 245, 239, 36, 61, 65, 181, 249, 59, 135, 237, 122, 189, 84, 207, 32, 190, 63, 218, 183, 62, 42, 129, 92, 61, 216, 21, 83, 60, 9, 251, 2, 191, 87, 157, 239, 190, 202, 69, 34, 190, 33, 218, 253, 62, 99, 108, 208, 61, 199, 217, 193, 62, 240, 30, 213, 61, 136, 116, 48, 190, 142, 101, 2, 62, 11, 139, 70, 62, 7, 251, 128, 62, 179, 205, 80, 190, 106, 229, 205, 62, 14, 191, 44, 61, 39, 178, 72, 62, 144, 247, 190, 62, 51, 79, 43, 61, 170, 88, 94, 62, 88, 26, 69, 189, 220, 8, 166, 61, 198, 3, 4, 62, 105, 85, 39, 189, 222, 69, 70, 189, 18, 138, 2, 62, 16, 134, 187, 190, 9, 45, 239, 189, 116, 252, 233, 190, 219, 22, 214, 190, 49, 84, 139, 188, 179, 88, 81, 190, 250, 95, 175, 189, 166, 75, 236, 189, 108, 71, 143, 189, 78, 1, 91, 62, 91, 124, 130, 62, 231, 251, 134, 62, 179, 2, 31, 61, 169, 59, 88, 62, 158, 235, 8, 62, 233, 51, 51, 62, 9, 119, 150, 62, 165, 28, 38, 190, 75, 227, 84, 62, 243, 156, 231, 189, 57, 137, 103, 62, 0, 144, 171, 60, 217, 116, 246, 188, 63, 238, 67, 190, 174, 221, 102, 62, 239, 65, 194, 190, 47, 51, 113, 190, 203, 86, 197, 61, 99, 26, 147, 60, 183, 28, 228, 189, 32, 103, 171, 60, 211, 175, 17, 62, 34, 106, 188, 189, 231, 14, 71, 61, 200, 45, 73, 189, 51, 128, 130, 61, 14, 228, 156, 189, 139, 89, 246, 189, 82, 198, 189, 62, 104, 137, 170, 62, 94, 244, 127, 191, 84, 171, 47, 190, 187, 201, 71, 189, 220, 173, 228, 62, 222, 142, 72, 189, 67, 29, 236, 62, 227, 239, 48, 60, 114, 177, 218, 60, 54, 91, 150, 189, 67, 24, 166, 59, 217, 100, 72, 62, 148, 79, 215, 189, 224, 60, 111, 62, 15, 146, 190, 62, 142, 70, 245, 185, 87, 58, 211, 62, 127, 239, 96, 190, 97, 239, 120, 62, 242, 84, 162, 62, 164, 9, 199, 190, 81, 15, 53, 60, 201, 197, 75, 61, 209, 144, 44, 62, 100, 136, 109, 190, 129, 157, 202, 189, 53, 201, 1, 191, 16, 146, 205, 190, 247, 242, 98, 62, 167, 212, 132, 190, 61, 238, 55, 191, 225, 48, 120, 190, 249, 32, 167, 190, 25, 209, 128, 62, 232, 16, 204, 61, 175, 222, 9, 62, 153, 32, 88, 191, 7, 200, 239, 60, 240, 223, 198, 190, 98, 20, 48, 189, 244, 171, 255, 189, 139, 61, 236, 61, 179, 73, 24, 190, 39, 246, 227, 189, 229, 46, 33, 62, 34, 178, 249, 62, 71, 4, 9, 62, 219, 92, 106, 62, 0, 180, 154, 190, 4, 62, 53, 62, 45, 178, 135, 61, 180, 197, 84, 190, 211, 46, 235, 190, 149, 103, 203, 59, 188, 214, 20, 189, 62, 212, 12, 191, 47, 74, 136, 62, 4, 121, 10, 191, 185, 189, 52, 189, 159, 110, 32, 62, 60, 112, 31, 61, 4, 41, 120, 190, 207, 215, 6, 189, 105, 68, 19, 189, 194, 30, 217, 188, 183, 23, 248, 190, 201, 186, 70, 62, 168, 96, 221, 189, 127, 76, 184, 190, 185, 72, 4, 189, 235, 89, 165, 188, 153, 244, 114, 191, 238, 220, 22, 62, 75, 45, 131, 190, 222, 128, 51, 191, 69, 199, 95, 190, 160, 50, 84, 62, 170, 165, 129, 188, 79, 51, 45, 191, 189, 142, 142, 190, 178, 94, 136, 61, 245, 202, 189, 188, 69, 129, 122, 62, 123, 210, 136, 62, 2, 193, 209, 60, 244, 46, 139, 62, 12, 37, 59, 61, 35, 221, 134, 62, 219, 176, 24, 190, 13, 79, 176, 62, 231, 103, 181, 189, 175, 27, 1, 62, 232, 42, 33, 62, 219, 142, 121, 61, 169, 175, 226, 190, 66, 226, 23, 191, 174, 125, 176, 190, 12, 175, 252, 189, 185, 207, 132, 62, 4, 251, 4, 191, 93, 146, 20, 191, 77, 141, 162, 61, 144, 160, 188, 61, 25, 191, 83, 190, 221, 14, 187, 189, 190, 46, 209, 61, 125, 238, 153, 191, 2, 17, 34, 190, 83, 155, 163, 62, 219, 61, 119, 60, 4, 76, 160, 189, 235, 182, 60, 189, 18, 222, 230, 189, 95, 205, 82, 62, 13, 223, 202, 188, 17, 30, 126, 62, 176, 79, 179, 189, 38, 110, 168, 189, 163, 68, 26, 62, 13, 252, 17, 62, 196, 11, 47, 62, 56, 62, 4, 190, 228, 241, 188, 189, 84, 117, 71, 61, 152, 244, 207, 62, 194, 68, 10, 62, 186, 89, 211, 61, 250, 180, 50, 61, 90, 88, 30, 62, 11, 187, 70, 62, 173, 204, 96, 62, 44, 241, 139, 62, 131, 236, 110, 62, 102, 112, 35, 62, 227, 20, 55, 60, 64, 194, 216, 60, 136, 158, 34, 190, 26, 244, 219, 190, 201, 78, 166, 61, 121, 159, 60, 191, 242, 229, 174, 61, 56, 133, 203, 61, 176, 136, 188, 189, 118, 138, 108, 190, 244, 123, 65, 62, 23, 252, 102, 62, 68, 142, 255, 188, 74, 238, 35, 62, 66, 8, 137, 62, 248, 44, 143, 62, 67, 162, 52, 190, 154, 33, 109, 62, 245, 122, 106, 62, 150, 127, 140, 61, 215, 70, 68, 190, 50, 158, 189, 62, 87, 58, 76, 61, 154, 32, 94, 62, 217, 191, 46, 191, 254, 41, 214, 190, 33, 165, 139, 189, 215, 164, 242, 61, 118, 255, 172, 188, 50, 114, 73, 190, 187, 10, 27, 190, 73, 10, 110, 60, 83, 123, 255, 189, 7, 84, 231, 189, 151, 21, 29, 190, 38, 0, 15, 190, 115, 224, 93, 61, 240, 124, 168, 60, 199, 93, 249, 189, 198, 63, 7, 190, 67, 111, 210, 188, 237, 92, 230, 189, 10, 31, 114, 189, 71, 230, 142, 61, 232, 31, 188, 189, 24, 158, 229, 188, 179, 108, 158, 189, 193, 56, 147, 189, 11, 156, 35, 189, 166, 98, 45, 61, 119, 9, 176, 189, 78, 246, 140, 189, 37, 25, 66, 61, 66, 26, 18, 190, 110, 99, 36, 189, 219, 47, 23, 62, 68, 116, 4, 189, 112, 159, 171, 189, 64, 168, 215, 61, 92, 146, 64, 63, 0, 242, 54, 62, 27, 36, 202, 190, 187, 189, 158, 62, 69, 153, 144, 61, 22, 68, 25, 63, 187, 3, 63, 62, 17, 9, 15, 62, 210, 86, 7, 62, 154, 250, 16, 189, 28, 127, 57, 61, 188, 254, 143, 62, 73, 201, 72, 62, 172, 91, 160, 61, 75, 60, 231, 62, 10, 44, 65, 62, 177, 31, 245, 61, 0, 46, 190, 190, 86, 63, 146, 190, 47, 40, 138, 61, 51, 17, 18, 191, 101, 193, 112, 61, 134, 164, 110, 191, 82, 221, 0, 190, 171, 159, 199, 190, 189, 228, 69, 62, 204, 242, 233, 62, 41, 21, 111, 191, 73, 127, 233, 61, 226, 186, 172, 62, 97, 22, 107, 62, 11, 100, 49, 62};
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
                alignas(float) const unsigned char memory[] = {122, 170, 203, 61, 29, 122, 67, 189, 133, 185, 189, 62, 43, 204, 222, 61, 141, 188, 2, 62, 44, 114, 38, 189, 3, 2, 148, 189, 27, 120, 113, 62, 22, 131, 1, 62, 1, 35, 184, 61, 90, 24, 38, 189, 75, 244, 56, 62, 152, 109, 159, 189, 94, 90, 184, 60, 251, 12, 100, 61, 169, 120, 185, 62, 99, 67, 39, 188, 246, 253, 155, 62, 238, 111, 218, 188, 148, 134, 24, 190, 94, 121, 157, 62, 176, 0, 23, 190, 83, 229, 131, 189, 128, 131, 132, 190, 105, 44, 129, 62, 68, 223, 41, 61, 54, 24, 59, 189, 198, 163, 3, 62, 221, 57, 43, 61, 242, 160, 174, 62, 13, 55, 152, 60, 45, 180, 248, 190};
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
                alignas(float) const unsigned char memory[] = {102, 159, 229, 60, 202, 248, 44, 63, 141, 140, 35, 190, 91, 89, 212, 187, 32, 13, 134, 190, 219, 164, 96, 191, 49, 92, 249, 189, 178, 142, 93, 63, 250, 161, 132, 191, 141, 105, 130, 61, 246, 33, 86, 63, 21, 117, 128, 63, 5, 13, 214, 188, 170, 150, 108, 63, 126, 107, 75, 63, 208, 39, 241, 190, 98, 86, 192, 60, 66, 17, 123, 63, 210, 155, 13, 190, 147, 40, 172, 61, 226, 49, 52, 191, 110, 79, 164, 61, 175, 136, 212, 190, 252, 19, 209, 62, 232, 10, 172, 62, 1, 114, 236, 62, 161, 4, 32, 190, 160, 187, 39, 63, 250, 253, 24, 190, 241, 71, 171, 190, 8, 220, 23, 190, 112, 131, 109, 63, 188, 156, 177, 61, 6, 183, 90, 189, 7, 226, 145, 190, 243, 167, 174, 61, 255, 140, 78, 190, 28, 19, 55, 62, 253, 241, 225, 60, 226, 221, 177, 62, 47, 116, 7, 63, 217, 82, 129, 190, 202, 239, 207, 188, 250, 142, 164, 190, 226, 135, 17, 190, 13, 34, 7, 63, 148, 22, 143, 189, 35, 18, 229, 190, 150, 71, 232, 60, 48, 148, 78, 60, 61, 244, 158, 190, 24, 91, 3, 190, 164, 180, 131, 62, 34, 48, 40, 190, 63, 190, 101, 190, 15, 14, 87, 61, 16, 115, 48, 189, 137, 40, 226, 62, 247, 26, 14, 63, 150, 199, 0, 61, 27, 197, 213, 190, 189, 37, 215, 189, 209, 27, 86, 61, 64, 238, 35, 189};
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
                alignas(float) const unsigned char memory[] = {26, 134, 173, 189, 254, 211, 191, 190};
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
    alignas(float) const unsigned char memory[] = {6, 9, 156, 190, 183, 154, 225, 62, 22, 177, 151, 61};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {154, 71, 147, 191, 192, 157, 181, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0081/steps/000000000016000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}