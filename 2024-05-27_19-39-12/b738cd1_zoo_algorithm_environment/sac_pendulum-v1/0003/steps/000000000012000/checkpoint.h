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
                alignas(float) const unsigned char memory[] = {175, 122, 160, 190, 237, 148, 187, 62, 224, 19, 73, 63, 30, 52, 201, 61, 50, 48, 2, 191, 138, 6, 199, 62, 217, 164, 30, 63, 216, 103, 110, 191, 182, 87, 236, 190, 64, 129, 166, 190, 6, 204, 209, 191, 11, 141, 150, 190, 101, 205, 24, 191, 109, 203, 218, 189, 148, 6, 133, 190, 114, 193, 32, 63, 245, 144, 75, 190, 50, 200, 131, 61, 139, 169, 72, 191, 79, 79, 237, 190, 27, 192, 202, 61, 15, 240, 10, 63, 185, 210, 81, 191, 147, 94, 19, 191, 127, 52, 215, 62, 175, 158, 177, 60, 49, 35, 140, 190, 127, 143, 40, 190, 145, 66, 69, 63, 148, 167, 173, 190, 51, 195, 0, 63, 117, 44, 253, 61, 204, 9, 244, 190, 38, 72, 168, 190, 96, 112, 64, 63, 175, 173, 244, 61, 85, 241, 180, 62, 233, 13, 203, 190, 95, 73, 8, 63, 26, 141, 19, 191, 162, 182, 119, 62, 147, 0, 50, 61, 201, 198, 146, 62, 149, 49, 143, 191, 253, 81, 104, 190, 236, 247, 97, 191, 118, 254, 73, 190, 234, 84, 46, 61, 153, 187, 232, 62, 184, 245, 76, 191, 74, 224, 192, 62, 135, 17, 146, 61, 221, 56, 139, 191, 72, 75, 17, 62, 107, 187, 56, 190, 72, 66, 8, 191, 149, 13, 229, 62, 66, 174, 73, 62, 88, 70, 205, 191, 71, 49, 174, 190, 121, 123, 131, 190, 185, 230, 250, 189, 47, 210, 14, 63, 43, 230, 3, 63, 96, 178, 146, 63, 6, 247, 167, 62, 99, 250, 243, 62, 193, 189, 134, 62, 92, 201, 184, 190, 217, 50, 119, 191, 212, 245, 187, 61, 11, 136, 64, 59, 97, 12, 45, 62, 253, 153, 153, 190, 203, 244, 154, 62, 250, 90, 169, 189, 132, 250, 222, 190, 117, 155, 157, 62, 28, 222, 13, 191, 87, 211, 42, 191, 107, 50, 59, 190, 227, 84, 115, 63, 158, 226, 97, 63, 61, 243, 192, 62, 9, 183, 47, 63, 15, 105, 224, 190, 185, 39, 115, 190, 169, 47, 36, 63, 112, 5, 0, 63, 21, 226, 50, 61, 1, 127, 38, 191, 127, 41, 30, 191, 14, 127, 179, 62, 70, 143, 57, 63, 96, 24, 123, 63, 236, 231, 255, 62};
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
                alignas(float) const unsigned char memory[] = {182, 95, 165, 189, 107, 171, 150, 190, 12, 178, 84, 60, 68, 208, 121, 190, 209, 49, 39, 61, 147, 175, 164, 62, 107, 33, 237, 61, 222, 230, 7, 190, 68, 144, 115, 191, 36, 163, 15, 61, 135, 1, 147, 62, 222, 182, 152, 62, 161, 51, 50, 191, 155, 15, 53, 63, 0, 213, 41, 62, 36, 199, 176, 62, 98, 140, 15, 63, 56, 3, 179, 62, 158, 37, 235, 190, 252, 200, 42, 62, 64, 216, 135, 188, 59, 41, 232, 189, 244, 19, 196, 62, 45, 32, 66, 189, 129, 162, 202, 62, 75, 11, 13, 62, 152, 133, 109, 62, 76, 117, 125, 191, 195, 73, 15, 191, 35, 20, 242, 62, 37, 24, 203, 189, 220, 116, 5, 191};
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
                alignas(float) const unsigned char memory[] = {45, 234, 250, 189, 202, 8, 115, 188, 61, 235, 251, 189, 29, 125, 28, 190, 198, 209, 105, 189, 86, 147, 40, 62, 184, 244, 133, 190, 60, 169, 239, 189, 205, 38, 167, 59, 251, 211, 205, 189, 186, 8, 95, 189, 93, 214, 7, 191, 249, 150, 98, 62, 245, 255, 197, 190, 183, 110, 43, 191, 2, 37, 128, 190, 124, 103, 197, 61, 247, 158, 248, 61, 8, 174, 73, 189, 250, 16, 90, 191, 127, 176, 40, 62, 203, 149, 67, 62, 96, 113, 175, 61, 220, 178, 44, 191, 105, 78, 132, 61, 53, 5, 69, 190, 170, 103, 42, 190, 159, 37, 145, 62, 117, 252, 223, 190, 97, 118, 255, 61, 191, 15, 21, 190, 48, 173, 183, 62, 214, 206, 12, 191, 110, 200, 150, 62, 20, 141, 156, 190, 53, 60, 16, 62, 22, 202, 33, 62, 157, 41, 102, 62, 28, 73, 209, 189, 252, 95, 24, 190, 5, 152, 116, 190, 20, 203, 80, 62, 130, 64, 129, 189, 96, 55, 99, 189, 180, 56, 85, 62, 77, 180, 170, 188, 49, 111, 41, 190, 49, 235, 175, 187, 62, 77, 24, 61, 216, 125, 188, 62, 65, 237, 124, 189, 113, 72, 201, 188, 107, 140, 237, 190, 167, 123, 61, 62, 47, 37, 17, 62, 11, 8, 86, 62, 135, 120, 20, 190, 178, 89, 198, 62, 157, 214, 41, 190, 57, 118, 200, 61, 14, 24, 101, 191, 181, 87, 178, 61, 114, 198, 105, 190, 11, 180, 60, 188, 193, 71, 206, 60, 252, 250, 70, 61, 109, 241, 140, 189, 43, 38, 140, 188, 37, 176, 142, 190, 54, 28, 89, 188, 196, 230, 179, 61, 116, 130, 20, 61, 54, 207, 98, 62, 171, 238, 68, 190, 143, 81, 131, 190, 36, 211, 1, 191, 169, 81, 202, 190, 252, 35, 6, 190, 200, 181, 222, 60, 136, 74, 23, 61, 164, 91, 79, 62, 146, 162, 200, 62, 206, 244, 68, 189, 124, 218, 3, 190, 60, 108, 89, 62, 137, 6, 9, 191, 177, 212, 83, 189, 127, 237, 138, 61, 175, 121, 33, 61, 200, 121, 238, 59, 54, 56, 177, 190, 44, 95, 85, 191, 59, 212, 82, 186, 202, 96, 8, 62, 62, 206, 236, 62, 76, 254, 15, 191, 225, 159, 166, 189, 32, 25, 222, 189, 170, 46, 253, 61, 153, 251, 118, 190, 169, 116, 13, 190, 187, 84, 71, 60, 236, 155, 201, 190, 2, 54, 155, 62, 212, 36, 93, 62, 101, 160, 27, 62, 168, 78, 167, 61, 113, 171, 94, 190, 103, 217, 65, 62, 175, 27, 8, 190, 101, 218, 82, 62, 224, 65, 19, 191, 62, 63, 89, 190, 71, 148, 166, 62, 217, 148, 4, 62, 93, 34, 251, 61, 252, 185, 110, 189, 98, 85, 124, 190, 58, 91, 191, 189, 53, 146, 190, 190, 162, 65, 181, 61, 34, 18, 65, 190, 146, 212, 164, 190, 82, 180, 100, 190, 234, 123, 26, 63, 236, 88, 84, 62, 217, 236, 4, 189, 254, 148, 44, 190, 120, 245, 132, 189, 37, 114, 210, 188, 216, 228, 179, 60, 97, 227, 126, 190, 79, 100, 185, 60, 144, 244, 32, 62, 147, 119, 41, 62, 74, 245, 29, 188, 233, 198, 231, 60, 34, 198, 221, 60, 150, 68, 17, 62, 2, 50, 140, 60, 73, 179, 36, 190, 179, 225, 18, 62, 206, 35, 137, 189, 113, 15, 242, 189, 121, 54, 24, 62, 32, 21, 52, 62, 147, 134, 166, 189, 107, 30, 128, 59, 50, 51, 153, 189, 58, 227, 8, 189, 252, 55, 69, 62, 137, 138, 65, 62, 205, 187, 8, 187, 96, 91, 47, 61, 114, 138, 232, 60, 202, 243, 226, 190, 70, 105, 220, 190, 205, 111, 9, 190, 9, 51, 247, 61, 221, 155, 161, 189, 121, 87, 13, 62, 143, 15, 21, 189, 161, 184, 8, 62, 87, 40, 97, 60, 59, 174, 199, 61, 188, 165, 233, 189, 81, 200, 193, 61, 219, 194, 48, 190, 16, 242, 128, 61, 68, 207, 15, 60, 173, 145, 198, 189, 57, 43, 57, 189, 238, 177, 15, 62, 93, 196, 189, 189, 98, 190, 216, 61, 14, 26, 145, 188, 237, 159, 39, 190, 248, 226, 16, 190, 47, 105, 213, 189, 32, 100, 86, 189, 128, 199, 148, 189, 173, 138, 214, 61, 3, 15, 209, 60, 128, 50, 67, 61, 223, 180, 22, 62, 128, 157, 217, 188, 22, 140, 184, 189, 214, 190, 201, 189, 176, 21, 37, 62, 106, 220, 170, 189, 48, 106, 44, 60, 139, 187, 14, 190, 82, 69, 157, 189, 224, 7, 63, 190, 65, 172, 135, 62, 173, 152, 140, 190, 29, 251, 216, 188, 154, 71, 76, 60, 22, 58, 116, 62, 3, 82, 163, 62, 9, 12, 77, 62, 29, 51, 142, 190, 118, 33, 246, 187, 138, 33, 250, 190, 130, 84, 193, 190, 115, 247, 142, 189, 181, 4, 54, 62, 242, 134, 97, 188, 45, 83, 247, 62, 55, 118, 194, 62, 31, 236, 25, 188, 20, 216, 25, 62, 179, 130, 78, 62, 45, 160, 18, 191, 170, 124, 255, 61, 61, 80, 80, 190, 250, 119, 94, 62, 216, 208, 254, 60, 174, 39, 154, 189, 67, 117, 102, 191, 64, 37, 171, 62, 117, 79, 184, 61, 175, 169, 91, 62, 6, 121, 74, 191, 104, 220, 176, 190, 254, 226, 136, 190, 147, 64, 161, 190, 122, 134, 142, 62, 47, 231, 174, 189, 61, 65, 148, 62, 98, 130, 24, 191, 14, 5, 148, 189, 39, 197, 190, 58, 221, 106, 113, 62, 253, 143, 245, 61, 136, 26, 151, 61, 232, 235, 224, 189, 172, 169, 0, 190, 225, 122, 75, 189, 253, 209, 196, 190, 163, 141, 203, 62, 190, 50, 214, 62, 231, 79, 110, 190, 177, 123, 109, 191, 131, 249, 198, 60, 226, 185, 221, 60, 23, 91, 121, 188, 49, 100, 113, 190, 132, 43, 85, 188, 98, 72, 41, 190, 247, 62, 21, 62, 217, 206, 57, 190, 33, 107, 92, 191, 254, 221, 185, 62, 117, 82, 248, 189, 160, 175, 164, 61, 222, 160, 87, 189, 24, 125, 89, 61, 161, 45, 182, 189, 112, 182, 233, 188, 2, 175, 193, 60, 23, 239, 245, 61, 244, 182, 151, 62, 218, 197, 70, 61, 26, 26, 181, 189, 165, 208, 223, 61, 181, 43, 128, 62, 111, 19, 197, 60, 147, 168, 50, 61, 49, 126, 209, 61, 134, 86, 31, 62, 61, 41, 14, 62, 141, 93, 32, 190, 143, 198, 243, 189, 172, 79, 31, 62, 157, 56, 5, 190, 206, 134, 233, 189, 170, 133, 145, 62, 51, 211, 167, 61, 123, 0, 75, 61, 218, 147, 214, 188, 72, 62, 3, 62, 78, 216, 161, 187, 208, 226, 114, 189, 212, 83, 10, 191, 248, 119, 109, 62, 63, 94, 125, 190, 77, 209, 59, 62, 63, 2, 6, 190, 83, 92, 191, 189, 151, 64, 69, 62, 8, 214, 59, 190, 167, 42, 253, 61, 27, 231, 11, 189, 245, 18, 160, 189, 216, 126, 104, 62, 72, 230, 157, 189, 121, 185, 62, 190, 239, 127, 40, 61, 18, 70, 121, 58, 77, 91, 123, 189, 93, 30, 136, 62, 123, 133, 58, 60, 85, 21, 43, 62, 213, 4, 167, 62, 140, 179, 251, 189, 195, 34, 16, 190, 44, 183, 178, 189, 247, 0, 72, 62, 213, 236, 175, 61, 165, 24, 138, 61, 214, 241, 192, 188, 205, 226, 84, 61, 48, 213, 12, 60, 23, 161, 235, 189, 216, 45, 41, 190, 216, 233, 119, 190, 110, 106, 220, 61, 199, 67, 25, 62, 162, 170, 174, 190, 133, 180, 157, 61, 69, 73, 140, 190, 250, 18, 107, 61, 53, 124, 184, 190, 93, 130, 150, 190, 156, 68, 130, 62, 1, 181, 82, 190, 128, 82, 33, 190, 101, 95, 99, 190, 57, 164, 151, 60, 141, 217, 93, 62, 56, 237, 167, 60, 201, 144, 10, 190, 123, 67, 33, 190, 125, 214, 249, 188, 14, 98, 85, 189, 184, 163, 146, 60, 59, 67, 219, 190, 148, 224, 11, 189, 206, 160, 136, 191, 148, 223, 18, 188, 60, 162, 87, 187, 71, 59, 115, 62, 240, 155, 197, 190, 44, 223, 49, 190, 11, 141, 66, 61, 140, 63, 29, 191, 155, 77, 215, 61, 68, 204, 253, 190, 91, 52, 152, 62, 140, 84, 4, 191, 37, 139, 45, 62, 38, 24, 32, 190, 71, 79, 129, 62, 207, 112, 47, 190, 249, 78, 138, 189, 166, 36, 250, 61, 6, 233, 171, 62, 87, 136, 49, 191, 42, 166, 31, 188, 248, 193, 17, 190, 226, 174, 146, 61, 167, 166, 31, 62, 136, 191, 195, 186, 244, 113, 44, 62, 126, 27, 204, 189, 29, 58, 110, 62, 42, 132, 110, 190, 1, 138, 235, 58, 241, 137, 77, 62, 226, 116, 75, 60, 61, 204, 35, 61, 7, 51, 153, 189, 148, 200, 178, 60, 220, 188, 27, 62, 91, 93, 129, 190, 213, 235, 157, 190, 252, 115, 217, 62, 13, 72, 176, 61, 46, 170, 24, 190, 110, 107, 147, 190, 118, 123, 164, 188, 15, 25, 17, 191, 170, 29, 105, 189, 129, 95, 217, 190, 134, 202, 175, 190, 168, 110, 206, 189, 186, 163, 52, 62, 106, 66, 54, 62, 183, 36, 225, 190, 169, 253, 197, 61, 204, 254, 187, 189, 136, 56, 158, 61, 7, 133, 61, 189, 199, 114, 107, 190, 191, 29, 174, 190, 189, 130, 105, 190, 204, 117, 40, 190, 205, 181, 228, 61, 215, 225, 11, 190, 176, 242, 144, 189, 144, 8, 175, 62, 161, 139, 126, 191, 152, 246, 107, 62, 31, 223, 42, 191, 241, 202, 129, 190, 217, 255, 186, 189, 247, 205, 229, 61, 246, 135, 31, 191, 207, 20, 176, 61, 179, 162, 69, 62, 238, 226, 180, 189, 187, 220, 87, 191, 138, 33, 39, 191, 76, 119, 136, 61, 143, 223, 134, 190, 57, 120, 254, 190, 183, 169, 90, 190, 237, 190, 94, 61, 11, 92, 114, 62, 102, 65, 21, 62, 112, 116, 148, 190, 145, 43, 180, 189, 12, 220, 41, 62, 66, 148, 167, 190, 250, 36, 237, 189, 154, 59, 227, 61, 122, 25, 44, 189, 175, 73, 191, 61, 125, 234, 218, 61, 168, 213, 7, 62, 123, 81, 191, 188, 176, 50, 0, 191, 136, 225, 249, 62, 18, 207, 37, 190, 74, 152, 87, 61, 132, 78, 134, 190, 154, 222, 3, 191, 35, 9, 175, 188, 236, 15, 40, 189, 157, 214, 249, 190, 122, 235, 51, 189, 225, 47, 24, 62, 232, 107, 138, 189, 176, 242, 101, 190, 67, 76, 89, 62, 215, 137, 26, 190, 206, 247, 132, 190, 250, 173, 147, 190, 53, 144, 70, 191, 196, 13, 251, 189, 106, 50, 103, 62, 35, 94, 24, 62, 76, 233, 3, 191, 103, 203, 73, 189, 251, 210, 190, 189, 205, 7, 166, 189, 163, 253, 166, 61, 18, 68, 65, 189, 83, 20, 187, 61, 204, 180, 200, 190, 227, 45, 114, 60, 245, 97, 147, 61, 117, 119, 113, 62, 118, 26, 163, 190, 43, 65, 231, 61, 144, 71, 32, 191, 166, 192, 184, 62, 115, 124, 184, 190, 66, 64, 6, 62, 203, 37, 47, 61, 42, 234, 176, 62, 34, 180, 12, 191, 178, 24, 210, 189, 143, 13, 161, 62, 225, 50, 153, 60, 155, 64, 195, 190, 66, 36, 203, 190, 156, 238, 7, 190, 39, 68, 135, 61, 179, 107, 136, 189, 2, 117, 173, 189, 169, 240, 126, 191, 247, 133, 94, 61, 27, 150, 119, 60, 119, 194, 77, 189, 233, 2, 151, 62, 89, 151, 112, 191, 176, 59, 93, 61, 166, 192, 60, 190, 229, 206, 36, 62, 224, 65, 219, 61, 241, 34, 89, 61, 6, 246, 128, 61, 107, 58, 95, 190, 209, 159, 10, 62, 46, 237, 150, 62, 242, 161, 188, 61, 178, 199, 67, 62, 198, 17, 182, 62, 174, 116, 51, 62, 152, 191, 236, 189, 192, 216, 147, 188, 3, 144, 78, 62, 21, 27, 176, 61, 206, 82, 23, 62, 47, 141, 145, 62, 193, 129, 15, 62, 179, 97, 19, 190, 199, 192, 204, 188, 245, 167, 98, 61, 82, 232, 127, 189, 35, 105, 165, 191, 230, 72, 47, 191, 209, 144, 56, 190, 151, 69, 154, 189, 71, 155, 88, 62, 247, 47, 174, 62, 86, 172, 175, 62, 4, 162, 175, 190, 42, 108, 132, 190, 144, 6, 128, 62, 64, 125, 159, 189, 27, 147, 208, 189, 207, 39, 150, 61, 68, 5, 53, 62, 237, 62, 28, 62, 178, 182, 81, 62, 184, 18, 184, 190, 240, 212, 89, 62, 92, 208, 73, 191, 101, 207, 232, 61, 138, 22, 116, 191, 50, 103, 110, 62, 145, 19, 131, 61, 81, 230, 18, 62, 249, 114, 208, 190, 211, 251, 23, 63, 152, 168, 23, 62, 152, 168, 39, 62, 8, 77, 77, 191, 46, 162, 142, 62, 29, 199, 242, 61, 213, 142, 148, 62, 61, 174, 84, 62, 9, 27, 44, 61, 32, 88, 172, 59, 246, 234, 185, 62, 6, 250, 59, 190, 226, 28, 24, 190, 109, 76, 80, 62, 249, 105, 89, 190, 155, 113, 232, 190, 175, 91, 110, 191, 81, 174, 132, 190, 146, 180, 187, 189, 96, 135, 93, 62, 177, 94, 163, 189, 124, 185, 168, 62, 20, 93, 88, 62, 4, 243, 152, 61, 124, 243, 222, 60, 140, 49, 49, 62, 35, 134, 208, 62, 172, 203, 98, 189, 154, 108, 21, 190, 194, 81, 233, 190, 234, 205, 71, 59, 128, 247, 61, 62, 212, 72, 107, 189, 18, 56, 225, 62, 212, 127, 254, 61, 219, 250, 89, 191, 94, 43, 46, 191, 166, 60, 69, 62, 89, 35, 174, 189, 115, 136, 54, 62, 85, 99, 74, 189, 253, 106, 56, 62, 80, 232, 192, 189, 156, 94, 39, 62, 245, 176, 117, 62, 19, 209, 20, 62, 242, 205, 147, 189, 114, 246, 197, 189, 89, 52, 170, 189, 229, 105, 183, 189, 202, 193, 142, 62, 38, 72, 108, 190, 212, 229, 79, 62, 142, 182, 78, 62, 242, 125, 102, 61, 45, 193, 95, 62, 226, 161, 12, 190, 184, 187, 63, 61, 81, 107, 239, 187, 234, 32, 196, 60, 100, 192, 183, 189, 165, 191, 78, 62, 198, 171, 120, 59, 151, 34, 15, 62, 225, 192, 105, 190, 103, 149, 187, 59, 157, 11, 231, 190, 181, 19, 166, 189, 249, 214, 195, 61, 155, 227, 209, 60, 155, 52, 142, 190, 176, 145, 19, 190, 214, 105, 230, 187, 40, 33, 53, 62, 158, 107, 164, 59, 176, 66, 199, 61, 190, 216, 203, 188, 196, 119, 146, 190, 14, 112, 129, 61, 63, 40, 204, 61, 130, 241, 67, 189, 248, 14, 22, 189, 202, 124, 139, 189, 56, 14, 113, 189, 176, 39, 39, 189, 96, 194, 190, 188, 84, 18, 66, 190, 52, 147, 199, 62, 21, 48, 235, 61, 31, 10, 217, 59, 139, 101, 25, 61, 81, 131, 53, 61, 137, 169, 77, 62, 147, 97, 182, 61, 7, 161, 110, 190, 253, 211, 235, 61, 216, 160, 119, 61, 180, 29, 68, 190, 185, 169, 45, 190, 61, 202, 166, 190, 31, 145, 201, 61, 15, 32, 226, 59, 172, 43, 88, 189, 220, 20, 37, 191, 49, 127, 63, 190, 97, 87, 132, 190, 83, 213, 35, 62, 35, 127, 111, 62, 191, 12, 79, 62, 11, 204, 160, 190, 130, 175, 197, 190, 139, 215, 166, 190, 159, 150, 157, 62, 17, 119, 233, 189, 162, 56, 228, 189, 118, 212, 149, 190, 100, 197, 93, 189, 28, 61, 171, 189, 184, 84, 114, 61, 105, 118, 168, 190, 5, 144, 45, 191, 0, 189, 135, 190, 6, 69, 20, 189, 48, 7, 36, 191, 34, 111, 93, 62, 108, 152, 77, 62, 64, 251, 204, 62, 37, 194, 199, 190, 1, 131, 78, 190, 43, 72, 89, 62, 35, 234, 206, 62, 254, 53, 113, 191, 99, 47, 208, 62, 243, 3, 43, 191, 100, 54, 213, 62, 15, 212, 231, 188, 50, 96, 95, 190, 65, 185, 134, 188, 62, 210, 53, 191, 188, 59, 150, 61, 174, 235, 185, 189, 36, 253, 214, 61, 5, 213, 204, 61, 248, 165, 140, 189, 95, 76, 47, 190, 37, 101, 5, 191, 3, 148, 151, 62, 200, 63, 65, 190, 191, 133, 184, 62, 42, 87, 20, 191, 0, 10, 116, 62, 117, 98, 163, 60, 199, 220, 167, 61, 189, 70, 4, 190, 157, 167, 180, 190, 169, 124, 192, 61, 167, 194, 8, 61, 146, 71, 247, 190, 167, 106, 3, 63, 246, 168, 35, 62, 236, 139, 73, 60, 189, 8, 180, 61, 239, 18, 89, 190, 92, 101, 44, 61, 78, 183, 127, 190, 166, 92, 21, 62, 52, 213, 82, 190, 176, 198, 51, 190, 117, 47, 173, 62, 123, 30, 114, 61, 110, 117, 216, 62, 154, 197, 21, 62, 111, 172, 150, 62, 77, 224, 194, 189, 31, 218, 120, 190, 133, 112, 30, 190, 165, 31, 79, 62, 250, 29, 20, 189, 64, 8, 143, 190, 106, 49, 113, 62, 236, 163, 207, 189, 132, 102, 79, 61, 51, 235, 155, 190, 151, 142, 96, 189, 28, 182, 28, 62, 231, 65, 86, 62, 246, 20, 155, 190, 117, 87, 110, 190, 254, 178, 188, 61, 184, 189, 112, 61, 198, 130, 79, 190, 234, 75, 50, 190, 244, 182, 254, 61, 243, 96, 91, 61, 126, 203, 162, 62, 181, 59, 6, 191, 1, 137, 28, 62, 196, 150, 77, 61, 118, 120, 100, 62, 161, 110, 1, 188, 115, 76, 40, 190, 226, 45, 33, 191, 100, 70, 150, 191, 225, 187, 177, 62, 175, 104, 42, 62, 131, 223, 166, 62, 133, 167, 145, 189, 5, 92, 11, 191, 1, 97, 118, 62, 26, 118, 225, 189, 23, 6, 134, 62, 4, 194, 98, 61, 62, 126, 241, 61, 123, 65, 136, 191, 51, 155, 52, 62, 228, 57, 148, 190, 50, 67, 149, 61, 204, 251, 78, 189, 55, 73, 6, 191, 56, 105, 219, 61, 184, 54, 4, 190, 98, 239, 212, 189, 188, 67, 228, 62, 159, 37, 81, 61, 37, 39, 230, 190, 41, 103, 117, 62, 72, 116, 136, 190, 19, 253, 84, 190, 33, 50, 95, 191, 183, 86, 177, 61, 120, 31, 111, 61, 134, 229, 44, 191, 26, 48, 46, 190, 137, 93, 146, 189, 229, 182, 136, 190, 44, 11, 5, 62, 84, 195, 61, 62, 141, 161, 102, 190, 167, 146, 130, 190, 101, 115, 225, 190, 83, 254, 125, 62, 40, 123, 138, 189, 110, 34, 236, 188, 122, 86, 124, 61, 33, 9, 208, 61, 164, 77, 99, 61, 176, 164, 29, 62, 206, 27, 66, 190, 184, 163, 207, 190, 52, 14, 108, 190, 203, 201, 53, 189, 137, 218, 117, 191, 170, 120, 128, 61, 230, 205, 93, 62, 148, 196, 76, 62, 245, 14, 57, 191, 4, 190, 158, 189, 44, 202, 143, 189, 251, 180, 188, 62, 88, 147, 67, 191, 128, 77, 167, 62, 78, 161, 139, 190, 5, 113, 163, 60, 245, 32, 201, 61, 101, 5, 127, 190, 74, 66, 174, 62, 61, 246, 195, 191, 22, 136, 84, 189, 91, 40, 186, 61, 114, 123, 154, 189, 89, 36, 89, 62, 46, 148, 150, 190, 161, 139, 149, 190, 120, 223, 77, 190, 70, 251, 81, 62, 16, 38, 72, 61, 195, 89, 203, 189, 135, 185, 196, 60, 65, 25, 94, 189, 67, 40, 232, 62, 8, 19, 59, 190, 241, 134, 72, 190, 18, 144, 6, 62, 112, 151, 205, 61, 125, 32, 15, 190, 255, 45, 67, 190, 248, 60, 16, 190, 16, 123, 161, 62, 36, 234, 126, 189, 78, 110, 137, 191, 51, 199, 185, 190, 144, 87, 93, 62, 190, 191, 87, 188, 89, 91, 111, 61, 212, 65, 174, 188, 112, 20, 85, 190, 57, 246, 116, 62, 191, 244, 253, 189, 218, 13, 159, 62, 103, 133, 66, 61, 165, 162, 130, 62, 85, 22, 85, 190, 230, 177, 177, 190, 125, 26, 214, 190, 199, 93, 73, 62, 36, 170, 17, 62, 64, 112, 39, 190, 197, 175, 178, 62, 36, 106, 100, 189, 21, 129, 174, 189, 81, 122, 39, 190, 211, 142, 47, 189, 17, 39, 145, 61, 191, 242, 82, 62, 227, 165, 105, 188, 104, 57, 59, 190, 165, 99, 135, 61, 47, 124, 127, 62, 127, 107, 65, 189, 155, 180, 173, 189, 248, 251, 147, 61, 236, 122, 194, 188, 25, 42, 195, 62, 168, 236, 102, 191, 162, 93, 132, 188, 104, 158, 46, 189, 165, 129, 93, 62, 108, 231, 103, 191, 123, 208, 163, 190, 236, 234, 250, 189, 191, 7, 171, 189, 27, 141, 68, 61, 229, 71, 117, 59, 10, 91, 172, 190, 254, 36, 79, 190, 145, 169, 193, 189, 0, 181, 169, 188, 0, 231, 153, 61, 63, 16, 126, 188, 203, 242, 41, 190, 225, 130, 97, 185, 127, 201, 226, 61, 103, 110, 18, 61, 167, 178, 206, 190, 56, 31, 115, 189, 147, 54, 149, 188, 14, 223, 5, 190, 155, 21, 30, 191, 232, 242, 181, 190, 140, 60, 52, 62, 190, 214, 144, 62, 137, 126, 64, 191, 8, 172, 1, 191, 193, 219, 157, 61, 142, 118, 128, 189, 8, 74, 212, 190, 181, 34, 129, 62, 172, 9, 11, 191, 234, 133, 20, 191, 49, 79, 176, 61, 71, 2, 59, 190, 185, 253, 5, 190, 136, 21, 216, 189, 188, 226, 213, 61, 222, 47, 153, 60, 178, 221, 212, 189, 227, 26, 140, 60, 134, 90, 187, 59, 171, 115, 153, 189, 183, 85, 50, 190, 20, 216, 129, 60, 84, 52, 48, 190, 191, 168, 58, 190, 26, 8, 41, 188, 252, 80, 132, 59, 141, 157, 17, 61, 249, 5, 26, 190, 68, 124, 67, 186, 36, 171, 167, 60, 240, 92, 214, 189, 16, 91, 13, 62, 6, 222, 50, 188, 213, 28, 1, 62, 248, 225, 43, 188, 184, 176, 180, 61, 46, 120, 112, 189, 192, 100, 20, 190, 81, 48, 225, 188, 213, 124, 176, 61, 29, 15, 74, 189, 238, 209, 15, 190, 51, 39, 68, 61, 81, 177, 73, 62, 182, 149, 38, 190, 23, 129, 133, 190, 142, 240, 90, 190, 226, 217, 176, 62, 73, 174, 148, 190, 154, 12, 42, 190, 144, 99, 27, 190, 11, 124, 65, 190, 50, 122, 64, 190, 129, 131, 154, 190, 197, 16, 176, 62, 178, 183, 206, 189, 28, 116, 12, 190, 172, 247, 203, 190, 55, 246, 79, 62, 153, 119, 37, 189, 78, 181, 83, 189, 156, 182, 13, 191, 217, 141, 8, 190, 195, 59, 166, 60, 211, 174, 3, 62, 2, 234, 226, 190, 218, 212, 241, 59, 233, 117, 169, 62, 72, 196, 173, 190, 220, 151, 215, 187, 0, 60, 119, 191, 5, 115, 126, 62, 10, 140, 82, 190, 191, 143, 61, 62, 107, 231, 85, 190, 192, 59, 147, 61, 70, 248, 59, 189, 221, 199, 49, 190, 146, 79, 21, 60, 63, 155, 162, 189, 125, 95, 140, 191, 144, 197, 91, 62, 160, 210, 53, 63, 236, 234, 163, 185, 60, 109, 109, 189, 37, 40, 203, 190, 124, 3, 125, 189, 197, 145, 240, 190, 25, 150, 189, 61, 23, 106, 39, 191, 251, 76, 234, 61, 78, 80, 108, 62, 235, 38, 95, 190, 112, 182, 1, 62, 45, 175, 160, 189, 7, 188, 110, 186, 131, 145, 49, 188, 185, 237, 77, 190, 187, 212, 185, 60, 157, 173, 194, 62, 238, 62, 136, 190, 216, 191, 142, 59, 4, 162, 217, 62, 214, 61, 232, 189, 37, 213, 90, 189, 138, 23, 127, 62, 85, 154, 129, 59, 115, 153, 213, 59, 181, 161, 138, 189, 127, 185, 147, 61, 59, 136, 20, 189, 61, 225, 4, 189, 6, 161, 143, 189, 185, 235, 198, 189, 208, 38, 16, 190, 244, 244, 82, 189, 182, 52, 20, 62, 48, 161, 175, 189, 196, 116, 205, 60, 130, 46, 156, 61, 14, 84, 79, 189, 199, 133, 101, 189, 250, 119, 17, 190, 147, 69, 83, 61, 88, 160, 213, 58, 241, 84, 17, 62, 12, 126, 60, 61, 48, 195, 14, 190, 246, 123, 67, 190, 177, 137, 2, 189, 108, 192, 28, 189, 83, 234, 174, 189, 203, 71, 47, 189, 77, 239, 170, 58, 195, 124, 152, 187, 97, 236, 63, 60, 50, 98, 45, 190, 78, 27, 191, 58};
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
                alignas(float) const unsigned char memory[] = {202, 243, 149, 189, 133, 27, 121, 62, 1, 82, 64, 190, 220, 103, 159, 59, 156, 247, 132, 62, 224, 145, 52, 190, 71, 168, 196, 189, 103, 212, 82, 61, 14, 154, 173, 62, 26, 149, 107, 62, 155, 207, 213, 189, 158, 245, 62, 62, 20, 150, 171, 61, 34, 136, 99, 62, 40, 253, 128, 188, 217, 187, 135, 189, 224, 157, 23, 61, 179, 18, 60, 190, 49, 10, 188, 60, 105, 159, 104, 62, 91, 248, 221, 61, 164, 132, 226, 61, 54, 86, 132, 189, 4, 80, 239, 61, 165, 229, 160, 61, 124, 14, 96, 62, 55, 22, 200, 188, 39, 122, 232, 61, 62, 237, 140, 189, 36, 173, 203, 61, 221, 173, 99, 190, 251, 48, 158, 189};
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
                alignas(float) const unsigned char memory[] = {125, 23, 2, 191, 96, 58, 220, 190, 121, 239, 68, 63, 179, 60, 11, 63, 65, 11, 96, 61, 160, 211, 208, 61, 174, 77, 51, 63, 11, 198, 16, 191, 152, 165, 6, 60, 97, 104, 137, 61, 7, 148, 226, 190, 93, 207, 175, 189, 3, 164, 29, 191, 19, 53, 68, 190, 233, 225, 142, 190, 245, 205, 56, 190, 219, 73, 24, 191, 230, 184, 73, 190, 152, 195, 202, 61, 113, 143, 194, 60, 70, 20, 222, 190, 198, 185, 198, 62, 240, 136, 68, 190, 243, 120, 130, 63, 225, 18, 14, 191, 103, 149, 171, 62, 237, 28, 207, 190, 12, 107, 30, 190, 229, 201, 8, 62, 24, 62, 16, 190, 0, 116, 238, 190, 10, 60, 49, 189, 123, 141, 1, 63, 23, 122, 19, 62, 224, 87, 135, 62, 80, 138, 105, 62, 193, 162, 117, 190, 143, 193, 210, 61, 71, 30, 54, 61, 91, 135, 35, 189, 171, 215, 168, 190, 207, 208, 123, 190, 101, 8, 190, 189, 69, 92, 111, 190, 130, 247, 5, 188, 245, 136, 13, 190, 14, 126, 133, 61, 255, 240, 11, 190, 251, 175, 79, 62, 15, 133, 134, 61, 185, 191, 84, 190, 96, 78, 63, 190, 223, 25, 27, 63, 69, 105, 140, 62, 115, 196, 154, 61, 129, 71, 160, 61, 130, 34, 105, 187, 30, 37, 30, 189, 47, 165, 24, 62, 55, 59, 41, 190, 97, 136, 92, 189, 107, 130, 215, 190, 4, 201, 205, 62, 212, 74, 192, 60};
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
                alignas(float) const unsigned char memory[] = {186, 64, 38, 62, 197, 207, 196, 189};
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
    alignas(float) const unsigned char memory[] = {238, 157, 46, 191, 204, 155, 49, 63, 135, 66, 154, 62};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {0, 180, 215, 63, 93, 176, 227, 190};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0003/steps/000000000012000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}