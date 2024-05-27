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
                alignas(float) const unsigned char memory[] = {184, 8, 39, 191, 129, 144, 74, 191, 133, 37, 7, 63, 222, 156, 46, 190, 151, 117, 21, 63, 134, 4, 213, 189, 93, 107, 230, 190, 16, 144, 230, 190, 241, 74, 186, 62, 192, 119, 204, 190, 193, 182, 169, 190, 154, 177, 74, 190, 98, 187, 65, 189, 30, 47, 148, 190, 135, 154, 163, 190, 179, 173, 208, 62, 233, 193, 215, 62, 96, 8, 222, 62, 199, 161, 9, 191, 40, 246, 235, 62, 41, 14, 181, 62, 119, 202, 15, 63, 181, 123, 40, 62, 171, 79, 138, 60, 187, 22, 6, 63, 244, 211, 128, 62, 102, 135, 6, 191, 86, 175, 201, 190, 89, 173, 14, 61, 190, 210, 155, 190, 129, 85, 238, 62, 242, 223, 3, 191, 196, 201, 34, 63, 168, 210, 140, 188, 68, 155, 206, 189, 250, 229, 30, 63, 157, 2, 115, 189, 79, 168, 3, 63, 175, 117, 202, 190, 234, 67, 163, 62, 249, 222, 17, 63, 173, 168, 237, 190, 226, 88, 122, 62, 61, 72, 183, 61, 170, 227, 120, 62, 164, 28, 163, 62, 108, 56, 234, 187, 118, 105, 56, 189, 179, 227, 217, 190, 18, 144, 97, 191, 251, 42, 27, 62, 155, 198, 71, 60, 47, 129, 47, 61, 102, 247, 167, 189, 231, 42, 170, 62, 222, 44, 70, 190, 4, 224, 246, 189, 255, 15, 35, 191, 42, 249, 203, 62, 71, 221, 194, 62, 26, 116, 139, 62, 0, 125, 21, 63, 135, 208, 4, 63, 217, 133, 164, 189, 136, 32, 89, 63, 15, 208, 183, 190, 98, 80, 168, 190, 133, 194, 112, 189, 64, 195, 150, 62, 9, 121, 85, 190, 2, 129, 127, 191, 222, 117, 87, 62, 180, 195, 79, 190, 96, 37, 107, 189, 149, 140, 143, 190, 218, 123, 229, 189, 182, 140, 232, 62, 158, 79, 138, 62, 54, 5, 6, 63, 195, 133, 173, 62, 245, 226, 9, 191, 43, 161, 103, 189, 218, 89, 57, 190, 78, 160, 47, 62, 219, 48, 249, 189, 167, 186, 69, 191, 195, 87, 82, 190, 52, 35, 38, 63, 228, 173, 56, 62, 237, 85, 21, 63, 141, 58, 149, 62, 114, 18, 23, 191, 15, 220, 200, 190, 117, 123, 58, 190, 195, 165, 189, 190, 141, 235, 191, 61};
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
                alignas(float) const unsigned char memory[] = {151, 52, 240, 190, 91, 159, 84, 61, 18, 23, 48, 190, 64, 235, 64, 62, 246, 125, 15, 63, 82, 194, 29, 61, 247, 203, 133, 62, 67, 12, 118, 60, 53, 239, 33, 191, 140, 111, 206, 61, 156, 146, 6, 191, 84, 70, 150, 62, 161, 193, 189, 62, 222, 134, 152, 60, 125, 147, 164, 62, 173, 234, 186, 190, 29, 122, 167, 190, 181, 246, 193, 62, 104, 142, 211, 62, 233, 234, 132, 60, 82, 80, 129, 189, 77, 64, 7, 63, 98, 224, 12, 63, 35, 18, 170, 189, 215, 219, 211, 190, 84, 186, 219, 62, 126, 113, 108, 190, 8, 129, 52, 61, 57, 178, 173, 62, 154, 41, 108, 62, 113, 165, 190, 61, 209, 39, 10, 62};
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
                alignas(float) const unsigned char memory[] = {123, 126, 160, 189, 69, 104, 27, 190, 180, 203, 90, 61, 51, 119, 28, 190, 84, 197, 199, 58, 225, 126, 128, 188, 69, 255, 182, 60, 62, 54, 128, 189, 15, 235, 21, 62, 116, 121, 181, 61, 179, 28, 23, 61, 92, 184, 10, 62, 242, 26, 199, 189, 219, 247, 253, 61, 108, 208, 85, 190, 157, 92, 46, 62, 31, 239, 237, 60, 127, 27, 178, 186, 11, 162, 121, 189, 44, 230, 140, 189, 155, 160, 182, 61, 207, 229, 247, 189, 138, 47, 107, 187, 106, 72, 14, 189, 195, 79, 20, 190, 14, 5, 66, 189, 22, 213, 124, 189, 205, 165, 40, 61, 214, 41, 17, 61, 26, 255, 231, 61, 137, 173, 22, 62, 125, 205, 58, 190, 115, 156, 239, 61, 154, 131, 201, 189, 34, 96, 148, 61, 13, 98, 131, 190, 61, 141, 134, 190, 48, 112, 121, 62, 56, 87, 179, 61, 245, 28, 191, 189, 53, 29, 52, 190, 223, 206, 128, 190, 57, 253, 59, 62, 211, 174, 33, 62, 159, 232, 6, 190, 95, 88, 243, 189, 5, 151, 0, 61, 194, 12, 187, 189, 0, 152, 236, 61, 7, 216, 225, 60, 48, 147, 185, 189, 156, 194, 148, 60, 168, 0, 105, 60, 87, 1, 54, 61, 217, 52, 121, 61, 76, 139, 210, 189, 209, 241, 129, 188, 244, 51, 252, 188, 110, 154, 190, 189, 191, 185, 25, 60, 243, 148, 132, 60, 148, 20, 91, 62, 89, 11, 35, 61, 26, 184, 235, 61, 169, 150, 45, 60, 137, 92, 97, 190, 92, 71, 41, 61, 130, 144, 43, 62, 231, 197, 183, 59, 243, 44, 59, 190, 156, 29, 136, 189, 161, 5, 153, 189, 100, 248, 41, 190, 112, 53, 81, 62, 236, 114, 44, 189, 190, 1, 234, 61, 228, 163, 20, 60, 15, 9, 149, 60, 101, 0, 248, 188, 61, 233, 231, 189, 165, 251, 145, 62, 13, 233, 39, 62, 114, 231, 251, 61, 130, 122, 188, 190, 198, 9, 78, 61, 223, 204, 255, 61, 199, 239, 253, 189, 58, 82, 46, 62, 220, 42, 29, 189, 44, 172, 176, 190, 8, 50, 22, 190, 14, 97, 185, 188, 108, 172, 136, 62, 10, 161, 170, 189, 45, 180, 160, 62, 34, 244, 24, 62, 179, 227, 236, 189, 73, 87, 222, 61, 153, 93, 215, 61, 18, 204, 195, 189, 15, 31, 22, 190, 64, 62, 188, 188, 68, 83, 222, 188, 222, 112, 128, 189, 148, 51, 44, 190, 109, 138, 2, 190, 39, 3, 174, 189, 252, 118, 77, 189, 20, 146, 91, 61, 23, 137, 127, 61, 229, 88, 22, 188, 197, 34, 213, 189, 71, 45, 163, 189, 6, 34, 218, 61, 90, 215, 223, 61, 62, 103, 65, 189, 35, 141, 227, 188, 139, 226, 153, 187, 69, 228, 60, 190, 112, 155, 33, 190, 133, 215, 239, 189, 61, 25, 167, 189, 0, 71, 98, 189, 185, 167, 216, 187, 14, 38, 240, 60, 36, 76, 151, 188, 220, 19, 200, 187, 182, 49, 50, 190, 182, 17, 165, 188, 29, 96, 73, 62, 133, 84, 47, 62, 5, 100, 55, 61, 250, 65, 226, 188, 121, 228, 144, 189, 64, 74, 8, 190, 150, 118, 177, 62, 91, 79, 171, 60, 180, 72, 4, 190, 210, 138, 128, 61, 140, 76, 4, 62, 167, 203, 152, 60, 17, 183, 26, 190, 100, 238, 239, 185, 76, 3, 33, 189, 159, 99, 132, 188, 4, 250, 22, 62, 151, 89, 39, 189, 68, 181, 0, 62, 105, 97, 13, 62, 146, 240, 28, 62, 149, 145, 74, 62, 131, 101, 117, 61, 242, 57, 131, 190, 119, 163, 213, 188, 46, 123, 9, 190, 121, 85, 143, 61, 226, 220, 181, 61, 128, 63, 155, 61, 195, 172, 225, 61, 110, 85, 151, 189, 125, 27, 52, 190, 245, 127, 136, 61, 218, 115, 149, 189, 88, 69, 163, 61, 193, 223, 204, 58, 221, 92, 75, 62, 51, 17, 66, 61, 39, 131, 166, 62, 50, 219, 2, 62, 138, 126, 182, 61, 163, 133, 66, 187, 172, 214, 61, 188, 18, 136, 86, 62, 60, 86, 15, 190, 180, 7, 208, 61, 140, 138, 243, 189, 38, 161, 169, 190, 56, 178, 214, 189, 118, 49, 224, 61, 59, 233, 25, 62, 218, 141, 165, 188, 146, 250, 127, 62, 82, 46, 183, 61, 159, 87, 0, 190, 20, 68, 251, 189, 208, 122, 75, 61, 223, 97, 34, 189, 81, 57, 7, 62, 170, 135, 75, 190, 13, 46, 6, 61, 212, 73, 135, 190, 224, 4, 0, 190, 102, 59, 126, 62, 108, 53, 224, 189, 249, 141, 146, 61, 217, 98, 23, 62, 132, 74, 243, 60, 222, 121, 231, 189, 33, 201, 174, 189, 241, 42, 28, 190, 208, 156, 187, 61, 5, 25, 47, 190, 28, 125, 22, 190, 62, 243, 206, 61, 42, 69, 203, 189, 247, 18, 121, 62, 146, 207, 44, 190, 35, 13, 89, 189, 176, 115, 186, 62, 38, 22, 48, 62, 43, 148, 36, 61, 228, 139, 216, 189, 84, 83, 146, 190, 26, 231, 30, 189, 100, 187, 153, 189, 185, 186, 179, 62, 45, 3, 250, 61, 164, 185, 33, 187, 181, 43, 98, 62, 37, 62, 203, 58, 63, 14, 15, 189, 37, 111, 154, 189, 162, 129, 129, 62, 12, 34, 157, 188, 92, 245, 81, 61, 18, 245, 66, 61, 60, 51, 151, 61, 166, 217, 146, 189, 58, 246, 195, 188, 158, 124, 20, 62, 113, 73, 53, 190, 107, 26, 226, 187, 173, 117, 64, 190, 115, 88, 207, 59, 59, 75, 114, 190, 200, 115, 174, 61, 237, 6, 16, 62, 12, 44, 80, 61, 104, 212, 195, 61, 78, 37, 8, 190, 29, 33, 166, 61, 178, 232, 82, 61, 79, 109, 193, 61, 189, 253, 86, 61, 183, 252, 147, 189, 0, 109, 109, 189, 111, 28, 62, 190, 7, 222, 157, 62, 29, 52, 213, 61, 218, 208, 42, 190, 111, 106, 31, 189, 214, 175, 3, 62, 166, 40, 91, 62, 190, 107, 85, 190, 23, 237, 147, 62, 32, 221, 198, 60, 126, 186, 190, 188, 185, 80, 112, 61, 104, 97, 133, 61, 34, 107, 53, 190, 216, 159, 68, 190, 208, 86, 33, 62, 42, 140, 229, 189, 35, 248, 39, 62, 34, 179, 175, 189, 19, 13, 20, 190, 144, 193, 133, 189, 213, 117, 48, 62, 241, 80, 34, 190, 49, 56, 221, 61, 130, 32, 16, 62, 18, 5, 255, 61, 214, 18, 129, 62, 215, 30, 63, 61, 51, 63, 93, 61, 126, 24, 202, 61, 115, 231, 180, 188, 49, 167, 179, 60, 228, 118, 103, 188, 222, 180, 248, 60, 216, 91, 200, 61, 102, 177, 201, 189, 7, 119, 20, 190, 146, 251, 213, 189, 209, 107, 21, 190, 117, 129, 94, 62, 57, 58, 167, 61, 102, 101, 130, 189, 101, 148, 166, 188, 242, 97, 0, 62, 0, 128, 191, 188, 229, 30, 185, 189, 65, 206, 147, 60, 40, 3, 216, 189, 138, 211, 10, 59, 169, 82, 217, 189, 247, 227, 21, 190, 151, 106, 16, 190, 85, 33, 197, 189, 88, 122, 210, 61, 59, 243, 41, 190, 208, 128, 5, 62, 184, 236, 255, 189, 107, 84, 25, 190, 239, 232, 175, 188, 181, 179, 153, 61, 135, 84, 238, 189, 129, 220, 28, 188, 84, 118, 53, 189, 112, 210, 175, 187, 31, 117, 201, 188, 166, 27, 94, 188, 140, 189, 29, 190, 6, 182, 131, 61, 253, 158, 162, 61, 30, 79, 220, 189, 122, 65, 197, 61, 219, 13, 8, 190, 73, 128, 204, 188, 64, 32, 217, 61, 222, 67, 36, 62, 130, 92, 61, 186, 39, 255, 163, 61, 211, 244, 160, 61, 90, 134, 161, 189, 201, 249, 239, 61, 38, 12, 48, 186, 16, 207, 20, 190, 15, 21, 120, 61, 66, 190, 67, 190, 25, 177, 117, 62, 188, 5, 38, 62, 61, 52, 233, 188, 228, 132, 51, 189, 108, 59, 234, 61, 220, 111, 176, 60, 46, 162, 43, 189, 11, 108, 122, 190, 179, 211, 195, 61, 143, 77, 247, 61, 29, 160, 242, 189, 178, 184, 237, 188, 59, 41, 173, 189, 129, 203, 235, 61, 92, 123, 39, 62, 31, 156, 19, 190, 226, 104, 38, 62, 236, 83, 35, 62, 73, 73, 31, 190, 93, 163, 101, 62, 10, 74, 11, 62, 238, 45, 241, 188, 213, 103, 94, 61, 144, 207, 119, 62, 49, 5, 46, 190, 222, 139, 166, 189, 249, 242, 229, 189, 51, 188, 39, 62, 166, 127, 154, 188, 159, 144, 125, 62, 9, 138, 146, 189, 227, 29, 247, 61, 96, 214, 145, 61, 164, 243, 244, 189, 136, 96, 129, 62, 225, 215, 155, 190, 44, 146, 230, 188, 213, 142, 177, 61, 162, 152, 104, 190, 123, 33, 99, 60, 58, 17, 169, 61, 191, 42, 20, 62, 231, 1, 221, 61, 46, 6, 148, 62, 138, 105, 204, 61, 16, 80, 220, 190, 28, 133, 174, 190, 199, 22, 238, 189, 81, 16, 98, 190, 119, 59, 0, 190, 108, 58, 227, 61, 108, 26, 27, 62, 254, 66, 200, 190, 10, 70, 5, 62, 236, 176, 0, 61, 87, 224, 36, 59, 182, 213, 34, 190, 98, 103, 217, 189, 124, 31, 104, 189, 121, 6, 128, 188, 52, 155, 37, 189, 225, 81, 161, 61, 66, 246, 127, 189, 143, 213, 0, 62, 232, 94, 130, 60, 215, 42, 201, 189, 87, 165, 158, 60, 75, 108, 14, 190, 83, 7, 165, 61, 89, 28, 232, 60, 117, 254, 234, 188, 101, 241, 128, 189, 212, 38, 206, 187, 167, 217, 213, 61, 44, 244, 3, 62, 165, 218, 84, 57, 58, 225, 7, 190, 243, 33, 221, 189, 98, 218, 178, 189, 179, 27, 68, 190, 182, 150, 135, 61, 126, 248, 151, 61, 166, 36, 35, 190, 85, 11, 1, 62, 63, 124, 21, 190, 160, 185, 15, 62, 22, 145, 74, 189, 12, 10, 36, 61, 88, 72, 93, 190, 188, 129, 233, 61, 89, 47, 39, 62, 159, 142, 167, 61, 72, 8, 62, 190, 87, 134, 18, 61, 93, 66, 72, 61, 241, 175, 167, 189, 60, 219, 112, 188, 189, 36, 109, 60, 36, 16, 45, 62, 228, 171, 255, 60, 73, 128, 27, 190, 70, 42, 86, 189, 28, 168, 165, 62, 28, 163, 243, 189, 175, 140, 95, 187, 243, 5, 34, 190, 194, 104, 28, 62, 6, 225, 182, 189, 55, 75, 232, 189, 171, 23, 20, 62, 145, 94, 30, 62, 248, 250, 45, 190, 161, 128, 194, 61, 238, 121, 30, 190, 158, 128, 169, 61, 200, 232, 64, 61, 185, 227, 7, 62, 191, 215, 47, 62, 175, 193, 193, 187, 129, 246, 8, 61, 81, 159, 140, 189, 61, 131, 192, 188, 63, 98, 17, 62, 196, 138, 68, 190, 18, 242, 16, 190, 140, 80, 135, 62, 96, 133, 172, 189, 20, 25, 156, 61, 82, 61, 141, 190, 148, 178, 159, 61, 86, 115, 28, 61, 62, 197, 29, 62, 124, 172, 67, 62, 47, 252, 128, 61, 68, 4, 170, 62, 42, 204, 244, 60, 106, 25, 248, 60, 154, 204, 171, 61, 174, 255, 63, 190, 172, 64, 27, 190, 120, 148, 110, 62, 50, 223, 136, 62, 88, 19, 28, 190, 27, 3, 169, 189, 140, 178, 219, 189, 188, 231, 25, 62, 100, 128, 218, 61, 10, 94, 20, 189, 171, 157, 57, 62, 13, 247, 7, 189, 79, 13, 43, 62, 244, 146, 227, 61, 19, 162, 29, 62, 139, 50, 85, 190, 118, 213, 51, 190, 38, 86, 30, 190, 133, 137, 28, 190, 138, 64, 165, 61, 197, 47, 168, 189, 2, 187, 203, 60, 213, 193, 226, 188, 0, 171, 39, 62, 94, 110, 10, 62, 31, 119, 23, 62, 74, 177, 51, 190, 165, 66, 34, 190, 57, 144, 44, 62, 240, 107, 120, 190, 159, 2, 104, 59, 243, 254, 198, 61, 150, 252, 8, 190, 209, 43, 64, 61, 244, 87, 64, 190, 186, 15, 64, 62, 15, 163, 153, 61, 142, 172, 210, 60, 35, 83, 16, 190, 66, 149, 239, 187, 234, 193, 1, 189, 248, 254, 47, 62, 140, 182, 146, 61, 184, 89, 254, 61, 192, 65, 129, 189, 133, 140, 212, 189, 0, 96, 222, 189, 137, 174, 209, 188, 192, 97, 39, 190, 106, 80, 41, 62, 126, 197, 81, 60, 181, 45, 30, 189, 127, 46, 158, 61, 40, 242, 240, 61, 208, 121, 17, 190, 238, 191, 51, 190, 41, 37, 89, 185, 101, 229, 240, 189, 204, 121, 239, 186, 168, 164, 226, 189, 62, 197, 92, 61, 19, 7, 16, 190, 81, 159, 173, 186, 77, 239, 9, 190, 206, 3, 128, 187, 31, 196, 121, 188, 1, 221, 41, 61, 80, 212, 252, 61, 154, 97, 164, 188, 32, 150, 92, 61, 138, 22, 184, 189, 192, 49, 217, 61, 197, 103, 255, 60, 3, 183, 31, 190, 1, 186, 90, 60, 117, 187, 35, 190, 182, 66, 69, 62, 230, 84, 236, 59, 250, 190, 10, 61, 181, 233, 29, 190, 97, 154, 94, 61, 36, 99, 128, 190, 6, 76, 156, 188, 173, 249, 22, 62, 29, 161, 131, 61, 171, 183, 20, 189, 11, 20, 183, 190, 89, 59, 1, 62, 26, 170, 50, 190, 236, 160, 59, 62, 5, 237, 60, 62, 61, 24, 24, 62, 132, 67, 103, 62, 123, 171, 110, 61, 114, 139, 163, 61, 42, 231, 230, 61, 95, 241, 97, 190, 36, 94, 129, 61, 100, 191, 3, 61, 103, 111, 240, 61, 25, 249, 49, 62, 181, 110, 40, 189, 130, 8, 66, 189, 140, 219, 193, 61, 116, 133, 194, 60, 185, 174, 68, 190, 13, 128, 181, 188, 47, 37, 207, 189, 9, 205, 135, 61, 12, 231, 53, 61, 209, 10, 36, 187, 226, 33, 229, 61, 94, 253, 92, 61, 85, 227, 168, 189, 91, 100, 107, 189, 58, 108, 249, 60, 208, 207, 224, 61, 188, 41, 15, 62, 245, 195, 21, 190, 239, 209, 18, 62, 122, 34, 136, 189, 96, 133, 228, 189, 208, 94, 75, 189, 93, 118, 200, 189, 42, 26, 175, 188, 59, 59, 165, 61, 126, 154, 23, 190, 49, 132, 205, 60, 39, 199, 19, 190, 13, 170, 5, 190, 172, 125, 46, 190, 168, 119, 189, 61, 226, 61, 212, 61, 156, 105, 108, 189, 33, 49, 137, 61, 227, 86, 149, 189, 187, 177, 35, 190, 23, 183, 214, 61, 61, 219, 139, 189, 66, 228, 60, 190, 66, 157, 22, 62, 127, 165, 138, 57, 199, 146, 9, 189, 78, 80, 177, 61, 80, 184, 71, 186, 188, 186, 208, 60, 183, 92, 171, 61, 143, 200, 19, 190, 55, 163, 9, 62, 213, 194, 75, 190, 86, 62, 9, 190, 39, 113, 206, 189, 84, 249, 226, 60, 162, 104, 7, 190, 205, 92, 39, 189, 10, 11, 40, 62, 116, 99, 12, 61, 42, 77, 150, 189, 213, 27, 6, 62, 136, 159, 187, 188, 238, 161, 174, 61, 218, 130, 75, 190, 120, 182, 65, 189, 166, 25, 32, 190, 188, 194, 6, 62, 83, 179, 169, 61, 199, 238, 62, 188, 49, 223, 16, 190, 87, 193, 240, 188, 63, 214, 204, 189, 71, 28, 201, 61, 250, 93, 245, 61, 204, 251, 212, 61, 228, 218, 152, 61, 97, 219, 175, 61, 239, 200, 140, 61, 14, 94, 173, 61, 251, 6, 83, 190, 137, 215, 27, 62, 168, 216, 151, 62, 234, 84, 228, 189, 76, 235, 4, 62, 93, 70, 255, 60, 206, 227, 114, 62, 18, 42, 155, 61, 70, 163, 60, 61, 183, 43, 92, 62, 136, 217, 38, 190, 242, 198, 145, 62, 220, 78, 241, 61, 65, 39, 107, 61, 89, 150, 48, 190, 56, 19, 149, 189, 85, 31, 19, 61, 106, 117, 55, 188, 252, 189, 97, 62, 53, 211, 248, 60, 126, 250, 253, 60, 13, 242, 128, 59, 165, 15, 111, 188, 120, 42, 26, 62, 223, 176, 213, 60, 233, 22, 143, 61, 3, 217, 122, 188, 43, 67, 84, 62, 237, 52, 14, 190, 46, 146, 8, 62, 194, 90, 79, 59, 203, 40, 41, 62, 112, 238, 159, 190, 2, 69, 15, 190, 210, 204, 30, 61, 172, 92, 63, 189, 187, 143, 28, 62, 44, 25, 29, 190, 103, 37, 151, 61, 160, 12, 14, 60, 35, 0, 17, 62, 8, 164, 12, 62, 158, 103, 43, 190, 5, 58, 98, 62, 117, 164, 36, 62, 208, 97, 52, 61, 106, 130, 70, 60, 56, 120, 81, 188, 243, 224, 65, 190, 58, 26, 204, 189, 11, 177, 86, 62, 241, 186, 93, 62, 101, 42, 119, 189, 60, 28, 4, 189, 222, 59, 73, 61, 201, 83, 42, 61, 179, 71, 134, 190, 28, 113, 19, 62, 227, 131, 154, 60, 59, 56, 158, 189, 76, 228, 9, 62, 239, 151, 20, 188, 12, 111, 65, 60, 135, 241, 88, 60, 97, 33, 24, 61, 74, 148, 72, 62, 249, 213, 229, 61, 11, 105, 3, 62, 147, 227, 238, 61, 46, 243, 18, 62, 164, 216, 113, 189, 79, 97, 97, 62, 246, 47, 207, 189, 156, 104, 4, 62, 218, 146, 247, 61, 172, 201, 208, 190, 106, 236, 73, 62, 246, 71, 81, 62, 124, 127, 169, 61, 182, 160, 36, 189, 204, 203, 121, 62, 155, 191, 224, 61, 44, 107, 94, 190, 85, 211, 90, 190, 238, 157, 6, 188, 205, 29, 29, 189, 190, 77, 236, 189, 223, 123, 56, 190, 190, 29, 106, 62, 47, 201, 132, 189, 181, 37, 194, 60, 177, 176, 17, 61, 175, 167, 173, 62, 154, 153, 115, 189, 124, 141, 236, 61, 100, 49, 24, 61, 109, 144, 149, 61, 246, 149, 97, 62, 56, 8, 41, 62, 15, 149, 179, 189, 98, 229, 235, 61, 64, 9, 42, 190, 122, 186, 235, 61, 116, 68, 42, 62, 62, 95, 36, 190, 2, 53, 193, 188, 4, 71, 245, 61, 144, 211, 58, 190, 188, 59, 221, 61, 245, 150, 241, 189, 186, 83, 189, 189, 169, 198, 79, 62, 183, 104, 73, 62, 35, 240, 26, 189, 80, 219, 163, 190, 115, 112, 145, 190, 240, 93, 99, 61, 240, 148, 133, 190, 237, 146, 28, 190, 73, 115, 32, 61, 76, 246, 100, 62, 168, 53, 5, 190, 224, 252, 101, 61, 201, 77, 50, 62, 33, 177, 196, 61, 253, 209, 38, 61, 152, 60, 1, 190, 3, 179, 36, 61, 77, 79, 255, 189, 124, 11, 45, 188, 70, 143, 176, 189, 154, 124, 203, 61, 68, 20, 107, 189, 16, 162, 251, 188, 212, 24, 87, 189, 205, 215, 203, 61, 86, 93, 165, 188, 29, 141, 81, 190, 248, 224, 66, 189, 200, 173, 133, 62, 148, 172, 52, 190, 140, 56, 73, 188, 69, 211, 8, 189, 109, 160, 193, 189, 38, 160, 24, 61, 209, 229, 205, 61, 15, 242, 12, 60, 30, 176, 123, 62, 22, 127, 40, 190, 71, 183, 42, 62, 2, 243, 62, 62, 40, 126, 61, 62, 168, 126, 155, 189, 72, 137, 207, 189, 206, 138, 91, 189, 118, 189, 157, 188, 76, 59, 217, 61, 32, 226, 49, 190, 225, 224, 245, 188, 222, 145, 206, 61, 232, 202, 130, 62, 222, 157, 96, 62, 72, 165, 239, 61, 47, 197, 209, 189, 227, 152, 72, 62, 232, 27, 73, 186, 254, 57, 21, 190, 110, 83, 166, 62, 97, 222, 151, 190, 16, 231, 175, 189, 204, 233, 7, 62, 115, 104, 10, 191, 133, 40, 81, 62, 52, 202, 16, 190, 217, 38, 28, 62, 181, 11, 135, 189, 252, 17, 198, 60, 55, 158, 33, 62, 181, 226, 191, 190, 187, 233, 93, 190, 214, 190, 81, 189, 140, 26, 144, 190, 14, 18, 229, 186, 16, 180, 36, 189, 28, 171, 59, 62, 124, 36, 237, 190, 66, 220, 2, 62, 73, 166, 134, 61, 47, 111, 160, 189, 151, 104, 97, 190, 78, 108, 228, 188, 110, 91, 194, 189, 1, 173, 26, 189, 161, 76, 53, 190, 13, 83, 71, 189, 242, 251, 147, 61, 18, 152, 71, 62, 207, 0, 14, 61, 235, 88, 87, 189, 224, 19, 120, 62, 36, 105, 232, 61, 105, 193, 128, 189, 194, 41, 136, 61, 129, 222, 76, 190, 218, 60, 7, 190, 44, 182, 74, 62, 34, 65, 114, 61, 167, 122, 215, 61, 137, 74, 36, 62, 106, 135, 130, 190, 254, 63, 45, 190, 144, 34, 137, 62, 46, 254, 12, 61, 251, 2, 62, 189, 159, 122, 90, 188, 225, 68, 36, 190, 165, 14, 136, 190, 90, 121, 26, 184, 91, 51, 41, 190, 158, 247, 134, 190, 171, 156, 130, 62, 149, 154, 184, 188, 146, 29, 162, 189, 123, 52, 135, 61, 140, 119, 134, 188, 108, 97, 55, 189, 158, 34, 118, 62, 39, 172, 8, 190, 218, 89, 12, 190, 74, 221, 183, 190, 31, 159, 254, 61, 236, 214, 192, 59, 59, 144, 73, 59, 167, 122, 96, 61, 30, 147, 185, 189, 29, 170, 178, 190, 245, 15, 201, 188, 190, 144, 52, 62, 62, 245, 4, 62, 207, 13, 146, 61, 141, 253, 213, 61, 244, 166, 202, 189, 93, 156, 81, 190, 194, 170, 47, 190, 168, 137, 9, 62, 172, 238, 8, 61, 192, 16, 25, 62, 246, 197, 7, 190, 174, 119, 237, 189, 58, 33, 60, 189, 165, 7, 178, 61, 80, 127, 156, 190, 35, 130, 7, 62, 175, 77, 202, 60, 11, 158, 132, 189, 29, 187, 219, 61, 154, 132, 60, 190, 57, 40, 136, 62, 246, 145, 71, 189, 253, 229, 215, 61, 60, 117, 16, 61, 128, 96, 17, 60, 229, 138, 151, 190, 188, 12, 106, 62, 22, 217, 119, 190, 106, 94, 91, 190, 126, 185, 21, 190, 11, 118, 141, 190, 243, 125, 106, 62, 43, 179, 229, 60, 244, 78, 91, 62, 148, 219, 55, 61, 141, 251, 119, 62, 31, 253, 131, 61, 162, 110, 214, 190, 182, 189, 159, 189, 12, 7, 160, 60, 211, 242, 78, 61, 69, 195, 206, 189, 230, 190, 101, 58, 232, 252, 115, 189, 8, 252, 161, 190, 169, 109, 69, 60, 83, 121, 7, 62, 203, 15, 16, 190, 90, 22, 174, 60, 22, 72, 37, 61, 154, 253, 211, 61, 114, 210, 73, 190, 196, 13, 129, 60, 146, 193, 121, 62, 10, 111, 10, 189, 126, 211, 56, 190, 163, 44, 103, 190, 225, 231, 83, 62, 114, 244, 188, 188, 82, 32, 226, 61, 23, 192, 101, 62, 208, 230, 136, 189, 11, 239, 224, 62, 114, 21, 177, 189, 117, 10, 164, 189, 90, 49, 127, 189, 23, 11, 12, 189, 210, 215, 152, 189, 54, 105, 59, 62, 110, 121, 183, 62, 51, 237, 245, 188, 222, 186, 72, 190, 134, 183, 20, 62, 197, 17, 73, 189, 27, 244, 235, 189, 251, 58, 155, 189, 196, 128, 22, 189, 42, 241, 6, 62, 66, 46, 104, 189, 102, 228, 142, 189, 228, 121, 182, 189, 123, 134, 0, 62, 195, 202, 185, 189, 43, 255, 182, 189, 59, 244, 156, 190, 182, 111, 174, 61, 73, 37, 49, 189, 151, 48, 176, 61, 46, 220, 234, 60, 228, 224, 57, 190, 244, 41, 21, 62, 199, 16, 80, 61, 54, 219, 26, 190, 196, 184, 38, 62, 239, 132, 37, 62, 218, 191, 130, 61, 46, 242, 189, 188, 132, 164, 62, 190, 189, 33, 26, 62, 10, 216, 50, 61, 41, 70, 19, 62, 34, 244, 155, 61, 84, 105, 198, 59, 56, 131, 178, 190, 128, 27, 154, 189, 107, 97, 11, 190, 26, 110, 57, 62, 149, 225, 248, 61, 243, 204, 112, 60, 57, 69, 38, 61, 155, 53, 156, 61, 5, 11, 41, 188, 183, 14, 72, 62, 20, 125, 242, 60, 144, 162, 237, 189, 119, 74, 115, 190, 67, 230, 213, 61, 153, 121, 22, 62, 8, 111, 43, 190, 59, 205, 77, 187, 106, 28, 226, 190, 93, 126, 60, 62, 22, 148, 59, 190, 163, 143, 94, 61, 50, 217, 205, 60, 163, 216, 145, 189, 130, 15, 104, 62, 91, 250, 7, 190, 190, 196, 17, 189, 74, 175, 108, 189, 225, 63, 135, 189, 145, 169, 228, 189, 84, 216, 126, 188, 90, 240, 88, 62, 233, 56, 50, 190, 133, 150, 34, 190, 203, 55, 31, 190, 32, 187, 249, 61, 86, 164, 63, 62, 25, 74, 125, 190, 137, 6, 166, 62, 117, 78, 12, 62};
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
                alignas(float) const unsigned char memory[] = {167, 225, 109, 190, 92, 98, 75, 190, 208, 92, 214, 189, 58, 230, 153, 186, 228, 231, 1, 189, 75, 167, 224, 61, 3, 161, 53, 62, 143, 220, 1, 62, 225, 174, 194, 61, 194, 170, 239, 189, 3, 108, 242, 189, 67, 169, 5, 62, 9, 234, 72, 190, 228, 70, 243, 61, 190, 87, 63, 62, 223, 153, 61, 190, 27, 35, 97, 60, 61, 176, 142, 61, 103, 217, 169, 189, 208, 230, 62, 190, 7, 234, 168, 189, 40, 96, 45, 61, 174, 195, 98, 189, 140, 55, 158, 61, 171, 158, 20, 62, 64, 29, 203, 61, 192, 236, 29, 62, 169, 194, 73, 62, 9, 132, 101, 187, 10, 10, 27, 62, 121, 175, 238, 59, 0, 107, 203, 61};
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
                alignas(float) const unsigned char memory[] = {209, 73, 132, 61, 80, 18, 23, 190, 192, 231, 176, 62, 114, 222, 156, 61, 216, 54, 20, 189, 79, 29, 109, 190, 25, 180, 69, 62, 188, 252, 149, 62, 198, 196, 16, 190, 36, 61, 140, 189, 185, 209, 7, 190, 58, 145, 46, 190, 181, 241, 231, 60, 199, 96, 47, 62, 233, 87, 249, 61, 137, 239, 170, 189, 21, 217, 77, 61, 154, 14, 18, 62, 112, 124, 219, 61, 135, 211, 225, 188, 76, 244, 44, 61, 5, 146, 150, 62, 82, 191, 54, 190, 247, 167, 57, 190, 177, 60, 13, 61, 220, 121, 82, 190, 156, 133, 121, 62, 35, 93, 164, 189, 168, 42, 141, 190, 174, 3, 83, 62, 45, 24, 131, 62, 142, 33, 124, 62, 121, 76, 203, 61, 44, 79, 31, 62, 209, 230, 23, 190, 31, 123, 205, 61, 56, 152, 57, 190, 46, 238, 224, 189, 52, 181, 24, 62, 151, 226, 173, 59, 2, 202, 152, 189, 163, 177, 127, 189, 102, 186, 30, 62, 113, 118, 86, 189, 138, 200, 164, 188, 219, 94, 63, 190, 206, 93, 9, 190, 51, 109, 65, 190, 113, 162, 238, 61, 240, 51, 169, 189, 195, 127, 221, 61, 121, 158, 233, 187, 37, 213, 9, 190, 215, 96, 52, 188, 41, 114, 8, 190, 104, 11, 37, 190, 14, 168, 54, 62, 36, 119, 91, 189, 85, 61, 250, 188, 128, 4, 63, 190, 98, 157, 234, 61, 98, 46, 74, 190, 152, 224, 31, 190, 242, 67, 66, 190};
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
                alignas(float) const unsigned char memory[] = {138, 7, 134, 189, 195, 242, 143, 189};
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
    alignas(float) const unsigned char memory[] = {193, 48, 234, 190, 132, 159, 211, 190, 12, 175, 246, 62};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {11, 178, 67, 63, 206, 149, 9, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0060/steps/000000000002000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}