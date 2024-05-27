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
                alignas(float) const unsigned char memory[] = {221, 144, 213, 190, 241, 111, 49, 63, 36, 190, 191, 190, 224, 82, 46, 63, 143, 92, 121, 191, 76, 5, 149, 190, 121, 0, 74, 62, 56, 193, 132, 63, 49, 21, 107, 62, 245, 167, 97, 63, 185, 67, 234, 62, 131, 84, 73, 62, 236, 62, 34, 63, 202, 230, 113, 63, 152, 40, 106, 62, 28, 218, 245, 190, 182, 101, 59, 191, 224, 76, 36, 191, 15, 142, 27, 191, 221, 120, 30, 63, 100, 24, 222, 190, 106, 66, 44, 190, 95, 116, 140, 190, 91, 70, 14, 62, 133, 148, 9, 191, 212, 240, 137, 191, 12, 136, 128, 190, 20, 23, 225, 190, 77, 84, 245, 60, 76, 246, 135, 62, 167, 0, 110, 190, 164, 123, 242, 190, 237, 236, 173, 62, 193, 29, 133, 63, 65, 23, 66, 191, 60, 38, 214, 190, 98, 13, 209, 190, 17, 194, 160, 190, 178, 60, 33, 191, 114, 177, 152, 190, 162, 64, 85, 62, 2, 234, 41, 191, 86, 245, 180, 190, 66, 231, 74, 191, 50, 81, 78, 189, 23, 158, 42, 190, 205, 103, 20, 60, 43, 114, 186, 188, 172, 50, 67, 60, 83, 87, 145, 63, 25, 181, 85, 62, 162, 21, 22, 190, 137, 85, 176, 191, 111, 152, 195, 190, 92, 109, 35, 189, 51, 229, 24, 63, 38, 77, 217, 62, 211, 161, 178, 61, 22, 195, 91, 188, 214, 200, 221, 190, 191, 224, 21, 63, 216, 72, 79, 191, 33, 174, 234, 190, 242, 67, 162, 190, 32, 75, 205, 190, 8, 128, 89, 189, 211, 187, 51, 190, 102, 229, 111, 191, 85, 155, 78, 190, 93, 207, 60, 62, 130, 71, 67, 63, 177, 179, 88, 62, 81, 60, 237, 189, 200, 17, 233, 190, 223, 44, 101, 62, 2, 199, 19, 191, 220, 238, 105, 191, 99, 149, 17, 191, 96, 243, 56, 191, 124, 20, 39, 62, 58, 72, 223, 62, 196, 102, 47, 63, 94, 129, 80, 191, 50, 119, 220, 189, 115, 152, 57, 62, 163, 110, 107, 62, 203, 103, 206, 190, 25, 21, 130, 190, 220, 79, 129, 191, 105, 21, 120, 190, 72, 217, 8, 189, 226, 247, 36, 59, 123, 252, 93, 62, 200, 63, 125, 191, 50, 116, 54, 63, 104, 201, 189, 61};
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
                alignas(float) const unsigned char memory[] = {171, 0, 181, 190, 142, 98, 67, 62, 238, 168, 181, 60, 39, 163, 23, 190, 105, 172, 191, 189, 232, 60, 155, 62, 174, 138, 71, 62, 255, 16, 164, 62, 190, 70, 47, 61, 218, 39, 62, 190, 46, 145, 68, 190, 35, 74, 135, 191, 249, 182, 7, 62, 31, 229, 109, 188, 233, 247, 195, 62, 180, 147, 231, 62, 245, 158, 131, 62, 2, 0, 158, 62, 195, 98, 182, 187, 154, 98, 188, 62, 160, 80, 162, 190, 243, 90, 166, 62, 63, 64, 231, 62, 248, 25, 227, 190, 31, 30, 239, 189, 73, 147, 74, 190, 157, 249, 15, 191, 240, 41, 243, 62, 253, 204, 50, 62, 203, 27, 189, 60, 145, 24, 134, 62, 77, 190, 195, 61};
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
                alignas(float) const unsigned char memory[] = {143, 170, 43, 62, 25, 61, 83, 62, 14, 8, 185, 190, 71, 43, 22, 190, 120, 175, 182, 190, 90, 12, 184, 190, 191, 171, 226, 190, 10, 90, 148, 62, 4, 156, 54, 188, 164, 180, 177, 61, 138, 76, 213, 189, 227, 249, 233, 60, 187, 160, 82, 191, 168, 160, 145, 191, 224, 197, 114, 62, 102, 235, 253, 61, 80, 97, 239, 189, 47, 107, 174, 190, 22, 92, 33, 61, 252, 204, 138, 190, 217, 57, 1, 191, 198, 179, 152, 62, 183, 152, 153, 62, 114, 19, 185, 61, 117, 245, 109, 190, 21, 84, 139, 191, 198, 149, 209, 60, 33, 34, 76, 62, 9, 155, 161, 191, 183, 169, 117, 190, 208, 173, 153, 189, 73, 53, 41, 61, 164, 126, 194, 190, 20, 203, 86, 190, 11, 169, 51, 61, 200, 224, 232, 62, 159, 97, 190, 62, 129, 221, 225, 61, 81, 255, 108, 62, 36, 235, 154, 189, 238, 92, 97, 62, 189, 244, 122, 188, 56, 180, 126, 62, 83, 67, 9, 190, 155, 69, 143, 61, 2, 21, 57, 62, 213, 170, 147, 61, 57, 3, 170, 61, 34, 117, 101, 60, 7, 156, 93, 190, 109, 151, 214, 189, 61, 148, 133, 62, 116, 196, 153, 190, 86, 232, 176, 189, 98, 97, 157, 190, 174, 104, 94, 190, 22, 95, 185, 60, 38, 33, 141, 61, 241, 62, 39, 190, 51, 138, 104, 190, 245, 14, 91, 62, 84, 17, 59, 62, 47, 126, 27, 60, 23, 186, 198, 189, 218, 21, 239, 61, 252, 59, 241, 61, 178, 49, 230, 190, 215, 63, 136, 62, 53, 53, 107, 61, 188, 114, 209, 189, 154, 213, 34, 62, 248, 230, 22, 62, 86, 185, 225, 190, 13, 85, 100, 60, 104, 235, 60, 62, 85, 116, 249, 190, 58, 113, 214, 188, 114, 89, 148, 62, 167, 176, 157, 190, 231, 175, 61, 62, 68, 7, 196, 190, 175, 198, 23, 190, 206, 180, 154, 190, 181, 70, 52, 62, 46, 195, 142, 190, 12, 34, 195, 189, 99, 5, 180, 188, 52, 156, 84, 190, 206, 243, 166, 61, 98, 109, 132, 189, 84, 117, 253, 190, 167, 84, 68, 62, 171, 12, 133, 62, 113, 154, 134, 190, 110, 203, 39, 190, 19, 24, 189, 61, 88, 174, 142, 61, 12, 145, 89, 189, 177, 110, 139, 62, 176, 15, 186, 190, 114, 121, 32, 62, 229, 69, 125, 62, 119, 115, 146, 62, 106, 83, 62, 190, 131, 8, 81, 190, 199, 27, 232, 189, 70, 213, 43, 190, 29, 68, 8, 61, 89, 31, 96, 62, 206, 87, 159, 62, 128, 172, 139, 190, 232, 133, 169, 60, 53, 186, 132, 61, 175, 145, 16, 190, 219, 117, 68, 62, 22, 230, 133, 60, 33, 139, 38, 189, 72, 7, 191, 190, 64, 251, 159, 190, 167, 1, 163, 61, 163, 96, 133, 188, 75, 106, 227, 61, 31, 80, 212, 188, 122, 199, 175, 188, 13, 130, 132, 62, 158, 32, 176, 189, 182, 134, 230, 189, 181, 199, 158, 62, 151, 16, 187, 190, 24, 16, 63, 190, 46, 192, 25, 190, 196, 77, 30, 62, 43, 83, 205, 60, 238, 104, 201, 58, 76, 33, 52, 60, 43, 166, 140, 61, 144, 132, 16, 62, 169, 48, 89, 62, 15, 246, 164, 190, 6, 131, 83, 190, 142, 189, 7, 189, 156, 1, 243, 61, 159, 70, 253, 188, 119, 244, 101, 62, 52, 181, 48, 61, 165, 181, 211, 189, 108, 79, 35, 190, 103, 68, 185, 61, 70, 254, 74, 189, 109, 181, 26, 61, 90, 137, 56, 60, 204, 158, 154, 60, 234, 59, 186, 190, 250, 211, 75, 62, 156, 104, 86, 190, 130, 130, 41, 61, 116, 97, 232, 188, 153, 42, 31, 189, 166, 175, 70, 189, 130, 55, 194, 62, 240, 146, 181, 189, 191, 191, 118, 191, 80, 57, 173, 62, 27, 3, 205, 62, 62, 138, 190, 62, 253, 226, 88, 189, 161, 78, 23, 62, 168, 146, 250, 188, 233, 126, 207, 188, 22, 35, 1, 191, 11, 98, 44, 62, 198, 71, 59, 189, 186, 65, 159, 57, 182, 41, 109, 189, 64, 204, 100, 191, 176, 93, 175, 190, 51, 100, 27, 62, 219, 64, 123, 190, 165, 236, 190, 61, 213, 7, 182, 60, 177, 139, 197, 190, 146, 89, 75, 191, 138, 21, 18, 191, 147, 61, 158, 62, 47, 225, 236, 61, 226, 106, 119, 62, 89, 20, 253, 61, 223, 240, 59, 189, 27, 39, 6, 62, 189, 180, 83, 190, 116, 212, 163, 61, 162, 192, 88, 190, 188, 247, 173, 61, 79, 125, 78, 62, 254, 163, 18, 191, 213, 116, 252, 189, 14, 169, 131, 190, 70, 94, 176, 61, 62, 153, 19, 189, 39, 7, 194, 62, 250, 204, 54, 190, 29, 87, 201, 189, 92, 6, 154, 62, 68, 117, 67, 60, 13, 46, 195, 61, 100, 44, 211, 61, 29, 220, 235, 60, 122, 94, 46, 61, 125, 164, 243, 190, 44, 1, 62, 62, 167, 214, 239, 190, 126, 54, 178, 61, 200, 12, 243, 58, 48, 157, 90, 62, 111, 222, 113, 62, 13, 137, 101, 59, 94, 167, 205, 62, 109, 216, 180, 187, 250, 24, 0, 191, 187, 125, 162, 62, 92, 161, 114, 62, 62, 149, 44, 187, 130, 165, 201, 187, 219, 198, 167, 190, 251, 214, 6, 190, 194, 72, 75, 62, 199, 44, 54, 191, 193, 119, 245, 61, 202, 85, 13, 190, 27, 39, 187, 61, 28, 233, 176, 61, 65, 176, 233, 189, 43, 40, 72, 191, 179, 101, 182, 190, 67, 163, 36, 62, 166, 178, 26, 190, 63, 237, 236, 189, 94, 232, 174, 61, 44, 133, 114, 190, 138, 184, 233, 61, 73, 5, 192, 190, 126, 123, 123, 189, 13, 108, 169, 190, 251, 74, 14, 62, 241, 198, 20, 61, 135, 179, 73, 190, 93, 143, 50, 190, 47, 31, 11, 61, 94, 90, 57, 62, 131, 41, 28, 190, 230, 21, 247, 190, 227, 107, 203, 62, 131, 105, 159, 189, 2, 72, 60, 190, 82, 121, 10, 187, 117, 160, 104, 191, 93, 132, 173, 190, 89, 158, 34, 191, 243, 30, 93, 62, 206, 59, 173, 62, 156, 195, 130, 62, 206, 207, 11, 188, 216, 24, 251, 186, 40, 202, 127, 190, 81, 87, 253, 61, 222, 80, 29, 189, 84, 37, 24, 190, 101, 127, 149, 60, 214, 137, 63, 190, 117, 25, 57, 190, 149, 137, 8, 190, 86, 148, 63, 190, 23, 119, 98, 62, 186, 134, 137, 61, 15, 237, 71, 62, 145, 140, 23, 62, 190, 105, 12, 61, 191, 242, 9, 190, 86, 151, 155, 190, 50, 114, 100, 189, 126, 54, 232, 61, 83, 23, 10, 190, 245, 233, 83, 60, 244, 54, 56, 190, 158, 131, 99, 189, 192, 162, 173, 189, 141, 30, 200, 61, 201, 39, 111, 188, 2, 242, 169, 190, 130, 233, 57, 189, 130, 227, 39, 62, 183, 89, 187, 62, 72, 46, 122, 62, 46, 197, 235, 61, 151, 159, 138, 62, 162, 62, 142, 184, 249, 123, 176, 62, 146, 74, 68, 190, 216, 36, 114, 190, 247, 155, 148, 190, 91, 112, 230, 61, 166, 200, 221, 188, 169, 253, 216, 59, 211, 219, 233, 61, 4, 230, 164, 61, 246, 59, 12, 190, 21, 1, 108, 190, 241, 251, 162, 61, 207, 108, 46, 190, 229, 162, 201, 189, 59, 0, 27, 190, 115, 150, 35, 61, 116, 50, 231, 190, 189, 163, 111, 62, 151, 125, 34, 190, 7, 94, 67, 190, 56, 12, 26, 62, 124, 157, 171, 188, 137, 62, 231, 60, 120, 197, 201, 61, 191, 210, 186, 190, 92, 88, 246, 189, 134, 114, 102, 190, 252, 50, 15, 62, 13, 11, 228, 61, 4, 8, 54, 62, 5, 88, 1, 62, 89, 152, 185, 189, 119, 156, 122, 62, 148, 153, 148, 57, 240, 51, 18, 191, 74, 187, 40, 190, 210, 16, 206, 189, 76, 230, 144, 61, 41, 164, 150, 61, 138, 25, 173, 188, 226, 43, 114, 190, 255, 174, 183, 189, 155, 130, 153, 190, 148, 168, 227, 189, 69, 191, 49, 189, 232, 11, 131, 62, 8, 140, 55, 62, 1, 168, 203, 61, 166, 1, 169, 190, 69, 127, 44, 62, 248, 140, 21, 191, 92, 133, 216, 190, 56, 8, 7, 189, 25, 202, 145, 62, 56, 7, 12, 191, 143, 181, 253, 62, 40, 19, 81, 63, 192, 26, 145, 62, 81, 243, 151, 190, 94, 21, 215, 190, 166, 243, 231, 190, 35, 251, 208, 190, 68, 159, 63, 62, 198, 129, 183, 60, 201, 181, 13, 191, 202, 51, 62, 62, 220, 195, 102, 190, 251, 169, 79, 61, 37, 247, 35, 191, 28, 0, 61, 191, 199, 95, 141, 62, 21, 14, 77, 62, 40, 50, 163, 188, 233, 80, 56, 190, 34, 86, 200, 61, 96, 246, 10, 190, 210, 124, 147, 62, 140, 226, 160, 61, 29, 180, 38, 62, 144, 3, 189, 189, 100, 242, 135, 190, 116, 138, 219, 191, 154, 89, 238, 61, 129, 56, 90, 62, 91, 44, 164, 190, 48, 145, 15, 191, 97, 37, 90, 61, 10, 125, 194, 62, 237, 53, 39, 190, 40, 130, 207, 189, 40, 63, 146, 189, 204, 68, 89, 189, 252, 158, 24, 62, 205, 137, 24, 61, 248, 191, 144, 61, 153, 99, 43, 190, 196, 228, 201, 61, 57, 254, 36, 62, 75, 90, 26, 62, 108, 217, 45, 190, 72, 101, 38, 61, 122, 216, 179, 189, 217, 187, 161, 61, 127, 248, 220, 58, 54, 103, 36, 190, 196, 6, 115, 189, 21, 43, 142, 61, 67, 25, 0, 189, 239, 128, 5, 190, 155, 222, 103, 189, 196, 66, 202, 60, 187, 132, 46, 62, 172, 155, 210, 189, 231, 84, 27, 62, 60, 59, 230, 189, 56, 146, 158, 188, 85, 83, 232, 188, 25, 112, 35, 190, 98, 160, 2, 190, 62, 158, 29, 189, 204, 109, 81, 62, 42, 124, 183, 62, 48, 39, 46, 191, 111, 116, 22, 190, 144, 171, 228, 190, 223, 79, 21, 60, 139, 19, 76, 190, 37, 138, 143, 62, 252, 196, 224, 189, 10, 146, 254, 189, 126, 144, 82, 61, 123, 206, 218, 189, 177, 212, 77, 60, 35, 20, 133, 190, 141, 51, 67, 62, 236, 246, 114, 62, 244, 18, 68, 189, 46, 86, 168, 60, 59, 21, 70, 190, 254, 173, 225, 187, 113, 16, 87, 62, 198, 235, 37, 61, 57, 232, 142, 62, 100, 118, 122, 190, 7, 115, 33, 62, 191, 9, 5, 191, 135, 131, 137, 62, 19, 185, 119, 62, 154, 32, 91, 61, 154, 89, 117, 190, 147, 78, 143, 62, 138, 20, 157, 190, 57, 111, 46, 190, 126, 145, 229, 190, 103, 230, 5, 62, 246, 52, 14, 62, 2, 231, 153, 62, 103, 102, 156, 61, 186, 191, 73, 62, 101, 221, 134, 62, 224, 125, 155, 189, 245, 95, 182, 62, 8, 149, 65, 61, 24, 189, 92, 191, 171, 187, 138, 62, 238, 226, 245, 61, 79, 193, 182, 60, 3, 78, 175, 62, 232, 227, 103, 62, 255, 188, 146, 190, 93, 2, 157, 61, 47, 204, 9, 188, 240, 209, 12, 191, 112, 254, 87, 61, 218, 155, 86, 190, 229, 189, 144, 190, 128, 68, 232, 59, 55, 115, 145, 189, 145, 100, 84, 190, 248, 115, 14, 190, 7, 203, 56, 62, 59, 225, 132, 190, 15, 70, 224, 189, 143, 220, 193, 61, 175, 167, 194, 190, 90, 167, 212, 190, 65, 16, 139, 61, 238, 212, 203, 62, 178, 232, 142, 62, 62, 232, 66, 61, 103, 1, 226, 62, 144, 243, 76, 188, 24, 101, 36, 190, 224, 168, 149, 62, 105, 23, 96, 62, 62, 213, 61, 191, 74, 31, 21, 189, 240, 8, 119, 62, 238, 195, 163, 61, 173, 32, 98, 62, 52, 68, 13, 62, 228, 95, 246, 189, 188, 78, 151, 189, 19, 18, 29, 189, 224, 172, 15, 191, 239, 245, 172, 189, 162, 215, 171, 190, 227, 227, 145, 190, 179, 221, 245, 61, 0, 193, 212, 188, 146, 159, 188, 185, 49, 161, 162, 190, 243, 25, 138, 62, 150, 41, 0, 190, 222, 103, 113, 60, 202, 165, 249, 61, 61, 246, 16, 63, 57, 193, 221, 61, 2, 205, 21, 62, 15, 72, 138, 62, 182, 165, 210, 61, 224, 106, 251, 190, 170, 163, 29, 62, 124, 136, 172, 62, 117, 149, 139, 190, 255, 170, 107, 62, 111, 89, 9, 62, 200, 253, 56, 191, 103, 101, 123, 190, 204, 8, 201, 60, 171, 129, 212, 190, 21, 105, 191, 62, 197, 21, 34, 62, 69, 221, 136, 191, 240, 130, 130, 61, 1, 155, 31, 62, 109, 172, 214, 188, 79, 143, 78, 189, 212, 215, 20, 190, 227, 95, 28, 189, 82, 129, 130, 61, 132, 128, 131, 60, 141, 115, 53, 189, 23, 229, 127, 62, 29, 61, 176, 62, 76, 244, 36, 191, 237, 189, 143, 62, 38, 175, 30, 189, 134, 140, 87, 62, 102, 124, 215, 62, 204, 229, 178, 190, 36, 120, 187, 189, 71, 16, 206, 190, 92, 87, 93, 61, 195, 81, 90, 189, 189, 49, 193, 188, 69, 217, 175, 190, 67, 12, 156, 190, 3, 248, 164, 188, 151, 117, 219, 61, 196, 109, 165, 60, 64, 27, 40, 190, 44, 159, 92, 189, 250, 90, 60, 62, 107, 87, 240, 190, 249, 225, 136, 189, 85, 3, 10, 62, 26, 104, 69, 62, 19, 90, 164, 62, 227, 2, 31, 61, 214, 60, 135, 61, 17, 172, 65, 190, 43, 39, 223, 189, 5, 183, 151, 190, 160, 218, 81, 62, 67, 178, 75, 62, 73, 254, 50, 61, 106, 245, 247, 189, 119, 228, 137, 61, 1, 217, 245, 190, 35, 48, 226, 61, 157, 254, 1, 62, 30, 242, 12, 62, 78, 42, 46, 190, 44, 252, 234, 61, 217, 250, 249, 189, 48, 253, 60, 190, 93, 163, 9, 62, 48, 217, 181, 61, 35, 50, 29, 190, 130, 82, 21, 190, 10, 199, 146, 188, 29, 110, 28, 59, 161, 57, 232, 60, 72, 194, 238, 189, 82, 199, 69, 188, 75, 146, 130, 189, 177, 173, 152, 189, 234, 23, 17, 190, 76, 90, 95, 58, 213, 150, 208, 60, 166, 109, 142, 189, 148, 214, 179, 61, 194, 236, 110, 189, 129, 53, 89, 189, 217, 181, 236, 60, 88, 47, 37, 190, 46, 1, 74, 189, 249, 163, 55, 189, 60, 207, 65, 61, 141, 190, 212, 61, 23, 50, 31, 62, 198, 249, 84, 190, 255, 23, 130, 189, 52, 66, 26, 62, 189, 98, 210, 61, 78, 39, 54, 62, 34, 33, 62, 189, 4, 75, 52, 62, 205, 76, 44, 61, 173, 3, 167, 62, 61, 43, 91, 62, 88, 145, 221, 189, 79, 241, 154, 190, 73, 193, 151, 189, 187, 56, 67, 61, 45, 11, 42, 62, 186, 186, 23, 61, 222, 16, 34, 62, 129, 246, 158, 189, 167, 48, 230, 61, 34, 78, 246, 61, 28, 73, 117, 190, 104, 139, 28, 61, 87, 161, 34, 61, 158, 77, 46, 190, 197, 225, 36, 60, 16, 147, 59, 62, 111, 44, 239, 61, 159, 183, 121, 61, 76, 86, 7, 189, 99, 107, 4, 62, 104, 152, 72, 62, 231, 254, 49, 62, 201, 113, 69, 189, 243, 174, 233, 61, 32, 14, 196, 189, 238, 117, 174, 189, 148, 95, 201, 190, 154, 187, 235, 189, 239, 132, 13, 190, 12, 253, 166, 189, 20, 59, 250, 61, 130, 105, 123, 187, 179, 207, 213, 61, 203, 185, 91, 62, 135, 61, 57, 62, 234, 140, 54, 189, 141, 25, 146, 61, 118, 24, 231, 189, 206, 204, 197, 60, 226, 228, 246, 61, 81, 73, 142, 62, 182, 5, 4, 190, 172, 68, 240, 62, 214, 58, 0, 190, 4, 146, 2, 62, 59, 160, 90, 62, 234, 236, 182, 61, 62, 31, 58, 189, 252, 97, 28, 62, 227, 79, 55, 62, 92, 238, 136, 60, 46, 157, 42, 62, 79, 214, 219, 186, 223, 221, 176, 189, 99, 48, 131, 190, 200, 185, 41, 190, 114, 171, 40, 62, 54, 36, 11, 63, 231, 165, 128, 62, 141, 29, 21, 61, 174, 82, 150, 61, 184, 223, 147, 189, 126, 25, 235, 62, 91, 148, 1, 190, 243, 50, 31, 191, 21, 44, 25, 191, 42, 253, 14, 62, 229, 178, 52, 62, 49, 222, 103, 62, 208, 107, 57, 188, 155, 126, 125, 62, 54, 78, 46, 190, 141, 4, 100, 190, 1, 225, 145, 61, 44, 30, 193, 190, 180, 19, 6, 189, 210, 215, 141, 61, 178, 108, 31, 191, 54, 158, 51, 191, 13, 163, 175, 62, 145, 186, 253, 190, 228, 134, 206, 189, 141, 120, 7, 190, 75, 53, 105, 61, 243, 164, 33, 60, 210, 42, 44, 59, 70, 95, 196, 61, 146, 33, 191, 62, 147, 162, 171, 61, 8, 155, 48, 62, 27, 64, 142, 62, 136, 162, 165, 189, 141, 121, 208, 59, 55, 67, 11, 62, 65, 96, 141, 189, 171, 85, 183, 60, 114, 204, 151, 60, 166, 112, 103, 61, 199, 32, 84, 190, 80, 12, 23, 188, 43, 47, 101, 188, 44, 170, 42, 62, 196, 35, 216, 189, 197, 134, 200, 190, 93, 89, 249, 61, 32, 204, 251, 60, 159, 59, 205, 59, 159, 102, 247, 60, 103, 157, 5, 190, 173, 144, 71, 190, 55, 71, 156, 189, 244, 192, 159, 189, 78, 182, 114, 61, 122, 92, 195, 62, 225, 142, 135, 62, 233, 216, 117, 189, 28, 216, 173, 61, 126, 143, 117, 190, 221, 111, 244, 62, 12, 108, 151, 62, 20, 99, 41, 190, 136, 185, 246, 190, 16, 40, 136, 190, 183, 103, 252, 190, 12, 20, 208, 62, 53, 61, 16, 62, 147, 152, 165, 190, 52, 16, 229, 61, 237, 91, 131, 190, 136, 123, 132, 189, 95, 117, 33, 191, 14, 163, 90, 191, 47, 113, 177, 61, 55, 31, 67, 62, 243, 122, 250, 188, 206, 175, 20, 191, 128, 241, 34, 189, 10, 102, 219, 190, 213, 8, 243, 190, 186, 31, 31, 62, 36, 120, 0, 62, 113, 215, 102, 190, 168, 164, 138, 189, 133, 194, 188, 191, 56, 72, 57, 61, 29, 136, 57, 62, 65, 45, 51, 191, 33, 83, 7, 191, 110, 33, 221, 61, 12, 46, 147, 62, 154, 26, 77, 63, 140, 155, 217, 190, 213, 204, 145, 189, 176, 209, 118, 191, 165, 136, 174, 190, 62, 14, 240, 59, 17, 189, 28, 62, 42, 216, 158, 61, 136, 252, 142, 190, 215, 8, 54, 62, 114, 125, 50, 190, 114, 119, 2, 190, 117, 192, 111, 190, 241, 170, 95, 190, 91, 138, 221, 60, 90, 197, 244, 61, 137, 42, 7, 62, 34, 106, 120, 191, 52, 237, 9, 62, 17, 159, 31, 190, 16, 126, 128, 189, 78, 49, 226, 189, 34, 87, 111, 190, 211, 92, 157, 188, 77, 95, 127, 190, 57, 198, 127, 191, 5, 203, 149, 62, 164, 106, 126, 190, 226, 196, 222, 61, 166, 66, 63, 191, 188, 28, 134, 62, 13, 76, 251, 62, 93, 93, 247, 62, 168, 241, 72, 189, 68, 91, 142, 61, 135, 196, 142, 190, 121, 142, 19, 190, 92, 123, 173, 190, 60, 126, 10, 62, 100, 171, 128, 62, 23, 255, 142, 190, 230, 145, 173, 61, 13, 54, 218, 188, 157, 12, 155, 187, 200, 21, 248, 190, 94, 83, 94, 191, 79, 173, 179, 189, 100, 204, 94, 62, 80, 86, 10, 62, 195, 196, 82, 190, 229, 85, 109, 62, 9, 2, 134, 189, 209, 89, 253, 189, 44, 33, 54, 62, 216, 137, 58, 62, 83, 133, 78, 62, 250, 209, 120, 189, 60, 227, 164, 191, 44, 246, 237, 189, 31, 166, 23, 61, 61, 83, 57, 191, 186, 6, 135, 190, 25, 35, 21, 62, 90, 94, 238, 61, 157, 93, 18, 61, 217, 156, 171, 61, 89, 2, 50, 190, 13, 144, 170, 61, 79, 211, 240, 61, 186, 78, 238, 60, 169, 78, 47, 189, 103, 49, 65, 190, 73, 232, 69, 190, 182, 36, 79, 190, 24, 185, 186, 61, 164, 52, 99, 190, 67, 92, 145, 61, 166, 89, 124, 61, 87, 168, 35, 190, 167, 69, 179, 59, 200, 14, 15, 190, 214, 53, 8, 190, 74, 171, 140, 61, 250, 235, 115, 190, 11, 74, 203, 61, 170, 211, 254, 58, 34, 34, 86, 189, 161, 75, 22, 190, 15, 151, 182, 60, 197, 83, 225, 188, 35, 171, 144, 61, 190, 224, 195, 189, 125, 101, 139, 61, 16, 23, 111, 190, 170, 15, 83, 190, 12, 104, 101, 190, 52, 10, 210, 190, 200, 54, 69, 190, 128, 48, 129, 189, 162, 187, 37, 63, 43, 230, 200, 62, 60, 223, 169, 62, 129, 28, 80, 62, 30, 40, 116, 189, 254, 193, 62, 62, 190, 250, 237, 61, 150, 65, 150, 189, 25, 105, 61, 191, 59, 212, 66, 62, 194, 224, 223, 189, 210, 227, 17, 62, 152, 87, 81, 189, 100, 167, 28, 62, 208, 137, 193, 189, 80, 233, 17, 62, 157, 30, 128, 62, 118, 53, 44, 191, 91, 4, 126, 61, 103, 134, 49, 190, 96, 226, 126, 190, 163, 74, 234, 188, 39, 86, 1, 62, 112, 49, 80, 190, 212, 102, 100, 190, 79, 3, 113, 62, 39, 81, 128, 189, 185, 200, 17, 62, 146, 78, 29, 62, 16, 246, 85, 62, 246, 248, 141, 62, 35, 105, 0, 191, 63, 154, 12, 190, 48, 229, 197, 190, 240, 178, 134, 190, 106, 180, 138, 189, 241, 104, 115, 61, 112, 204, 56, 191, 230, 171, 1, 61, 225, 197, 64, 190, 75, 120, 196, 189, 230, 20, 245, 189, 177, 25, 32, 190, 7, 41, 39, 190, 125, 213, 222, 61, 112, 4, 22, 190, 191, 107, 6, 188, 112, 94, 77, 189, 176, 190, 30, 62, 254, 160, 161, 62, 181, 36, 149, 61, 13, 29, 157, 61, 32, 144, 247, 57, 95, 49, 90, 61, 73, 184, 254, 190, 190, 102, 174, 62, 151, 193, 167, 62, 255, 190, 221, 188, 228, 198, 28, 191, 169, 222, 143, 189, 176, 12, 26, 190, 23, 31, 156, 62, 75, 240, 200, 62, 103, 194, 151, 190, 89, 154, 53, 190, 243, 42, 225, 190, 221, 245, 153, 189, 224, 173, 218, 60, 85, 179, 52, 189, 128, 237, 202, 190, 80, 77, 123, 190, 35, 7, 24, 60, 230, 136, 132, 61, 51, 213, 205, 189, 230, 6, 88, 190, 88, 206, 54, 61, 230, 249, 16, 190, 126, 43, 40, 190, 233, 64, 61, 190, 200, 46, 228, 61, 176, 210, 68, 61, 70, 167, 7, 63, 4, 248, 24, 190, 253, 225, 16, 62, 155, 215, 226, 61, 158, 164, 105, 189, 181, 230, 31, 191, 102, 207, 151, 61, 13, 186, 11, 62, 240, 151, 222, 189, 139, 224, 47, 191, 106, 146, 16, 62, 250, 0, 1, 62, 190, 182, 110, 63, 250, 194, 173, 190, 201, 69, 84, 61, 82, 149, 87, 191, 203, 77, 151, 189, 131, 2, 135, 190, 8, 189, 228, 62, 156, 76, 146, 62, 217, 56, 13, 190, 61, 199, 153, 62, 221, 222, 178, 190, 125, 30, 8, 189, 203, 151, 9, 191, 211, 155, 11, 191, 190, 59, 141, 189, 78, 93, 116, 62, 226, 104, 202, 60, 34, 152, 159, 191, 185, 100, 204, 61, 218, 100, 196, 189, 9, 35, 74, 190, 241, 172, 136, 62, 244, 184, 159, 187, 5, 73, 170, 61, 34, 245, 149, 188, 96, 126, 193, 191, 71, 186, 153, 61, 245, 157, 202, 61, 225, 94, 82, 62, 121, 198, 73, 191, 124, 106, 41, 62, 43, 151, 164, 62, 186, 43, 221, 187, 96, 4, 0, 190, 51, 228, 144, 59, 194, 130, 46, 190, 116, 231, 255, 189, 152, 174, 162, 189, 99, 134, 20, 62, 111, 199, 2, 190, 33, 35, 190, 61, 245, 2, 153, 60, 96, 61, 237, 188, 18, 155, 152, 189, 24, 207, 162, 189, 224, 173, 168, 188, 223, 56, 178, 189, 231, 124, 58, 190, 10, 186, 246, 189, 133, 4, 37, 190, 116, 93, 213, 61, 232, 101, 41, 190, 78, 82, 140, 60, 105, 245, 170, 61, 5, 153, 76, 61, 14, 231, 68, 61, 219, 129, 53, 187, 247, 167, 32, 190, 140, 55, 157, 189, 246, 40, 237, 61, 109, 176, 4, 190, 58, 77, 94, 188, 178, 86, 173, 187, 93, 44, 183, 61};
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
                alignas(float) const unsigned char memory[] = {122, 193, 18, 62, 11, 122, 90, 62, 183, 222, 203, 59, 155, 18, 179, 61, 7, 16, 147, 62, 201, 80, 118, 190, 166, 72, 130, 62, 9, 62, 98, 62, 30, 37, 197, 189, 193, 77, 112, 62, 149, 56, 130, 189, 95, 228, 230, 61, 242, 159, 33, 190, 198, 40, 228, 58, 142, 228, 45, 62, 134, 164, 136, 62, 80, 42, 166, 62, 250, 26, 172, 61, 143, 215, 52, 190, 97, 20, 145, 62, 117, 85, 129, 190, 0, 194, 198, 60, 167, 211, 161, 62, 183, 244, 131, 62, 208, 76, 200, 189, 28, 162, 71, 61, 150, 115, 117, 61, 242, 229, 67, 189, 75, 89, 11, 62, 71, 218, 192, 61, 83, 239, 23, 61, 20, 224, 187, 188};
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
                alignas(float) const unsigned char memory[] = {17, 21, 60, 63, 200, 19, 186, 190, 246, 177, 112, 62, 110, 59, 166, 62, 127, 60, 219, 189, 159, 122, 45, 63, 97, 62, 150, 62, 4, 19, 11, 63, 117, 228, 146, 62, 0, 234, 135, 190, 212, 18, 192, 190, 10, 50, 48, 63, 90, 98, 217, 189, 119, 190, 10, 63, 171, 170, 6, 191, 148, 225, 252, 190, 124, 202, 205, 190, 210, 133, 245, 62, 219, 55, 89, 59, 153, 154, 66, 189, 134, 24, 70, 190, 188, 103, 251, 190, 123, 159, 30, 190, 0, 180, 117, 63, 59, 24, 88, 63, 68, 115, 115, 62, 123, 8, 5, 61, 193, 242, 27, 191, 170, 43, 237, 62, 58, 218, 123, 62, 186, 62, 94, 63, 120, 48, 184, 61, 57, 139, 146, 188, 171, 174, 51, 61, 130, 204, 173, 190, 14, 211, 155, 61, 206, 146, 104, 190, 158, 216, 13, 62, 161, 22, 162, 189, 125, 174, 187, 190, 97, 106, 77, 62, 181, 248, 103, 190, 150, 104, 84, 60, 76, 59, 160, 62, 123, 197, 162, 189, 15, 154, 26, 61, 80, 203, 126, 60, 134, 159, 199, 61, 83, 191, 168, 190, 163, 179, 135, 61, 227, 145, 159, 189, 214, 151, 70, 190, 129, 161, 231, 61, 156, 239, 74, 62, 92, 61, 93, 190, 124, 178, 49, 189, 75, 164, 3, 62, 139, 11, 225, 189, 53, 217, 156, 188, 94, 3, 96, 62, 2, 30, 160, 189, 237, 235, 157, 62, 254, 133, 39, 61, 193, 54, 182, 189};
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
                alignas(float) const unsigned char memory[] = {93, 236, 223, 187, 51, 207, 151, 190};
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
    alignas(float) const unsigned char memory[] = {239, 83, 99, 191, 252, 252, 28, 62, 19, 1, 123, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {36, 60, 38, 192, 234, 229, 203, 190};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0085/steps/000000000010000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}