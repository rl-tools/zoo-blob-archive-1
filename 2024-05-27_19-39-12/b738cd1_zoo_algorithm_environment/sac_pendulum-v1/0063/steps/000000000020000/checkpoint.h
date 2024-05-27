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
                alignas(float) const unsigned char memory[] = {74, 34, 52, 62, 167, 13, 186, 191, 197, 205, 177, 190, 223, 144, 220, 190, 106, 144, 143, 188, 167, 44, 44, 63, 139, 82, 37, 63, 33, 110, 195, 190, 175, 79, 146, 190, 99, 86, 170, 190, 180, 44, 244, 63, 160, 25, 191, 62, 235, 167, 118, 190, 247, 33, 169, 190, 20, 214, 239, 190, 234, 101, 2, 60, 44, 94, 39, 63, 164, 149, 170, 189, 220, 131, 41, 63, 132, 28, 94, 63, 198, 67, 229, 62, 168, 117, 156, 62, 159, 211, 194, 63, 178, 213, 201, 62, 219, 255, 143, 191, 109, 207, 83, 191, 96, 75, 236, 190, 99, 34, 54, 63, 162, 128, 154, 190, 115, 52, 67, 190, 24, 38, 6, 63, 159, 93, 182, 191, 33, 69, 133, 190, 145, 122, 220, 190, 72, 212, 143, 62, 0, 201, 11, 189, 68, 207, 60, 62, 94, 185, 129, 190, 188, 180, 15, 63, 75, 195, 240, 62, 36, 81, 132, 63, 4, 48, 137, 62, 29, 158, 220, 190, 141, 47, 186, 61, 203, 128, 94, 63, 187, 193, 162, 190, 8, 169, 138, 191, 9, 209, 105, 190, 132, 155, 182, 190, 246, 36, 101, 191, 172, 106, 219, 62, 229, 92, 203, 62, 107, 116, 108, 190, 188, 103, 44, 63, 2, 121, 150, 62, 161, 17, 147, 63, 88, 195, 95, 62, 145, 93, 113, 190, 167, 115, 137, 191, 168, 198, 171, 190, 147, 186, 23, 191, 68, 87, 193, 191, 196, 113, 162, 190, 239, 85, 193, 190, 55, 203, 59, 63, 211, 42, 222, 62, 156, 32, 78, 62, 195, 63, 111, 63, 176, 9, 29, 190, 33, 118, 160, 189, 115, 225, 77, 63, 38, 233, 205, 190, 161, 1, 60, 62, 58, 14, 82, 191, 12, 155, 219, 189, 185, 217, 27, 63, 98, 89, 214, 60, 124, 40, 196, 60, 122, 243, 87, 62, 221, 190, 161, 191, 232, 11, 108, 190, 170, 126, 142, 62, 200, 103, 253, 190, 118, 93, 60, 63, 168, 124, 163, 191, 191, 216, 124, 63, 136, 152, 143, 62, 152, 197, 125, 62, 48, 13, 242, 190, 105, 230, 185, 190, 131, 0, 156, 62, 20, 15, 88, 191, 212, 40, 101, 190, 168, 65, 107, 190, 38, 137, 19, 191, 46, 229, 140, 61};
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
                alignas(float) const unsigned char memory[] = {148, 159, 148, 190, 167, 5, 252, 190, 24, 0, 203, 190, 247, 104, 153, 190, 137, 38, 162, 62, 199, 28, 208, 62, 210, 86, 15, 191, 195, 130, 157, 62, 148, 180, 107, 63, 5, 69, 4, 191, 77, 148, 49, 62, 140, 124, 199, 62, 188, 126, 160, 190, 253, 135, 237, 189, 183, 22, 129, 189, 43, 182, 227, 62, 194, 61, 220, 190, 188, 97, 142, 188, 212, 238, 235, 61, 155, 26, 101, 190, 191, 215, 36, 63, 154, 82, 59, 188, 212, 236, 13, 63, 60, 252, 125, 62, 24, 90, 110, 189, 148, 75, 155, 190, 214, 151, 4, 62, 60, 250, 187, 189, 116, 49, 176, 62, 108, 72, 93, 190, 220, 170, 137, 62, 117, 226, 123, 62};
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
                alignas(float) const unsigned char memory[] = {228, 96, 2, 190, 58, 175, 83, 190, 34, 66, 61, 190, 181, 108, 190, 191, 187, 68, 182, 62, 245, 165, 45, 62, 26, 134, 124, 62, 239, 155, 186, 59, 12, 159, 140, 62, 165, 248, 48, 191, 68, 125, 2, 191, 189, 72, 162, 61, 39, 18, 90, 189, 146, 216, 162, 62, 90, 89, 27, 190, 219, 136, 5, 60, 22, 34, 250, 62, 168, 72, 105, 190, 19, 103, 238, 61, 77, 116, 122, 62, 181, 96, 30, 190, 201, 90, 175, 190, 41, 29, 104, 62, 38, 118, 20, 188, 239, 213, 106, 190, 193, 73, 106, 62, 26, 90, 191, 190, 120, 34, 123, 62, 17, 1, 146, 190, 228, 46, 205, 61, 181, 58, 230, 189, 25, 22, 44, 61, 56, 24, 17, 190, 2, 60, 176, 61, 75, 222, 112, 61, 241, 115, 13, 63, 141, 132, 195, 190, 23, 177, 137, 189, 237, 92, 17, 191, 146, 210, 69, 189, 66, 238, 70, 191, 63, 14, 213, 61, 197, 56, 81, 62, 123, 2, 91, 62, 172, 123, 132, 62, 65, 127, 50, 191, 226, 175, 247, 61, 0, 109, 189, 62, 38, 76, 189, 190, 17, 119, 34, 62, 211, 187, 129, 190, 48, 103, 142, 191, 74, 119, 135, 62, 218, 130, 131, 62, 78, 206, 77, 190, 71, 114, 43, 190, 115, 185, 169, 62, 50, 189, 205, 189, 82, 76, 64, 190, 144, 132, 190, 190, 169, 227, 241, 62, 216, 54, 176, 190, 228, 196, 155, 62, 11, 64, 53, 188, 140, 37, 45, 60, 200, 108, 247, 61, 82, 144, 177, 188, 37, 156, 10, 190, 119, 157, 161, 61, 194, 35, 23, 190, 23, 56, 31, 62, 224, 179, 240, 189, 217, 77, 42, 190, 11, 180, 200, 188, 214, 141, 129, 188, 99, 197, 21, 189, 5, 248, 15, 62, 146, 114, 45, 61, 21, 166, 14, 188, 120, 107, 1, 62, 103, 207, 22, 190, 193, 76, 4, 190, 177, 154, 147, 61, 189, 119, 206, 60, 157, 64, 173, 61, 48, 198, 217, 189, 63, 23, 203, 189, 69, 49, 252, 188, 105, 204, 201, 189, 255, 246, 116, 61, 133, 191, 91, 60, 103, 94, 57, 61, 105, 63, 237, 189, 15, 27, 16, 61, 78, 216, 165, 189, 231, 251, 126, 61, 182, 161, 201, 62, 4, 123, 38, 61, 113, 218, 8, 62, 58, 4, 174, 191, 100, 153, 88, 62, 173, 106, 150, 190, 0, 119, 188, 190, 45, 217, 208, 191, 178, 27, 157, 62, 50, 88, 148, 190, 193, 97, 25, 61, 195, 36, 135, 188, 125, 220, 125, 190, 233, 181, 154, 190, 206, 232, 170, 190, 241, 234, 212, 62, 50, 231, 26, 63, 139, 31, 23, 191, 72, 219, 111, 191, 162, 214, 70, 62, 196, 58, 157, 62, 142, 199, 152, 190, 37, 61, 250, 190, 153, 42, 173, 190, 59, 71, 158, 62, 154, 165, 41, 190, 107, 159, 58, 62, 242, 105, 190, 189, 245, 101, 59, 190, 125, 206, 19, 62, 6, 155, 146, 61, 56, 76, 231, 62, 231, 149, 172, 190, 22, 156, 90, 191, 49, 30, 218, 190, 168, 92, 151, 191, 127, 163, 136, 60, 145, 66, 203, 61, 91, 137, 121, 189, 4, 148, 112, 191, 54, 10, 147, 62, 3, 27, 133, 191, 88, 131, 253, 189, 147, 141, 146, 62, 134, 220, 195, 190, 26, 106, 142, 62, 133, 252, 0, 191, 42, 99, 105, 62, 200, 217, 170, 62, 179, 255, 128, 190, 198, 51, 173, 62, 29, 173, 234, 189, 133, 201, 136, 62, 127, 238, 119, 191, 24, 75, 131, 62, 53, 208, 231, 189, 141, 185, 156, 61, 249, 59, 205, 189, 63, 205, 174, 189, 114, 80, 203, 62, 7, 237, 174, 190, 184, 102, 209, 190, 232, 58, 52, 190, 107, 238, 53, 62, 36, 11, 35, 62, 82, 201, 144, 189, 231, 85, 38, 190, 228, 102, 200, 187, 19, 172, 218, 185, 99, 204, 243, 61, 13, 237, 227, 188, 84, 216, 56, 190, 30, 59, 207, 61, 166, 148, 72, 60, 194, 41, 165, 60, 6, 146, 217, 189, 60, 13, 162, 189, 4, 175, 105, 189, 72, 250, 171, 60, 135, 149, 22, 189, 107, 35, 245, 60, 158, 232, 16, 189, 88, 96, 95, 189, 253, 32, 62, 61, 192, 119, 39, 190, 155, 209, 229, 61, 10, 171, 15, 190, 17, 173, 92, 189, 247, 42, 60, 190, 12, 198, 33, 190, 59, 118, 51, 190, 239, 46, 230, 188, 204, 53, 233, 189, 90, 129, 199, 189, 179, 187, 50, 60, 125, 122, 158, 61, 48, 53, 87, 189, 116, 41, 83, 189, 13, 166, 228, 189, 247, 84, 112, 62, 231, 134, 10, 190, 81, 217, 168, 190, 125, 96, 94, 190, 201, 31, 91, 189, 202, 222, 245, 61, 209, 66, 243, 60, 23, 46, 137, 190, 225, 117, 70, 62, 104, 125, 180, 190, 170, 98, 17, 190, 214, 185, 232, 188, 64, 221, 2, 189, 37, 64, 65, 191, 161, 38, 231, 189, 229, 137, 148, 190, 170, 206, 55, 191, 162, 218, 199, 190, 116, 179, 16, 62, 46, 245, 193, 189, 231, 219, 77, 190, 183, 98, 72, 190, 24, 87, 64, 190, 200, 57, 148, 190, 46, 66, 89, 191, 75, 182, 174, 62, 134, 80, 80, 189, 136, 29, 114, 190, 88, 18, 137, 190, 240, 255, 254, 190, 73, 234, 179, 190, 58, 173, 202, 190, 128, 114, 188, 191, 227, 17, 125, 62, 133, 206, 63, 189, 84, 174, 146, 190, 255, 54, 221, 191, 158, 192, 156, 62, 179, 184, 205, 191, 208, 89, 225, 190, 147, 185, 197, 57, 141, 3, 239, 190, 70, 33, 135, 189, 192, 193, 38, 191, 137, 58, 217, 61, 99, 73, 39, 63, 127, 205, 133, 190, 109, 63, 87, 189, 127, 61, 128, 190, 194, 250, 42, 62, 75, 207, 178, 190, 185, 177, 34, 62, 15, 106, 139, 190, 156, 197, 69, 190, 187, 136, 168, 189, 125, 252, 63, 190, 32, 177, 7, 190, 14, 60, 4, 189, 231, 240, 182, 189, 8, 232, 178, 190, 94, 228, 59, 62, 62, 4, 30, 191, 38, 104, 222, 61, 82, 104, 171, 189, 163, 212, 71, 60, 34, 130, 77, 62, 24, 201, 202, 62, 72, 131, 18, 190, 51, 170, 238, 60, 57, 144, 169, 190, 188, 100, 101, 61, 223, 13, 234, 61, 103, 241, 35, 62, 253, 185, 132, 62, 118, 133, 142, 190, 168, 43, 246, 61, 70, 189, 191, 62, 177, 107, 191, 189, 55, 73, 58, 62, 131, 57, 144, 189, 12, 189, 24, 191, 153, 217, 41, 62, 209, 49, 24, 190, 228, 197, 69, 62, 176, 88, 8, 62, 159, 103, 157, 189, 158, 32, 6, 62, 11, 59, 170, 189, 178, 115, 142, 190, 73, 189, 188, 61, 210, 37, 85, 190, 209, 57, 146, 61, 94, 152, 191, 61, 74, 199, 161, 190, 234, 165, 28, 62, 138, 82, 156, 61, 38, 198, 7, 63, 7, 188, 166, 61, 16, 18, 248, 61, 241, 148, 46, 191, 98, 143, 41, 190, 118, 242, 165, 189, 175, 72, 67, 62, 243, 253, 135, 62, 180, 177, 182, 62, 10, 40, 177, 61, 110, 246, 81, 191, 69, 163, 181, 61, 123, 154, 32, 62, 216, 6, 59, 190, 31, 10, 45, 62, 125, 211, 228, 190, 211, 9, 12, 190, 0, 199, 58, 189, 17, 23, 70, 190, 240, 168, 199, 61, 144, 160, 223, 61, 191, 198, 168, 62, 110, 144, 4, 62, 179, 182, 54, 61, 95, 97, 243, 190, 237, 122, 145, 62, 16, 30, 152, 60, 240, 129, 173, 62, 176, 6, 81, 62, 168, 73, 167, 190, 232, 100, 199, 189, 147, 207, 186, 191, 99, 243, 125, 190, 16, 133, 213, 62, 125, 32, 93, 61, 16, 82, 208, 62, 47, 51, 228, 60, 218, 182, 175, 62, 150, 206, 149, 191, 47, 39, 117, 191, 243, 94, 128, 189, 112, 218, 61, 189, 210, 79, 73, 188, 156, 100, 244, 189, 43, 195, 77, 191, 162, 35, 122, 62, 115, 247, 27, 61, 67, 135, 52, 62, 149, 203, 228, 190, 242, 143, 174, 190, 242, 186, 254, 190, 177, 236, 97, 61, 65, 95, 200, 62, 39, 21, 28, 191, 48, 193, 115, 63, 146, 163, 101, 191, 250, 17, 153, 62, 88, 182, 35, 191, 83, 105, 43, 191, 40, 109, 187, 191, 157, 162, 46, 61, 22, 174, 6, 191, 253, 102, 129, 62, 106, 122, 153, 59, 112, 133, 110, 61, 39, 254, 28, 62, 234, 94, 2, 62, 146, 165, 233, 190, 137, 98, 8, 62, 87, 141, 38, 190, 54, 118, 144, 62, 2, 249, 190, 60, 210, 240, 163, 62, 171, 195, 144, 62, 186, 207, 33, 190, 92, 1, 232, 61, 147, 167, 219, 60, 127, 192, 181, 190, 99, 198, 64, 62, 9, 75, 116, 61, 163, 123, 138, 189, 250, 149, 56, 62, 60, 25, 192, 61, 25, 161, 69, 62, 134, 240, 27, 188, 118, 89, 60, 62, 97, 32, 22, 61, 208, 186, 217, 61, 167, 158, 58, 190, 121, 144, 192, 188, 216, 194, 75, 190, 79, 243, 181, 61, 193, 89, 230, 189, 226, 137, 160, 62, 239, 195, 153, 62, 167, 251, 219, 61, 85, 19, 145, 189, 248, 171, 251, 189, 16, 182, 168, 190, 112, 187, 52, 62, 203, 234, 19, 62, 52, 29, 110, 189, 121, 22, 250, 62, 161, 203, 84, 60, 85, 4, 83, 190, 167, 164, 148, 62, 6, 110, 182, 61, 78, 49, 57, 189, 136, 208, 217, 190, 37, 245, 26, 62, 102, 130, 62, 62, 255, 163, 142, 189, 196, 87, 128, 189, 155, 133, 195, 189, 111, 90, 222, 61, 255, 132, 131, 189, 2, 69, 88, 62, 139, 147, 23, 62, 75, 87, 235, 189, 116, 60, 212, 61, 222, 31, 241, 61, 170, 132, 201, 61, 173, 166, 178, 62, 136, 104, 139, 189, 111, 65, 3, 189, 31, 97, 25, 191, 49, 82, 119, 62, 199, 56, 224, 59, 184, 104, 105, 62, 111, 75, 73, 190, 100, 234, 20, 62, 73, 148, 28, 190, 196, 119, 23, 62, 21, 223, 62, 191, 206, 107, 116, 62, 222, 211, 138, 62, 186, 214, 4, 190, 109, 169, 72, 62, 60, 105, 72, 190, 208, 232, 105, 62, 66, 57, 128, 62, 40, 150, 135, 190, 21, 172, 66, 62, 65, 146, 47, 188, 218, 166, 99, 191, 156, 166, 158, 61, 77, 17, 18, 189, 31, 28, 55, 190, 40, 61, 209, 60, 245, 168, 141, 188, 220, 157, 216, 62, 149, 174, 220, 61, 235, 220, 217, 189, 254, 96, 84, 62, 206, 81, 197, 190, 169, 188, 201, 62, 238, 19, 1, 62, 85, 159, 171, 190, 204, 121, 59, 190, 160, 181, 14, 60, 106, 188, 31, 62, 26, 127, 20, 62, 104, 0, 235, 61, 198, 163, 204, 190, 106, 213, 53, 191, 225, 139, 251, 59, 243, 231, 206, 62, 20, 11, 173, 187, 51, 208, 135, 62, 226, 122, 42, 191, 232, 50, 184, 189, 148, 252, 185, 190, 20, 232, 176, 189, 118, 196, 193, 61, 19, 222, 71, 191, 46, 100, 161, 190, 201, 75, 91, 61, 169, 210, 209, 189, 154, 36, 16, 191, 131, 126, 133, 62, 62, 197, 3, 62, 51, 50, 149, 190, 222, 140, 25, 189, 229, 135, 12, 62, 36, 16, 23, 190, 206, 214, 143, 62, 69, 122, 40, 190, 129, 137, 23, 190, 147, 247, 60, 190, 35, 171, 205, 190, 63, 59, 165, 190, 141, 240, 87, 60, 160, 65, 152, 190, 112, 131, 8, 62, 41, 7, 144, 189, 221, 252, 6, 63, 255, 112, 142, 189, 80, 224, 234, 187, 78, 227, 178, 61, 198, 7, 208, 189, 51, 59, 213, 189, 233, 154, 55, 62, 83, 32, 62, 62, 122, 232, 15, 62, 67, 93, 81, 191, 4, 161, 241, 61, 207, 18, 138, 62, 21, 122, 130, 62, 70, 189, 101, 189, 28, 19, 67, 191, 202, 16, 223, 190, 74, 54, 21, 62, 237, 100, 66, 62, 235, 136, 145, 189, 103, 142, 136, 62, 17, 50, 24, 190, 95, 66, 185, 62, 47, 121, 245, 190, 180, 200, 230, 62, 164, 0, 23, 190, 101, 27, 181, 190, 139, 3, 188, 191, 226, 44, 5, 191, 57, 123, 84, 190, 129, 40, 17, 191, 176, 43, 110, 190, 229, 165, 48, 62, 161, 34, 156, 62, 245, 147, 195, 62, 192, 182, 5, 62, 60, 144, 168, 190, 91, 169, 206, 190, 174, 7, 86, 62, 55, 189, 83, 61, 29, 234, 210, 62, 230, 219, 218, 190, 164, 53, 150, 190, 50, 181, 129, 190, 121, 151, 211, 62, 16, 191, 187, 62, 31, 192, 24, 190, 99, 176, 76, 190, 130, 230, 43, 190, 71, 63, 173, 62, 198, 123, 224, 61, 5, 176, 121, 189, 98, 161, 231, 61, 162, 133, 177, 190, 40, 37, 99, 62, 87, 0, 255, 190, 230, 35, 3, 190, 63, 39, 1, 61, 58, 178, 11, 62, 74, 225, 101, 62, 19, 155, 61, 191, 0, 100, 233, 61, 91, 30, 63, 61, 93, 30, 141, 62, 111, 99, 167, 189, 4, 199, 148, 62, 128, 11, 70, 62, 121, 59, 161, 189, 100, 95, 49, 191, 192, 42, 167, 189, 61, 139, 66, 62, 171, 170, 161, 62, 199, 95, 91, 62, 30, 142, 240, 189, 142, 5, 195, 61, 54, 240, 4, 191, 106, 189, 149, 189, 177, 46, 164, 62, 56, 249, 95, 62, 72, 70, 201, 60, 85, 52, 135, 190, 48, 131, 5, 61, 58, 57, 9, 62, 219, 142, 200, 62, 204, 111, 63, 62, 134, 77, 137, 62, 244, 193, 69, 59, 208, 118, 63, 190, 244, 44, 184, 61, 141, 237, 163, 62, 92, 199, 149, 62, 182, 127, 219, 190, 160, 132, 226, 62, 107, 231, 106, 62, 107, 187, 56, 62, 90, 31, 210, 190, 119, 6, 102, 62, 195, 216, 252, 190, 83, 92, 8, 189, 251, 255, 102, 191, 12, 32, 153, 62, 36, 128, 179, 62, 71, 85, 104, 190, 16, 144, 200, 62, 218, 67, 18, 191, 173, 22, 212, 61, 83, 4, 168, 61, 224, 91, 163, 190, 158, 126, 54, 62, 94, 239, 176, 188, 254, 164, 163, 191, 193, 48, 218, 188, 157, 80, 123, 62, 170, 71, 13, 189, 47, 229, 147, 189, 2, 166, 35, 62, 197, 110, 252, 61, 0, 196, 201, 61, 233, 177, 157, 190, 9, 168, 187, 62, 251, 83, 25, 189, 51, 186, 190, 62, 94, 53, 95, 188, 67, 133, 216, 190, 154, 218, 12, 63, 186, 116, 163, 62, 137, 185, 211, 62, 182, 219, 225, 61, 55, 104, 193, 62, 187, 171, 53, 191, 206, 189, 210, 188, 144, 178, 253, 190, 148, 46, 235, 61, 244, 204, 179, 61, 177, 21, 223, 61, 249, 217, 166, 62, 246, 136, 61, 191, 140, 167, 38, 62, 105, 43, 27, 62, 114, 38, 240, 190, 140, 0, 9, 63, 79, 26, 166, 190, 147, 111, 17, 191, 246, 10, 61, 190, 225, 86, 198, 61, 221, 200, 111, 61, 245, 199, 144, 62, 16, 205, 17, 189, 156, 163, 131, 62, 131, 64, 222, 61, 234, 95, 166, 190, 137, 25, 178, 62, 19, 140, 57, 62, 180, 85, 107, 62, 79, 176, 94, 190, 84, 109, 8, 192, 223, 207, 169, 61, 170, 75, 244, 61, 47, 202, 93, 190, 173, 196, 31, 190, 207, 180, 181, 62, 92, 47, 20, 62, 67, 42, 184, 61, 116, 29, 211, 62, 176, 228, 53, 62, 199, 158, 57, 190, 54, 154, 70, 62, 227, 254, 63, 62, 178, 238, 48, 190, 184, 43, 236, 61, 215, 4, 163, 190, 217, 103, 144, 60, 15, 77, 186, 62, 245, 105, 141, 62, 77, 170, 111, 190, 87, 223, 32, 191, 202, 165, 18, 62, 231, 67, 199, 61, 141, 201, 71, 62, 131, 57, 24, 189, 223, 186, 105, 60, 196, 187, 152, 190, 60, 121, 155, 61, 113, 145, 158, 190, 101, 214, 214, 190, 103, 248, 182, 61, 105, 213, 210, 60, 193, 234, 52, 190, 219, 115, 181, 61, 149, 145, 140, 189, 29, 97, 125, 61, 119, 233, 237, 189, 8, 117, 231, 189, 5, 111, 50, 190, 79, 89, 40, 190, 212, 32, 214, 189, 88, 243, 188, 189, 102, 198, 93, 61, 109, 89, 49, 189, 24, 225, 203, 189, 1, 118, 4, 190, 4, 200, 190, 189, 33, 231, 246, 189, 80, 7, 143, 187, 226, 54, 51, 190, 104, 242, 210, 61, 152, 210, 22, 62, 61, 251, 237, 189, 192, 223, 199, 60, 68, 194, 89, 189, 31, 40, 193, 189, 158, 26, 45, 190, 177, 184, 124, 188, 252, 124, 187, 189, 153, 18, 12, 61, 187, 240, 248, 189, 195, 217, 221, 189, 131, 68, 49, 62, 233, 175, 241, 61, 172, 253, 84, 61, 254, 40, 144, 190, 242, 86, 7, 62, 219, 173, 224, 190, 227, 49, 216, 61, 110, 113, 164, 61, 170, 168, 170, 62, 172, 69, 87, 189, 224, 192, 43, 60, 157, 209, 3, 191, 189, 16, 54, 190, 44, 105, 206, 189, 109, 61, 246, 61, 162, 153, 199, 59, 149, 15, 108, 189, 107, 12, 2, 190, 55, 78, 7, 62, 205, 235, 184, 61, 179, 61, 36, 62, 78, 110, 30, 62, 143, 182, 50, 61, 65, 206, 172, 190, 254, 254, 145, 60, 82, 233, 112, 189, 107, 83, 218, 62, 252, 208, 199, 62, 193, 191, 13, 190, 224, 49, 70, 62, 5, 69, 175, 190, 118, 2, 36, 62, 77, 209, 157, 62, 110, 112, 118, 62, 65, 170, 199, 190, 140, 199, 150, 59, 111, 208, 124, 188, 5, 88, 0, 62, 174, 206, 19, 62, 83, 41, 145, 62, 43, 57, 51, 62, 25, 255, 38, 61, 54, 114, 109, 62, 49, 147, 50, 191, 0, 192, 22, 191, 47, 115, 158, 62, 192, 143, 132, 62, 202, 56, 35, 61, 193, 160, 181, 188, 228, 152, 33, 191, 217, 58, 211, 61, 213, 115, 179, 61, 15, 200, 100, 62, 17, 126, 187, 59, 171, 116, 35, 191, 89, 126, 149, 189, 161, 171, 168, 62, 112, 235, 241, 62, 174, 44, 231, 190, 0, 222, 197, 190, 133, 143, 63, 191, 190, 239, 8, 62, 94, 68, 203, 61, 80, 164, 135, 189, 90, 220, 180, 189, 213, 32, 167, 189, 178, 160, 205, 190, 181, 148, 15, 62, 222, 98, 26, 62, 65, 98, 221, 61, 171, 11, 202, 61, 0, 235, 115, 62, 114, 105, 239, 189, 237, 111, 239, 61, 73, 161, 25, 190, 98, 75, 85, 62, 225, 136, 251, 60, 61, 135, 141, 62, 58, 229, 92, 189, 228, 180, 29, 186, 131, 77, 61, 62, 10, 104, 110, 62, 216, 196, 170, 58, 44, 58, 65, 61, 216, 71, 137, 189, 247, 95, 159, 188, 131, 174, 130, 189, 96, 243, 102, 189, 101, 25, 40, 189, 60, 225, 23, 62, 157, 147, 61, 61, 193, 35, 244, 61, 228, 42, 249, 61, 95, 138, 6, 189, 140, 225, 79, 62, 103, 128, 163, 189, 3, 114, 7, 62, 9, 127, 12, 190, 133, 240, 195, 189, 121, 152, 123, 60, 37, 61, 67, 189, 48, 16, 51, 190, 36, 195, 64, 62, 189, 181, 198, 190, 197, 185, 20, 60, 72, 107, 252, 186, 87, 31, 250, 62, 33, 22, 157, 189, 156, 13, 59, 191, 244, 246, 45, 190, 173, 136, 71, 62, 159, 242, 112, 190, 107, 249, 94, 62, 140, 210, 177, 190, 189, 74, 235, 62, 73, 190, 71, 188, 139, 237, 217, 188, 4, 203, 6, 191, 138, 214, 238, 189, 124, 41, 244, 61, 67, 232, 180, 190, 75, 174, 152, 190, 128, 247, 235, 189, 255, 148, 201, 190, 101, 236, 135, 191, 112, 101, 101, 61, 2, 212, 176, 61, 201, 22, 140, 60, 167, 128, 204, 190, 37, 57, 204, 61, 173, 173, 203, 191, 244, 164, 197, 61, 93, 100, 229, 189, 231, 159, 27, 188, 148, 18, 3, 190, 27, 26, 87, 62, 37, 168, 123, 61, 166, 175, 60, 62, 128, 3, 151, 62, 196, 158, 66, 190, 43, 231, 222, 189, 12, 0, 35, 62, 39, 114, 129, 62, 88, 206, 36, 189, 28, 122, 191, 189, 226, 0, 33, 191, 113, 196, 225, 61, 254, 184, 133, 62, 166, 211, 44, 62, 249, 248, 165, 190, 179, 84, 26, 191, 104, 54, 42, 188, 67, 24, 197, 62, 147, 224, 219, 61, 173, 198, 65, 62, 60, 224, 46, 190, 230, 42, 27, 190, 69, 50, 13, 62, 119, 52, 108, 189, 80, 103, 220, 190, 86, 177, 39, 190, 86, 3, 190, 189, 226, 233, 186, 61, 190, 49, 49, 190, 43, 250, 123, 187, 196, 185, 131, 61, 217, 33, 169, 61, 207, 59, 133, 189, 161, 15, 1, 62, 116, 218, 183, 61, 166, 100, 83, 61, 99, 80, 12, 62, 161, 198, 121, 189, 240, 18, 159, 189, 178, 212, 215, 61, 36, 121, 229, 188, 11, 235, 220, 188, 212, 245, 48, 190, 39, 106, 33, 190, 83, 202, 3, 190, 226, 74, 241, 189, 214, 72, 180, 188, 75, 124, 123, 189, 222, 241, 186, 61, 100, 170, 27, 190, 93, 63, 52, 190, 194, 224, 220, 61, 34, 134, 236, 188, 152, 131, 39, 61, 33, 229, 156, 60, 229, 225, 49, 190, 200, 72, 16, 60, 136, 45, 16, 190, 12, 20, 196, 59, 234, 100, 180, 191, 37, 245, 41, 191, 145, 95, 95, 190, 109, 216, 19, 191, 31, 166, 224, 61, 50, 8, 145, 61, 157, 5, 37, 62, 150, 211, 192, 61, 240, 45, 151, 60, 120, 47, 203, 190, 205, 135, 150, 190, 171, 27, 206, 62, 172, 56, 166, 62, 162, 29, 38, 62, 67, 201, 65, 190, 27, 9, 25, 61, 158, 137, 149, 190, 15, 144, 43, 62, 196, 156, 126, 62, 48, 194, 234, 188, 1, 174, 51, 190, 236, 16, 232, 190, 47, 72, 149, 62, 29, 223, 239, 61, 180, 193, 173, 58, 248, 73, 222, 62, 244, 187, 142, 190, 169, 100, 29, 62, 97, 101, 131, 62, 120, 196, 16, 190, 188, 104, 95, 190, 159, 77, 83, 62, 117, 176, 132, 62, 41, 151, 229, 190, 124, 35, 221, 188, 178, 170, 140, 62, 138, 172, 190, 62, 202, 226, 15, 187, 126, 170, 226, 190, 33, 6, 139, 190, 162, 170, 205, 62, 21, 209, 38, 63, 124, 222, 26, 190, 30, 175, 130, 62, 63, 220, 17, 191, 140, 61, 208, 190, 16, 164, 32, 190, 131, 147, 208, 61, 152, 6, 47, 190, 255, 108, 97, 191, 46, 18, 182, 190, 3, 84, 198, 62, 69, 194, 15, 61, 100, 43, 8, 60, 101, 253, 139, 62, 91, 158, 159, 59, 135, 5, 170, 190, 127, 51, 102, 191, 2, 97, 172, 61, 195, 197, 84, 191, 52, 10, 254, 62, 133, 250, 42, 62, 255, 182, 39, 191, 30, 220, 145, 61, 238, 196, 155, 190, 115, 52, 251, 61, 83, 195, 215, 189, 30, 147, 96, 190, 33, 153, 164, 190, 64, 47, 243, 189, 110, 216, 238, 190, 228, 233, 155, 190, 112, 63, 164, 190, 13, 63, 61, 62, 1, 144, 25, 62, 151, 18, 81, 62, 119, 176, 33, 62, 161, 84, 129, 191, 125, 59, 204, 61, 135, 183, 20, 62, 113, 195, 46, 62, 113, 239, 228, 61, 70, 154, 73, 191, 126, 215, 176, 190, 229, 88, 87, 62, 101, 245, 47, 190, 225, 8, 248, 60, 220, 185, 6, 190, 230, 13, 43, 61, 55, 105, 142, 185, 99, 225, 36, 62, 105, 115, 63, 189, 45, 203, 168, 189, 153, 138, 6, 191, 61, 252, 0, 188, 250, 235, 65, 62, 133, 111, 232, 189, 135, 112, 148, 189, 126, 124, 45, 62, 141, 72, 150, 189, 77, 133, 231, 189, 102, 158, 56, 60, 118, 201, 244, 189, 138, 82, 18, 61, 232, 250, 136, 61, 71, 143, 42, 190, 162, 97, 205, 60, 89, 211, 138, 189, 87, 37, 4, 190, 221, 201, 3, 62, 243, 98, 139, 60, 122, 242, 94, 189, 213, 49, 46, 190, 214, 77, 234, 61, 232, 80, 26, 190, 231, 191, 93, 61, 142, 32, 23, 190, 184, 26, 138, 61, 12, 183, 7, 190, 173, 183, 237, 189, 183, 231, 140, 61, 242, 47, 4, 190, 72, 117, 31, 62, 14, 167, 31, 190, 6, 3, 22, 62, 180, 70, 50, 60, 106, 176, 187, 61, 127, 33, 29, 190};
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
                alignas(float) const unsigned char memory[] = {162, 250, 221, 61, 226, 68, 174, 61, 219, 130, 136, 189, 228, 97, 126, 61, 200, 170, 131, 62, 90, 241, 144, 189, 42, 228, 17, 62, 47, 73, 99, 62, 244, 40, 201, 62, 71, 52, 140, 62, 222, 53, 108, 190, 34, 85, 182, 62, 220, 42, 196, 190, 138, 88, 166, 61, 248, 221, 4, 190, 130, 204, 168, 190, 84, 58, 76, 61, 104, 152, 193, 61, 173, 46, 40, 62, 90, 67, 142, 62, 246, 199, 147, 61, 105, 230, 173, 189, 77, 38, 154, 61, 98, 72, 58, 62, 61, 184, 47, 186, 40, 0, 22, 190, 195, 30, 61, 62, 91, 146, 27, 190, 226, 15, 151, 62, 105, 202, 111, 190, 80, 203, 92, 62, 49, 70, 203, 189};
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
                alignas(float) const unsigned char memory[] = {186, 87, 125, 191, 12, 56, 155, 63, 60, 254, 56, 189, 14, 203, 78, 191, 30, 43, 151, 191, 56, 157, 37, 61, 243, 158, 116, 63, 25, 182, 180, 191, 186, 208, 5, 62, 129, 75, 169, 62, 153, 226, 250, 63, 206, 146, 234, 61, 102, 227, 166, 189, 46, 102, 139, 62, 35, 142, 226, 62, 41, 51, 104, 191, 84, 103, 98, 191, 202, 157, 42, 190, 92, 106, 145, 62, 110, 230, 23, 63, 86, 77, 89, 190, 155, 214, 28, 62, 63, 137, 180, 189, 228, 2, 175, 190, 72, 225, 102, 61, 49, 165, 173, 190, 214, 26, 147, 190, 218, 31, 21, 62, 29, 221, 85, 190, 32, 143, 51, 63, 187, 84, 55, 63, 84, 97, 17, 189, 57, 14, 80, 62, 81, 118, 207, 62, 99, 217, 159, 189, 247, 3, 200, 61, 189, 151, 184, 188, 1, 174, 45, 61, 31, 104, 139, 190, 47, 126, 123, 62, 2, 16, 157, 190, 239, 111, 167, 60, 138, 221, 172, 62, 110, 131, 181, 190, 189, 114, 138, 62, 173, 27, 47, 190, 34, 70, 87, 190, 49, 97, 212, 62, 230, 88, 82, 189, 71, 235, 38, 190, 147, 123, 70, 61, 77, 37, 223, 188, 15, 66, 130, 190, 162, 190, 147, 189, 74, 127, 139, 190, 170, 97, 74, 62, 222, 56, 61, 190, 232, 133, 143, 189, 154, 242, 27, 190, 108, 163, 228, 61, 44, 13, 199, 190, 229, 153, 70, 61, 105, 63, 72, 59, 239, 128, 175, 61};
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
                alignas(float) const unsigned char memory[] = {23, 188, 132, 62, 100, 153, 253, 190};
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
    alignas(float) const unsigned char memory[] = {34, 240, 188, 191, 150, 56, 193, 191, 164, 206, 185, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {97, 242, 215, 192, 234, 64, 194, 190};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0063/steps/000000000020000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}